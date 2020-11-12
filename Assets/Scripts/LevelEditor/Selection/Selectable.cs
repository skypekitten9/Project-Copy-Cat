using UnityEngine;


public abstract class Selectable : MonoBehaviour
{
    public bool isSelected { get; protected set; } = false;


    public virtual void Select(bool multiple = false)
    {
        //Debug.Log("Selected: " + gameObject.name);
        isSelected = true;
    }

    public virtual void Deselect()
    {
        //Debug.Log("Deselected: " + gameObject.name);
        isSelected = false;
    }

}

