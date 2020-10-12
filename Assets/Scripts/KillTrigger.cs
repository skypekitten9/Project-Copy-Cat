using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class KillTrigger : MonoBehaviour
{

    private void OnTriggerEnter(Collider other)
    {
        TestLevelManager.Instance.GetComponent<SceneTransition>().ChangeToScene(SceneManager.GetActiveScene().buildIndex);
    }

}
