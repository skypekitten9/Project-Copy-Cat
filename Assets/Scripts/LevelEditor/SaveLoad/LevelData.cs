﻿
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
    public TileData()
    {
        tiles = new int[6];
    }

    public int[] tiles;
}

[System.Serializable]
public class LevelObjectData
{
    public LevelObjectData()
    {
        position = new float[3];
        rotation = new float[3];
    }

    public float[] position;
    public float[] rotation;
}

[System.Serializable]
public class ConnectionData
{
    int[] channels;
}

public static class LevelDataHelper
{
    public static int To1D(int x, int y, int z)
    {
        Vector3Int maxTiles = LevelEditor.Instance.maxTiles;
        return (z * maxTiles.x * maxTiles.y) + (y * maxTiles.x) + x;
    }

    public static int[] To3D(int i)
    {
        Vector3Int maxTiles = LevelEditor.Instance.maxTiles;

        int z = i / (maxTiles.x * maxTiles.y);
        i -= (z * maxTiles.x * maxTiles.y);
        int y = i / maxTiles.x;
        int x = i % maxTiles.x;
        return new int[] { x, y, z };
    }
}