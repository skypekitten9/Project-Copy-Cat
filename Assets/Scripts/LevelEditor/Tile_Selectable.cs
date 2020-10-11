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


        if (extrudeDir > 0)
        {
            //Debug.Log(">0");
            if (TileExists(X, Y, Z, NormalToTileDirection(-extrudeTangent)) == true ||
                TileExists(newTileIndex, NormalToTileDirection(extrudeTangent)) == true)
            {
                LevelEditor.Instance.DestroyTile(X, Y, Z, NormalToTileDirection(-extrudeTangent));
                LevelEditor.Instance.DestroyTile(newTileIndex, NormalToTileDirection(extrudeTangent));
            }
            else
            {
                LevelEditor.Instance.PlaceTile(newTileIndex, TileDir).Select(true);
            }
        }
        else
        {
            //Debug.Log("<0");
            if (TileExists(new Vector3Int(X, Y, Z) - extrudeTangent, NormalToTileDirection(-extrudeTangent)) == true ||
                TileExists(newTileIndex + extrudeTangent, NormalToTileDirection(extrudeTangent)) == true)
            {
                LevelEditor.Instance.DestroyTile(new Vector3Int(X, Y, Z) - extrudeTangent, NormalToTileDirection(-extrudeTangent));
                LevelEditor.Instance.DestroyTile(newTileIndex + extrudeTangent, NormalToTileDirection(extrudeTangent));
            }
            else
            {
                LevelEditor.Instance.PlaceTile(newTileIndex, TileDir).Select(true);
            }

        }

        CreateConnection(new Vector3Int(tileDir.z, tileDir.x, tileDir.y), extrudeDir, extrudeTangent);
        CreateConnection(new Vector3Int(-tileDir.z, -tileDir.x, -tileDir.y), extrudeDir, extrudeTangent);
        CreateConnection(new Vector3Int(tileDir.y, tileDir.z, tileDir.x), extrudeDir, extrudeTangent);
        CreateConnection(new Vector3Int(-tileDir.y, -tileDir.z, -tileDir.x), extrudeDir, extrudeTangent);

        LevelEditor.Instance.DestroyTile(X, Y, Z, TileDir);
    }

    private void CreateConnection(Vector3Int tileIndexOffset, int extrudeDir, Vector3Int extrudeTangent)
    {
        Vector3Int newTileIndex;

        if (extrudeDir > 0)
        {
            newTileIndex = new Vector3Int(X, Y, Z);

            if (TileExists(newTileIndex, NormalToTileDirection(tileIndexOffset)) == true)
            {
                LevelEditor.Instance.DestroyTile(newTileIndex, NormalToTileDirection(tileIndexOffset));
            }
            else
            {
                LevelEditor.Instance.PlaceTile(newTileIndex - tileIndexOffset, NormalToTileDirection(-tileIndexOffset));
            }
        }
        else
        {
            newTileIndex = new Vector3Int(X, Y, Z) + extrudeTangent;
            tileIndexOffset *= -1;


            if (TileExists(newTileIndex - tileIndexOffset, NormalToTileDirection(-tileIndexOffset)) == true)
            {
                LevelEditor.Instance.DestroyTile(newTileIndex - tileIndexOffset, NormalToTileDirection(-tileIndexOffset));
            }
            else
            {
                LevelEditor.Instance.PlaceTile(newTileIndex, NormalToTileDirection(tileIndexOffset));
            }

        }

    }

    public Vector3Int GetDirectionVector()
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


    private bool TileExists(int x, int y, int z, TileDirection tileDir)
    {
        return LevelEditor.Instance.Tiles[x, y, z, (int)tileDir] != null;
    }
    private bool TileExists(Vector3Int positionIndex, TileDirection tileDir)
    {
        try
        {
            return LevelEditor.Instance.Tiles[positionIndex.x, positionIndex.y, positionIndex.z, (int)tileDir] != null;
        }
        catch (System.Exception)
        {
            return false;
        }
    }




    private void OnDrawGizmos()
    {
        if (LevelEditor.Instance.Debug)
        {
            Vector3 pos = LevelEditor.Instance.IndexToWorldPos(X, Y, Z, TileDir);
            Gizmos.DrawLine(pos, pos + (Vector3)GetDirectionVector() / 2);
        }
    }
}