using UnityEngine;

[RequireComponent(typeof(MeshFilter), typeof(MeshRenderer))]
public abstract class Selectable : MonoBehaviour
{
    public bool isSelected { get; protected set; } = false;

    public abstract void ToggleSelect();

    private void OnGUI()
    {
        if (isSelected)
        {
            DrawGUI();
        }
    }

    protected virtual void DrawGUI() { }
}

