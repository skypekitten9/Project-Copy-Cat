using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody), typeof(Collider))]
public class PickUp : MonoBehaviour
{
    float throwForce = 800f;
    float distance;
    float collisionTimer;
    float collisionTimerReset;
    float throwDelayTimer = 0.25f;
    float resetThrowDelayTimer;

    Vector3 objectPosition;
    Vector3 lastRealVelocity;

    Rigidbody body;

    private Quaternion startRotation;

    public bool hasHadHoloInteraction = false;
    public bool isColliding = false;
    public bool canHold = true;
    public bool isHolding = false;
    public bool hasSavedVelocity = false;

    float currentSpeed = 0f;
    float topSpeed = 10f;
    float currentDist;
    float minSpeed = 0f, maxSpeed = 300f;
    float maxDistance = 2f;
    float rotationSpeed = 100f;
    Vector3 direction;
    Quaternion lookRot;

    public GameObject tempParent;

    enum HoldState
    {
        HELD,
        NOTHELD
    }

    HoldState holdState;

    private void Start()
    {
        body = gameObject.GetComponent<Rigidbody>();
        holdState = HoldState.NOTHELD;
        tempParent = null;
        startRotation = transform.rotation;
        collisionTimer = 0.5f;
        collisionTimerReset = collisionTimer;
        resetThrowDelayTimer = throwDelayTimer;
    }

    // Update is called once per frame
    void Update()
    {
        body.velocity = Vector3.ClampMagnitude(body.velocity, 25);
        if (GameManager.Instance == null)
        {
            GetComponent<Rigidbody>().isKinematic = true;
            return;
        }
        else
        {
            GetComponent<Rigidbody>().isKinematic = false;
        }

        if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.Rewinding && !hasSavedVelocity)
        {
            lastRealVelocity = body.velocity;
            hasSavedVelocity = true;
        }

        if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.StoppingPlayback && isHolding)
        {
            body.velocity = lastRealVelocity;
            isHolding = false;
            hasSavedVelocity = false;
            lastRealVelocity = Vector3.zero;
        }

        if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.StoppingPlayback && !isHolding)
        {
            body.velocity = lastRealVelocity;
        }

        if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.None)
        {
            hasHadHoloInteraction = false;
        }

        if ((GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.Rewinding || GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.PlayingBack))
        {
            body.useGravity = false;
        }
        else
        {
            body.useGravity = true;
        }


        switch (holdState)
        {
            case HoldState.NOTHELD:

                objectPosition = transform.position;

                break;

            case HoldState.HELD:

                if (currentDist > maxDistance * 1.5f)
                {
                    SetToNotHeld();
                }

                if (tempParent == null)
                {
                    SetToNotHeld();
                }

                throwDelayTimer -= Time.deltaTime;

                break;
        }
    }

    private void FixedUpdate()
    {
        switch (holdState)
        {
            case HoldState.NOTHELD:


                break;

            case HoldState.HELD:
                currentDist = Vector3.Distance(tempParent.transform.position, body.position);
                currentSpeed = Mathf.SmoothStep(minSpeed, maxSpeed, currentDist * maxDistance);
                currentSpeed *= Time.fixedDeltaTime;
                currentSpeed *= currentDist * maxDistance * 3;
                direction = tempParent.transform.position - body.position;
                body.velocity = direction.normalized * currentSpeed;
                break;
        }
    }

    public void SetToHeld()
    {
        currentSpeed = 0;
        currentDist = 0;
        body.velocity = new Vector3(0, 0, 0);
        holdState = HoldState.HELD;
        body.detectCollisions = true;
        body.constraints = RigidbodyConstraints.FreezeRotation;
        body.useGravity = false;

        if (tempParent.name == "Hologram(Clone)")
        {
            hasHadHoloInteraction = true;
        }
    }

    public void SetToNotHeld()
    {
        currentSpeed = 0;
        currentDist = 0;
        body.velocity = new Vector3(0, 0, 0);
        transform.SetParent(null);
        isHolding = false;
        holdState = HoldState.NOTHELD;
        body.constraints = RigidbodyConstraints.None;
        body.useGravity = true;
        currentDist = 0;
        Debug.LogWarning(body.velocity);
    }

    public void Throw()
    {
        if (throwDelayTimer <= 0 && currentDist <= maxDistance * 0.5f)
        {
            body.velocity = new Vector3(0, 0, 0);
            body.AddForce(tempParent.transform.forward * throwForce);
            throwDelayTimer = resetThrowDelayTimer;
            SetToNotHeld();
        }
    }

    public bool IsHeld()
    {
        if (holdState == HoldState.HELD)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    private void OnDestroy()
    {
        if (isHolding)
        {
            SetToNotHeld();
        }
    }

}
