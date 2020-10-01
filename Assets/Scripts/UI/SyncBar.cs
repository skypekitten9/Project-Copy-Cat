using System.Collections;
using System.Collections.Generic;
using System.Linq;
using UnityEngine;
using UnityEngine.UI;

public class SyncBar : MonoBehaviour
{
    private Slider slider;
    public GameObject interact;
    private Transform transformForPosition, transformForHierarchy;
    private List<GameObject> interactionsList;

    private void Awake()
    {
        slider = gameObject.GetComponent<Slider>();
        transformForPosition = GameObject.Find("TransformForPosition").GetComponent<Transform>();
        transformForHierarchy = GameObject.Find("TransformForHierarchy").GetComponent<Transform>();
    }

    public void Update()
    {
        slider.value += Time.deltaTime;
        if (Input.GetKeyDown("space"))
        {
            Debug.Log("Space pressed in syncbar");
            SpawnAction(Action.Interact);
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
                GameObject interaction = Instantiate(interact, transformForHierarchy);
                interaction.transform.position = transformForPosition.position;
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

    
}
