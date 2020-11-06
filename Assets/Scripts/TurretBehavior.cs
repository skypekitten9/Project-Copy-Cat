using System.Collections;
using System.Collections.Generic;
using System.Security.AccessControl;
using System.Security.Cryptography;
using System.Threading;
using UnityEngine;

enum TurretState {Disabled, Patroling, Targeting, Busy}

public class TurretBehavior : MonoBehaviour
{
    GameObject head, eye;
    Animator animator;
    TurretState state;
    Vector3 distanceToTarget;
    LineRenderer lineRenderer;
    public float fireRange, targetRange, patrolRange, viewAngle;
    public float chargeTime;
    public float patrolSpeed, targetSpeed;
    bool transitioningFrom, transitioningTo, patrolRight, fireing;
    Quaternion patrolLeftRotation, patrolRightRotation, defaultRotation, currentRotation;
    private float timeCount, charge;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        head = GameObject.Find("Turret_Head");
        eye = GameObject.Find("Turret_Eye");
        state = TurretState.Disabled;
        distanceToTarget = Vector3.positiveInfinity;
        defaultRotation = head.transform.rotation;
        currentRotation = defaultRotation;
        patrolRightRotation = Quaternion.Euler(head.transform.rotation.eulerAngles.x, head.transform.rotation.eulerAngles.y + viewAngle, head.transform.rotation.eulerAngles.z);
        patrolLeftRotation = Quaternion.Euler(head.transform.rotation.eulerAngles.x, head.transform.rotation.eulerAngles.y + viewAngle * -1, head.transform.rotation.eulerAngles.z);
        patrolRight = true;
        fireing = false;
        charge = 0;


        lineRenderer = gameObject.GetComponent<LineRenderer>();
        lineRenderer.useWorldSpace = true;
        lineRenderer.SetPosition(0, eye.transform.position);
        lineRenderer.startWidth = 0.02f;
        lineRenderer.endWidth = 0.02f;
        lineRenderer.enabled = true;
    }

    // Update is called once per frame
    void Update()
    {
        DrawLineRenderer();
        if (PlayerManager.Instance == null) return;
        timeCount = timeCount + Time.deltaTime;
        distanceToTarget = CalculateDistanceToPlayerFrom(head.transform.position);
        lineRenderer.startWidth = 0.02f + charge / 10;
        lineRenderer.endWidth = 0.02f + charge / 10;

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
        }

        lineRenderer.SetPosition(0, eye.transform.position);
        lineRenderer.SetPosition(1, endPos);
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
        
        if(distanceToTarget.magnitude <= targetRange && Quaternion.Angle(head.transform.rotation, Quaternion.LookRotation(Quaternion.Euler(0, 90, 0) * new Vector3(distanceToTarget.x, 0, distanceToTarget.z))) < viewAngle/2)
        {
            StartCoroutine(Transition(state, TurretState.Targeting));
        }
        if (distanceToTarget.magnitude > patrolRange)
        {
            StartCoroutine(Transition(state, TurretState.Disabled));
        }
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
        head.transform.rotation = Quaternion.Lerp(head.transform.rotation, Quaternion.LookRotation(Quaternion.Euler(0, 90, 0) * new Vector3(distanceToTarget.x, 0, distanceToTarget.z)), Time.deltaTime * targetSpeed);
        if (distanceToTarget.magnitude > targetRange)
        {
            StartCoroutine(Transition(state, TurretState.Patroling));
        }
    }

    IEnumerator Fire()
    {
        Debug.Log("Fireing!");
        
        while (fireing)
        {
            PlayerManager.Instance.DamagePlayer(10);
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
        if (Quaternion.Angle(head.transform.rotation, patrolRightRotation) < Quaternion.Angle(head.transform.rotation, patrolLeftRotation))
        {
            patrolRight = false;
        }
        else
        {
            patrolRight = true;
        }
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