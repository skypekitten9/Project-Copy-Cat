using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal.Internal;

public class PlayerInteraction : MonoBehaviour
{
    public Transform cameraTransform;
    public Transform pickUpTransform;

    private Ray ray;
    public RaycastHit hit;

    private float rayRange;

    void Start()
    {
        cameraTransform = gameObject.GetComponentInChildren<Camera>().transform;
        pickUpTransform = cameraTransform.Find("PickupPosition");
        ray = new Ray(cameraTransform.position, cameraTransform.forward);
        rayRange = 1.5f;
    }

    void Update()
    {
        ray.origin = cameraTransform.position;
        ray.direction = cameraTransform.forward;

        if (Input.GetKeyDown(KeyCode.E))
        {
            Interact();
            PickUp();
        }
    }

    public void Interact()
    {
        if (Physics.Raycast(ray, out hit))
        {
            if (hit.distance < rayRange)
            {
                if (hit.collider.tag == "Interactable")
                {
                    if (hit.collider.gameObject.GetComponent<ButtonScript>() != null) hit.collider.gameObject.GetComponent<ButtonScript>().SignalChannel();
                    if (hit.collider.gameObject.GetComponent<LeverScript>() != null) hit.collider.gameObject.GetComponent<LeverScript>().SignalChannel();

                    if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.Recording)
                    {

                        GameManager.Instance.GetComponent<RecordManager>().AddInteractionNode(hit.collider.gameObject.GetComponent<ButtonScript>().id);
                    }
                }
            }
        }
    }

    public void PickUp()
    {
        if (Physics.Raycast(ray, out hit))
        {
            if (hit.distance < rayRange)
            {
                if (hit.collider.tag == "Pickupable")
                {
                    if (!hit.collider.gameObject.GetComponent<PickUp>().IsHeld())
                    {
                        RecordPhase recordPhase = GameManager.Instance.GetComponent<RecordManager>().recordPhase;
                        if (recordPhase != RecordPhase.PlayingBack && recordPhase != RecordPhase.Rewinding)
                        {
                            hit.collider.gameObject.GetComponent<PickUp>().tempParent = pickUpTransform.gameObject;
                            hit.collider.gameObject.GetComponent<PickUp>().SetToHeld();
                        }

                        if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.Recording)
                        {
                            //GameManager.Instance.GetComponent<RecordManager>().AddPickupNode(hit.collider.gameObject);
                        }
                    }
                    else
                    {
                        hit.collider.gameObject.GetComponent<PickUp>().Throw();
                    }
                }
            }
        }
    }

    public void RecordInteractNode()
    {

    }

}
