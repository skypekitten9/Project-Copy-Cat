using System;
using System.Collections.Generic;
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


        DirectoryInfo dir = new System.IO.DirectoryInfo(Application.dataPath + $"/Resources/LevelData");
        List<FileInfo> levelData = new List<FileInfo>(dir.GetFiles("*.json"));
        for (int i = 0; i < levelData.Count; i++)
        {
            if (levelData[i].Name[levelData[i].Name.Length - 6] == '_')
            {
                levelData.RemoveAt(i);
            }
        }

        string[] options = levelData.Select(l => l.Name).ToArray();

        selected = EditorGUILayout.Popup("Level", selected, options);

        if (GUILayout.Button("Generate Scene") && selected != -1)
            sceneGenerator.Generate(levelData[selected]);

    }
}