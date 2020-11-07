using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeverScript : MonoBehaviour
{
    private Ray ray;
    Animator animator;
    AudioSource audio;
    [SerializeField] public int id;
    public int Id { set { id = value; } }

    bool rewindState;
    float timer;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        audio = gameObject.GetComponent<AudioSource>();
        timer = 0;
        rewindState = false;
    }

    private void Update()
    {
        timer -= Time.deltaTime;
    }
    public void SignalChannel()
    {
        if (timer > 0) return;
        animator.speed = 1;
        TestLevelManager.Instance.interactablesArray[id] = !TestLevelManager.Instance.interactablesArray[id];
        animator.SetBool("isActive", TestLevelManager.Instance.interactablesArray[id]);
        TestLevelManager.Instance.UpdateChannels();
        //SFXManager.Instance.PlayButtonClick(audio);       //Ger errors
        if (GameObject.Find("Game Manager").GetComponent<RecordManager>().recordPhase == RecordPhase.Recording) GameObject.Find("SyncBar").GetComponent<SyncBar>().SpawnInteraction();
        timer = 0.5f;
    }

    public void SaveState()
    {
        rewindState = TestLevelManager.Instance.interactablesArray[id];
    }

    public void Rewind()
    {
        TestLevelManager.Instance.interactablesArray[id] = rewindState;
        animator.speed = 100;
        if (rewindState)
        {
            animator.Play("Activate");
        }
        else
        {
            animator.Play("Deactivate");
        }
        animator.SetBool("isActive", TestLevelManager.Instance.interactablesArray[id]);
        timer = 0;
    }
}
