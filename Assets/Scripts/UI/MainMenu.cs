using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class MainMenu : MonoBehaviour
{
    [SerializeField]private GameObject startMenuUI;
    [SerializeField]private GameObject preferncesUI;
    [SerializeField] private GameObject levelSelectUI;
    [SerializeField] private GameObject loadingUI;
    [SerializeField] private GameObject creditsUI;
    [SerializeField] private GameObject startMenuButtons;
    [SerializeField] private GameObject preferncesControls;
    [SerializeField] private GameObject levelSelectButtons;
    [SerializeField] private GameObject creditsReturnButton;
    private bool AtPrefernces;
    private bool AtLevelSelect;
    private bool AtCredits;
    Scene currentScene;
    // Start is called before the first frame update
    void Start()
    {
        startMenuUI.SetActive(true);
        preferncesUI.SetActive(false);
        levelSelectUI.SetActive(false);
        loadingUI.SetActive(false);
        creditsUI.SetActive(false);
        startMenuButtons.SetActive(true);
        preferncesControls.SetActive(false);
        levelSelectButtons.SetActive(false);
        creditsReturnButton.SetActive(false);
        currentScene = SceneManager.GetActiveScene();
    }

    // Update is called once per frame
    void FixedUpdate()
    {
        
    }
    public void GoToSettings()
    {
        if(AtPrefernces == false)
        {
            startMenuUI.SetActive(false);
            startMenuButtons.SetActive(false);
            preferncesControls.SetActive(true);
            preferncesUI.SetActive(true);
            AtPrefernces = true;
        }
        else if (AtPrefernces == true)
        {
            startMenuUI.SetActive(true);
            startMenuButtons.SetActive(true);
            preferncesControls.SetActive(false);
            preferncesUI.SetActive(false);
            AtPrefernces = false;
        }
    }

    public void GoToLevelSelect()
    {
        if (AtLevelSelect == false)
        {
            startMenuUI.SetActive(false);
            startMenuButtons.SetActive(false);
            levelSelectUI.SetActive(true);
            levelSelectButtons.SetActive(true);
            AtLevelSelect = true;
        }
        else if (AtLevelSelect == true)
        {
            startMenuUI.SetActive(true);
            startMenuButtons.SetActive(true);
            levelSelectUI.SetActive(false);
            levelSelectButtons.SetActive(false);
            AtLevelSelect = false;
        }
    }
    public void SelectLevel(int levelIndex)
    {
        SceneManager.LoadScene(levelIndex);
    }


    public void GoToCredits()
    {
        if (AtCredits == false)
        {
            startMenuUI.SetActive(false);
            startMenuButtons.SetActive(false);
            creditsReturnButton.SetActive(true);
            creditsUI.SetActive(true);
            AtCredits = true;
        }
        else if (AtCredits == true)
        {
            startMenuUI.SetActive(true);
            startMenuButtons.SetActive(true);
            creditsReturnButton.SetActive(false);
            creditsUI.SetActive(false);
            AtCredits = false;
        }
    }

    public void Continue()
    {
        SceneManager.LoadScene(PlayerPrefs.GetInt("Buildindex"));
    }

    public void NewGame()
    {
        PlayerPrefs.DeleteKey("Buildindex");
        SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
    }

    public void QuitGame()
    {
        Application.Quit();
    }


}
