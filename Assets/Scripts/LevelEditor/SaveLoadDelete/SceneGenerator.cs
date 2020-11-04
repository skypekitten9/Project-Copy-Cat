using UnityEngine;
using UnityEditor;
using System.IO;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;
using System;
using System.Collections.Generic;

public class SceneGenerator : MonoBehaviour
{
    [SerializeField] private GameObject masterPrefabs;
    [SerializeField] private LightingSettings lightingSettings;
    [SerializeField] private GameObject sceneTile;
    [SerializeField] private GameObject playerPrefab;

    public void Generate(FileInfo levelDataFile)
    {
        DirectoryInfo levelsDir = new System.IO.DirectoryInfo(Application.dataPath + $"/Resources/LevelData");
        DirectoryInfo scenesDir = new System.IO.DirectoryInfo(Application.dataPath + $"/Scenes/Levels");

        string jsonData = File.ReadAllText(levelDataFile.FullName);
        LevelData data = JsonUtility.FromJson<LevelData>(jsonData);

        #region Create Scene
        Scene scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);
        scene.name = $"{Path.GetFileNameWithoutExtension(levelDataFile.FullName)}";
        #endregion

        PopulateScene(data);
        ApplyLightSettings();

        #region Save & Exit Scene
        Debug.Log($"Level saved to scene: {scene.name}");
        EditorSceneManager.SaveScene(scene, $"{scenesDir.FullName}/{scene.name}.unity");
        EditorSceneManager.OpenScene(Application.dataPath + $"/Scenes/LevelEditor/LevelEditor.unity");
        #endregion
    }


    private void PopulateScene(LevelData data)
    {
        Instantiate(masterPrefabs);

        Transform levelObjectsParent = new GameObject("LevelObjects").transform;
        List<GameObject> levelObjects = new List<GameObject>();
        foreach (var lod in data.levelObjectData)
        {
            levelObjects.Add(Instantiate(LevelLoader.IdToObject(lod.levelObjectId).Prefab, lod.position, Quaternion.Euler(lod.rotation), levelObjectsParent));
        }

        Transform tilesParent = new GameObject("Tiles").transform;
        foreach (var td in data.tileData)
        {
            Instantiate(sceneTile, LevelEditor.IndexToWorldPos(td.x, td.y, td.z, (TileDirection)td.i), LevelEditor.IndexToRotation((TileDirection)td.i), tilesParent);
        }

        Instantiate(playerPrefab, levelObjectsParent.GetChild(0).GetChild(0).position + new Vector3(0, 0.6f, 0), levelObjectsParent.GetChild(0).rotation);

        for (int i = 0; i < data.connectionsData.Length; i++)
        {
            if (data.connectionsData[i].channels.Length > 0)
            {
                if (levelObjects[i].GetComponent<ButtonScript>())
                    levelObjects[i].GetComponent<ButtonScript>().Id = data.connectionsData[i].channels[0];
                else if (levelObjects[i].GetComponent<StandButton>())
                    levelObjects[i].GetComponent<StandButton>().Id = data.connectionsData[i].channels[0];
                else if (levelObjects[i].GetComponent<LeverScript>())
                    levelObjects[i].GetComponent<LeverScript>().Id = data.connectionsData[i].channels[0];
                else if (levelObjects[i].GetComponent<DoorScript>())
                    levelObjects[i].GetComponent<DoorScript>().Ids = data.connectionsData[i].channels;
            }
        }
    }


    private void ApplyLightSettings()
    {
        Lightmapping.lightingSettings = lightingSettings;
    }
}
