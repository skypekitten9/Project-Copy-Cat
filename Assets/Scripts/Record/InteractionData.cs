
class InteractionData
{
    public InteractionData(float time, params int[] interactionChannels)
    {
        this.Time = time;
        this.InteractionChannels = interactionChannels;
    }

    public float Time { private set; get; }
    public int[] InteractionChannels { get; private set; }
}

