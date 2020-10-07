﻿using System.Collections;
using System.Collections.Generic;
using UnityEditorInternal;
using UnityEngine;
using UnityEngine.UIElements;

public class DoorScript : MonoBehaviour
{
    Animator animator;
    BoxCollider collider;

    [SerializeField] private int doorID;
    [SerializeField] private int doorID2;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        collider = gameObject.GetComponent<BoxCollider>();
        collider.enabled = true;
    }

    //Manuel testning av att öppna och stänga dörrar.
    //void TestDoor()
    //{
    //    if (Input.GetKeyDown(KeyCode.T))
    //    {
    //        isOpen = true;
    //    }

    //    if (Input.GetKeyDown(KeyCode.Y))
    //    {
    //        isOpen = false;
    //    }
    //}

    //Dörren tittar ifall dens channel har uppdaterats.
    public void ListenToChannel()
    {
        Debug.Log("Listening!");
        if (TestLevelManager.Instance.interactablesArray[doorID] == true && TestLevelManager.Instance.interactablesArray[doorID2] == true)
        {
            animator.SetBool("isOpened", true);
            collider.enabled = false;
        }
        else
        {
            animator.SetBool("isOpened", false);
            collider.enabled = true;
        }
    }
}
