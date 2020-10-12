using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SFXManager : MonoBehaviour
{
    private static SFXManager instance = null;
    public static SFXManager Instance { get { return instance; } }

    //Är nog bättre om det görs om till en array om vi ska spara ljuden på det här sättet.
    [SerializeField] private AudioClip doorOpen, doorClose, buttonClick, playerWalk;

    private void Awake()
    {
        if (instance != null && instance != this)
            Destroy(this.gameObject);
        else
            instance = this;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PlayDoorOpen(AudioSource source)
    {
        source.PlayOneShot(doorOpen, 0.4f);
    }

    public void PlayDoorClose(AudioSource source)
    {
        source.PlayOneShot(doorClose, 0.4f);
    }

    public void PlayButtonClick(AudioSource source)
    {
        source.PlayOneShot(buttonClick, 0.7f);
    }
}
