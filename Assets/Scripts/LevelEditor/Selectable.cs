using UnityEngine;

[RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
public abstract class Selectable : MonoBehaviour
{
    public bool isSelected { get; protected set; } = false;

    [SerializeField] private Material deselected;
    [SerializeField] private Material selected;


    public virtual void SelectOne()
    {
        Debug.Log("Selected: " + gameObject.name);
        GetComponent<MeshRenderer>().material = selected;
        isSelected = true;
    }

    public virtual void DeselectOne()
    {
        Debug.Log("Deselected: " + gameObject.name);
        GetComponent<MeshRenderer>().material = deselected;
        isSelected = false;
    }


    private void OnGUI()
    {
        if (isSelected)
        {
            DrawGUI();
        }
    }

    protected virtual void DrawGUI() { }
}

