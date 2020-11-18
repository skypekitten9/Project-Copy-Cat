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
        playerWalk
    }
    
    private static SFXManager instance = null;
    public static SFXManager Instance { get { return instance; } }

    //Är nog bättre om det görs om till en array om vi ska spara ljuden på det här sättet.
    [SerializeField] private SoundAudioClip[] soundAudioClips;

    public SoundAudioClip[] walkingSounds = new SoundAudioClip[4];

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

    public void PlaySound(Sound sound)
    {
        audioSource.PlayOneShot(GetSound(sound));
    }

    public AudioClip GetRandomWalkingSound()
    {
        int randomInt;
        randomInt = UnityEngine.Random.Range(0, 4);

        return walkingSounds[randomInt].audioClip;
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
