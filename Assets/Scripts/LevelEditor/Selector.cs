using UnityEngine;

public class Selector : MonoBehaviour
{
    private LevelEditor levelEditor;
    private Camera cam;

    //private bool clicked = false;
    //private float clickTimer = 0;
    //private float clickDelay = 0.5f;

    void Start()
    {
        levelEditor = LevelEditor.Instance;
        cam = Camera.main;
    }

    private void Update()
    {
        //if (clicked == true/* && clickTimer < clickDelay*/)
        //{
        //    clickTimer += Time.deltaTime;
        //}

        if (Input.GetMouseButtonDown(0))
        {
            Ray ray = cam.ScreenPointToRay(Input.mousePosition);
            RaycastHit hit;

            if (Physics.Raycast(ray, out hit))
            {
                Selectable target = hit.transform.GetComponent<Selectable>();

                if (target)
                {
                    //DetectDoubleClick(target);
                    if (target is Tile_Selectable)
                        StartCoroutine(ToggleSelect(target as Tile_Selectable));
                }
            }
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
            DeselectAllTiles(target);

            while (Input.GetMouseButton(0) == true)
            {
                Ray ray = cam.ScreenPointToRay(Input.mousePosition);
                RaycastHit hit;

                if (Physics.Raycast(ray, out hit))
                {
                    Tile_Selectable newTarget = hit.transform.GetComponent<Tile_Selectable>();

                    if (newTarget && newTarget.TileDir == target.TileDir)
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
                //else
                //{
                //    yield break;
                //}
            }
        }
    }

    //private void DetectDoubleClick(Selectable target)
    //{
    //    if (clicked)
    //    {
    //        if (clickTimer < clickDelay)
    //        {
    //            Debug.Log("double clicked");

    //            if (target is Tile_Selectable)
    //            {
    //                SelectWholePlane(target as Tile_Selectable);
    //            }
    //        }
    //        clicked = false;
    //    }
    //    else
    //    {
    //        clicked = true;
    //    }
    //    clickTimer = 0;
    //}


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

    public void DeselectAllTiles(Tile_Selectable target)
    {
        foreach (Tile_Selectable tile in LevelEditor.Instance.selectedTiles)
        {
            if (tile != target)
            {
                tile.Deselect();
            }
        }

        LevelEditor.Instance.selectedTiles.Clear();
    }
}
