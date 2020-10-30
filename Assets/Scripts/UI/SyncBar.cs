using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class SyncBar : MonoBehaviour
{
    private Slider slider;
    private bool active;
    public GameObject interact, stop, standOn, standOff;
    private Transform transformForPosition, transformForHierarchy;
    private List<GameObject> actionsList;

    private void Awake()
    {
        active = false;
        slider = gameObject.GetComponent<Slider>();
        actionsList = new List<GameObject>();
        transformForPosition = GameObject.Find("TransformForPosition").GetComponent<Transform>();
        transformForHierarchy = GameObject.Find("TransformForHierarchy").GetComponent<Transform>();
        this.Hide();
    }

    public void Update()
    {
        if(active) slider.value += Time.deltaTime;
        //if (Input.GetKeyDown("space"))
        //{
        //    Debug.Log("Space pressed in syncbar");
        //    SpawnInteraction();
        //}

        if (slider.value == slider.maxValue) StopBar();
    }

    public void StartBar()
    {
        Reset();
        Show();
        active = true;
    }

    public void StopBar()
    {
        GameObject actionGameObj = Instantiate(stop, transformForHierarchy);
        actionGameObj.transform.position = transformForPosition.position;
        actionsList.Add(actionGameObj);
        active = false;
    }

    public void Replay()
    {
        SetValue(0);
        active = true;
    }

    public void SetValue(float value)
    {
        slider.value = value;
    }

    public void SetMaxValue(float value)
    {
        slider.maxValue = value;
    }

    public void SpawnInteraction()
    {
        GameObject actionGameObj = Instantiate(interact, transformForHierarchy);
        actionGameObj.transform.position = transformForPosition.position;
        actionsList.Add(actionGameObj);
    }

    public void Reset()
    {
        Hide();
        SetValue(0);
        StopBar();
        foreach (GameObject action in actionsList)
        {
            Destroy(action);
        }
        
    }

    private void Hide()
    {
        transform.parent.GetComponent<Canvas>().enabled = false;
    }

    private void Show()
    {
        transform.parent.GetComponent<Canvas>().enabled = true;
    }

    
}
