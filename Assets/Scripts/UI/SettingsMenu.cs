using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.Audio;

public class SettingsMenu : MonoBehaviour
{
    public AudioMixer audioMixer;
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetVolume(float volume)
    {
        audioMixer.SetFloat("Volume", volume);
    }

    public void SetSensitivity(float sensitivity)
    {
        PlayerCamera.mouseSensitivity = sensitivity;
    }
    public void SetFullScreen(bool fullScreen)
    {
        Screen.fullScreen = fullScreen;
    }

}
