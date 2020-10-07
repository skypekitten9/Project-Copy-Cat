using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LeverScript : MonoBehaviour
{
    private Ray ray;
    Animator animator;
    [SerializeField] public int id;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
    }
    public void SignalChannel()
    {
        Debug.Log("Lever signaled!");
        TestLevelManager.Instance.interactablesArray[id] = !TestLevelManager.Instance.interactablesArray[id];
        animator.SetBool("isActive", TestLevelManager.Instance.interactablesArray[id]);
        TestLevelManager.Instance.UpdateChannels();
    }
}
