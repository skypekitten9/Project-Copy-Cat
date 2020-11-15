using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public GameObject mainMenuUI;

    Scene currentScene;
    // Start is called before the first frame update
    void Start()
    {
        mainMenuUI.SetActive(true);
        currentScene = SceneManager.GetActiveScene();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        if(currentScene.name != "MainMenu")
        {
            mainMenuUI.SetActive(false);
        }
        else
        {
            mainMenuUI.SetActive(true);
        }
    }
}
