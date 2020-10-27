using UnityEngine;

[CreateAssetMenu(fileName = "LevelObject", menuName = "ScriptableObjects/LevelObject")]
public class LevelObject : ScriptableObject
{
    [SerializeField] private Sprite icon;
    [SerializeField] private GameObject prefab;

    [SerializeField] private bool canPlaceOnGround = true;
    [SerializeField] private bool canPlaceOnCeiling = false;
    [SerializeField] private bool canPlaceOnWall = false;
    [SerializeField] private bool canBeRotated = true;



    public Sprite Icon { get { return icon; } }
    public GameObject Prefab { get { return prefab; } }


    public bool CanPlaceOnGround { get { return canPlaceOnGround; } }
    public bool CanPlaceOnCeiling { get { return canPlaceOnCeiling; } }
    public bool CanPlaceOnWall { get { return canPlaceOnWall; } }
    public bool CanBeRotated { get { return canBeRotated; } }

}
