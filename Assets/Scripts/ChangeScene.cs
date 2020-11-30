﻿using System.Collections;
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
            SceneManager.LoadScene(SceneManager.GetActiveScene().buildIndex+1);
            if(PlayerPrefs.GetInt("Buildindex") < SceneManager.GetActiveScene().buildIndex+1)
            {
                PlayerPrefs.DeleteKey("Buildindex");
                SceneManager.LoadScene("MainMenu");
            }
        }
    }
}