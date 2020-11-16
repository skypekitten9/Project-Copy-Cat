using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class Spawn : MonoBehaviour
{
    // Start is called before the first frame update
    [SerializeField]private GameObject playerPrefab;
    // Start is called before the first frame update
    void Awake()
    {
        if(SceneManager.GetActiveScene().name != "LevelEditor")
        {
            Instantiate(playerPrefab, transform.position, Quaternion.identity);
        }
        
    }
    void Start()
    {
        
        
    }

    // Update is called once per frame
    void Update()
    {

    }
}
