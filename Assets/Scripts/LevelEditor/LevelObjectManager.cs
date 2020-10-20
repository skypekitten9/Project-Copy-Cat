﻿using System.Collections;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class LevelObjectManager : MonoBehaviour
{
    private Transform levelObjectsParent;

    private LevelObject selectedUIObject;
    private GameObject levelObjectInstance;

    [SerializeField] private GameObject levelObjectBoundingBox;
    public GameObject LevelObjectBoundingBox { get { return levelObjectBoundingBox; } }

    private Camera cam;

    [SerializeField] private GameObject cursorIcon;
    private bool objectPlaced = false;

    [SerializeField] private LayerMask tilesMask;


    private void Awake()
    {
        cursorIcon.SetActive(false);
        levelObjectsParent = new GameObject("LevelObjects").transform;
        cam = Camera.main;
    }


    private void Update()
    {
        if (selectedUIObject != null)
        {
            MoveSelectedObject();

            if (objectPlaced)
                cursorIcon.SetActive(false);
            else
                cursorIcon.transform.position = Input.mousePosition;

            if (Input.GetMouseButtonDown(0))
                PlaceLevelObject(!objectPlaced);
        }

        if (Input.GetKey(KeyCode.Escape))
        {
            if (LevelEditor.Instance.selectedLevelObject != null)
                DeselectLevelObject();
            else if (selectedUIObject != null)
                PlaceLevelObject(true);
        }
        else if (Input.GetKey(KeyCode.Delete))
            DestroyLevelObject();
    }


    public void SelectUIObject(LevelObject levelObject)
    {
        LevelEditor.Instance.GetComponent<Selector>().DeselectAllTiles();
        objectPlaced = false;

        cursorIcon.GetComponent<Image>().sprite = levelObject.Icon;
        cursorIcon.SetActive(true);

        selectedUIObject = levelObject;
        levelObjectInstance = Instantiate(levelObject.Prefab, Input.mousePosition, Quaternion.identity, levelObjectsParent);
        levelObjectInstance.GetComponentInChildren<LevelObject_Selectable>().LevelObject = levelObject;
    }


    private void MoveSelectedObject()
    {
        Ray ray = cam.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;


        if (Physics.Raycast(ray, out hit, Mathf.Infinity, tilesMask) && hit.transform.parent.GetComponent<Tile_Selectable>())
        {
            Tile_Selectable target = hit.transform.parent.GetComponent<Tile_Selectable>();

            TileDirection tileDir = target.TileDir;
            switch (tileDir)
            {
                case TileDirection.Y_positive:
                    if (selectedUIObject.CanPlaceOnGround == true)
                    {
                        levelObjectInstance.transform.localRotation = Quaternion.LookRotation(target.GetDirectionVector());
                        levelObjectInstance.transform.localEulerAngles += new Vector3(90.0f, 0, 0);
                        levelObjectInstance.transform.position = target.transform.position;

                        objectPlaced = true;
                    }
                    break;
                case TileDirection.Y_negative:
                    if (selectedUIObject.CanPlaceOnCeiling == true)
                    {
                        levelObjectInstance.transform.localRotation = Quaternion.LookRotation(target.GetDirectionVector());
                        levelObjectInstance.transform.localEulerAngles += new Vector3(90.0f, 0, 0);
                        levelObjectInstance.transform.position = target.transform.position;

                        objectPlaced = true;
                    }
                    break;

                case TileDirection.X_positive:
                case TileDirection.X_negative:
                case TileDirection.Z_positive:
                case TileDirection.Z_negative:
                    if (selectedUIObject.CanPlaceOnWall == true)
                    {
                        levelObjectInstance.transform.localRotation = Quaternion.LookRotation(target.GetDirectionVector());
                        levelObjectInstance.transform.localEulerAngles += new Vector3(90.0f, 0, 0);
                        levelObjectInstance.transform.position = target.transform.position;

                        objectPlaced = true;
                    }
                    break;
            }
        }
    }

    private void PlaceLevelObject(bool destroy)
    {
        cursorIcon.SetActive(false);

        if (destroy)
            Destroy(levelObjectInstance);

        objectPlaced = false;
        selectedUIObject = null;
    }

    private void DestroyLevelObject()
    {
        if (LevelEditor.Instance.selectedLevelObject != null)
        {
            if (LevelEditor.Instance.selectedLevelObject.transform.parent)
                GameObject.Destroy(LevelEditor.Instance.selectedLevelObject.transform.parent.gameObject);
            else
                GameObject.Destroy(LevelEditor.Instance.selectedLevelObject.gameObject);

            LevelEditor.Instance.selectedLevelObject = null;
        }
    }

    private void DeselectLevelObject()
    {
        LevelEditor.Instance.selectedLevelObject.Deselect();
    }
}
