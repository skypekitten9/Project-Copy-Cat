using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TestLevelManager : MonoBehaviour
{
    private static TestLevelManager instance = null;
    public static TestLevelManager Instance { get { return instance; } }

   
    //Listan som håller alla bools för om dörrar ska vara stängda eller öppna.
    public bool[] interactablesArray;
    [SerializeField] private List<GameObject> doorList;
    [SerializeField] private List<GameObject> leverList;


    public int testInt;

    public void Awake()
    {
        if (instance != null && instance != this)
            Destroy(this.gameObject);
        else
            instance = this;

        DontDestroyOnLoad(this);

        interactablesArray = new bool[30];
        doorList = new List<GameObject>();
        leverList = new List<GameObject>();

        ListAllDoors();
        ListAllLevers();
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

    public void SaveDoorStates()
    {
        foreach (GameObject door in doorList)
        {
            door.GetComponent<DoorScript>().SaveState();
        }
    }

    public void RewindDoors()
    {

        foreach (GameObject door in doorList)
        {
            door.GetComponent<DoorScript>().Rewind();
        }
    }

    public void SaveLeverStates()
    {
        foreach (GameObject lever in leverList)
        {
            lever.GetComponent<LeverScript>().SaveState();
        }
    }

    public void RewindLevers()
    {

        foreach (GameObject lever in leverList)
        {
            lever.GetComponent<LeverScript>().Rewind();
        }
    }

    //Samlar alla dörrar i scenen i en lista.
    private void ListAllDoors()
    {
        doorList.AddRange(GameObject.FindGameObjectsWithTag("Door"));
    }

    private void ListAllLevers()
    {
        GameObject[] interactables = GameObject.FindGameObjectsWithTag("Interactable");

        foreach (var i in interactables)
        {
            if (i.GetComponent<LeverScript>())
            {
                leverList.Add(i);
            }
        }
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
