
class InteractionData : RecordData
{
    public InteractionData(float time, params int[] interactionChannels) : base(time)
    {
        this.InteractionChannels = interactionChannels;
    }

    public int[] InteractionChannels { get; private set; }
}

