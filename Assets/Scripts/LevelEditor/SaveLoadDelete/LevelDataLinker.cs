using System.IO;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;

public class LevelDataLinker : MonoBehaviour, IPointerClickHandler
{
    private FileInfo levelDataFile;


    public void SetLevelData(FileInfo levelDataFile)
    {
        this.levelDataFile = levelDataFile;
        string fileName = Path.GetFileNameWithoutExtension(levelDataFile.ToString());

        GetComponentInChildren<TextMeshProUGUI>().text = fileName;
    }

    public void OnPointerClick(PointerEventData eventData)
    {
        string fileName2 = levelDataFile.FullName.Substring(0, levelDataFile.FullName.Length - 5) + "_.json";

        string json2 = File.Exists(fileName2) ? File.ReadAllText(fileName2) : "";

        LevelEditor.Instance.GetComponent<EditorUI>().CloseAllMenus();
        LevelEditor.Instance.GetComponent<LevelLoader>().LoadLevel(File.ReadAllText(levelDataFile.FullName), json2, GetComponentInChildren<TextMeshProUGUI>().text);
    }
}
