using System.Collections;
using UnityEngine;

public class AfterImage : MonoBehaviour
{
    private Material material;
    private float fadeTime;

    private void Start()
    {
        fadeTime = GameManager.Instance.GetComponent<AfterImagePool>().AfterImageFadeTime;
        GetComponent<MeshRenderer>().shadowCastingMode = UnityEngine.Rendering.ShadowCastingMode.Off;
        material = GetComponent<MeshRenderer>().material;
    }

    public void Enable()
    {
        StartCoroutine(Fade());
    }

    private IEnumerator Fade()
    {
        float fps = 30.0f;
        float frameTime = 1.0f / fps;

        for (int i = 0; i < fps * (fadeTime / 1000); i++)
        {
            material.SetFloat("Vector1_DCDBC5A6", 1.0f - i / (fps * (fadeTime / 1000)));
            yield return new WaitForSeconds(frameTime);
        }
        material.SetFloat("Vector1_DCDBC5A6", 0);
    }
}
