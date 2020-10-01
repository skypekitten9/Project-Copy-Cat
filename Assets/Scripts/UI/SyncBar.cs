using System.Collections;
using System.Collections.Generic;
using System.Data;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class SyncBar : MonoBehaviour
{
    private Slider slider;
    public GameObject interact;
    private Transform transformForPosition, transformForHierarchy;
    private List<GameObject> actionsList;

    private void Awake()
    {
        slider = gameObject.GetComponent<Slider>();
        actionsList = new List<GameObject>();
        transformForPosition = GameObject.Find("TransformForPosition").GetComponent<Transform>();
        transformForHierarchy = GameObject.Find("TransformForHierarchy").GetComponent<Transform>();
    }

    public void Update()
    {
        slider.value += Time.deltaTime / 5;
        if (Input.GetKeyDown("space"))
        {
            Debug.Log("Space pressed in syncbar");
            SpawnInteraction();
        }
        if (Input.GetKeyDown("r"))
        {
            Debug.Log("Space R in syncbar");
            Reset();
        }
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
        SetValue(0);
        foreach(GameObject action in actionsList)
        {
            Destroy(action);
        }

    }

    public void Hide()
    {
      
    }

    public void Show()
    {

    }

    
}
