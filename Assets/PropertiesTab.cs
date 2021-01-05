using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PropertiesTab : MonoBehaviour
{
    [SerializeField] private GameObject position;
    [SerializeField] private GameObject rotation;
    [SerializeField] private GameObject scale;


    private void Start()
    {
        AddEvent(position);
        AddEvent(rotation);
        //AddEvent(scale);

        UpdateProperties(null);
    }

    public void UpdateProperties(LevelObject_Selectable selectable)
    {
        if (selectable != null)
        {
            Transform objectRoot = LevelEditor.Instance.selectedLevelObject.transform.parent;

            SetProperty(position, objectRoot.position.x, objectRoot.position.y, objectRoot.position.z);
            SetProperty(rotation, objectRoot.rotation.eulerAngles.x, objectRoot.rotation.eulerAngles.y, objectRoot.rotation.eulerAngles.z);
            //SetProperty(scale, objectRoot.localScale.x, objectRoot.localScale.y, objectRoot.localScale.z);
        }
        else
        {
            SetPropertyNull(position);
            SetPropertyNull(rotation);
            //SetPropertyNull(scale);
        }
    }


    private void SetProperty<T>(GameObject property, params T[] values)
    {
        for (int c = 0; c < property.transform.childCount; c++)
        {
            property.transform.GetChild(c).GetComponent<InputField>().text = values[c].ToString();
            property.transform.GetChild(c).GetComponent<InputField>().interactable = true;
        }
    }

    private void SetPropertyNull(GameObject property)
    {
        for (int c = 0; c < property.transform.childCount; c++)
        {
            InputField field = property.transform.GetChild(c).GetComponent<InputField>();
            field.text = "-";
            field.interactable = false;
        }
    }

    private void AddEvent(GameObject property)
    {
        for (int c = 0; c < property.transform.childCount; c++)
        {
            InputField field = property.transform.GetChild(c).GetComponent<InputField>();
            field.onEndEdit.AddListener(delegate { OnValueChanged(property); });
        }
    }

    private void OnValueChanged(GameObject property)
    {
        if (LevelEditor.Instance.selectedLevelObject != null)
        {
            Transform objectRoot = LevelEditor.Instance.selectedLevelObject.transform.parent;

            if (property == position || property == rotation /*|| property == scale*/)
            {
                float x, y, z;
                if (float.TryParse(property.transform.GetChild(0).GetComponent<InputField>().text, out x) &&
                    float.TryParse(property.transform.GetChild(1).GetComponent<InputField>().text, out y) &&
                    float.TryParse(property.transform.GetChild(2).GetComponent<InputField>().text, out z))
                {

                    if (property == position)
                    {
                        objectRoot.transform.position = new Vector3(x, y, z);
                    }
                    else if (property == rotation)
                    {
                        objectRoot.transform.rotation = Quaternion.Euler(x, y, z);
                    }
                    //else if (property == scale)
                    //{
                    //    objectRoot.transform.localScale = new Vector3(x, y, z);
                    //}

                }
            }
        }

    }
}
