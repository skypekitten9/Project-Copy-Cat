using System.Collections.Generic;
using System.Linq;
using UnityEngine;

public class LevelLoader : MonoBehaviour
{
    public void LoadToEditor(string jsonData, string levelName)
    {
        GetComponent<LevelSaver>().SaveName = levelName;

        Debug.Log($"Loaded: {levelName}.json");

        LevelData data = JsonUtility.FromJson<LevelData>(jsonData);

        if (LevelEditor.Instance.TilesParent)
            Destroy(LevelEditor.Instance.TilesParent.gameObject);
        LevelEditor.Instance.TilesParent = new GameObject("Tiles").transform;

        foreach (var tile in data.tileData)
        {
            LevelEditor.Instance.PlaceTile(tile.x, tile.y, tile.z, (TileDirection)tile.i);
        }

        GetComponent<LevelObjectConnector>().Connections = new Dictionary<GameObject, List<int>>();

        if (GetComponent<LevelObjectManager>().LevelObjectsParent)
            Destroy(GetComponent<LevelObjectManager>().LevelObjectsParent.gameObject);
        Transform parent = GetComponent<LevelObjectManager>().LevelObjectsParent = new GameObject("LevelObjects").transform;

        for (int i = 0; i < data.levelObjectData.Length; i++)
        {
            GameObject instance = Instantiate(data.levelObjectData[i].prefab, data.levelObjectData[i].position, Quaternion.Euler(data.levelObjectData[i].rotation), parent);
            instance.GetComponentInChildren<LevelObject_Selectable>().LevelObject = data.levelObjectData[i].properties;

            GetComponent<LevelObjectConnector>().Connections.Add(instance, data.connectionsData[i].channels.ToList());
        }

        GetComponent<EditorUI>().ToggleDeleteLevelButton();
    }
}
