using UnityEditor.Experimental.GraphView;
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
            LevelEditor.Instance.GetComponent<Selector>().DeselectAllTiles();
        LevelEditor.Instance.selectedTiles.Add(this);
    }

    public override void Deselect()
    {
        base.Deselect();

        LevelEditor.Instance.selectedTiles.Remove(this);
    }


    public void ExtrudeTile(int direction)
    {
        Vector3Int extrudeDir = GetDirectionVector() * direction;
        Vector3Int newTileIndex = new Vector3Int(X, Y, Z) + extrudeDir;

        Vector3Int maxTiles = LevelEditor.Instance.maxTiles;
        if (newTileIndex.x >= maxTiles.x || newTileIndex.y >= maxTiles.y || newTileIndex.z >= maxTiles.z || newTileIndex.x < 0 || newTileIndex.y < 0 || newTileIndex.z < 0)
        {
            return;
        }

        LevelEditor.Instance.PlaceTile(newTileIndex, TileDir).Select(true);

        Deselect();
        LevelEditor.Instance.Tiles[X, Y, Z, (int)TileDir] = null;
        Destroy(this.gameObject);

    }

    private Vector3Int GetDirectionVector()
    {
        switch (TileDir)
        {
            case TileDirection.X_positive:
                return new Vector3Int(1, 0, 0);
            case TileDirection.X_negative:
                return new Vector3Int(-1, 0, 0);
            case TileDirection.Y_positive:
                return new Vector3Int(0, 1, 0);
            case TileDirection.Y_negative:
                return new Vector3Int(0, -1, 0);
            case TileDirection.Z_positive:
                return new Vector3Int(0, 0, 1);
            case TileDirection.Z_negative:
                return new Vector3Int(0, 0, -1);

            default:
                return Vector3Int.zero;
        }
    }
}
