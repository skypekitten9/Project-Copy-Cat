using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class LevelDeleter : MonoBehaviour
{
    [SerializeField] private GameObject deletePrompt;

    private EditorUI editorUI;


    private void Awake()
    {
        editorUI = GetComponent<EditorUI>();

        deletePrompt.SetActive(false);
        deletePrompt.transform.position = new Vector3(Screen.width * 0.5f, Screen.height - 75, 0);
    }


    public void ToggleDeletePrompt()
    {
        bool active = !deletePrompt.activeSelf;

        if (active)
            deletePrompt.transform.GetChild(0).GetChild(1).GetComponent<TMPro.TextMeshProUGUI>().text = $"({GetComponent<LevelSaver>().SaveName}.json)";

        editorUI.CloseAllMenus();
        EditorUI.menuOpen = active;
        deletePrompt.SetActive(active);

    }

    public void DeleteLevel()
    {
        string path = Application.dataPath + $"/Resources/LevelData/{GetComponent<LevelSaver>().SaveName}.json";
        File.Delete(path);

        StartCoroutine(GetComponent<EditorUI>().MessageBox($"Level: {GetComponent<LevelSaver>().SaveName} was deleted"));
        GetComponent<EditorUI>().CloseAllMenus();

        LevelEditor.Instance.ClearLevel();
    }


    public void CloseUI()
    {
        deletePrompt.SetActive(false);
    }
}
