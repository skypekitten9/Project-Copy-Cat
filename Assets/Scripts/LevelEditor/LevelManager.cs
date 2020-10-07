using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LevelManager : MonoBehaviour
{
    [SerializeField] private GameObject tilePrefab;
    [SerializeField] private GameObject boundingBox;

    private Transform tilesParent;

    private readonly Vector3Int maxTiles = new Vector3Int(21, 7, 21);
    Tile_Selectable[,,,] tiles;


    private void Awake()
    {
        SetBoundingBox();

        tilesParent = new GameObject("Tiles").transform;
        tiles = new Tile_Selectable[maxTiles.x, maxTiles.y, maxTiles.z, 3];

        CreateStartRoom();
    }


    private void SetBoundingBox()
    {
        boundingBox.transform.position = new Vector3(0, 0, 0);
        boundingBox.transform.localScale = maxTiles + new Vector3(0.1f, 0.1f, 0.1f);
    }

    private void CreateStartRoom()
    {
        //for (int i = 0; i < maxTiles.x; i++)
        //{
        //    for (int j = 0; j < maxTiles.y; j++)
        //    {
        //        for (int k = 0; k < maxTiles.z; k++)
        //        {

        //            PlaceTile(i, j, k, 0);
        //        }
        //    }
        //}

        for (int x = 0; x < 5; x++)
        {
            for (int z = 0; z < 4; z++)
            {
                PlaceTile(x + 9, 2, z + 11, 0);
            }
        }
    }


    private void PlaceTile(int x, int y, int z, int i)
    {
        tiles[x, y, z, i] = Instantiate(tilePrefab, IndexToWorldPos(x, y, z), IndexToRotation(i), tilesParent).GetComponent<Tile_Selectable>();
    }

    private Vector3 IndexToWorldPos(int x, int y, int z)
    {
        return new Vector3(2 * (x - maxTiles.x / 2), 2 * (y - maxTiles.y / 2), 2 * (z - maxTiles.z / 2));
    }

    private Quaternion IndexToRotation(int i)
    {
        return Quaternion.identity;
    }
}
