using System;
using System.Collections;
using System.Collections.Generic;
using TMPro;
using UnityEngine;
using UnityEngine.Audio;
using UnityEngine.UI;

public class SettingsMenu : MonoBehaviour
{
    public AudioMixer audioMixer;
    [SerializeField] Slider volumeSlider;
    [SerializeField] Slider sensitivitySlider;
    [SerializeField] Slider fullscreenToggle;
    [SerializeField] TMP_Text fullscreenText;
    // Start is called before the first frame update
    void Start()
    {
        audioMixer.SetFloat("Volume", PlayerPrefs.GetFloat("Volume"));
        volumeSlider.value = PlayerPrefs.GetFloat("Volume");
        sensitivitySlider.value = PlayerPrefs.GetFloat("Sensitivity");
        fullscreenToggle.value = PlayerPrefs.GetFloat("Fullscreen");
        if (fullscreenToggle.value == 1)
        {
            Screen.fullScreen = true;
            fullscreenText.text = "ON";
        }
        else if (fullscreenToggle.value == 0)
        {
            Screen.fullScreen = false;
            fullscreenText.text = "OFF";
        }
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void SetVolume(float volume)
    {
        audioMixer.SetFloat("Volume", volume);
        PlayerPrefs.SetFloat("Volume", volume);
    }

    public void SetSensitivity(float sensitivity)
    {
        PlayerCamera.mouseSensitivity = sensitivity;
        PlayerPrefs.SetFloat("Sensitivity", sensitivity);
    }
    public void SetFullScreen(float fullscreen)
    {
        if(fullscreen == 1)
        {
            Screen.fullScreen = true;
            fullscreenText.text = "ON";
        }
        else if(fullscreen == 0)
        {
            Screen.fullScreen = false;
            fullscreenText.text = "OFF";
        }

        PlayerPrefs.SetFloat("Fullscreen", fullscreen);
    }

}
