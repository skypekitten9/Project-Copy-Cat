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
            SpawnAction(Action.Interact);
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

    public void SpawnAction(Action action)
    {
        switch (action)
        {
            case Action.Interact:
                GameObject actionGameObj = Instantiate(interact, transformForHierarchy);
                actionGameObj.transform.position = transformForPosition.position;
                actionsList.Add(actionGameObj);
                break;

            case Action.None:
                Debug.Log("Spawn syncbar NONE");
                break;

            default:
                Debug.Log("Spawn syncbar DEFAULT");
                break;
        }
        
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
