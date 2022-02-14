/***
 * ボタン一つでサウンドを管理するプログラム
 * Author:Issei Furutani
 * date:2022/02/13
 ***/

#pragma warning disable 0649
using UnityEngine;

public class AudioSwitch : MonoBehaviour
{
    void Awake()
    {
        if (PlayerPrefs.GetInt("Mute", 0) == 0)
        {
            AudioListener.volume = 1f;
        }
        else
        {
            AudioListener.volume = 0f;
        }
    }

    void OnGUI()
    {
        if (GUI.Button(new Rect(850, 30, 400, 60), "サウンドON/OFF"))
        {
            if (PlayerPrefs.GetInt("Mute", 0) == 0)
            {
                AudioListener.volume = 0f;
                PlayerPrefs.SetInt("Mute", 1);
            }
            else
            {
                AudioListener.volume = 1f;
                PlayerPrefs.SetInt("Mute", 0);
            }
        }
    }
}

