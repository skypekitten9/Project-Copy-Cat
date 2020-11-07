using System;
using System.IO;
using System.Linq;
using UnityEditor;
using UnityEngine;


[CustomEditor(typeof(SceneGenerator))]
public class SceneGenerator_Editor : Editor
{

    int selected = -1;


    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();

        SceneGenerator sceneGenerator = (SceneGenerator)target;


        FileInfo[] levelData = new System.IO.DirectoryInfo(Application.dataPath + $"/Resources/LevelData").GetFiles("*.json");


        string[] options = levelData.Select(x => Path.GetFileNameWithoutExtension(x.FullName)).ToArray();

        selected = EditorGUILayout.Popup("Level", selected, options);

        if (GUILayout.Button("Generate Scene") && selected != -1)
            sceneGenerator.Generate(levelData[selected]);

    }
}