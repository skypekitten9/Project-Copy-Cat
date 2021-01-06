using System.Collections.Generic;
using System.IO;
using UnityEngine;


public enum TileDirection { X_positive, X_negative, Y_positive, Y_negative, Z_positive, Z_negative };

public class LevelEditor : MonoBehaviour
{
    private static LevelEditor instance = null;
    public static LevelEditor Instance { get { return instance; } }


    [SerializeField] private bool debug = false;

    [SerializeField] private GameObject tilePrefab;
    [SerializeField] private GameObject boundingBox;

    public Transform TilesParent { get; set; }

    public static readonly Vector3Int maxTiles = new Vector3Int(69, 49, 69);
    private static float tileSize = 2.0f;

    public Tile_Selectable[,,,] Tiles { get; private set; }

    public List<Tile_Selectable> selectedTiles { get; set; } = new List<Tile_Selectable>();
    public LevelObject_Selectable selectedLevelObject { get; set; } = null;

    [SerializeField] private GameObject createNewPrompt;

    [SerializeField] private LevelObject spawnPortals;
    [SerializeField] private LevelObject goalPortal;



    private void Awake()
    {
        if (instance != null && instance != this)
            Destroy(this.gameObject);
        else
            instance = this;

        Tiles = new Tile_Selectable[maxTiles.x, maxTiles.y, maxTiles.z, 6];
        SetBoundingBox();

        createNewPrompt.SetActive(false);
        createNewPrompt.transform.position = new Vector3(Screen.width * 0.5f, Screen.height - 75, 0);
    }


    private void SetBoundingBox()
    {
        boundingBox.transform.position = new Vector3(0, 0, 0);
        boundingBox.transform.localScale = maxTiles * (int)tileSize + new Vector3(0.1f, 0.1f, 0.1f);
    }


    public void ClearLevel()
    {
        if (TilesParent)
            Destroy(TilesParent.gameObject);
        TilesParent = new GameObject("Tiles").transform;

        Tiles = new Tile_Selectable[maxTiles.x, maxTiles.y, maxTiles.z, 6];

        GetComponent<LevelObjectConnector>().ResetConnections();

        if (GetComponent<LevelObjectManager>().LevelObjectsParent)
            Destroy(GetComponent<LevelObjectManager>().LevelObjectsParent.gameObject);
        GetComponent<LevelObjectManager>().LevelObjectsParent = new GameObject("LevelObjects").transform;

        GetComponent<PowerCableGrid>().PowerCables = new Dictionary<GameObject, Vector3Int>();

        GetComponent<LevelSaver>().SaveName = "";
        GetComponent<EditorUI>().CloseAllMenus();
    }

    public void NewLevel()
    {
        ClearLevel();
        CreateStartLevel();
    }

    private void CreateStartLevel()
    {
        string jsonData = File.ReadAllText(Application.dataPath + "/Scripts/LevelEditor/StartRoom.json");
        GetComponent<LevelLoader>().LoadLevel(jsonData, "");
    }

    public Tile_Selectable PlaceTile(int x, int y, int z, TileDirection i)
    {
        Tiles[x, y, z, (int)i] = Instantiate(tilePrefab, IndexToWorldPos(x, y, z, i), IndexToRotation(i), TilesParent).GetComponent<Tile_Selectable>();
        Tiles[x, y, z, (int)i].transform.localScale *= tileSize;
        Tiles[x, y, z, (int)i].SetTileData(x, y, z, i);
        return Tiles[x, y, z, (int)i];
    }

    public Tile_Selectable PlaceTile(Vector3Int xyz, TileDirection i)
    {
        return PlaceTile(xyz.x, xyz.y, xyz.z, i);
    }

    public void DestroyTile(int x, int y, int z, TileDirection i)
    {
        try
        {
            Tiles[x, y, z, (int)i].Deselect();
            Destroy(Tiles[x, y, z, (int)i].gameObject);
            Tiles[x, y, z, (int)i] = null;
        }
        catch (System.Exception) { }
    }
    public void DestroyTile(Vector3Int xyz, TileDirection i)
    {
        DestroyTile(xyz.x, xyz.y, xyz.z, i);
    }

    public static Vector3 IndexToWorldPos(int x, int y, int z, TileDirection i)
    {
        Vector3 worldPos = new Vector3(tileSize * (x - maxTiles.x / 2), tileSize * (y - maxTiles.y / 2), tileSize * (z - maxTiles.z / 2));

        switch (i)
        {
            case TileDirection.X_positive:
                worldPos -= Vector3.right / 2 * tileSize;
                break;
            case TileDirection.X_negative:
                worldPos += Vector3.right / 2 * tileSize;
                break;
            case TileDirection.Y_positive:
                worldPos -= Vector3.up / 2 * tileSize;
                break;
            case TileDirection.Y_negative:
                worldPos += Vector3.up / 2 * tileSize;
                break;
            case TileDirection.Z_positive:
                worldPos -= Vector3.forward / 2 * tileSize;
                break;
            case TileDirection.Z_negative:
                worldPos += Vector3.forward / 2 * tileSize;
                break;
        }

        return worldPos;
    }

    public static Quaternion IndexToRotation(TileDirection i)
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


    public void ToggleCreateNewPrompt()
    {
        bool activate = !createNewPrompt.activeSelf;
        GetComponent<EditorUI>().CloseAllMenus();
        EditorUI.menuOpen = activate;

        createNewPrompt.SetActive(activate);
    }

    public void CloseUI()
    {
        createNewPrompt.SetActive(false);
    }
}
