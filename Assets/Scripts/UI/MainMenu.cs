using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public GameObject mainMenuUI;
    public GameObject levelSelectUI;
    public GameObject settingsUI;
    private bool AtSettings;
    private bool AtLevelSelect;
    public GameObject camera;
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
        
    }

    public void GoToLevelSelect()
    {
        if (AtLevelSelect == false)
        {
            mainMenuUI.SetActive(false);
            settingsUI.SetActive(false);
            levelSelectUI.SetActive(true);
            AtLevelSelect = true;
            camera.transform.position = camera.transform.position + new Vector3(1000, 0, 0);
        }
        else if (AtLevelSelect == true)
        {
            mainMenuUI.SetActive(true);
            settingsUI.SetActive(false);
            levelSelectUI.SetActive(false);
            AtLevelSelect = false;
            camera.transform.position = camera.transform.position + new Vector3(-1000, 0, 0);
        }
    }

    public void GoToSettings()
    {
        if(AtSettings == false)
        {
            mainMenuUI.SetActive(false);
            settingsUI.SetActive(true);
            levelSelectUI.SetActive(false);
            AtSettings = true;
            camera.transform.position = camera.transform.position + new Vector3(-1000, 0, 0);
        }
        else if (AtSettings == true)
        {
            mainMenuUI.SetActive(true);
            settingsUI.SetActive(false);
            levelSelectUI.SetActive(false);
            AtSettings = false;
            camera.transform.position = camera.transform.position + new Vector3(1000, 0, 0);
        }
    }

    public void ChangeLevel(int buildIndex)
    {
        GameManager.Instance.buildIndex = buildIndex;
        Time.timeScale = 1f;
        SceneManager.LoadScene(buildIndex);
    }

    public void QuitGame()
    {
        Application.Quit();
    }


}
