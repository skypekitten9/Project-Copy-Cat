using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GoalChecker : MonoBehaviour
{
    private void OnTriggerEnter(Collider other)
    {
        try
        {
            if (other.gameObject == PlayerManager.Instance.gameObject)
            {
                int nextBuildIndex = TestLevelManager.Instance.Levels[SceneManager.GetActiveScene().buildIndex].nextLevelIndex;
                if (nextBuildIndex == -1)
                    nextBuildIndex = SceneManager.GetActiveScene().buildIndex + 1;


                TestLevelManager.Instance.GetComponent<SceneTransition>().ChangeToScene(nextBuildIndex);

            }
        }
        catch (System.Exception) { }
    }
}
