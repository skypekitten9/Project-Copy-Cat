﻿using System;
using System.Collections;
using System.Collections.Generic;
using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

public class EditorUI : MonoBehaviour
{
    public static bool hoveringUI = false;
    public static bool menuOpen = false;

    [SerializeField] private GameObject objectsPanel;
    [SerializeField] private GameObject popupMenu;

    private RectTransform objectsRectTransform;
    private bool objectsPanelVisible = false;
    private bool canShowHideObjectsPanel = true;

    [SerializeField] private GameObject saveAsPanel;
    [SerializeField] private TMP_InputField saveNameField;

    [SerializeField] private Button deleteButton;
    [SerializeField] private Button saveAsButton;
    [SerializeField] private Button saveButton;

    public string FileName { get { return saveNameField.text; } }

    [SerializeField] private GameObject levelsPanel;
    [SerializeField] private GameObject levelButton;

    [SerializeField] private GameObject messageBox;

    private float msgBoxDisplayTime = 3.0f;


    private void Start()
    {
        ToggleDeleteLevelButton();

        objectsRectTransform = objectsPanel.GetComponent<RectTransform>();

        if (objectsPanelVisible == false)
            objectsRectTransform.localPosition -= new Vector3(objectsRectTransform.rect.width, 0, 0);

        CloseAllMenus();
        messageBox.SetActive(false);
        levelsPanel.transform.position = new Vector3(Screen.width * 0.5f, Screen.height - 75, 0);
        saveAsPanel.transform.position = new Vector3(Screen.width * 0.5f, Screen.height - 75, 0);
        messageBox.transform.position = new Vector3(Screen.width * 0.5f, Screen.height * 0.5f, 0);
    }


    private void Update()
    {
        if (Input.GetMouseButtonDown(1))
        {
            if (!hoveringUI)
                StartCoroutine(OpenPopupMenu());
            else
                PointerExitUI();
        }
    }

    public void PointerEnterUI()
    {
        GetComponent<Selector>().SetCursor(CursorModes.Select);
        GetComponent<Selector>().CanChangeCursor = false;

        hoveringUI = true;
    }
    public void PointerExitUI()
    {
        GetComponent<Selector>().CanChangeCursor = true;

        hoveringUI = false;
    }

    public void HideShowObjectsPanel()
    {
        if (canShowHideObjectsPanel)
        {
            int direction = objectsPanelVisible ? -1 : 1;
            StartCoroutine(AnimateObjectsPanel(direction));
            objectsPanelVisible = !objectsPanelVisible;
        }
    }

    private IEnumerator AnimateObjectsPanel(int direction)
    {
        canShowHideObjectsPanel = false;
        int frames = 10;
        float distance = (float)objectsRectTransform.rect.width / frames;
        for (int i = 0; i < frames; i++)
        {
            objectsRectTransform.localPosition += new Vector3(distance * direction, 0, 0);
            yield return new WaitForFixedUpdate();
        }
        canShowHideObjectsPanel = true;
    }

    public IEnumerator OpenPopupMenu()
    {
        yield return new WaitForSeconds(0.125f);

        if (Input.GetMouseButton(1) == false)
        {
            UpdatePopupItemsInteractable();
            popupMenu.transform.position = Input.mousePosition;
            popupMenu.SetActive(true);
        }
    }

    public void CloseAllMenus()
    {
        popupMenu.SetActive(false);
        saveAsPanel.SetActive(false);
        levelsPanel.SetActive(false);
        GetComponent<LevelDeleter>().CloseUI();
        ToggleDeleteLevelButton();
        LevelEditor.Instance.CloseUI();
        GetComponent<LevelObjectConnector>().ChannelPrompt.SetActive(false);

        menuOpen = false;
        hoveringUI = false;
    }


    public void ToggleSaveAsPanel()
    {
        bool shouldOpen = !saveAsPanel.activeSelf;
        CloseAllMenus();
        if (shouldOpen)
        {
            saveButton.interactable = GetComponent<LevelSaver>().SaveName != "";

            saveAsPanel.SetActive(true);
            saveNameField.Select();
            menuOpen = true;
        }
    }

