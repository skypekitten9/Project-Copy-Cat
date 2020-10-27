using UnityEngine;

public class LevelSaver : MonoBehaviour
{
    private static LevelData data;


    public void SaveLevel()
    {
        SetData();
        SaveJSON();
    }


    private void SetData()
    {
        data = new LevelData();

        int maxTiles_X = LevelEditor.Instance.maxTiles.x;
        int maxTiles_Y = LevelEditor.Instance.maxTiles.y;
        int maxTiles_Z = LevelEditor.Instance.maxTiles.z;

        data.tileData = new TileData[maxTiles_X * maxTiles_Y * maxTiles_Z];

        for (int x = 0; x < maxTiles_X; x++)
        {
            for (int y = 0; y < maxTiles_Y; y++)
            {
                for (int z = 0; z < maxTiles_Z; z++)
                {
                    data.tileData[LevelDataHelper.To1D(x, y, z)] = new TileData();

                    for (int i = 0; i < 6; i++)
                    {
                        data.tileData[LevelDataHelper.To1D(x, y, z)].tiles[i] = LevelEditor.Instance.Tiles[x, y, z, i] ? 1 : 0;
                    }
                }
            }
        }
    }
    private void SaveJSON()
    {
        Debug.Log("Saving Level");

        string levelData = JsonUtility.ToJson(data);
        System.IO.File.WriteAllText(Application.dataPath + "/LevelData_0.json", levelData);
    }

}
