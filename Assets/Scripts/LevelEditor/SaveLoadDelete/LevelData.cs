using UnityEngine;

[System.Serializable]
public class LevelData
{
    public TileData[] tileData;
    public LevelObjectData[] levelObjectData;
    public ConnectionData[] connectionsData;
    public int[] powerCableData;
}

[System.Serializable]
public class AdditionalLevelData
{
    public Vector3[] levelObjectScale;
    public TurretData[] turretData;
}

[System.Serializable]
public class TurretData
{
    public TurretData(TurretBehavior t)
    {
        fireRange = t.fireRange;
        targetRange = t.targetRange;
        patrolRange = t.patrolRange;
        patrolViewAngle = t.patrolViewAngle;
        targetViewAngle = t.targetViewAngle;
        chargeTime = t.chargeTime;
        patrolSpeed = t.patrolSpeed;
        targetSpeed = t.targetSpeed;
    }
    public float fireRange, targetRange, patrolRange, patrolViewAngle, targetViewAngle, chargeTime, patrolSpeed, targetSpeed;
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
    //public Vector3 scale;
}

[System.Serializable]
public class ConnectionData
{
    public int[] channels;
}