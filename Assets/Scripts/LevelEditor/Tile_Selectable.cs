using UnityEngine;

public class Tile_Selectable : Selectable
{

    public override void SelectOne()
    {
        base.SelectOne();

        LevelEditor.Instance.GetComponent<Selector>().DeselectAllTiles(this);
        LevelEditor.Instance.selectedTiles.Add(this);
    }

    public override void DeselectOne()
    {
        base.DeselectOne();
    }

}
