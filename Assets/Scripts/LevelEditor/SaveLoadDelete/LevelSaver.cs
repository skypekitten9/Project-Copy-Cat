using System.Collections.Generic;
using System.Data;
using System.IO;
using System.Linq;
using UnityEngine;
using UnityEngine.SceneManagement;

public class LevelSaver : MonoBehaviour
{
    private static LevelData data;

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
            SaveToScene(SaveName);

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

        SaveToScene(saveName);
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


        LevelObject[] levelObjectResources = Resources.LoadAll<LevelObject>("Objects");


        for (int i = 0; i < levelObjectConnector.Connections.Count; i++)
        {
            data.levelObjectData[i] = new LevelObjectData();
            GameObject levelObject = levelObjectConnector.Connections.ElementAt(i).Key;

            int levelObjectId = 0;

            for (int r = 0; r < levelObjectResources.Length; r++)
            {
                if (levelObject.GetComponentInChildren<LevelObject_Selectable>().LevelObject == levelObjectResources[r])
                {
                    levelObjectId = r;
                    break;
                }
            }

            data.levelObjectData[i].levelObjectId = levelObjectId;
            data.levelObjectData[i].position = levelObject.transform.position;
            data.levelObjectData[i].rotation = levelObject.transform.localEulerAngles;

            data.connectionsData[i] = new ConnectionData();
            data.connectionsData[i].channels = levelObjectConnector.Connections.ElementAt(i).Value.ToArray();
        }
    }

    private string SaveJSON(string fileName, bool overwrite = false)
    {
        string levelData = JsonUtility.ToJson(data);

        string path = Application.dataPath + $"/Resources/LevelData/{fileName}.json";

        if (overwrite == false)
        {
            int counter = 0;
            while (System.IO.File.Exists(path))
            {
                path = Application.dataPath + $"/Resources/LevelData/{fileName}({counter}).json";
                ++counter;
            }
        }

        System.IO.File.WriteAllText(path, levelData);

        Debug.Log($"Saving Level to: \"{path}\"");

        return Path.GetFileNameWithoutExtension(path);
    }


    private void SaveToScene(string fileName)
    {
        //Scene scene = SceneManager.GetSceneByName(fileName);

        //if (scene.IsValid())
        //{
        //    Debug.Log($"Scene: {fileName} exists!");
        //}
        //else
        //{
        //    Debug.Log($"Can't find scene: {fileName}. Creating new scene");

        //    scene = SceneManager.CreateScene(fileName);
        //}

    }
}