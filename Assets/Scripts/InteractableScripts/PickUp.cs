using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody), typeof(Collider))]
public class PickUp : MonoBehaviour
{
    float throwForce = 800f;
    float distance;

    Vector3 objectPosition;
    Vector3 lastRealVelocity;

    Rigidbody body;

    private Quaternion startRotation;

    public bool canHold = true;
    public bool isHolding = false;
    public bool hasSavedVelocity = false;

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
    }

    // Update is called once per frame
    void Update()
    {
        if (GameManager.Instance == null)
        {
            GetComponent<Rigidbody>().isKinematic = true;
            return;
        }
        else
        {
            GetComponent<Rigidbody>().isKinematic = false;
        }

        if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.None)
        {
            if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.Recording)
            {
                SetToNotHeld();
            }
        }

        if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.Rewinding && !hasSavedVelocity)
        {
            lastRealVelocity = body.velocity;
            hasSavedVelocity = true;
        }


        switch (holdState)
        {
            case HoldState.NOTHELD:

                objectPosition = transform.position;

                break;

            case HoldState.HELD:

                distance = Vector3.Distance(transform.position, tempParent.transform.position);

                body.velocity = Vector3.zero;
                body.angularVelocity = Vector3.zero;

                transform.SetParent(tempParent.transform);
                transform.position = tempParent.transform.position;

                if (tempParent == null)
                {
                    SetToNotHeld();
                }
                break;

        }
    }

    public void SetToHeld()
    {
        holdState = HoldState.HELD;
        body.useGravity = false;
        transform.rotation = startRotation;
        //body.detectCollisions = true;
    }

    public void SetToNotHeld()
    {
        transform.SetParent(null);
        //transform.position = objectPosition;
        isHolding = true;
        holdState = HoldState.NOTHELD;
        body.useGravity = true;
    }

    public void Throw()
    {
        body.AddForce(tempParent.transform.forward * throwForce);
        SetToNotHeld();
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


    //Stub to be för att lösa kollision med väggar när man bär runt objekt.
    private void OnCollisionEnter(Collision collision)
    {
        if (IsHeld())
        {
            Debug.LogError("Collided with something");
            SetToNotHeld();
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
