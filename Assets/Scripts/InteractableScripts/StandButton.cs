using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class StandButton : MonoBehaviour
{

    [SerializeField] private int id;

    Animator animator;

    int triggerCount;

    SphereCollider collider;

    AudioSource audio;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        collider = gameObject.GetComponent<SphereCollider>();
        audio = gameObject.GetComponent<AudioSource>();

        triggerCount = 0;
    }

    private void Update()
    {
        if (triggerCount > 0)
        {
            SignalChannel(true);
        }
        else
        {
            SignalChannel(false);
        }
    }

    private void OnTriggerEnter(Collider other)
    {
        triggerCount++;
        SFXManager.Instance.PlayButtonClick(audio);

    }

    private void OnTriggerExit(Collider other)
    {
        triggerCount--;
        SFXManager.Instance.PlayButtonClick(audio);
    }

    private void SignalChannel(bool status)
    {
        if (TestLevelManager.Instance != null)
        {
            TestLevelManager.Instance.interactablesArray[id] = status;
            TestLevelManager.Instance.UpdateChannels();
        }
        animator.SetBool("isPressed", status);
    }


}
