using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StandButton : MonoBehaviour
{

    [SerializeField] private int id;

    Animator animator;

    int triggerCount, previousTriggerCount;
    bool isActive, previousState;

    SphereCollider collider;

    AudioSource audio;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        collider = gameObject.GetComponent<SphereCollider>();
        audio = gameObject.GetComponent<AudioSource>();

        triggerCount = 0;
        isActive = false;
        previousState = false;
    }

    private void Update()
    {
        previousState = isActive;
        if (triggerCount > 0)
        {
            isActive = true; ;
        }
        else
        {
            isActive = false; ;
        }
        if (isActive != previousState) SignalChannel(isActive);
    }

    private void OnTriggerEnter(Collider other)
    {
        triggerCount++;
    }

    private void OnTriggerExit(Collider other)
    {
        triggerCount--;
    }

    private void SignalChannel(bool status)
    {
        if (TestLevelManager.Instance != null)
        {
            TestLevelManager.Instance.interactablesArray[id] = status;
            TestLevelManager.Instance.UpdateChannels();
        }
        animator.SetBool("isPressed", status);
        if (GameObject.Find("Game Manager").GetComponent<RecordManager>().recordPhase == RecordPhase.Recording) GameObject.Find("SyncBar").GetComponent<SyncBar>().SpawnStandState(status);
        SFXManager.Instance.PlayButtonClick(audio);
    }


}
