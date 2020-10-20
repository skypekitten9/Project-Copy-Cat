﻿using UnityEngine;

enum CursorModes { None, Select, Extrude, Move, Rotate }

public class Selector : MonoBehaviour
{
    [SerializeField] private LayerMask selectionMask;

    [SerializeField] private Texture2D selectCursor;
    [SerializeField] private Texture2D extrudeCursor;

    private CursorModes cursorMode;
    public bool CanChangeCursor { get; set; } = true;

    private Camera cam;

    private Selectable target = null;
    private bool allSelected = false;

    //private GameObject lastSelected;


    void Start()
    {
        cam = Camera.main;
    }

    private void Update()
    {
        Ray ray = cam.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;
        //RaycastHit[] hits;

        if (Physics.Raycast(ray, out hit, Mathf.Infinity, selectionMask))
        {
            //if (lastSelected != null && hit.transform.gameObject == lastSelected)
            //{
            //    hits = Physics.RaycastAll(ray);
            //    hit = hits[hits.Length - 2];
            //}

            Debug.Log("Hit: " + hit.transform.name);

            if (hit.transform.parent != null)
                target = hit.transform.parent.GetComponentInChildren<Selectable>();
            else
                target = hit.transform.GetComponent<Selectable>();


            if (target is Tile_Selectable)
            {
                if (hit.transform.tag == "Tile_SelectCollider")
                {
                    SetCursor(CursorModes.Select);
                    if (Input.GetMouseButtonDown(0) && EditorUI.hoveringUI == false)
                    {
                        Debug.Log("Select tile");
                        StartCoroutine(ToggleSelectTile(target as Tile_Selectable));    //Start tile selection
                    }
                }
                else if (hit.transform.tag == "Tile_ExtrudeCollider")
                {
                    if (LevelEditor.Instance.selectedTiles.Contains(target as Tile_Selectable) == false)   //If the hovered tile isn't selected - the extrude-collider is used as a select-collider
                    {
                        SetCursor(CursorModes.Select);
                        if (Input.GetMouseButtonDown(0) && EditorUI.hoveringUI == false)
                        {
                            Debug.Log("Select tile");
                            StartCoroutine(ToggleSelectTile(target as Tile_Selectable));    //Start tile selection
                        }
                    }
                    else if (LevelEditor.Instance.selectedTiles.Contains(target as Tile_Selectable))
                    {
                        SetCursor(CursorModes.Extrude);
                        if (Input.GetMouseButtonDown(0) && EditorUI.hoveringUI == false)
                        {
                            StartCoroutine(GetComponent<TileExtruder>().Extrude(LevelEditor.Instance.selectedTiles[0]));    //Start extrusion
                        }
                    }
                }
            }
            else if (target is LevelObject_Selectable)
            {
                SetCursor(CursorModes.Select);
                if (Input.GetMouseButtonDown(0) && EditorUI.hoveringUI == false)
                {
                    if (target.isSelected)
                    {
                        target.Deselect();
                        //lastSelected = null;
                    }
                    else
                    {
                        if (LevelEditor.Instance.selectedLevelObject)
                            LevelEditor.Instance.selectedLevelObject.Deselect();

                        DeselectAllTiles();
                        //lastSelected = levelObjectTarget.gameObject;

                        target.Select();

                        //Debug.Log("Selected pos: " + levelObjectTarget.transform.position);
                    }
                }
            }
        }


        if (Input.GetKeyDown(KeyCode.A))
        {
            if (target != null && target is Tile_Selectable)
            {
                if (LevelEditor.Instance.selectedLevelObject)
                {
                    LevelEditor.Instance.selectedLevelObject.Deselect();
                    LevelEditor.Instance.selectedLevelObject = null;
                }

                if (allSelected == false)
                {
                    SelectWholePlane(target as Tile_Selectable);
                    //lastSelected = target.gameObject;
                }
                else
                {
                    DeselectAllTiles();
                    //lastSelected = null;
                }
            }
        }
    }


    public System.Collections.IEnumerator ToggleSelectTile(Tile_Selectable target)
    {
        if (LevelEditor.Instance.selectedLevelObject)
        {
            LevelEditor.Instance.selectedLevelObject.Deselect();
            LevelEditor.Instance.selectedLevelObject = null;
        }

        yield return new WaitForSeconds(0.1f);

        if (Input.GetMouseButton(0) == false)
        {
            if (target.isSelected)
            {
                target.Deselect();
                //lastSelected = null;
            }
            else
            {
                target.Select();
                //lastSelected = target.gameObject;
            }
        }
        else
        {
            CanChangeCursor = false;
            DeselectAllTiles();
            //lastSelected = target.gameObject;

            while (Input.GetMouseButton(0) == true)
            {
                Ray ray = cam.ScreenPointToRay(Input.mousePosition);
                RaycastHit hit;

                if (Physics.Raycast(ray, out hit, Mathf.Infinity, selectionMask))
                {
                    Tile_Selectable newTarget = hit.transform.parent.transform.GetComponent<Tile_Selectable>();

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
            CanChangeCursor = true;
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



    private void SetCursor(CursorModes newMode)
    {
        if (cursorMode != newMode && CanChangeCursor)
        {
            switch (newMode)
            {
                case CursorModes.Select:
                    Cursor.SetCursor(selectCursor, Vector3.zero, CursorMode.Auto);
                    break;
                case CursorModes.Extrude:
                    Cursor.SetCursor(extrudeCursor, new Vector3(32, 32), CursorMode.Auto);
                    break;
                case CursorModes.Move:
                    break;
                case CursorModes.Rotate:
                    break;
            }
            cursorMode = newMode;
        }
    }
}