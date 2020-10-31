using System.Collections.Generic;
using System.Data;
using System.Linq;
using UnityEngine;

public class LevelSaver : MonoBehaviour
{
    private static LevelData data;

    private LevelObjectConnector levelObjectConnector;


    private void Awake()
    {
        levelObjectConnector = GetComponent<LevelObjectConnector>();
    }

    public void SaveLevel()
    {
        GetComponent<EditorUI>().CloseAllMenus();
        SetData();
        SaveJSON(GetComponent<EditorUI>().FileName);
    }


    private void SetData()
    {
        data = new LevelData();

        int maxTiles_X = LevelEditor.Instance.maxTiles.x;
        int maxTiles_Y = LevelEditor.Instance.maxTiles.y;
        int maxTiles_Z = LevelEditor.Instance.maxTiles.z;

        List<TileData> tileData_temp = new List<TileData>();

        for (int x = 0; x < maxTiles_X; x++)
        {
            for (int y = 0; y < maxTiles_Y; y++)
            {
                for (int z = 0; z < maxTiles_Z; z++)
                {
                    for (int i = 0; i < 6; i++)
                    {
                        if (LevelEditor.Instance.Tiles[x, y, z, i])
                        {
                            tileData_temp.Add(new TileData(x, y, z, i));
                        }
                    }
                }
            }
        }

        data.tileData = tileData_temp.ToArray();


        data.levelObjectData = new LevelObjectData[levelObjectConnector.Connections.Count];
        data.connectionsData = new ConnectionData[levelObjectConnector.Connections.Count];

        for (int i = 0; i < levelObjectConnector.Connections.Count; i++)
        {
            data.levelObjectData[i] = new LevelObjectData();
            GameObject levelObject = levelObjectConnector.Connections.ElementAt(i).Key;
            data.levelObjectData[i].position = levelObject.transform.position;
            data.levelObjectData[i].rotation = levelObject.transform.localEulerAngles;

            data.connectionsData[i] = new ConnectionData();
            data.connectionsData[i].channels = levelObjectConnector.Connections.ElementAt(i).Value.ToArray();
        }
    }

    private void SaveJSON(string fileName)
    {
        string levelData = JsonUtility.ToJson(data);

        string path;
        int counter = 0;


        path = Application.dataPath + $"/Scenes/Levels/LevelData/{fileName}.json";

        while (System.IO.File.Exists(path))
        {
            path = Application.dataPath + $"/Scenes/Levels/LevelData/{fileName}({counter}).json";
            ++counter;
        }

        Debug.Log($"Saving Level to: \"{path}\"");

        System.IO.File.WriteAllText(path, levelData);
    }

}
