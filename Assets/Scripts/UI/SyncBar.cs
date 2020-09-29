using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class SyncBar : MonoBehaviour
{
    private Slider slider;
    public GameObject interact;
    private Transform progressionTransform;
    private List<GameObject> interactionsList;
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
                GameObject interaction = Instantiate(interact, progressionTransform);
                break;

            case Action.None:
                Debug.Log("Spawn syncbar NONE");
                break;

            default:
                Debug.Log("Spawn syncbar DEFAULT");
                break;
        }
    }

    public void DeleteActions()
    {

    }

    public void Hide()
    {
      
    }

    public void Show()
    {

    }

    private void Awake()
    {
        slider = gameObject.GetComponent<Slider>();
        progressionTransform = GameObject.Find("SpawnActionsPosition").GetComponent<Transform>();
    }

    public void Update()
    {
        slider.value += Time.deltaTime;
        if(Input.GetKeyDown("space"))
        {
            Debug.Log("Space pressed in syncbar");
            SpawnAction(Action.Interact);
        }
    }
}
