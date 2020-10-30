using System;
using System.Collections;
using System.Collections.Generic;
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
            if (objectPlaced)
                cursorIcon.SetActive(false);
            else
                cursorIcon.transform.position = Input.mousePosition;
        }

        if (Input.GetKey(KeyCode.Escape))
        {
            if (LevelEditor.Instance.selectedLevelObject != null)
                DeselectLevelObject();
            else if (selectedUIObject != null)
                PlaceLevelObject(true);

            GetComponent<EditorUI>().ClosePopupMenu();
            GetComponent<EditorUI>().CloseLevelsMenu();
        }
        else if (Input.GetKey(KeyCode.Delete))
        {
            DestroyLevelObject();
            GetComponent<EditorUI>().ClosePopupMenu();
            GetComponent<EditorUI>().CloseLevelsMenu();
        }
    }


    public IEnumerator SelectUIObject(LevelObject levelObject)
    {
        yield return new WaitForSeconds(0.125f);

        if (Input.GetMouseButton(0))
        {
            Selector selector = LevelEditor.Instance.GetComponent<Selector>();
            selector.DeselectAllTiles();
            objectPlaced = false;

            cursorIcon.GetComponent<Image>().sprite = levelObject.Icon;
            cursorIcon.SetActive(true);

            selectedUIObject = levelObject;
            levelObjectInstance = Instantiate(levelObject.Prefab, Input.mousePosition, Quaternion.identity, levelObjectsParent);
            levelObjectInstance.GetComponentInChildren<LevelObject_Selectable>().LevelObject = levelObject;

            GetComponent<LevelObjectConnector>().Connections.Add(levelObjectInstance, new List<int>());

            selector.SetCursor(CursorModes.Move);
            selector.CanChangeCursor = false;

            while (Input.GetMouseButton(0))
            {
                MoveLevelObject(levelObjectInstance);
                yield return new WaitForFixedUpdate();
            }
            PlaceLevelObject(!objectPlaced);
        }
    }


    public void MoveLevelObject(GameObject levelObject)
    {
        Ray ray = cam.ScreenPointToRay(Input.mousePosition);
        RaycastHit hit;

        if (Physics.Raycast(ray, out hit, Mathf.Infinity, tilesMask) && hit.transform.parent.GetComponent<Tile_Selectable>())
        {
            Tile_Selectable target = hit.transform.parent.GetComponent<Tile_Selectable>();
            LevelObject levelObjectTarget = levelObject.GetComponentInChildren<LevelObject_Selectable>().LevelObject;

            TileDirection tileDir = target.TileDir;

            switch (tileDir)
            {
                case TileDirection.Y_positive:
                    if (levelObjectTarget.CanPlaceOnGround == true)
                    {
                        levelObject.transform.localRotation = Quaternion.LookRotation(target.GetDirectionVector());
                        levelObject.transform.localEulerAngles += new Vector3(90.0f, 0, 0);

                        levelObject.transform.position = target.transform.position;

                        objectPlaced = true;
                    }
                    break;
                case TileDirection.Y_negative:
                    if (levelObjectTarget.CanPlaceOnCeiling == true)
                    {

                        levelObject.transform.localRotation = Quaternion.LookRotation(target.GetDirectionVector());
                        levelObject.transform.localEulerAngles += new Vector3(90.0f, 0, 0);

                        levelObject.transform.position = target.transform.position;

                        objectPlaced = true;
                    }
                    break;

                case TileDirection.X_positive:
                case TileDirection.X_negative:
                case TileDirection.Z_positive:
                case TileDirection.Z_negative:
                    if (levelObjectTarget.CanPlaceOnWall == true)
                    {

                        levelObject.transform.localRotation = Quaternion.LookRotation(target.GetDirectionVector());
                        levelObject.transform.localEulerAngles += new Vector3(90.0f, 0, 0);

                        levelObject.transform.position = target.transform.position;

                        objectPlaced = true;
                    }
                    break;
            }
        }
    }

    private void PlaceLevelObject(bool destroy = false)
    {
        cursorIcon.SetActive(false);

        if (destroy)
        {
            GetComponent<LevelObjectConnector>().Connections.Remove(levelObjectInstance);
            Destroy(levelObjectInstance);
        }

        objectPlaced = false;
        selectedUIObject = null;

        LevelEditor.Instance.GetComponent<Selector>().CanChangeCursor = true;
    }

    public void DestroyLevelObject()
    {
        if (LevelEditor.Instance.selectedLevelObject != null)
        {
            if (LevelEditor.Instance.selectedLevelObject.LevelObject.CanBeDeleted)
            {
                if (GetComponent<LevelObjectConnector>().Connections.ContainsKey(LevelEditor.Instance.selectedLevelObject.transform.parent.gameObject) && (LevelEditor.Instance.selectedLevelObject.GetComponentInParent<ButtonScript>() ||
                                                                                                                                                           LevelEditor.Instance.selectedLevelObject.GetComponentInParent<StandButton>() ||
                                                                                                                                                           LevelEditor.Instance.selectedLevelObject.GetComponentInParent<LeverScript>()))
                {
                    if (GetComponent<LevelObjectConnector>().Connections[LevelEditor.Instance.selectedLevelObject.transform.parent.gameObject].Count != 0)
                    {
                        int channelId = GetComponent<LevelObjectConnector>().Connections[LevelEditor.Instance.selectedLevelObject.transform.parent.gameObject][0];
                        GetComponent<LevelObjectConnector>().RemoveChannels(channelId);
                    }
                }
                GetComponent<LevelObjectConnector>().Connections.Remove(LevelEditor.Instance.selectedLevelObject.transform.parent.gameObject);

                if (LevelEditor.Instance.selectedLevelObject.transform.parent)
                {
                    GameObject.Destroy(LevelEditor.Instance.selectedLevelObject.transform.parent.gameObject);
                }
                else
                {
                    GameObject.Destroy(LevelEditor.Instance.selectedLevelObject.gameObject);
                }

                LevelEditor.Instance.selectedLevelObject = null;
            }
        }
    }

    private void DeselectLevelObject()
    {
        LevelEditor.Instance.selectedLevelObject.Deselect();
    }
}
