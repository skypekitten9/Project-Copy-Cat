using UnityEngine;

public class Selector : MonoBehaviour
{
    private Camera cam;


    void Start()
    {
        cam = Camera.main;
    }

    private void Update()
    {
        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = cam.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                Selectable target = hit.transform.GetComponent<Selectable>();

                if (target is Tile_Selectable)
                {
                    if (LevelEditor.Instance.EditorMode == LevelEditorMode.Select)
                    {
                        StartCoroutine(ToggleSelect(target as Tile_Selectable));
                    }
                }
            }
        }

        if (LevelEditor.Instance.EditorMode == LevelEditorMode.Extrude)
        {
            GetComponent<TileExtruder>().Extrude();
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

    //private void SelectWholePlane(Tile_Selectable target)
    //{
    //    switch (target.TileDir)
    //    {
    //        case TileDirection.X_positive:
    //            break;
    //        case TileDirection.X_negative:
    //            break;
    //        case TileDirection.Y_positive:
    //            SelectTiles(0, levelEditor.maxTiles.x, target.Y, target.Y + 1, 0, levelEditor.maxTiles.z, target.TileDir);
    //            break;
    //        case TileDirection.Y_negative:
    //            break;
    //        case TileDirection.Z_positive:
    //            break;
    //        case TileDirection.Z_negative:
    //            break;
    //    }
    //}

    //private void SelectTiles(int startX, int endX, int startY, int endY, int startZ, int endZ, TileDirection tileDir)
    //{
    //    for (int x = startX; x < endX; x++)
    //    {
    //        for (int y = startY; y < endY; y++)
    //        {
    //            for (int z = startZ; z < endZ; z++)
    //            {
    //                for (int i = 0; i < 6; i++)
    //                {
    //                    if (levelEditor.Tiles[x, y, z, i] != null)
    //                    {
    //                        levelEditor.Tiles[x, y, z, i].Select(true);
    //                    }
    //                }
    //            }
    //        }
    //    }
    //}

    public void DeselectAllTiles()
    {
        for (int i = LevelEditor.Instance.selectedTiles.Count - 1; i >= 0; i--)
        {
            LevelEditor.Instance.selectedTiles[i].Deselect();
        }

        LevelEditor.Instance.selectedTiles.Clear();
    }
}
