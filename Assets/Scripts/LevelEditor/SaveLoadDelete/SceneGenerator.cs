using UnityEngine;
using UnityEditor;
using System.IO;

using UnityEngine.SceneManagement;
using System;
using System.Collections.Generic;
using System.Linq;

#if UNITY_EDITOR
using UnityEditor.SceneManagement;
#endif

public class SceneGenerator : MonoBehaviour
{
    [SerializeField] private GameObject masterPrefabs;
    [SerializeField] private LightingSettings lightingSettings;
    [SerializeField] private GameObject sceneTile;
    [SerializeField] private GameObject playerPrefab;


    private Transform tilesParent;



    public void Generate(FileInfo levelDataFile)
    {
#if UNITY_EDITOR
        DirectoryInfo levelsDir = new System.IO.DirectoryInfo(Application.dataPath + $"/Resources/LevelData");
        DirectoryInfo scenesDir = new System.IO.DirectoryInfo(Application.dataPath + $"/Scenes/Levels");

        string json = File.ReadAllText(levelDataFile.FullName);

        string fileName2 = levelDataFile.FullName.Substring(0, levelDataFile.FullName.Length - 5) + "_.json";
        string json2 = File.Exists(fileName2) ? File.ReadAllText(fileName2) : "";

        LevelData data = JsonUtility.FromJson<LevelData>(json);
        AdditionalLevelData data2 = json2 == "" ? null : JsonUtility.FromJson<AdditionalLevelData>(json2);

        #region Create Scene

        Scene scene = EditorSceneManager.NewScene(NewSceneSetup.EmptyScene, NewSceneMode.Single);
        scene.name = $"{Path.GetFileNameWithoutExtension(levelDataFile.FullName)}";
        #endregion

        PopulateScene(data, data2);

        Optimize();

        ApplyLightSettings();

        #region Save & Exit Scene
        Debug.Log($"Level saved to scene: {scene.name}");
        EditorSceneManager.SaveScene(scene, $"{scenesDir.FullName}/{scene.name}.unity");
        EditorSceneManager.OpenScene(Application.dataPath + $"/Scenes/LevelEditor/LevelEditor.unity");
        #endregion
#endif
    }


    private void PopulateScene(LevelData data, AdditionalLevelData data2)
    {
        Instantiate(masterPrefabs);

        Transform levelObjectsParent = new GameObject("LevelObjects").transform;
        List<GameObject> levelObjects = new List<GameObject>();
        int cableCounter = 0;

        for (int i = 0; i < data.levelObjectData.Length; i++)
        {

            GameObject instance = Instantiate(LevelLoader.IdToObject(data.levelObjectData[i].levelObjectId).Prefab, data.levelObjectData[i].position, Quaternion.Euler(data.levelObjectData[i].rotation), levelObjectsParent);

            if (data2 != null)
            {
                instance.transform.localScale = data2.levelObjectScale[i];

                if (instance.GetComponent<TurretBehavior>() != null)
                {
                    TurretBehavior t = instance.GetComponent<TurretBehavior>();
                    t.fireRange = data2.turretData[i].fireRange;
                    t.targetRange = data2.turretData[i].targetRange;
                    t.patrolRange = data2.turretData[i].patrolRange;
                    t.patrolViewAngle = data2.turretData[i].patrolViewAngle;
                    t.targetViewAngle = data2.turretData[i].targetViewAngle;
                    t.chargeTime = data2.turretData[i].chargeTime;
                    t.patrolSpeed = data2.turretData[i].patrolSpeed;
                    t.targetSpeed = data2.turretData[i].targetSpeed;
                }
            }

            levelObjects.Add(instance);

            if (instance.GetComponent<PowerCable>())
            {
                instance.GetComponent<PowerCable>().SetCableMesh(data.powerCableData[cableCounter++]);
            }
        }

        tilesParent = new GameObject("Tiles", typeof(MeshFilter), typeof(MeshRenderer), typeof(MeshCombiner)).transform;
        tilesParent.gameObject.isStatic = true;
        foreach (var td in data.tileData)
        {
            Instantiate(sceneTile, LevelEditor.IndexToWorldPos(td.x, td.y, td.z, (TileDirection)td.i), LevelEditor.IndexToRotation((TileDirection)td.i), tilesParent);
        }

        Instantiate(playerPrefab, levelObjectsParent.GetChild(0).GetChild(0).position + new Vector3(0, 0.6f, 0), levelObjectsParent.GetChild(0).rotation);


        List<int> pressButtonIds = new List<int>();
        for (int i = 0; i < data.connectionsData.Length; i++)
        {
            if (data.connectionsData[i].channels.Length > 0)
            {
                if (levelObjects[i].GetComponent<ButtonScript>())
                {
                    levelObjects[i].GetComponent<ButtonScript>().Id = data.connectionsData[i].channels[0];
                    pressButtonIds.Add(data.connectionsData[i].channels[0]);
                }
                else if (levelObjects[i].GetComponent<StandButton>())
                    levelObjects[i].GetComponent<StandButton>().Id = data.connectionsData[i].channels[0];
                else if (levelObjects[i].GetComponent<LeverScript>())
                    levelObjects[i].GetComponent<LeverScript>().Id = data.connectionsData[i].channels[0];
                else if (levelObjects[i].GetComponent<DoorScript>())
                    levelObjects[i].GetComponent<DoorScript>().Ids = data.connectionsData[i].channels;
            }
        }
        for (int i = 0; i < data.connectionsData.Length; i++)
        {
            DoorScript door = levelObjects[i].GetComponent<DoorScript>();
            if (door)
            {
                for (int j = 0; j < pressButtonIds.Count; j++)
                {
                    if (levelObjects[i].GetComponent<DoorScript>().Ids.Contains(pressButtonIds[j]))
                    {
                        door.toggle = true;
                    }
                }
            }
        }
    }


    private void Optimize()
    {
        //tilesParent.GetComponent<MeshCombiner>().CombineMeshes();
    }

    private void ApplyLightSettings()
    {
#if UNITY_EDITOR
        Lightmapping.lightingSettings = lightingSettings;
        RenderSettings.subtractiveShadowColor = new Color(100, 100, 100);
        RenderSettings.skybox = null;
        RenderSettings.ambientMode = UnityEngine.Rendering.AmbientMode.Flat;
        RenderSettings.ambientLight = Color.black;
#endif
    }
}
