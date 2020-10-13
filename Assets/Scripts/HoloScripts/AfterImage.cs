using System.Collections;
using UnityEngine;

public class AfterImage : MonoBehaviour
{
    Material material;
    private float fadeTime;

    private void OnEnable()
    {
        material = GetComponent<MeshRenderer>().material;
        material.SetFloat("Vector1_DCDBC5A6", 1.0f);
        fadeTime = GameManager.Instance.GetComponent<RecordPlayback>().AfterImageFadeTime;

        StartCoroutine(Fade());
    }


    private IEnumerator Fade()
    {
        float fps = 30.0f;
        float frameTime = 1.0f / fps;

        for (int i = 0; i < fps * fadeTime; i++)
        {
            material.SetFloat("Vector1_DCDBC5A6", 1.0f - i / (fps * fadeTime));
            yield return new WaitForSeconds(frameTime);
        }

        Destroy(this.gameObject);
    }
}
