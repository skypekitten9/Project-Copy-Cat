using UnityEngine;
using UnityEngine.SceneManagement;

public class SceneTransition : MonoBehaviour
{
    private void OnEnable()
    {
        SceneManager.sceneLoaded += OnSceneLoaded;
    }
    private void OnDisable()
    {
        SceneManager.sceneLoaded -= OnSceneLoaded;
    }

    public void ChangeToScene(int buildIndex)
    {
        Debug.Log($"Changing to scene {buildIndex}");

        SceneManager.LoadScene(buildIndex);    
    }


    private void OnSceneLoaded(Scene scene, LoadSceneMode mode)
    {
        /*
        TestLevelManager.Instance.transform.GetChild(0).position = TestLevelManager.Instance.Levels[SceneManager.GetActiveScene().buildIndex].startPosition;
        TestLevelManager.Instance.transform.GetChild(1).position = TestLevelManager.Instance.Levels[SceneManager.GetActiveScene().buildIndex].goalPosition;

        if (PlayerManager.Instance == null)
            Instantiate(GameManager.Instance.Player, TestLevelManager.Instance.transform.GetChild(0).position, Quaternion.identity);
        else
            PlayerManager.Instance.transform.position = TestLevelManager.Instance.transform.GetChild(0).position;
        */
    }

}
