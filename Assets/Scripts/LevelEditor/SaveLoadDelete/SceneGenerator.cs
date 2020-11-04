using UnityEngine;
using UnityEditor;
using System.IO;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;
using System;

public class SceneGenerator : MonoBehaviour
{
    [SerializeField] private GameObject masterPrefabs;
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
        foreach (var lod in data.levelObjectData)
        {
            Instantiate(LevelLoader.IdToObject(lod.levelObjectId).Prefab, lod.position, Quaternion.Euler(lod.rotation), levelObjectsParent);
        }

        Transform tilesParent = new GameObject("Tiles").transform;
        foreach (var td in data.tileData)
        {
            Instantiate(sceneTile, LevelEditor.IndexToWorldPos(td.x, td.y, td.z, (TileDirection)td.i), LevelEditor.IndexToRotation((TileDirection)td.i), tilesParent);
        }

        Instantiate(playerPrefab, levelObjectsParent.GetChild(0).GetChild(0).position + new Vector3(0, 0.6f, 0), levelObjectsParent.GetChild(0).rotation);
    }
}
