using System;
using System.Linq;
using UnityEngine;

public class LevelLoader : MonoBehaviour
{

    public void LoadToEditor(string jsonData, string levelName)
    {
        GetComponent<LevelSaver>().SaveName = levelName;

        Debug.Log($"Loaded: {levelName}.json");
        StartCoroutine(GetComponent<EditorUI>().MessageBox($"Loaded level: {levelName}"));

        LevelData data = JsonUtility.FromJson<LevelData>(jsonData);

        if (LevelEditor.Instance.TilesParent)
            Destroy(LevelEditor.Instance.TilesParent.gameObject);
        LevelEditor.Instance.TilesParent = new GameObject("Tiles").transform;

        foreach (var tile in data.tileData)
        {
            LevelEditor.Instance.PlaceTile(tile.x, tile.y, tile.z, (TileDirection)tile.i);
        }

        GetComponent<LevelObjectConnector>().ResetConnections();

        if (GetComponent<LevelObjectManager>().LevelObjectsParent)
            Destroy(GetComponent<LevelObjectManager>().LevelObjectsParent.gameObject);
        Transform parent = GetComponent<LevelObjectManager>().LevelObjectsParent = new GameObject("LevelObjects").transform;


        for (int i = 0; i < data.levelObjectData.Length; i++)
        {
            LevelObject levelObject = IdToObject(data.levelObjectData[i].levelObjectId);

            GameObject instance = Instantiate(levelObject.Prefab, data.levelObjectData[i].position, Quaternion.Euler(data.levelObjectData[i].rotation), parent);
            instance.GetComponentInChildren<LevelObject_Selectable>().LevelObject = levelObject;

            GetComponent<LevelObjectConnector>().Connections.Add(instance, data.connectionsData[i].channels.ToList());
        }

        GetComponent<LevelObjectConnector>().SetLineRenderers();
        GetComponent<EditorUI>().ToggleDeleteLevelButton();
    }


    public static LevelObject IdToObject(int id)
    {
        LevelObject[] levelObjectResources = Resources.LoadAll<LevelObject>("Objects");

        foreach (LevelObject lo in levelObjectResources)
        {
            if (id == Int32.Parse(lo.name.Split('_')[0]))
            {
                return lo;
            }
        }

        Debug.LogError($"Function \"IdToObject\" fail. No object matches id: {id}");
        return null;
    }
}
