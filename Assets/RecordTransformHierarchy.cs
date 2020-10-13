using System.Collections;
using System.Diagnostics;
using UnityEditor.Animations;
using UnityEngine;

[RequireComponent(typeof(Animation))]
public class RecordTransformHierarchy : MonoBehaviour
{
    private new Animation animation;

    public AnimationClip Clip { get; private set; }
    private GameObjectRecorder recorder;

    private bool recording = false;

    [SerializeField] private bool isHolo = false;


    void Awake()
    {
        animation = GetComponent<Animation>();
    }


    public void StartRecording()
    {
        UnityEngine.Debug.Log("Start Recording");

        recorder = new GameObjectRecorder(gameObject);
        recorder.BindComponentsOfType<Transform>(gameObject, true);

        Clip = new AnimationClip();
        Clip.legacy = true;

        recording = true;
    }

    private void LateUpdate()
    {
        if (recording == true)
        {
            recorder.TakeSnapshot(Time.deltaTime);
        }
    }

    public void StopRecording()
    {
        recording = false;

        if (recorder.isRecording)
        {
            UnityEngine.Debug.Log("Stop Recording");

            recorder.SaveToClip(Clip);
            recorder.ResetRecording();
            animation.AddClip(Clip, "recording_rew");
            animation.AddClip(Clip, "recording");

            StartCoroutine(RewindPlayback());
        }
    }

    private IEnumerator RewindPlayback()
    {
        animation["recording_rew"].speed = -3;
        animation["recording_rew"].time = animation["recording_rew"].length;
        animation.Play("recording_rew");

        while (animation.isPlaying)
            yield return new WaitForFixedUpdate();

        if (isHolo)
            GameManager.Instance.GetComponent<RecordManager>().StartPlayback();


        animation.Play("recording");

        if (isHolo)
        {
            while (animation.isPlaying)
                yield return new WaitForFixedUpdate();

            StartCoroutine(GameManager.Instance.GetComponent<RecordManager>().EndPlayback());
        }
    }
}
