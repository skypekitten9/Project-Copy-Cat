using System.Diagnostics;
using UnityEngine;

public class DoorScript : MonoBehaviour
{
    Animator animator;
    BoxCollider collider;
    public bool toggle;

    [SerializeField] private int[] ids;
    bool isOpen;

    AudioSource audio;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        collider = gameObject.GetComponent<BoxCollider>();
        collider.enabled = true;

        audio = gameObject.GetComponent<AudioSource>();
        isOpen = false;
    }

    private void Update()
    {
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
        bool changeState = false;
        for (int i = 0; i < ids.Length; i++)
        {
            if (TestLevelManager.Instance.interactablesArray[ids[i]] == false)
            {
                changeState = false;
                break;
            }
            changeState = true;
        }


        if (changeState)
        {
            if(toggle)
            {
                ToggleDoor(!isOpen);
            }
            else
            {
                ToggleDoor(true);
            }
        }
        else
        {
            if(!toggle && isOpen)
            {
                ToggleDoor(false);
            }
        }
    }

    void ToggleDoor(bool state)
    {
        SFXManager.Instance.PlayDoorClose(audio);
        animator.SetBool("isOpened", state);
        collider.enabled = !state;
        isOpen = state;
    }
}
