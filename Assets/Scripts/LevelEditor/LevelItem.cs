using System.Collections;
using System.Collections.Generic;
using UnityEngine;

[CreateAssetMenu(fileName = "LevelItem", menuName = "ScriptableObjects/LevelItem")]
public class LevelItem : ScriptableObject
{
    [SerializeField] private Sprite icon;
    [SerializeField] private GameObject prefab;


}
