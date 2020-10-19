using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[RequireComponent(typeof(Rigidbody), typeof(Collider))]
public class PickUp : MonoBehaviour
{
    float throwForce = 800f;
    float distance;

    Vector3 objectPosition;

    Rigidbody body;

    public bool canHold = true;
    public bool isHolding = false;

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
    }

    // Update is called once per frame
    void Update()
    {
        switch (holdState)
        {
            case HoldState.NOTHELD:

                objectPosition = transform.position;
                transform.SetParent(null);
                transform.position = objectPosition;

                break;

            case HoldState.HELD:

                distance = Vector3.Distance(transform.position, tempParent.transform.position);

                body.velocity = Vector3.zero;
                body.angularVelocity = Vector3.zero;

                transform.SetParent(tempParent.transform);
                transform.position = tempParent.transform.position;

                break;

        }
    }

    public void SetToHeld()
    {
        holdState = HoldState.HELD;
        body.useGravity = false;
        body.detectCollisions = true;
    }

    public void SetToNotHeld()
    {
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

    }

    
}
