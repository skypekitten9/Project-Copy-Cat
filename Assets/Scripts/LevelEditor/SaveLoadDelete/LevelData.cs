using UnityEngine;

[System.Serializable]
public class LevelData
{
    public TileData[] tileData;
    public LevelObjectData[] levelObjectData;
    public ConnectionData[] connectionsData;
}


[System.Serializable]
public class TileData
{
    public TileData(int x, int y, int z, int i)
    {
        this.x = x;
        this.y = y;
        this.z = z;
        this.i = i;
    }
    public int x;
    public int y;
    public int z;
    public int i;
}

[System.Serializable]
public class LevelObjectData
{
    public int levelObjectId;
    public Vector3 position;
    public Vector3 rotation;
}

[System.Serializable]
public class ConnectionData
{
    public int[] channels;
}