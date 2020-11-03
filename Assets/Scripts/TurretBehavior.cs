using System.Collections;
using System.Collections.Generic;
using System.Security.Cryptography;
using UnityEngine;

enum TurretState {Disabled, Idle, Patroling, Targeting, Fireing}

public class TurretBehavior : MonoBehaviour
{
    GameObject head, eye;
    Animator animator;
    TurretState state;
    Vector3 distanceToTarget;
    public float fireRange, targetRange, idleRange, viewAngle;
    public float chargeTime;



    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        head = GameObject.Find("Turret_Head");
        eye = GameObject.Find("Turret_Eye");
        state = TurretState.Disabled;
        distanceToTarget = Vector3.positiveInfinity;
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
            animator.enabled = false;
        }

        DetermineState();
        switch (state)
        {
            case TurretState.Disabled:
                Disabled();
                break;
            case TurretState.Idle:
                Idle();
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

    }

    void DetermineState()
    {
        if (distanceToTarget.magnitude <= fireRange) state = TurretState.Fireing;
        else if (distanceToTarget.magnitude <= targetRange) state = TurretState.Targeting;
        else if (distanceToTarget.magnitude <= idleRange) state = TurretState.Idle;
        else state = TurretState.Disabled;
        Debug.Log(state);
    }

    void Disabled()
    {

    }

    void Idle()
    {

    }

    void Patroling()
    {

    }

    void Targeting()
    {

    }

    void Fireing()
    {

    }
}
