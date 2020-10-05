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
}

