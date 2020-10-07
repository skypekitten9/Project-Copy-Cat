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

        TestLevelManager.Instance.interactablesArray[id] = !TestLevelManager.Instance.interactablesArray[id];
        animator.SetTrigger("pressed");
        TestLevelManager.Instance.UpdateChannels();
    }

}
