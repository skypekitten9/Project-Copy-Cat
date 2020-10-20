using UnityEngine;

public class DoorScript : MonoBehaviour
{
    Animator animator;
    BoxCollider collider;

    [SerializeField] private int doorID;
    [SerializeField] private int doorID2;

    AudioSource audio;

    enum SoundState
    {
        OPEN,
        CLOSED
    }

    SoundState soundState;

    //If true the door can open more than once
    public bool dynamicDoor;
    bool lastOpenState;
    int doorOpenedCount;

    void Start()
    {
        doorOpenedCount = 0;
        animator = gameObject.GetComponentInChildren<Animator>();
        collider = gameObject.GetComponent<BoxCollider>();
        collider.enabled = true;

        audio = gameObject.GetComponent<AudioSource>();

        soundState = SoundState.CLOSED;
    }

    private void Update()
    {
        if (TestLevelManager.Instance != null)
        {
            //Detta är endast till för att lösa ett problem där dörrens logik inte funkade bra ihop med ljuduppsleningen. Eftersom stand-buttons alltid skickar iväg en signal dörren ska lyssna efter stängs den tekniskt sett hela tiden
            //som någon står på den. Denna lösningen fixade det, men är annars ganska överflödig.
            switch (soundState)
            {
                case SoundState.CLOSED:

                    if (doorOpenedCount == 0 || dynamicDoor)
                    {
                        if (TestLevelManager.Instance.interactablesArray[doorID] == true && TestLevelManager.Instance.interactablesArray[doorID2] == true)
                        {
                            SFXManager.Instance.PlayDoorOpen(audio);
                            soundState = SoundState.OPEN;
                        }
                    }

                    break;

                case SoundState.OPEN:

                    if (doorOpenedCount == 0 || dynamicDoor)
                    {
                        if (TestLevelManager.Instance.interactablesArray[doorID] == false || TestLevelManager.Instance.interactablesArray[doorID2] == false)
                        {
                            SFXManager.Instance.PlayDoorClose(audio);
                            soundState = SoundState.CLOSED;
                        }
                    }

                    break;
            }
        }
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
        if (doorOpenedCount == 0 || dynamicDoor)
        {
            if (TestLevelManager.Instance.interactablesArray[doorID] == true && TestLevelManager.Instance.interactablesArray[doorID2] == true)
            {
                animator.SetBool("isOpened", true);
                collider.enabled = false;
                doorOpenedCount++;
            }
            else
            {
                animator.SetBool("isOpened", false);
                collider.enabled = true;
            }
        }
    }
}
