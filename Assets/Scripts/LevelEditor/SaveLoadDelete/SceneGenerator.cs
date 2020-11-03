using UnityEngine;
using UnityEditor;
using System.IO;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;

public class SceneGenerator : MonoBehaviour
{
    [SerializeField] private GameObject masterPrefabs;

    public void Generate(FileInfo levelData)
    {
        DirectoryInfo levelsDir = new System.IO.DirectoryInfo(Application.dataPath + $"/Resources/LevelData");
        DirectoryInfo scenesDir = new System.IO.DirectoryInfo(Application.dataPath + $"/Scenes/Levels");


        Scene scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);
        scene.name = $"{Path.GetFileNameWithoutExtension(levelData.FullName)}";

        Instantiate(masterPrefabs);


        Debug.Log($"Level saved to scene: {scene.name}");
        EditorSceneManager.SaveScene(scene, $"{scenesDir.FullName}/{scene.name}.unity");
        EditorSceneManager.OpenScene(Application.dataPath + $"/Scenes/LevelEditor/LevelEditor.unity");



    }
}
