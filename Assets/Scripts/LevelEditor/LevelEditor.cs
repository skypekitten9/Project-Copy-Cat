﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;


enum TileDirection { X_positive, X_negative, Y_positive, Y_negative, Z_positive, Z_negative };

public class LevelEditor : MonoBehaviour
{
    private static LevelEditor instance = null;
    public static LevelEditor Instance { get { return instance; } }


    [SerializeField] private GameObject tilePrefab;
    [SerializeField] private GameObject boundingBox;

    private Transform tilesParent;

    private readonly Vector3Int maxTiles = new Vector3Int(21, 7, 21);
    Tile_Selectable[,,,] tiles;


    public List<Tile_Selectable> selectedTiles { get; set; } = new List<Tile_Selectable>();
    


    private void Awake()
    {
        if (instance != null && instance != this)
            Destroy(this.gameObject);
        else
            instance = this;


        SetBoundingBox();

        tilesParent = new GameObject("Tiles").transform;
        tiles = new Tile_Selectable[maxTiles.x, maxTiles.y, maxTiles.z, 6];

        CreateStartRoom();
    }


    private void SetBoundingBox()
    {
        boundingBox.transform.position = new Vector3(0, 0, 0);
        boundingBox.transform.localScale = maxTiles + new Vector3(0.1f, 0.1f, 0.1f);
    }

    private void CreateStartRoom()
    {
        for (int y = 1; y < 6; y++)
        {
            for (int z = 6; z < 15; z++)
            {
                PlaceTile(5, y, z, TileDirection.X_positive);
                PlaceTile(15, y, z, TileDirection.X_negative);
            }
        }
        for (int x = 5; x < 16; x++)
        {
            for (int z = 6; z < 15; z++)
            {
                PlaceTile(x, 1, z, TileDirection.Y_positive);
                PlaceTile(x, 5, z, TileDirection.Y_negative);
            }
        }
        for (int x = 5; x < 16; x++)
        {
            for (int y = 1; y < 6; y++)
            {
                PlaceTile(x, y, 6, TileDirection.Z_positive);
                PlaceTile(x, y, 14, TileDirection.Z_negative);
            }
        }
    }


    private void PlaceTile(int x, int y, int z, TileDirection i)
    {
        tiles[x, y, z, (int)i] = Instantiate(tilePrefab, IndexToWorldPos(x, y, z, i), IndexToRotation(i), tilesParent).GetComponent<Tile_Selectable>();
    }

    private Vector3 IndexToWorldPos(int x, int y, int z, TileDirection i)
    {
        Vector3 worldPos = new Vector3(2 * (x - maxTiles.x / 2), 2 * (y - maxTiles.y / 2), 2 * (z - maxTiles.z / 2));

        switch (i)
        {
            case TileDirection.X_positive:
                worldPos -= Vector3.right;
                break;
            case TileDirection.X_negative:
                worldPos += Vector3.right;
                break;
            case TileDirection.Y_positive:
                worldPos -= Vector3.up;
                break;
            case TileDirection.Y_negative:
                worldPos += Vector3.up;
                break;
            case TileDirection.Z_positive:
                worldPos -= Vector3.forward;
                break;
            case TileDirection.Z_negative:
                worldPos += Vector3.forward;
                break;
        }

        return worldPos;
    }

    private Quaternion IndexToRotation(TileDirection i)
    {
        switch (i)
        {
            case TileDirection.X_positive:
                return Quaternion.Euler(0, 0, -90);

            case TileDirection.X_negative:
                return Quaternion.Euler(0, 0, 90);

            case TileDirection.Y_positive:
                return Quaternion.Euler(0, 0, 0);

            case TileDirection.Y_negative:
                return Quaternion.Euler(180, 0, 0);

            case TileDirection.Z_positive:
                return Quaternion.Euler(90, 0, 0);

            case TileDirection.Z_negative:
                return Quaternion.Euler(-90, 0, 0);

            default:
                return Quaternion.identity;
        }
    }
}