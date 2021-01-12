using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {
        first = true;
    }


    bool first = true;
    private void OnTriggerEnter(Collider other)
    {
        if (!first)
        {
            return;
        }
        first = false;

        if (other.name == "Player(Clone)")
        {
            if (PlayerPrefs.GetInt("Buildindex") < SceneManager.GetActiveScene().buildIndex + 1)
            {
                PlayerPrefs.DeleteKey("Buildindex");
                SceneManager.LoadScene("MainMenu");
            }

            try
            {
                Destroy(FindObjectOfType<Follower>().transform.parent.gameObject);
            }
            catch { }

            Follower.showCinematic = true;
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex + 1);
        }
    }
}
