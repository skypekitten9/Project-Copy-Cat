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
        LevelEditor.Instance.GetComponent<EditorUI>().CloseAllMenus();
        LevelEditor.Instance.GetComponent<LevelLoader>().LoadToEditor(File.ReadAllText(levelDataFile.FullName), GetComponentInChildren<TextMeshProUGUI>().text);
    }
}
