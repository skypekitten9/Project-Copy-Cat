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

    Vector3 objectPosition;
    Vector3 lastRealVelocity;

    Rigidbody body;

    private Quaternion startRotation;

    public bool hasHadHoloInteraction = false;
    public bool isColliding = false;
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
        collisionTimer = 0.5f;
        collisionTimerReset = collisionTimer;
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

        if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.None)
        {
            hasHadHoloInteraction = false;
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

                if (!isColliding)
                {
                    transform.position = tempParent.transform.position;
                }

                if (tempParent == null)
                {
                    SetToNotHeld();
                }
                break;

        }
    }

    public void SetToHeld()
    {
        transform.SetParent(tempParent.transform);
        holdState = HoldState.HELD;
        body.useGravity = false;
        transform.rotation = startRotation;
        body.detectCollisions = true;

        if (tempParent.name == "Hologram(Clone)")
        {
            hasHadHoloInteraction = true;
        }
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


    //Kollar ifall en kollision sker, så att boxens position slutar uppdatera efter sin parent.
    private void OnCollisionEnter(Collision collision)
    {
        if (collision.gameObject.tag != "player")
        {
            isColliding = true;
            collisionTimer = collisionTimerReset;
        }
        
        //if (collision.gameObject.name == "Hologram(Clone)" && GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.Recording)
        //{
        //    hasHadHoloInteraction = true;
        //}
    }

    //Kontrollerar hur långt bort från kontaktpunkten som spelaren har flyttat sin "pickupPoint". Överskrider distansen storleken på kuben tappar man den. Funkar generellt OK.
    private void OnCollisionStay(Collision collision)
    {
        if (collision.gameObject.tag != "Player")
        {
            if (IsHeld())
            {
                Debug.Log("Collided with something");

                if (Mathf.Abs(Vector3.Distance(tempParent.gameObject.transform.position, collision.GetContact(0).point)) >= gameObject.GetComponent<BoxCollider>().size.x * 2)
                {
                    SetToNotHeld();
                }

                //if (Mathf.Abs(Vector3.Distance(tempParent.gameObject.transform.position, gameObject.transform.position)) >= gameObject.GetComponent<BoxCollider>().size.x * 2)
                //{
                //    SetToNotHeld();
                //}
            }
        }
    }

    //Ser till så att boxen fortsätter uppdatera sin position efter sin parent.
    private void OnCollisionExit(Collision collision)
    {
        if (collision.gameObject.tag != "player")
        {
            isColliding = false;
            collisionTimer = collisionTimerReset;
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
