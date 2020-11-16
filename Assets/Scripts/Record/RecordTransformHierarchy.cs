using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEngine;

using UnityEditor.Animations;


[RequireComponent(typeof(Animation))]
public class RecordTransformHierarchy : MonoBehaviour
{
    [SerializeField] private bool isHolo = false;

    private new Animation animation;
    private bool recording = false;

    private AnimationClip clip;
    private GameObjectRecorder recorder;

    private Transform parent;


    void Awake()
    {
        animation = GetComponent<Animation>();
    }

    public void StartRecording()
    {
        recording = true;

        NewClip();
    }

    private void FixedUpdate()
    {
        if (recording == true)
        {
            parent = transform.parent;
            transform.parent = null;
            recorder.TakeSnapshot(Time.deltaTime);
            transform.parent = parent;
        }
    }


    public void StopRecording()
    {
        recording = false;
        EndClip();

        if (GetComponentInChildren<PickUp>())
        {
            GetComponentInChildren<PickUp>().SetToNotHeld();
        }

        StartCoroutine(Rewind());
    }


    private void NewClip()
    {
        recorder = new GameObjectRecorder(gameObject);
        recorder.BindComponentsOfType<Transform>(gameObject, true);

        clip = new AnimationClip();
        clip.legacy = true;
    }

    public void EndClip()
    {
        if (recorder.isRecording)
        {
            recorder.SaveToClip(clip);
            recorder.ResetRecording();

            animation.AddClip(clip, "rewind");
            animation.AddClip(clip, "record");
        }
    }


    private IEnumerator Rewind()
    {
        string clipName = "rewind";

        animation[clipName].speed = -GameManager.Instance.GetComponent<RecordManager>().RewindSpeed;
        animation[clipName].time = animation[clipName].length;
        animation.Play(clipName);

        while (animation.isPlaying)
            yield return new WaitForFixedUpdate();

        StartCoroutine(Playback());
    }

    private IEnumerator Playback()
    {
        if (isHolo)
            GameManager.Instance.GetComponent<RecordManager>().StartPlayback();

        string clipName = "record";

        animation.Play(clipName);

        while (animation.isPlaying)
            yield return new WaitForFixedUpdate();

        if (isHolo)
        {
            StartCoroutine(GameManager.Instance.GetComponent<RecordManager>().StopPlayback());
        }

        this.transform.parent = null;//parent;
    }

}
