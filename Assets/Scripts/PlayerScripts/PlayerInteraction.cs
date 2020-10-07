using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Rendering.Universal.Internal;

public class PlayerInteraction : MonoBehaviour
{
    public Transform cameraTransform;

    private Ray ray;
    public RaycastHit hit;

    private float rayRange;

    void Start()
    {
        cameraTransform = gameObject.GetComponentInChildren<Transform>().Find("Main Camera").transform;
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
                    if(hit.collider.gameObject.GetComponent<ButtonScript>() != null) hit.collider.gameObject.GetComponent<ButtonScript>().SignalChannel();
                    if(hit.collider.gameObject.GetComponent<LeverScript>() != null) hit.collider.gameObject.GetComponent<LeverScript>().SignalChannel();


                    if (GameManager.Instance.GetComponent<RecordManager>().recordPhase == RecordPhase.Recording)
                    {
                        GameObject.Find("SyncBar").GetComponent<SyncBar>().SpawnInteraction();
                        GameManager.Instance.GetComponent<RecordPlayback>().AddInteractionNode(hit.collider.gameObject.GetComponent<ButtonScript>().id);
                    }
                }
            }
        }
    }

    public void RecordInteractNode()
    {

    }

    public void RecieveDamage(int damage)
    {
        PlayerManager.Instance.playerHealth -= damage;
    }
}
