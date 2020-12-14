using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonScript : MonoBehaviour
{
    private Ray ray;
    Animator animator;
    AudioSource audio;
    public GameObject boundBox;
    [SerializeField] public int id;
    public int Id { set { id = value; } }
    public bool resetsBoxes;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        audio = gameObject.GetComponent<AudioSource>();
        resetsBoxes = false;
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
            SFXManager.Instance.PlaySound(audio, SFXManager.Sound.buttonClick, 0.85f);
            if (GameObject.Find("Game Manager").GetComponent<RecordManager>().recordPhase == RecordPhase.Recording) GameObject.Find("SyncBar").GetComponent<SyncBar>().SpawnInteraction();
            TestLevelManager.Instance.UpdateChannels();
            StartCoroutine(RevertSignal());
        }
    }

    public void ResetBoundBox()
    {
        boundBox.GetComponent<ObjectReset>().ResetToOriginalPosition();
        animator.SetTrigger("pressed");
        SFXManager.Instance.PlaySound(audio, SFXManager.Sound.buttonClick, 0.85f);
        if (GameObject.Find("Game Manager").GetComponent<RecordManager>().recordPhase == RecordPhase.Recording) GameObject.Find("SyncBar").GetComponent<SyncBar>().SpawnInteraction();
    }

    IEnumerator RevertSignal()
    {
        yield return new WaitForSeconds(0.4f);
        TestLevelManager.Instance.interactablesArray[id] = false;
        TestLevelManager.Instance.UpdateChannels();
    }

}
