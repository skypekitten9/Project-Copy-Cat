using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using UnityEditor.Animations;
using UnityEngine;

[RequireComponent(typeof(Animation))]
public class RecordTransformHierarchy : MonoBehaviour
{
    [SerializeField] private bool isHolo = false;


    private new Animation animation;
    private bool recording = false;

    public Stack<AnimationClip> clips;
    private Stack<GameObjectRecorder> recorders;
    private int clipsCounter;

    private bool parented = false;



    void Awake()
    {
        animation = GetComponent<Animation>();
    }

    public void StartRecording()
    {
        clips = new Stack<AnimationClip>();
        recorders = new Stack<GameObjectRecorder>();
        clipsCounter = 0;

        recording = true;

        NewClip();
    }

    private void FixedUpdate()
    {
        if (recording == true)
        {
            if ((parented && transform.parent == null) || (!parented && transform.parent != null))
            {
                EndClip();
                NewClip();
            }
            recorders.Peek().TakeSnapshot(Time.deltaTime);
        }
    }


    public void StopRecording()
    {
        recording = false;
        EndClip();

        StartCoroutine(Rewind());
    }



    private void NewClip()
    {
        clipsCounter++;
        parented = transform.parent ? true : false;

        recorders.Push(new GameObjectRecorder(parented ? transform.parent.gameObject : gameObject));
        recorders.Peek().BindComponentsOfType<Transform>(parented ? transform.parent.gameObject : gameObject, true);

        clips.Push(new AnimationClip());
        clips.Peek().legacy = true;
    }

    public void EndClip()
    {
        if (recorders.Peek().isRecording)
        {
            //UnityEngine.Debug.Log("Stop Recording");

            recorders.Peek().SaveToClip(clips.Peek());
            //recorders[index].ResetRecording();

            animation.AddClip(clips.Peek(), $"rewind_{clipsCounter}");
            animation.AddClip(clips.Peek(), $"record_{clipsCounter}");
        }
    }



    private IEnumerator Rewind()
    {
        for (int i = clipsCounter; i >= 1; i--)
        {
            string clipName = $"rewind_{i}";

            animation[clipName].speed = -GameManager.Instance.GetComponent<RecordManager>().RewindSpeed;
            animation[clipName].time = animation[clipName].length;
            animation.Play(clipName);

            while (animation.isPlaying)
                yield return new WaitForFixedUpdate();
        }

        StartCoroutine(Playback());
    }

    private IEnumerator Playback()
    {
        if (isHolo)
            GameManager.Instance.GetComponent<RecordManager>().StartPlayback();


        for (int i = 1; i <= clipsCounter; i++)
        {
            string clipName = $"record_{i}";

            animation.Play(clipName);

            while (animation.isPlaying)
                yield return new WaitForFixedUpdate();
        }

        if (isHolo)
        {
            StartCoroutine(GameManager.Instance.GetComponent<RecordManager>().StopPlayback());
        }
    }

}
