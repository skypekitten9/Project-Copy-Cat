using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class MainMenu : MonoBehaviour
{
    public GameObject mainMenuUI;
    public GameObject levelSelectUI;
    public GameObject settingsUI;
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
        mainMenuUI.SetActive(false);
        settingsUI.SetActive(false);
        levelSelectUI.SetActive(true);
        camera.transform.position = camera.transform.position + new Vector3(1000, 0, 0);
    }

    public void GoToSettings()
    {
        mainMenuUI.SetActive(false);
        settingsUI.SetActive(true);
        levelSelectUI.SetActive(false);
        camera.transform.position = camera.transform.position + new Vector3(-1000, 0, 0);
    }

    public void ChangeLevel(int buildIndex)
    {
        GameManager.Instance.buildIndex = buildIndex;
        SceneManager.LoadScene(buildIndex);
    }


}
