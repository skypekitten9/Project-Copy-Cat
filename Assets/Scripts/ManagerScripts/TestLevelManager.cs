using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TestLevelManager : MonoBehaviour
{
    private static TestLevelManager instance = null;
    public static TestLevelManager Instance { get { return instance; } }

    //Listan som håller alla bools för om dörrar ska vara stängda eller öppna.
    public List<bool> channelList;

    public void Awake()
    {
        if (instance != null && instance != this)
            Destroy(this.gameObject);
        else
            instance = this;
    }

    private void Start()
    {
        channelList = new List<bool>();
    }

    private void Update()
    {
        
    }

    //Metoden som knapparnas interaktion ska kalla på. Den gör så att kanalens bool värde ändras för den specifika knappen, och säger åt alla dörrar att titta på sina kanaler.
    public void UpdateChannels()
    {

    }

}
