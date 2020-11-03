using System.IO;
using UnityEditor;
using UnityEngine;


[CustomEditor(typeof(SceneGenerator))]
public class SceneGenerator_Editor : Editor
{
    public override void OnInspectorGUI()
    {
        base.OnInspectorGUI();


        GUILayout.BeginHorizontal();
        {
            SceneGenerator sceneGenerator = (SceneGenerator)target;

            if (GUILayout.Button("Generate Scenes"))
                sceneGenerator.Generate();
        }
        GUILayout.EndHorizontal();
    }
}