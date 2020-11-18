using System.Collections;
using System.Collections.Generic;
using System.Security.AccessControl;
using System.Security.Cryptography;
using System.Threading;
using UnityEngine;

enum TurretState {Disabled, Patroling, Targeting, Busy}

public class TurretBehavior : MonoBehaviour
{
    public GameObject head, eye;
    public GameObject particleEye, particleHit;
    Animator animator;
    TurretState state;
    Vector3 distanceToTarget;
    LineRenderer lineRenderer;
    ParticleSystem particleSysEye, particleSysHit;
    Renderer eyeRender, hitRender;
    public float fireRange, targetRange, patrolRange, patrolViewAngle, targetViewAngle;
    public float chargeTime;
    public float patrolSpeed, targetSpeed;
    bool transitioningFrom, transitioningTo, patrolRight, fireing, lockTarget;
    Quaternion patrolLeftRotation, patrolRightRotation, defaultRotation, currentRotation;
    private float timeCount, charge, particleHitSize, particleEyeSize, particleHitSpeed, particleEyeSpeed;
    Color defaultColor, chargedColor;
    string hitTag;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        state = TurretState.Disabled;
        distanceToTarget = Vector3.positiveInfinity;
        defaultRotation = head.transform.rotation;
        currentRotation = defaultRotation;
        patrolRightRotation = Quaternion.Euler(head.transform.rotation.eulerAngles.x, head.transform.rotation.eulerAngles.y + patrolViewAngle, head.transform.rotation.eulerAngles.z);
        patrolLeftRotation = Quaternion.Euler(head.transform.rotation.eulerAngles.x, head.transform.rotation.eulerAngles.y + patrolViewAngle * -1, head.transform.rotation.eulerAngles.z);
        patrolRight = true;
        fireing = false;
        lockTarget = false;
        charge = 0;
        hitTag = "NO TAG";
        


        lineRenderer = gameObject.GetComponent<LineRenderer>();
        lineRenderer.useWorldSpace = true;
        lineRenderer.SetPosition(0, eye.transform.position);
        lineRenderer.startWidth = 0.02f;
        lineRenderer.endWidth = 0.02f;
        lineRenderer.enabled = true;
        particleSysEye = particleEye.GetComponent<ParticleSystem>();
        particleSysHit = particleHit.GetComponent<ParticleSystem>();
        eyeRender = particleEye.GetComponent<ParticleSystemRenderer>();
        hitRender = particleHit.GetComponent<ParticleSystemRenderer>();
        defaultColor = eyeRender.material.GetColor("Color_D3EC0E17");
        chargedColor = Color.red;
        particleSysEye.Stop();

