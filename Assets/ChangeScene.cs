using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour
{
    // Start is called before the first frame update
    void Start()
    {

    }

    // Update is called once per frame
    void Update()
    {

    }

    private void OnTriggerEnter(Collider other)
    {
        if (other.name == "Player(Clone)")
        {
            if(GameManager.Instance.buildIndex == 0)
            {
                GameManager.Instance.buildIndex = SceneManager.GetActiveScene().buildIndex;
            }
            GameManager.Instance.buildIndex++;
            SceneManager.LoadScene(GameManager.Instance.buildIndex);
        }
    }
}
