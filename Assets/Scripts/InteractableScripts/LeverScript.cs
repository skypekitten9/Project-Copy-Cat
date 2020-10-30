using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeverScript : MonoBehaviour
{
    private Ray ray;
    Animator animator;
    AudioSource audio;
    [SerializeField] public int id;
    float timer;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        audio = gameObject.GetComponent<AudioSource>();
        timer = 0;
    }

    private void Update()
    {
        timer -= Time.deltaTime;
    }
    public void SignalChannel()
    {
        if (timer > 0) return;
        TestLevelManager.Instance.interactablesArray[id] = !TestLevelManager.Instance.interactablesArray[id];
        animator.SetBool("isActive", TestLevelManager.Instance.interactablesArray[id]);
        TestLevelManager.Instance.UpdateChannels();
        //SFXManager.Instance.PlayButtonClick(audio);       //Ger errors
        if (GameObject.Find("Game Manager").GetComponent<RecordManager>().recordPhase == RecordPhase.Recording) GameObject.Find("SyncBar").GetComponent<SyncBar>().SpawnInteraction();
        timer = animator.GetCurrentAnimatorStateInfo(0).length;
    }
}
