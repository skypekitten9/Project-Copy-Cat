using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class PropertiesTab : MonoBehaviour
{
    [SerializeField] private GameObject position;
    [SerializeField] private GameObject rotation;
    [SerializeField] private GameObject scale;

    [SerializeField] private GameObject fireRange;
    [SerializeField] private GameObject targetRange;
    [SerializeField] private GameObject patrolRange;
    [SerializeField] private GameObject patrolViewAngle;
    [SerializeField] private GameObject targetViewAngle;
    [SerializeField] private GameObject chargeTime;
    [SerializeField] private GameObject patrolSpeed;
    [SerializeField] private GameObject targetSpeed;



    private void Start()
    {
        AddEvent(position);
        AddEvent(rotation);
        AddEvent(scale);

        AddEvent(fireRange);
        AddEvent(targetRange);
        AddEvent(patrolRange);
        AddEvent(patrolViewAngle);
        AddEvent(targetViewAngle);
        AddEvent(chargeTime);
        AddEvent(patrolSpeed);
        AddEvent(targetSpeed);

        UpdateProperties(null);
    }

    public void UpdateProperties(LevelObject_Selectable selectable)
    {
        if (selectable != null)
        {
            Transform objectRoot = LevelEditor.Instance.selectedLevelObject.transform.parent;

            SetProperty(position, objectRoot.position.x, objectRoot.position.y, objectRoot.position.z);
            SetProperty(rotation, objectRoot.rotation.eulerAngles.x, objectRoot.rotation.eulerAngles.y, objectRoot.rotation.eulerAngles.z);
            SetProperty(scale, objectRoot.localScale.x, objectRoot.localScale.y, objectRoot.localScale.z);

            if (objectRoot.GetComponent<TurretBehavior>())
            {
                TurretBehavior t = objectRoot.GetComponent<TurretBehavior>();
                SetProperty(fireRange, t.fireRange);
                SetProperty(targetRange, t.targetRange);
                SetProperty(patrolRange, t.patrolRange);
                SetProperty(patrolViewAngle, t.patrolViewAngle);
                SetProperty(targetViewAngle, t.targetViewAngle);
                SetProperty(chargeTime, t.chargeTime);
                SetProperty(patrolSpeed, t.patrolSpeed);
                SetProperty(targetSpeed, t.targetSpeed);
            }
        }
        else
        {
            SetPropertyNull(position);
            SetPropertyNull(rotation);
            SetPropertyNull(scale);

            SetPropertyNull(fireRange);
            SetPropertyNull(targetRange);
            SetPropertyNull(patrolRange);
            SetPropertyNull(patrolViewAngle);
            SetPropertyNull(targetViewAngle);
            SetPropertyNull(chargeTime);
            SetPropertyNull(patrolSpeed);
            SetPropertyNull(targetSpeed);
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

            if (property == position || property == rotation || property == scale)
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
                    else if (property == scale)
                    {
                        objectRoot.transform.localScale = new Vector3(x, y, z);
                    }
                }
            }
            else if (property == fireRange || property == targetRange || property == patrolRange || property == patrolViewAngle || property == targetViewAngle || property == chargeTime || property == patrolSpeed || property == targetSpeed)
            {
                if (objectRoot.GetComponent<TurretBehavior>() != null)
                {
                    TurretBehavior t = objectRoot.GetComponent<TurretBehavior>();

                    float x;
                    if (float.TryParse(property.transform.GetChild(0).GetComponent<InputField>().text, out x))
                    {
                        if (property == fireRange)
                        {
                            t.fireRange = x;
                        }
                        else if (property == targetRange)
                        {
                            t.targetRange = x;
                        }
                        else if (property == patrolRange)
                        {
                            t.patrolRange = x;
                        }
                        else if (property == patrolViewAngle)
                        {
                            t.patrolViewAngle = x;
                        }
                        else if (property == targetViewAngle)
                        {
                            t.targetViewAngle = x;
                        }
                        else if (property == chargeTime)
                        {
                            t.chargeTime = x;
                        }
                        else if (property == patrolSpeed)
                        {
                            t.patrolSpeed = x;
                        }
                        else if (property == targetSpeed)
                        {
                            t.targetSpeed = x;
                        }
                    }
                }
            }
        }

    }
}
