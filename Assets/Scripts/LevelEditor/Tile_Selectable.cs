using UnityEditor;
using UnityEngine;

public class Tile_Selectable : Selectable
{
    [SerializeField] private Material deselected;
    [SerializeField] private Material selected;

    public override void ToggleSelect()
    {
        if (base.isSelected)
        {
            //Debug.Log("Deselected: " + gameObject.name);
            GetComponent<MeshRenderer>().material = deselected;
            base.isSelected = false;
        }
        else
        {
            //Debug.Log("Selected: " + gameObject.name);
            GetComponent<MeshRenderer>().material = selected;
            base.isSelected = true;
        }
    }

    protected override void DrawGUI()
    {
        Handles.color = new Color(0.678f, 0.847f, 0.902f);

        float handlesScaleFactor = 0.1f;
        Vector3 handleOffset = transform.up * 1.5f;

        Handles.ArrowHandleCap(0, transform.position + handleOffset, Quaternion.LookRotation(-transform.up, transform.right), HandleUtility.GetHandleSize(transform.position + handleOffset) * handlesScaleFactor, EventType.Repaint | EventType.MouseDown);
        Handles.ArrowHandleCap(0, transform.position - handleOffset, Quaternion.LookRotation(transform.up, transform.right), HandleUtility.GetHandleSize(transform.position - handleOffset) * handlesScaleFactor, EventType.Repaint | EventType.MouseDown);

        base.DrawGUI();
    }
}

