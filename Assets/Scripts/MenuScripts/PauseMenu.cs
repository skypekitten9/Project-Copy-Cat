using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    public static bool GameIsPaused = false;

    public GameObject pauseMenuUI;
    public GameObject settingsMenuUI;
    private bool AtSettings;
    // Start is called before the first frame update
    void Start()
    {
        GameIsPaused = false;
        pauseMenuUI.SetActive(false);
        settingsMenuUI.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape))
        {
            if (GameIsPaused)
            {
                Resume();
            }
            else
            {
                Pause();
            }
        }
    }

    void Pause()
    {
        pauseMenuUI.SetActive(true);
        Time.timeScale = 0f;
        GameIsPaused = true;
        Cursor.lockState = CursorLockMode.None;
    }

    public void Resume()
    {
        pauseMenuUI.SetActive(false);
        Time.timeScale = 1f;
        GameIsPaused = false;
        Cursor.lockState = CursorLockMode.Locked;
    }

    public void GoToSettings()
    {
        if (AtSettings == false)
        {
            pauseMenuUI.SetActive(false);
            settingsMenuUI.SetActive(true);
            AtSettings = true;
        }
        else if (AtSettings == true)
        {
            pauseMenuUI.SetActive(true);
            settingsMenuUI.SetActive(false);
            AtSettings = false;
        }
    }

    public void MainMenu()
    {
        pauseMenuUI.SetActive(false);
        SceneManager.LoadScene("MainMenu");
    }
}
