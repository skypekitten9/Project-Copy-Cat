using UnityEngine;
using UnityEngine.SceneManagement;


public class PlayerManager : MonoBehaviour
{
    private static PlayerManager instance = null;
    public static PlayerManager Instance { get { return instance; } }

    [SerializeField] private GameObject deadUI;
    [SerializeField] private Transform SpawnPoint;


    public int playerHealth = 100;

    void Update()
    {
        if (playerHealth <= 0)
        {
            deadUI.SetActive(true);
            GameManager.Instance.GetComponent<RecordManager>().ChangeControlState(ControlStates.Dead);
            if (Input.GetKeyDown(KeyCode.R))
            {
                playerHealth = 100;
                deadUI.SetActive(false);
                GameManager.Instance.GetComponent<RecordManager>().ChangeControlState(ControlStates.Player);
                TestLevelManager.Instance.GetComponent<SceneTransition>().ChangeToScene(SceneManager.GetActiveScene().buildIndex);
            }
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