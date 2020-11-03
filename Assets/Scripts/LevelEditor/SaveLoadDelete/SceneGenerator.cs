using UnityEngine;
using UnityEditor;
using System.IO;
using UnityEditor.SceneManagement;
using UnityEngine.SceneManagement;

public class SceneGenerator : MonoBehaviour
{
    public void Generate()
    {
        DirectoryInfo levelsDir = new System.IO.DirectoryInfo(Application.dataPath + $"/Resources/LevelData");
        DirectoryInfo scenesDir = new System.IO.DirectoryInfo(Application.dataPath + $"/Scenes/Levels");
        string masterSceneDir = Application.dataPath + $"/Scenes/MasterScene.unity";

        FileInfo[] levelData = levelsDir.GetFiles("*.json");


        foreach (FileInfo level in levelData)
        {
            Scene scene = EditorSceneManager.GetSceneByName(level.Name);

            if (scene.IsValid() == false)
            {
                scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);
                scene.name = $"{Path.GetFileNameWithoutExtension(level.FullName)}";
            }

            GameObject.CreatePrimitive(PrimitiveType.Cube);

            EditorSceneManager.SaveScene(scene, $"{scenesDir.FullName}/{scene.name}.unity");
        }

        //EditorSceneManager.OpenScenec);
    }
}
