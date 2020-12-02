﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;
using UnityEngine.Rendering.Universal.Internal;

public class PlayerInteraction : MonoBehaviour
{
    public Transform cameraTransform;
    public Transform pickUpTransform;

    private Ray ray;
    public RaycastHit hit;
    [SerializeField] LayerMask interactionMask;

    AudioSource audio;

    Camera tempCamera;

    private float rayRange;
    private float interactTimer;
    private float resetInteractTimer;

    private bool isHolding = false;
    private bool isLookingThroughTelescope = false;

    void Start()
    {
        audio = gameObject.GetComponent<AudioSource>();
        cameraTransform = gameObject.GetComponentInChildren<Camera>().transform;
        pickUpTransform = cameraTransform.Find("PickupPosition");
        ray = new Ray(cameraTransform.position, cameraTransform.forward);
        rayRange = 1.5f;

        interactTimer = 0.25f;
        resetInteractTimer = interactTimer;
    }

    void Update()
    {
        interactTimer -= Time.deltaTime;

        ray.origin = cameraTransform.position;
        ray.direction = cameraTransform.forward;

        if (Input.GetKeyDown(KeyCode.E))
        {
            Interact();
            PickUp();

            if (isLookingThroughTelescope && interactTimer <= 0)
            {
                isLookingThroughTelescope = false;
                gameObject.GetComponentInChildren<Camera>().enabled = true;
                tempCamera.enabled = false;
            }
        }


        if (Input.GetKeyDown(KeyCode.Mouse0) && isHolding)
        {
            SFXManager.Instance.PlaySound(audio, SFXManager.Sound.throwObject, 0.8f);
            hit.collider.gameObject.GetComponent<PickUp>().Throw();
            isHolding = false;
        }
    }

    public void Interact()
    {
        if (Physics.Raycast(ray, out hit, Mathf.Infinity, interactionMask))
        {
            if (hit.distance < rayRange)
            {
                UnityEngine.Debug.Log($"Interacted with {hit.transform.name}");

                if (hit.collider.tag == "Interactable")
                {
                    if (hit.collider.gameObject.GetComponent<ButtonScript>() != null) hit.collider.gameObject.GetComponent<ButtonScript>().SignalChannel();
                    if (hit.collider.gameObject.GetComponent<LeverScript>() != null) hit.collider.gameObject.GetComponent<LeverScript>().SignalChannel();

                    if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.Recording)
                    {
                        GameManager.Instance.GetComponent<RecordManager>().AddInteractionNode(hit.collider.gameObject);
                    }
                }
                else if (hit.collider.tag == "Telescope" && !isLookingThroughTelescope && GameManager.Instance.GetComponent<RecordManager>().recordPhase != RecordPhase.Recording)
                {
                    hit.collider.gameObject.GetComponent<MineRevealerScript>().ActivateTelescope(gameObject.GetComponentInChildren<Camera>());
                    isLookingThroughTelescope = true;
                    tempCamera = hit.collider.gameObject.GetComponentInChildren<Camera>();
                    interactTimer = resetInteractTimer;
                }
                else
                {
                    return;
                }
            }
        }
        else
        {
            return;
        }
    }

    public void PickUp()
    {
        if (Physics.Raycast(ray, out hit, interactionMask))
        {
            if (hit.distance < rayRange)
            {
                if (hit.collider.tag == "Pickupable")
                {
                    if (!hit.collider.gameObject.GetComponent<PickUp>().IsHeld())
                    {
                        SFXManager.Instance.PlaySound(audio, SFXManager.Sound.grabObject, 0.8f);

                        RecordPhase recordPhase = GameManager.Instance.GetComponent<RecordManager>().recordPhase;
                        if (recordPhase != RecordPhase.PlayingBack && recordPhase != RecordPhase.Rewinding)
                        {
                            hit.collider.gameObject.GetComponent<PickUp>().tempParent = pickUpTransform.gameObject;
                            hit.collider.gameObject.GetComponent<PickUp>().SetToHeld();
                            isHolding = true;
                        }

                        if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.Recording)
                        {
                            //GameManager.Instance.GetComponent<RecordManager>().AddPickupNode(hit.collider.gameObject);
                        }
                    }
                    else
                    {
                        hit.collider.gameObject.GetComponent<PickUp>().SetToNotHeld();
                    }
                }
                else
                {
                    return;
                }
            }
        }
        else
        {
            return;
        }
    }

    public void RecordInteractNode()
    {

    }

}
