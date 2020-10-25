using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TestLevelManager : MonoBehaviour
{
    private static TestLevelManager instance = null;
    public static TestLevelManager Instance { get { return instance; } }

    [SerializeField] private int sceneStartOverride = -1;
    //[SerializeField] private bool changeScenesOnStart = true;

    //Listan som håller alla bools för om dörrar ska vara stängda eller öppna.
    public bool[] interactablesArray;
    [SerializeField] private List<GameObject> doorList;


    [SerializeField] private Level[] levels;
    public Level[] Levels { get { return levels; } }


    public int testInt;


    private void OnEnable()
    {
        //if (sceneStartOverride != -1 && sceneStartOverride != SceneManager.GetActiveScene().buildIndex)
        //{
        //    GetComponent<SceneTransition>().ChangeToScene(sceneStartOverride);
        //}
    }

    public void Awake()
    {
        if (instance != null && instance != this)
            Destroy(this.gameObject);
        else
            instance = this;

        DontDestroyOnLoad(this);

        interactablesArray = new bool[30];
        doorList = new List<GameObject>();

        ListAllDoors();
        SetTestValues();
    }

    private void Update()
    {
        ManualChannelTest();
    }

    //Metoden som knapparnas interaktion ska kalla på. Den gör så att kanalens bool värde ändras för den specifika knappen, och säger åt alla dörrar att titta på sina kanaler.
    public void UpdateChannels()
    {
        NotifyDoors();
    }

    //Säger åt alla dörrar i scenen att se om deras channel har uppdaterats.
    public void NotifyDoors()
    {
        foreach (GameObject door in doorList)
        {
            door.GetComponent<DoorScript>().ListenToChannel();
        }
    }

    //Samlar alla dörrar i scenen i en lista.
    private void ListAllDoors()
    {
        doorList.AddRange(GameObject.FindGameObjectsWithTag("Door"));
    }

    //Sätter alla channels till false vid start.
    private void SetTestValues()
    {
        for (int i = 0; i < interactablesArray.Length; i++)
        {
            interactablesArray[i] = false;
        }
    }

    private void ManualChannelTest()
    {
        if (Input.GetKeyDown(KeyCode.B))
        {
            interactablesArray[0] = !interactablesArray[0];
            UpdateChannels();
        }
    }
}
