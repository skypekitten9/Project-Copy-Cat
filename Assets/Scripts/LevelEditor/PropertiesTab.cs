using System.Collections;
using System.Collections.Generic;
using System.Text;
using TMPro;
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

    [SerializeField] private GameObject message;
    [SerializeField] private GameObject hasName;
    [SerializeField] private GameObject messageType;



    private void Start()
    {
        AddInputFieldEvent(position);
        AddInputFieldEvent(rotation);
        AddInputFieldEvent(scale);

        AddInputFieldEvent(fireRange);
        AddInputFieldEvent(targetRange);
        AddInputFieldEvent(patrolRange);
        AddInputFieldEvent(patrolViewAngle);
        AddInputFieldEvent(targetViewAngle);
        AddInputFieldEvent(chargeTime);
        AddInputFieldEvent(patrolSpeed);
        AddInputFieldEvent(targetSpeed);

        AddStoryTriggerEvents();


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

            if (objectRoot.GetComponent<TurretBehavior>() != null)
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

            if (objectRoot.GetComponent<StoryTrigger1>() != null)
            {
                StoryTrigger1 s = objectRoot.GetComponent<StoryTrigger1>();
                StringBuilder sb = new StringBuilder();

                foreach (string row in s.message.rows)
                {
                    sb.Append(row + "\n");
                }
                if (sb.Length > 0)
                    sb.Remove(sb.Length - 1, 1);

                message.transform.GetComponentInChildren<InputField>().text = sb.ToString();
                message.transform.GetComponentInChildren<InputField>().interactable = true;
                hasName.transform.GetComponentInChildren<Toggle>().isOn = s.message.hasName;
                hasName.transform.GetComponentInChildren<Toggle>().interactable = true;
                messageType.transform.GetComponentInChildren<TMP_Dropdown>().value = (int)s.message.messageType;
                messageType.transform.GetComponentInChildren<TMP_Dropdown>().interactable = true;
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

            SetPropertyNull(message);
            hasName.GetComponentInChildren<Toggle>().interactable = false;
            messageType.GetComponentInChildren<TMP_Dropdown>().interactable = false;
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

    private void AddInputFieldEvent(GameObject property)
    {
        for (int c = 0; c < property.transform.childCount; c++)
        {
            InputField field = property.transform.GetChild(c).GetComponent<InputField>();
            field.onEndEdit.AddListener(delegate { OnValueChanged(property); });
        }
    }
    private void AddStoryTriggerEvents()
    {
        message.transform.GetComponentInChildren<InputField>().onEndEdit.AddListener(delegate { OnValueChanged(message); });
        hasName.transform.GetComponentInChildren<Toggle>().onValueChanged.AddListener(delegate { OnValueChanged(hasName); });
        messageType.transform.GetComponentInChildren<TMP_Dropdown>().onValueChanged.AddListener(delegate { OnValueChanged(messageType); });
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
            else if (property == message)
            {
                if (objectRoot.GetComponentInChildren<StoryTrigger1>() != null)
                {
                    objectRoot.GetComponentInChildren<StoryTrigger1>().message.rows = property.GetComponentInChildren<InputField>().text.Split('\n');
                }
            }
            else if (property == hasName)
            {
                if (objectRoot.GetComponentInChildren<StoryTrigger1>() != null)
                {
                    objectRoot.GetComponentInChildren<StoryTrigger1>().message.hasName = property.GetComponentInChildren<Toggle>().isOn;
                }
            }
            else if (property == messageType)
            {
                if (objectRoot.GetComponentInChildren<StoryTrigger1>() != null)
                {
                    objectRoot.GetComponentInChildren<StoryTrigger1>().message.messageType = (Message.MessageType)property.GetComponentInChildren<TMP_Dropdown>().value;
                }
            }
        }

    }
}
