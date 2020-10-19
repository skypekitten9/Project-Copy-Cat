using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class DamageManager : MonoBehaviour
{
    private static DamageManager instance = null;
    public static DamageManager Instance { get { return instance; } }
    public bool playerHit;

    public void Awake()
    {
        if (instance != null && instance != this)
            Destroy(this.gameObject);
        else
            instance = this;

        DontDestroyOnLoad(this);
    }

    // Update is called once per frame
    void Update()
    {
        if (playerHit)
        {
            playerHit = false;
            PlayerManager.Instance.playerHealth -= 10;
            Debug.Log("Hit player");
        }
    }
}
