using System.Collections;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

public class LevelObjectLinker : MonoBehaviour, IPointerDownHandler
{
    [SerializeField] private LevelObject levelObject;


    private void Awake()
    {
        if (levelObject == null)
        {
            Debug.LogError("Level object - missing");
            return;
        }

        if (levelObject.Icon == null)
            Debug.LogError($"Level object \"{levelObject.Name}\" - missing icon");
        else
            GetComponent<Image>().sprite = levelObject.Icon;


        if (levelObject.Prefab == null)
            Debug.LogError($"Level object \"{levelObject.Name}\" - missing prefab");
    }


    public void OnPointerDown(PointerEventData eventData)
    {
        //Debug.Log("InitiateDrag");
        StartCoroutine(LevelEditor.Instance.GetComponent<LevelObjectManager>().SelectUIObject(levelObject));
    }
}
