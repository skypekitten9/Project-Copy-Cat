using System.Collections;
using System.Collections.Generic;
using System.IO;
using UnityEngine;

public class ReadWriteFileManager
{
    static StreamReader reader;
    static StreamWriter writer;
    static string content;
    public static string FileToString(string path)
    {
        reader = new StreamReader(path);
        content = reader.ReadToEnd();
        reader.Close();
        return content;
    }

    public static void WriteToFile(string toWrite, string path)
    {
        if (!File.Exists(path))
        {
            // Create a file to write to.
            using (StreamWriter sw = File.CreateText(path))
            {
                sw.WriteLine(toWrite);
            }
        }
    }
}
