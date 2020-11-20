using UnityEngine;
using UnityEngine.SceneManagement;


public class PlayerManager : MonoBehaviour
{
    private static PlayerManager instance = null;
    public static PlayerManager Instance { get { return instance; } }

    [SerializeField] private GameObject deadUI;

    public float playerHealth = 100;

    private float healthRegenTimer;
    private float resetHealthRegenTimer;

    private void Start()
    {
        healthRegenTimer = 1.5f;
        resetHealthRegenTimer = healthRegenTimer;
    }

    void Update()
    {
        healthRegenTimer -= Time.deltaTime;

        if (playerHealth <= 0)
        {
            deadUI.SetActive(true);
            GameManager.Instance.GetComponent<RecordManager>().ChangeControlState(ControlStates.Dead);
            if (Input.GetKeyDown(KeyCode.R))
            {
                playerHealth = 100;
                deadUI.SetActive(false);
                GameManager.Instance.GetComponent<RecordManager>().ChangeControlState(ControlStates.Player);
                TestLevelManager.Instance.GetComponent<SceneTransition>().ChangeToScene(SceneManager.GetActiveScene().buildIndex); //Changes level
                playerHealth = 100;
            }
        }

        if (healthRegenTimer <= 0)
        {
            if (playerHealth < 100 && playerHealth > 0)
            {
                playerHealth += 0.15f;
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

    public void DamagePlayer(int amount)
    {
        Debug.Log("Damage Player!" + playerHealth);
        playerHealth -= amount;
        healthRegenTimer = resetHealthRegenTimer;

        gameObject.GetComponentInChildren<Camera>().GetComponent<CameraShake>().ShakePlayer();
    }
}