using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonScript : MonoBehaviour
{
    private Ray ray;
    Animator animator;
    AudioSource audio;
    [SerializeField] public int id;
    public int Id { set { id = value; } }

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        audio = gameObject.GetComponent<AudioSource>();
    }

    void Update()
    {
        

    }
    public void SignalChannel()
    {
        if(TestLevelManager.Instance.interactablesArray[id] == false)
        {
            TestLevelManager.Instance.interactablesArray[id] = true;
            animator.SetTrigger("pressed");
            SFXManager.Instance.PlaySound(SFXManager.Sound.buttonClick);
            if (GameObject.Find("Game Manager").GetComponent<RecordManager>().recordPhase == RecordPhase.Recording) GameObject.Find("SyncBar").GetComponent<SyncBar>().SpawnInteraction();
            TestLevelManager.Instance.UpdateChannels();
            StartCoroutine(RevertSignal());
        }
    }

    IEnumerator RevertSignal()
    {
        yield return new WaitForSeconds(0.4f);
        TestLevelManager.Instance.interactablesArray[id] = false;
        TestLevelManager.Instance.UpdateChannels();
    }

}
