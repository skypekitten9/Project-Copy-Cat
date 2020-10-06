using System;
using UnityEngine;

public class GameManager : MonoBehaviour
{
    private static GameManager instance = null;
    public static GameManager Instance { get { return instance; } }


    [SerializeField] private GameObject player;
    public GameObject Player { get { return player; } }


    public void Awake()
    {
        if (instance != null && instance != this)
            Destroy(this.gameObject);
        else
            instance = this;

        DontDestroyOnLoad(this.gameObject);
    }

    public void DamagePlayer(int damage)
    {
        player.GetComponent<PlayerInteraction>().RecieveDamage(damage);
    }
}
