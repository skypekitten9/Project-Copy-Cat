using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;

enum TurretState {Disabled, Patroling, Targeting, Fireing}

public class TurretBehavior : MonoBehaviour
{
    GameObject head, eye;
    Animator animator;
    TurretState state, nextState;
    Vector3 distanceToTarget;
    public float fireRange, targetRange, patrolRange, viewAngle;
    public float chargeTime;
    public float patrolSpeed, targetSpeed;
    bool transition, animationPlaying;
    float animationTimer;
    float amountTurned;



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
        targetSpeed = targetSpeed * 10;
        patrolSpeed = patrolSpeed * 10;
        amountTurned = 0;
    }

    // Update is called once per frame
    void Update()
    {
        if (PlayerManager.Instance == null)
            return;
        distanceToTarget = PlayerManager.Instance.transform.position - eye.transform.position;
        if (GameManager.Instance.GetComponent<RecordManager>().HoloInstance != null)
            distanceToTarget = GameManager.Instance.GetComponent<RecordManager>().HoloInstance.transform.position - eye.transform.position;

        if (Input.GetKeyDown(KeyCode.H))
        {
            animator.SetBool("isIdle", true);
            animator.Play("Idle");
        }

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
        Debug.Log(head.transform.rotation.eulerAngles.y);
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
        if(transition)
        {

        }
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
                amountTurned += patrolSpeed * Time.deltaTime;
                head.transform.Rotate(0, patrolSpeed * Time.deltaTime, 0);
                if (amountTurned >= viewAngle / 2  || amountTurned <= viewAngle/2 *-1) patrolSpeed *= -1;

                if (distanceToTarget.magnitude <= targetRange)
                {
                    nextState = TurretState.Targeting;

                }
                else if (distanceToTarget.magnitude > patrolRange)
                {
                    nextState = TurretState.Disabled;
                    transition = true;
                }
                break;
            case TurretState.Targeting:
                state = TurretState.Targeting;
                break;
            default:
                break;
        }
    }

    void Targeting()
    {
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
