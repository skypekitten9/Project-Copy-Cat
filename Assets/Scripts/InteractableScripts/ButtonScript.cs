using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ButtonScript : MonoBehaviour
{
    private Ray ray;
    Animator animator;
    [SerializeField] public int id;
    
    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
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
