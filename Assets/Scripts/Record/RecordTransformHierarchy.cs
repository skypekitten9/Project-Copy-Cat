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

    public Stack<AnimationClip> clips = new Stack<AnimationClip>();
    private Stack<GameObjectRecorder> recorders = new Stack<GameObjectRecorder>();
    private int clipsCounter = 0;

    private bool parented = false;



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
            {
                if (isHolo)
                {
                    UnityEngine.Debug.Log($"GameObject: {gameObject.name}  |  Animation: {clipName}");
                }

                yield return new WaitForFixedUpdate();
            }
        }



        //StartCoroutine(Playback());
    }

    private IEnumerator Playback()
    {
        if (isHolo)
            GameManager.Instance.GetComponent<RecordManager>().StartPlayback();

        animation.Play("recording");

        if (isHolo)
        {
            while (animation.isPlaying)
                yield return new WaitForFixedUpdate();

            StartCoroutine(GameManager.Instance.GetComponent<RecordManager>().StopPlayback());
        }
    }

}
