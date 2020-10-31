using System.IO;
using UnityEngine;

public class LevelLoader : MonoBehaviour
{
    public void LoadToEditor(string jsonData, string levelName)
    {
        GetComponent<LevelSaver>().SaveName = levelName;

        Debug.Log($"Loaded: {levelName}.json");

        LevelData data = JsonUtility.FromJson<LevelData>(jsonData);

        Destroy(LevelEditor.Instance.TilesParent.gameObject);
        LevelEditor.Instance.TilesParent = new GameObject("Tiles").transform;

        foreach (var tile in data.tileData)
        {
            LevelEditor.Instance.PlaceTile(tile.x, tile.y, tile.z, (TileDirection)tile.i);
        }
    }
}
