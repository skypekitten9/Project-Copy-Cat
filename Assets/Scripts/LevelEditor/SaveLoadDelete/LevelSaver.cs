using System;
using System.Collections.Generic;
using System.Data;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelSaver : MonoBehaviour
{
    private static LevelData data;
    private static AdditionalLevelData data2;


    private LevelObjectConnector levelObjectConnector;

    public string SaveName { get; set; } = "";


    private void Awake()
    {
        levelObjectConnector = GetComponent<LevelObjectConnector>();
    }


    private void Update()
    {
        if ((Input.GetKey(KeyCode.LeftControl) || Input.GetKey(KeyCode.RightControl)) && Input.GetKeyDown(KeyCode.S))
        {
            Save();
        }
    }


    public void Save()
    {
        if (SaveName != "")
        {
            GetComponent<EditorUI>().CloseAllMenus();

            SetData();
            SaveJSON(SaveName, true);

            GetComponent<EditorUI>().ToggleDeleteLevelButton();

            StartCoroutine(GetComponent<EditorUI>().MessageBox($"Level saved!"));
        }
    }

    public void SaveAs()
    {
        GetComponent<EditorUI>().CloseAllMenus();
        SetData();

        SaveName = GetComponent<EditorUI>().FileName;
        string saveName = SaveJSON(SaveName);
    }


    private void SetData()
    {
        data = new LevelData();
        data2 = new AdditionalLevelData();

        List<TileData> tileData_temp = new List<TileData>();

        for (int x = 0; x < LevelEditor.maxTiles.x; x++)
        {
            for (int y = 0; y < LevelEditor.maxTiles.y; y++)
            {
                for (int z = 0; z < LevelEditor.maxTiles.z; z++)
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
        data2.levelObjectScale = new Vector3[levelObjectConnector.Connections.Count];
        data2.turretData = new TurretData[levelObjectConnector.Connections.Count];
        data2.storyTriggerData = new StoryTriggerData[levelObjectConnector.Connections.Count];

        LevelObject[] levelObjectResources = Resources.LoadAll<LevelObject>("Objects");

        List<int> powerCableMeshIds_temp = new List<int>();

        for (int i = 0; i < levelObjectConnector.Connections.Count; i++)
        {
            data.levelObjectData[i] = new LevelObjectData();
            GameObject levelObject = levelObjectConnector.Connections.ElementAt(i).Key;

            int levelObjectId = 0;

            for (int r = 0; r < levelObjectResources.Length; r++)
            {
                if (levelObject.GetComponentInChildren<LevelObject_Selectable>().LevelObject == levelObjectResources[r])
                {
                    levelObjectId = Int32.Parse(levelObjectResources[r].name.Split('_')[0]);
                    break;
                }
            }

            data.levelObjectData[i].levelObjectId = levelObjectId;
            data.levelObjectData[i].position = levelObject.transform.position;
            data.levelObjectData[i].rotation = levelObject.transform.localEulerAngles;

            data2.levelObjectScale[i] = levelObject.transform.localScale;


            if (levelObject.GetComponent<TurretBehavior>() != null)
            {
                TurretBehavior t = levelObject.GetComponent<TurretBehavior>();
                data2.turretData[i] = new TurretData(t);
            }
            if (levelObject.GetComponent<StoryTrigger1>() != null)
            {
                StoryTrigger1 s = levelObject.GetComponent<StoryTrigger1>();
                data2.storyTriggerData[i] = new StoryTriggerData(s);
            }

                data.connectionsData[i] = new ConnectionData();
            data.connectionsData[i].channels = levelObjectConnector.Connections.ElementAt(i).Value.ToArray();

            if (levelObject.GetComponent<PowerCable>())
            {
                powerCableMeshIds_temp.Add(levelObject.GetComponent<PowerCable>().MeshId);
            }
        }
        data.powerCableData = powerCableMeshIds_temp.ToArray();
    }

    private string SaveJSON(string fileName, bool overwrite = false)
    {
        string levelData = JsonUtility.ToJson(data);
        string levelData2 = JsonUtility.ToJson(data2);

        string path = Application.dataPath + $"/Resources/LevelData/{fileName}.json";
        string path2 = Application.dataPath + $"/Resources/LevelData/{fileName}_.json";

        if (overwrite == false)
        {
            int counter = 0;
            while (System.IO.File.Exists(path))
            {
                path2 = Application.dataPath + $"/Resources/LevelData/{fileName}({counter})_.json";
                path = Application.dataPath + $"/Resources/LevelData/{fileName}({counter}).json";
                ++counter;
            }
        }

        System.IO.File.WriteAllText(path, levelData);
        System.IO.File.WriteAllText(path2, levelData2);

        Debug.Log($"Saving Level to: \"{path}\"");

        return Path.GetFileNameWithoutExtension(path);
    }
}