        particleHitSize = particleSysHit.startSize;
        particleEyeSize = particleSysEye.startSize;
        particleHitSpeed = particleSysHit.startSpeed;
        particleEyeSpeed = particleSysEye.startSpeed;
    }

    // Update is called once per frame
    void LateUpdate()
    {
        DrawLineRenderer();
        if (PlayerManager.Instance == null) return;
        timeCount = timeCount + Time.deltaTime;
        distanceToTarget = CalculateDistanceToPlayerFrom(head.transform.position);
        HandleLaserEffects();
        

        switch (state)
        {
            case TurretState.Disabled:
                Disabled();
                break;
            case TurretState.Patroling:
                Patroling();
                break;
            case TurretState.Targeting:
                Targeting();
                break;
            case TurretState.Busy:
                break;
            default:
                break;
        }
        //Debug.Log(state);
        //Debug.Log(distanceToTarget.magnitude + " and " + patrolRange);
    }

    Vector3 CalculateDistanceToPlayerFrom(Vector3 from)
    {
        Vector3 result;
        result = PlayerManager.Instance.transform.position - from;
        if (GameManager.Instance.GetComponent<RecordManager>().HoloInstance != null)
            result = GameManager.Instance.GetComponent<RecordManager>().HoloInstance.transform.position - from;

        return result;
    }

    void DrawLineRenderer()
    {
        Ray ray = new Ray(head.transform.position, eye.transform.forward);
        RaycastHit hit;
        Vector3 endPos = eye.transform.position + (100 * eye.transform.forward);
        if(Physics.Raycast(ray, out hit, 100))
        {
            endPos = hit.point;
            hitTag = hit.transform.tag;
        }
        
        lineRenderer.SetPosition(0, eye.transform.position);
        lineRenderer.SetPosition(1, endPos);
        particleSysHit.transform.position = endPos;
    }

    void HandleLaserEffects()
    {
        lineRenderer.startWidth = 0.02f + charge / 10;
        lineRenderer.endWidth = 0.02f + charge / 10;
        particleSysHit.startSize = particleHitSize + charge / 30;
        particleSysHit.startSpeed = particleHitSpeed + charge/2;
        if(charge > 0)
        {
            if(!particleSysEye.isPlaying)
            {
                particleSysEye.Play();
            }
        }
        else
        {
            particleSysEye.Stop();
        }
        if (charge>=1)
        {
            ColorLaser(chargedColor);
            //particleSysEye.startSpeed = particleEyeSpeed + charge;
            //particleSysEye.startSize = particleEyeSize + charge / 20;
        }
        else
        {
            ColorLaser(defaultColor);
            //particleSysEye.startSpeed = particleEyeSpeed;
            //particleSysEye.startSize = particleEyeSize;
        }
    }

    void ColorLaser(Color color)
    {
        lineRenderer.material.SetColor("Color_D3EC0E17", color);
        eyeRender.material.SetColor("Color_D3EC0E17", color);
        hitRender.material.SetColor("Color_D3EC0E17", color);
    }

    #region Updates
    void Disabled()
    {
        if(distanceToTarget.magnitude <= patrolRange)
        {
            StartCoroutine(Transition(state, TurretState.Patroling));
        }
    }

    void Patroling()
    {
        if(patrolRight)
        {
            head.transform.rotation = Quaternion.Lerp(head.transform.rotation, patrolRightRotation, Time.deltaTime * patrolSpeed);
            if (Quaternion.Angle(head.transform.rotation, patrolRightRotation) < 10) patrolRight = false; 
        }
        else
        {
            head.transform.rotation = Quaternion.Lerp(head.transform.rotation, patrolLeftRotation, Time.deltaTime * patrolSpeed);
            if (Quaternion.Angle(head.transform.rotation, patrolLeftRotation) < 10) patrolRight = true;
        }
        
        if(distanceToTarget.magnitude <= targetRange && Quaternion.Angle(head.transform.rotation, Quaternion.LookRotation(Quaternion.Euler(0, 90, 0) * new Vector3(distanceToTarget.x, 0, distanceToTarget.z))) < targetViewAngle && IsPlayerVisable())
        {
            StartCoroutine(Transition(state, TurretState.Targeting));
        }
        //if (distanceToTarget.magnitude > patrolRange)
        //{
        //    StartCoroutine(Transition(state, TurretState.Disabled));
        //}
    }

    bool IsPlayerVisable()
    {
        Ray ray = new Ray(head.transform.position, CalculateDistanceToPlayerFrom(new Vector3(eye.transform.position.x, 0, eye.transform.position.z)));
        RaycastHit hit;
        if (Physics.Raycast(ray, out hit, 100))
        {
            Debug.Log("Hit! " + hit.transform.tag + " " + hit.transform.name);
            if (hit.transform.tag == "Player" || hit.transform.tag == "Hologram") return true;
        }
        return false;
    }

    bool VectorApproximately(Vector3 a, Vector3 b)
    {
        if (!Mathf.Approximately(a.x, b.x)) return false;
        if (!Mathf.Approximately(a.y, b.y)) return false;
        if (!Mathf.Approximately(a.z, b.z)) return false;
        return true;
    }

    void Targeting()
    {
        
        if (charge > 1) charge = 1;
        if (charge < 0) charge = 0;
        if (distanceToTarget.magnitude <= fireRange)
        {
            charge += Time.deltaTime/2f;
            if (charge >= 1)
            {
                if (!fireing)
                {
                    fireing = true;
                    StartCoroutine(Fire());
                }
            }
        }
        else
        {
            charge -= Time.deltaTime / 2f;
            fireing = false;
        }

        if (Quaternion.Angle(head.transform.rotation, Quaternion.LookRotation(Quaternion.Euler(0, 90, 0) * new Vector3(distanceToTarget.x, 0, distanceToTarget.z))) < 2)
        {
            lockTarget = true;
        }
        if(lockTarget)
        {
            if (distanceToTarget.magnitude < 99)
            {
                head.transform.rotation = Quaternion.LookRotation(Quaternion.Euler(0, 90, 0) * new Vector3(distanceToTarget.x, 0, distanceToTarget.z));
            }
        }
        else
        {
            head.transform.rotation = Quaternion.Lerp(head.transform.rotation, Quaternion.LookRotation(Quaternion.Euler(0, 90, 0) * new Vector3(distanceToTarget.x, 0, distanceToTarget.z)), Time.deltaTime * targetSpeed);
        }
        DrawLineRenderer();

        if (distanceToTarget.magnitude > targetRange || !IsPlayerVisable())
        {
            StartCoroutine(Transition(state, TurretState.Patroling));
        }
    }

    IEnumerator Fire()
    {
        Debug.Log("Fireing!");
        
        while (fireing)
        {
            if(hitTag == "Player") PlayerManager.Instance.DamagePlayer(10);
            yield return new WaitForSeconds(0.1f);
        }
        
    }
    #endregion

    #region Transitions
    IEnumerator Transition(TurretState from, TurretState to)
    {
        state = TurretState.Busy;
        currentRotation = head.transform.rotation;
        timeCount = 0;
        transitioningFrom = true;
        transitioningTo = true;
        TransitionFrom(from);
        while (transitioningFrom) yield return new WaitForSeconds(Time.deltaTime);
        TransitionTo(to);
        while (transitioningTo) yield return new WaitForSeconds(Time.deltaTime);
        state = to;
        yield return new WaitForEndOfFrame();
    }

    #region To
    void TransitionTo(TurretState transitionState)
    {
        switch (transitionState)
        {
            case TurretState.Disabled:
                StartCoroutine(ToDisabled());
                break;
            case TurretState.Patroling:
                StartCoroutine(ToPatroling());
                break;
            case TurretState.Targeting:
                transitioningTo = false;
                break;
            case TurretState.Busy:
                transitioningTo = false;
                break;
            default:
                transitioningTo = false;
                break;
        }
    }

    IEnumerator ToDisabled()
    {
        while (timeCount <= 1)
        {
            head.transform.rotation = Quaternion.Slerp(currentRotation, defaultRotation, timeCount);
            yield return new WaitForSeconds(Time.deltaTime);
        }
        animator.enabled = true;
        animator.Play("Sleep");
        yield return new WaitForSeconds(animator.GetCurrentAnimatorStateInfo(0).length);
        animator.enabled = false;
        transitioningTo = false;
    }

    IEnumerator ToPatroling()
    {
        transitioningTo = false;
        yield return new WaitForSeconds(Time.deltaTime);
    }
    #endregion
    #region From
    void TransitionFrom(TurretState transitionState)
    {
        switch (transitionState)
        {
            case TurretState.Disabled:
                StartCoroutine(FromDisabled());
                break;
            case TurretState.Patroling:
                transitioningFrom = false;
                break;
            case TurretState.Targeting:
                StartCoroutine(FromTargeting());
                break;
            case TurretState.Busy:
                transitioningFrom = false;
                break;
            default:
                break;
        }
    }

    IEnumerator FromDisabled()
    {
        animator.enabled = true;
        animator.Play("Awake");
        yield return new WaitForSeconds(animator.GetCurrentAnimatorStateInfo(0).length);
        animator.enabled = false;
        transitioningFrom = false;
    }

    IEnumerator FromTargeting()
    {
        lockTarget = false;
        while (charge > 0)
        {
            charge -= Time.deltaTime;
            yield return new WaitForSeconds(Time.deltaTime);
        }
        transitioningFrom = false;
    }
    #endregion
    #endregion

}