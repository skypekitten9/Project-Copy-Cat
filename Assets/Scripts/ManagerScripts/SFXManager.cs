using JetBrains.Annotations;
using System;
using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SFXManager : MonoBehaviour
{
    public enum Sound
    {
        buttonClick,
        doorClose,
        doorOpen,
        playerWalk,
        mineBlast,
        throwObject,
        grabObject,
        jump,
        land,
        turretCharge,
        turretFire,
        turretPowerDown
    }
    
    private static SFXManager instance = null;
    public static SFXManager Instance { get { return instance; } }

    //Är nog bättre om det görs om till en array om vi ska spara ljuden på det här sättet.
    [SerializeField] private SoundAudioClip[] soundAudioClips;

    public SoundAudioClip[] walkingSounds = new SoundAudioClip[10];

    int stepNumber = 0;

    AudioSource audioSource;
    
    private void Awake()
    {
        if (instance != null && instance != this)
            Destroy(this.gameObject);
        else
            instance = this;
    }

    private void Start()
    {
        audioSource = gameObject.GetComponent<AudioSource>();
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void PlaySound(AudioSource source, Sound sound, float volume)
    {
        source.PlayOneShot(GetSound(sound), volume);
    }

    //Väldigt ful lösning, men det funkar. Se random delen ifall den ska implementeras istället.
    public AudioClip GetRandomWalkingSound()
    {
        if (stepNumber == 0)
        {
            stepNumber++;
        }
        else
        {
            stepNumber--;
        }
        //int randomInt;
        //randomInt = UnityEngine.Random.Range(0, 4);
        return walkingSounds[stepNumber].audioClip;
    }

    private AudioClip GetSound(Sound sound)
    {
        foreach(SoundAudioClip soundAudioClip in soundAudioClips)
            if(soundAudioClip.sound == sound)
            {
                return soundAudioClip.audioClip;
            }
        return null;
    }

    [Serializable]
    public class SoundAudioClip
    {
        public Sound sound;
        public AudioClip audioClip;
    }
}
