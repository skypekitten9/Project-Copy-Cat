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


    public void ExtrudeTile(int extrudeDir)
    {
        Vector3Int tileDir = GetDirectionVector();
        Vector3Int extrudeTangent = tileDir * extrudeDir;
        Vector3Int newTileIndex = new Vector3Int(X, Y, Z) + extrudeTangent;

        Vector3Int maxTiles = LevelEditor.Instance.maxTiles;
        if (newTileIndex.x >= maxTiles.x || newTileIndex.y >= maxTiles.y || newTileIndex.z >= maxTiles.z || newTileIndex.x < 0 || newTileIndex.y < 0 || newTileIndex.z < 0)
            return;

        LevelEditor.Instance.PlaceTile(newTileIndex, TileDir).Select(true);


        //CreateConnection();

        CreateConnection(new Vector3Int(tileDir.z, tileDir.x, tileDir.y), extrudeDir, extrudeTangent);
        CreateConnection(new Vector3Int(-tileDir.z, -tileDir.x, -tileDir.y), extrudeDir, extrudeTangent);
        CreateConnection(new Vector3Int(tileDir.y, tileDir.z, tileDir.x), extrudeDir, extrudeTangent);
        CreateConnection(new Vector3Int(-tileDir.y, -tileDir.z, -tileDir.x), extrudeDir, extrudeTangent);

        Deselect();
        LevelEditor.Instance.Tiles[X, Y, Z, (int)TileDir] = null;
        Destroy(this.gameObject);

    }

    private void CreateConnection(Vector3Int tileIndexOffset, int extrudeDir, Vector3Int extrudeTangent)
    {
        Vector3Int newTileIndex;

        if (extrudeDir > 0)
            newTileIndex = new Vector3Int(X, Y, Z) + tileIndexOffset;
        else
        {
            newTileIndex = new Vector3Int(X, Y, Z) + extrudeTangent;
            tileIndexOffset *= -1;
        }

        LevelEditor.Instance.PlaceTile(newTileIndex, NormalToTileDirection(tileIndexOffset));


        ////Vector3Int maxTiles = LevelEditor.Instance.maxTiles;
        ////if (newTileIndex.x >= maxTiles.x || newTileIndex.y >= maxTiles.y || newTileIndex.z >= maxTiles.z || newTileIndex.x < 0 || newTileIndex.y < 0 || newTileIndex.z < 0)
        ////    return;

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
    private TileDirection NormalToTileDirection(Vector3Int normal)
    {
        if (normal.x == 1)
            return TileDirection.X_positive;
        else if (normal.x == -1)
            return TileDirection.X_negative;
        else if (normal.y == 1)
            return TileDirection.Y_positive;
        else if (normal.y == -1)
            return TileDirection.Y_negative;
        else if (normal.z == 1)
            return TileDirection.Z_positive;
        else
            return TileDirection.Z_negative;
    }
}
