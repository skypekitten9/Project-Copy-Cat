using UnityEngine;

public class PlayerManager : MonoBehaviour
{
    private static PlayerManager instance = null;
    public static PlayerManager Instance { get { return instance; } }

    public int playerHealth = 100;

    void Update()
    {
        if (playerHealth <= 0)
        {
            //gameover
        }
    }

    public void Awake()
    {
        if (instance != null && instance != this)
            Destroy(this.gameObject);
        else
            instance = this; 

        DontDestroyOnLoad(this);
    }
}