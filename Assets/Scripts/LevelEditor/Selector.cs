using UnityEngine;

public class Selector : MonoBehaviour
{
    private Camera cam;

    private Selectable target = null;
    private bool allSelected = false;


    void Start()
    {
        cam = Camera.main;
    }

    private void Update()
    {
        switch (LevelEditor.Instance.EditorMode)
        {
            case LevelEditorMode.Select:
                if (Input.GetMouseButtonDown(0))
                {
                    Ray ray = cam.ScreenPointToRay(Input.mousePosition);
                    RaycastHit hit;

                    if (Physics.Raycast(ray, out hit))
                    {
                        target = hit.transform.GetComponent<Selectable>();

                        if (target is Tile_Selectable)
                        {
                            StartCoroutine(ToggleSelect(target as Tile_Selectable));
                        }
                    }
                }
                if (Input.GetKeyDown(KeyCode.A))
                {
                    if (target != null && target is Tile_Selectable)
                    {
                        if (allSelected == false)
                        {
                            SelectWholePlane(target as Tile_Selectable);
                        }
                        else
                        {
                            DeselectAllTiles();
                        }
                    }
                }

                break;

            case LevelEditorMode.Extrude:
                if (Input.GetMouseButtonDown(0) && LevelEditor.Instance.selectedTiles.Count > 0)
                {
                    StartCoroutine(GetComponent<TileExtruder>().Extrude(LevelEditor.Instance.selectedTiles[0]));
                }
                break;
        }
    }


    private System.Collections.IEnumerator ToggleSelect(Tile_Selectable target)
    {
        yield return new WaitForSeconds(0.1f);

        if (Input.GetMouseButton(0) == false)
        {
            if (target.isSelected)
                target.Deselect();
            else
                target.Select();
        }
        else
        {
            DeselectAllTiles();

            while (Input.GetMouseButton(0) == true)
            {
                Ray ray = cam.ScreenPointToRay(Input.mousePosition);
                RaycastHit hit;

                if (Physics.Raycast(ray, out hit))
                {
                    Tile_Selectable newTarget = hit.transform.GetComponent<Tile_Selectable>();

                    if (newTarget != null && LevelEditor.Instance.selectedTiles.Contains(newTarget) == false && newTarget.TileDir == target.TileDir)
                    {
                        switch ((target as Tile_Selectable).TileDir)
                        {
                            case TileDirection.X_positive:
                            case TileDirection.X_negative:
                                if (newTarget.X == target.X)
                                    newTarget.Select(true);
                                break;
                            case TileDirection.Y_positive:
                            case TileDirection.Y_negative:
                                if (newTarget.Y == target.Y)
                                    newTarget.Select(true);
                                break;
                            case TileDirection.Z_positive:
                            case TileDirection.Z_negative:
                                if (newTarget.Z == target.Z)
                                    newTarget.Select(true);
                                break;
                        }
                    }
                }
                yield return new WaitForFixedUpdate();
            }
        }
    }


    private void SelectWholePlane(Tile_Selectable target)
    {
        DeselectAllTiles();

        switch (target.TileDir)
        {
            case TileDirection.X_positive:
            case TileDirection.X_negative:
                SelectTiles(target.X, target.X + 1, 0, LevelEditor.Instance.maxTiles.y, 0, LevelEditor.Instance.maxTiles.z, target.TileDir);
                break;
            case TileDirection.Y_positive:
            case TileDirection.Y_negative:
                SelectTiles(0, LevelEditor.Instance.maxTiles.x, target.Y, target.Y + 1, 0, LevelEditor.Instance.maxTiles.z, target.TileDir);
                break;
            case TileDirection.Z_positive:
            case TileDirection.Z_negative:
                SelectTiles(0, LevelEditor.Instance.maxTiles.x, 0, LevelEditor.Instance.maxTiles.y, target.Z, target.Z + 1, target.TileDir);
                break;
        }

        allSelected = true;
    }

    private void SelectTiles(int startX, int endX, int startY, int endY, int startZ, int endZ, TileDirection tileDir)
    {
        for (int x = startX; x < endX; x++)
        {
            for (int y = startY; y < endY; y++)
            {
                for (int z = startZ; z < endZ; z++)
                {
                    if (LevelEditor.Instance.Tiles[x, y, z, (int)tileDir] != null)
                    {
                        LevelEditor.Instance.Tiles[x, y, z, (int)tileDir].Select(true);
                    }
                }
            }
        }
    }


    public void DeselectAllTiles()
    {
        for (int i = LevelEditor.Instance.selectedTiles.Count - 1; i >= 0; i--)
        {
            if (LevelEditor.Instance.selectedTiles[i] != null)
            {
                LevelEditor.Instance.selectedTiles[i].Deselect();
            }
        }

        LevelEditor.Instance.selectedTiles.Clear();
        allSelected = false;
    }
}
