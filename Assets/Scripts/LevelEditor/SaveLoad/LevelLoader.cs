using System.IO;
using UnityEngine;

public class LevelLoader : MonoBehaviour
{
    public void LoadToEditor(string jsonData)
    {
        LevelData data = JsonUtility.FromJson<LevelData>(jsonData);

        Debug.Log(data.levelObjectData[0].position);
        Debug.Log(data.levelObjectData[0].rotation);
    }
}