    public void ToggleSaveAsButton()
    {
        saveAsButton.interactable = FileName == "" ? false : true;
    }
    public void ToggleDeleteLevelButton()
    {
        deleteButton.interactable = GetComponent<LevelSaver>().SaveName != "";
    }

    public void ToggleLevelsPanel()
    {
        bool shouldOpen = !levelsPanel.activeSelf;
        CloseAllMenus();
        if (shouldOpen)
        {
            FillLevelsList();
            levelsPanel.SetActive(true);
            hoveringUI = true;
            menuOpen = true;
        }
    }

    private void UpdatePopupItemsInteractable()
    {
        bool canConnect = LevelEditor.Instance.selectedLevelObject &&
            (LevelEditor.Instance.selectedLevelObject.GetComponentInParent<StandButton>() ||
            LevelEditor.Instance.selectedLevelObject.GetComponentInParent<ButtonScript>() ||
            LevelEditor.Instance.selectedLevelObject.GetComponentInParent<LeverScript>() ||
            LevelEditor.Instance.selectedLevelObject.GetComponentInParent<DoorScript>());
        SetPopupItemInteractableState(popupMenu.transform.GetChild(0).gameObject, canConnect);

        bool canExtrude = LevelEditor.Instance.selectedTiles.Count > 0;
        SetPopupItemInteractableState(popupMenu.transform.GetChild(2).gameObject, canExtrude);
        SetPopupItemInteractableState(popupMenu.transform.GetChild(3).gameObject, canExtrude);

        bool canRotate = LevelEditor.Instance.selectedLevelObject && LevelEditor.Instance.selectedLevelObject.LevelObject.CanBeRotated;
        SetPopupItemInteractableState(popupMenu.transform.GetChild(5).gameObject, canRotate);
        SetPopupItemInteractableState(popupMenu.transform.GetChild(6).gameObject, canRotate);

        bool canDelete = LevelEditor.Instance.selectedLevelObject && LevelEditor.Instance.selectedLevelObject.LevelObject.CanBeDeleted;
        SetPopupItemInteractableState(popupMenu.transform.GetChild(8).gameObject, canDelete);
    }

    private void SetPopupItemInteractableState(GameObject item, bool interactable)
    {
        item.GetComponent<UnityEngine.UI.Button>().interactable = interactable;
        item.GetComponentInChildren<TextMeshProUGUI>().color = interactable ? Color.white : new Color(1.0f, 1.0f, 1.0f, 0.4f);
    }


    public void DestroyLevelObject()
    {
        LevelEditor.Instance.GetComponent<LevelObjectManager>().DestroyLevelObject();
        CloseAllMenus();
    }


    private void FillLevelsList()
    {
        DirectoryInfo dir = new System.IO.DirectoryInfo(Application.dataPath + $"/Resources/LevelData");
        List<FileInfo> levelData = new List<FileInfo>(dir.GetFiles("*.json"));
        for (int i = 0; i < levelData.Count; i++)
        {
            if (levelData[i].Name[levelData[i].Name.Length - 6] == '_')
            {
                levelData.RemoveAt(i);
            }
        }

        Transform content = levelsPanel.GetComponentInChildren<GridLayoutGroup>().transform;

        for (int i = 0; i < content.childCount; i++)
            Destroy(content.GetChild(i).gameObject);

        foreach (FileInfo level in levelData)
        {
            Instantiate(this.levelButton, content).GetComponent<LevelDataLinker>().SetLevelData(level);
        }
    }


    public IEnumerator MessageBox(string message)
    {
        messageBox.GetComponentInChildren<TextMeshProUGUI>().text = message;
        messageBox.SetActive(true);
        yield return new WaitForSeconds(msgBoxDisplayTime);
        messageBox.SetActive(false);
    }
}