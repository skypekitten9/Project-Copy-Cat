using UnityEngine;

[CreateAssetMenu(fileName = "Level", menuName = "ScriptableObjects/Level")]
public class Level : ScriptableObject
{
    //public new string name;

    public Vector3 startPosition;
    public Vector3 goalPosition;

    public int nextLevelIndex = -1;
}
