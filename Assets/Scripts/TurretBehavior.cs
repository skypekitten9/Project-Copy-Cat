using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Threading;
using UnityEngine;

enum TurretState {Disabled, Patroling, Targeting, Fireing, Busy}

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
    bool transitioningFrom, transitioningTo, patrolRight;
    Quaternion patrolLeftRotation, patrolRightRotation, defaultRotation, currentRotation;
    private float timeCount;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        head = GameObject.Find("Turret_Head");
        eye = GameObject.Find("Turret_Eye");
        state = TurretState.Disabled;
        distanceToTarget = Vector3.positiveInfinity;
        defaultRotation = head.transform.rotation;
        currentRotation = defaultRotation;
        patrolRightRotation = Quaternion.Euler(head.transform.rotation.eulerAngles.x, head.transform.rotation.eulerAngles.y + viewAngle / 2, head.transform.rotation.eulerAngles.z);
        patrolLeftRotation = Quaternion.Euler(head.transform.rotation.eulerAngles.x, head.transform.rotation.eulerAngles.y + viewAngle / -2, head.transform.rotation.eulerAngles.z);
        patrolRight = true;


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
        timeCount = timeCount + Time.deltaTime;
        if (PlayerManager.Instance == null) return;
        distanceToTarget = CalculateDistanceToPlayer();

        DrawLineRenderer();
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
            case TurretState.Fireing:
                Fireing();
                break;
            case TurretState.Busy:
                break;
            default:
                break;
        }
        //Debug.Log(state);
        //Debug.Log(distanceToTarget.magnitude + " and " + patrolRange);
    }

    Vector3 CalculateDistanceToPlayer()
    {
        Vector3 result;
        result = PlayerManager.Instance.transform.position - eye.transform.position;
        if (GameManager.Instance.GetComponent<RecordManager>().HoloInstance != null)
            result = GameManager.Instance.GetComponent<RecordManager>().HoloInstance.transform.position - eye.transform.position;

        return result;
    }

    void DrawLineRenderer()
    {
        Ray ray = new Ray(eye.transform.position, eye.transform.forward);
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

    }

    void Fireing()
    {
    }
    #endregion

    #region Transitions
    IEnumerator Transition(TurretState from, TurretState to)
    {
        Debug.Log("Transitioning...");
        state = TurretState.Busy;
        currentRotation = head.transform.rotation;
        timeCount = 0;
        transitioningFrom = true;
        transitioningTo = true;
        TransitionFrom(from);
        while (transitioningFrom) yield return new WaitForSeconds(Time.deltaTime);
        Debug.Log("From finished!");
        TransitionTo(to);
        while (transitioningTo) yield return new WaitForSeconds(Time.deltaTime);
        state = to;
        Debug.Log("To finished!");
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
                transitioningTo = false;
                break;
            case TurretState.Targeting:
                transitioningTo = false;
                break;
            case TurretState.Fireing:
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
                transitioningFrom = false;
                break;
            case TurretState.Fireing:
                transitioningFrom = false;
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
    #endregion
    #endregion

}