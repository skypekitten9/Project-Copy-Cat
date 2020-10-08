using UnityEngine;

public class Tile_Selectable : Selectable
{
    public int X { get; private set; }
    public int Y { get; private set; }
    public int Z { get; private set; }
    public TileDirection TileDir { get; private set; }


    public void SetTileData(int x, int y, int z, TileDirection tileDir)
    {
        this.X = x;
        this.Y = y;
        this.Z = z;
        this.TileDir = tileDir;
    }

    public override void Select(bool multiple = false)
    {
        base.Select();

        if (!multiple)
            LevelEditor.Instance.GetComponent<Selector>().DeselectAllTiles(this);
        LevelEditor.Instance.selectedTiles.Add(this);
    }

    public override void Deselect()
    {
        base.Deselect();
    }

}
