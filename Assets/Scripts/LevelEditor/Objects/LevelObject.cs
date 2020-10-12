using UnityEngine;

[CreateAssetMenu(fileName = "LevelObject", menuName = "ScriptableObjects/LevelObject")]
public class LevelObject : ScriptableObject
{
    [SerializeField] private Sprite icon;
    [SerializeField] private GameObject prefab;

    [SerializeField] private bool canPlaceOnGround = true;
    [SerializeField] private bool canPlaceOnWall = false;

    [SerializeField] private bool canBeRotated = true;
}
