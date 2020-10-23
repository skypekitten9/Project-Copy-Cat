using System.Diagnostics;
using UnityEngine;

public class DoorScript : MonoBehaviour
{
    Animator animator;
    BoxCollider collider;

    [SerializeField] private int[] channelIDs;
    bool isOpen;

    AudioSource audio;

    enum SoundState
    {
        OPEN,
        CLOSED
    }

    SoundState soundState;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        collider = gameObject.GetComponent<BoxCollider>();
        collider.enabled = true;

        audio = gameObject.GetComponent<AudioSource>();
        isOpen = false;
        soundState = SoundState.CLOSED;
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
        bool previousState = isOpen;
        for (int i = 0; i < channelIDs.Length; i++)
        {
            if (TestLevelManager.Instance.interactablesArray[channelIDs[i]] == false)
            {
                isOpen = false;
                break;
            }
            isOpen = true;
        }
        

        if(previousState != isOpen && isOpen)
        {
            SFXManager.Instance.PlayDoorClose(audio);
            animator.SetBool("isOpened", true);
            collider.enabled = false;
        }
        else if (previousState != isOpen && !isOpen)
        {
            SFXManager.Instance.PlayDoorClose(audio);
            animator.SetBool("isOpened", false);
            collider.enabled = true;
        }
    }
}
