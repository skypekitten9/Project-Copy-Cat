using UnityEditor.Animations;
using UnityEngine;

public class DoorScript : MonoBehaviour
{
    Animator animator;
    BoxCollider collider;
    public bool toggle;

    [SerializeField] private int[] ids;
    bool isOpen, listenAfterAnimation;
    float timer;

    AudioSource audio;

    void Start()
    {
        animator = gameObject.GetComponentInChildren<Animator>();
        collider = gameObject.GetComponent<BoxCollider>();
        collider.enabled = true;

        audio = gameObject.GetComponent<AudioSource>();
        isOpen = false;
        listenAfterAnimation = false;
        timer = 0;
    }

    private void Update()
    {
        if(timer > 0)
        {
            timer -= Time.deltaTime;
            if (timer < 0 && listenAfterAnimation)
            {
                ListenToChannel();
                listenAfterAnimation = false;
            }
        }
    }

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

        if (timer > 0)
        {
            listenAfterAnimation = true;
            return;
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
        if(state)
        {
            animator.Play("Open");
        }
        else
        {
            animator.Play("Close");
        }
        timer = animator.GetCurrentAnimatorStateInfo(0).length;

    }
}
