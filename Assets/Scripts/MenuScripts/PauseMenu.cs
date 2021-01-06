using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class PauseMenu : MonoBehaviour
{
    public static bool GameIsPaused = false;

    public GameObject pauseMenuUI;
    public GameObject MainpauseMenuUI;
    public GameObject preferencesUI;
    public GameObject preferencesControlls;
    // Start is called before the first frame update
    void Start()
    {
        GameIsPaused = false;
        pauseMenuUI.SetActive(false);
        MainpauseMenuUI.SetActive(false);
        preferencesUI.SetActive(false);
        preferencesControlls.SetActive(false);
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Escape) || Input.GetKeyDown(KeyCode.P))
        {
            if (GameIsPaused)
            {
                Resume();
                MainpauseMenuUI.SetActive(true);
                preferencesUI.SetActive(false);
                preferencesControlls.SetActive(false);
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
        MainpauseMenuUI.SetActive(true);
        GameIsPaused = true;
        Cursor.lockState = CursorLockMode.None;
        Time.timeScale = 0f;
    }

    public void Resume()
    {
        pauseMenuUI.SetActive(false);
        MainpauseMenuUI.SetActive(false);
        GameIsPaused = false;
        Cursor.lockState = CursorLockMode.Locked;
        Time.timeScale = 1f;
    }
    public void Preferences()
    {
        MainpauseMenuUI.SetActive(false);
        preferencesUI.SetActive(true);
        preferencesControlls.SetActive(true);
    }

    public void ReturnPauseMENU()
    {
        MainpauseMenuUI.SetActive(true);
        preferencesUI.SetActive(false);
        preferencesControlls.SetActive(false);
    }

    public void Restart()
    {
        Cursor.lockState = CursorLockMode.Locked;
        Time.timeScale = 1f;
        SceneManager.LoadScene(SceneManager.GetActiveScene().name);
    }
    public void MainMenu()
    {
        pauseMenuUI.SetActive(false);
        GameIsPaused = false;
        Time.timeScale = 1f;
        SceneManager.LoadScene("MainMenu");
    }
}
