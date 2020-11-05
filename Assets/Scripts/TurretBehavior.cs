using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using System.Threading;
using UnityEngine;

enum TurretState {Disabled, Patroling, Targeting, Fireing}

public class TurretBehavior : MonoBehaviour
{
    GameObject head, eye;
    Animator animator;
    TurretState state, nextState;
    Vector3 distanceToTarget;
    LineRenderer lineRenderer;
    public float fireRange, targetRange, patrolRange, viewAngle;
    public float chargeTime;
    public float patrolSpeed, targetSpeed;
    bool transition, animationPlaying;
    float animationTimer;
    Quaternion patrolLeftRotation, patrolRightRotation, defaultRotation, currentRotation;
    int patrolState;
    private float timeCount;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        head = GameObject.Find("Turret_Head");
        eye = GameObject.Find("Turret_Eye");
        state = TurretState.Disabled;
        nextState = TurretState.Disabled;
        distanceToTarget = Vector3.positiveInfinity;
        transition = false;
        animationPlaying = false;
        defaultRotation = head.transform.rotation;
        currentRotation = defaultRotation;
        patrolRightRotation = Quaternion.Euler(head.transform.rotation.eulerAngles.x, head.transform.rotation.eulerAngles.y + viewAngle / 2, head.transform.rotation.eulerAngles.z);
        patrolLeftRotation = Quaternion.Euler(head.transform.rotation.eulerAngles.x, head.transform.rotation.eulerAngles.y + viewAngle / -2, head.transform.rotation.eulerAngles.z);
        patrolState = 0;


        lineRenderer = gameObject.GetComponent<LineRenderer>();
        lineRenderer.SetPosition(0, eye.transform.position);
        lineRenderer.startWidth = 0.02f;
        lineRenderer.endWidth = 0.02f;
        lineRenderer.enabled = true;
    }

    // Update is called once per frame
    void Update()
    {
        if (PlayerManager.Instance == null) return;
        distanceToTarget = CalculateDistanceToPlayer();

        DrawLineRenderer();
        if (animationPlaying) animationTimer -= Time.deltaTime;
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
            default:
                break;
        }
        Debug.Log(state);
        Debug.Log(Vector3.Angle(new Vector3(distanceToTarget.x, 0, distanceToTarget.z), new Vector3(eye.transform.forward.x, 0, eye.transform.forward.z)));
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

    void Disabled()
    {
        if (transition && animationPlaying && animationTimer <= 0)
        {
            animator.enabled = false;
            animationPlaying = false;
            transition = false;
            state = TurretState.Patroling;
            nextState = TurretState.Patroling;
            return;
        }
        if(transition && !animationPlaying)
        {
            animator.enabled = true;
            animator.Play("Awake");
            animationPlaying = true;
            animationTimer = animator.GetCurrentAnimatorStateInfo(0).length;
        }
        if (distanceToTarget.magnitude <= patrolRange && !transition)
        {
            transition = true;
        }
    }

    void Patroling()
    {
        switch (nextState)
        {
            case TurretState.Disabled:
                if (animationPlaying && animationTimer <= 0)
                {
                    animator.enabled = false;
                    animationPlaying = false;
                    transition = false;
                    state = TurretState.Disabled;
                    return;
                }
                if (!animationPlaying)
                {
                    animator.enabled = true;
                    animator.Play("Sleep");
                    animationPlaying = true;
                    animationTimer = animator.GetCurrentAnimatorStateInfo(0).length;
                }
                break;
            case TurretState.Patroling:
                TurnTurret();

                if (distanceToTarget.magnitude <= targetRange && Vector3.Angle(new Vector3(distanceToTarget.x, 0, distanceToTarget.z), new Vector3(eye.transform.forward.x, 0, eye.transform.forward.z)) < viewAngle / 2)
                {
                    nextState = TurretState.Targeting;

                }
                else if (distanceToTarget.magnitude > patrolRange)
                {
                    nextState = TurretState.Disabled;
                    
                }
                break;
            case TurretState.Targeting:
                state = TurretState.Targeting;
                break;
            default:
                break;
        }
    }

    void TurnTurret()
    {
        timeCount = timeCount + Time.deltaTime;
        switch (patrolState)
        {
            case 0:
                head.transform.rotation = Quaternion.Slerp(defaultRotation, patrolRightRotation, timeCount);
                if (timeCount >= 1)
                {
                    patrolState = 1;
                    timeCount = 0;
                }
                break;

            case 1:
                head.transform.rotation = Quaternion.Slerp(patrolRightRotation, patrolLeftRotation, timeCount);
                if (timeCount >= 1)
                {
                    patrolState = 2;
                    timeCount = 0;
                }
                break;

            case 2:
                head.transform.rotation = Quaternion.Slerp(patrolLeftRotation, patrolRightRotation, timeCount);
                if (timeCount >= 1)
                {
                    patrolState = 1;
                    timeCount = 0;
                }
                break;
            default:
                break;
        }
    }

    void Targeting()
    {
        timeCount = timeCount + Time.deltaTime;
        if (distanceToTarget.magnitude <= fireRange)
        {
            state = TurretState.Fireing;
            nextState = TurretState.Fireing;

        }
        else if (distanceToTarget.magnitude > targetRange)
        {
            state = TurretState.Patroling;
            nextState = TurretState.Patroling;
        }
    }

    void Fireing()
    {
        if (distanceToTarget.magnitude > fireRange)
        {
            state = TurretState.Targeting;
            nextState = TurretState.Targeting;
        }
    }
}