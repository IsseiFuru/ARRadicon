/***
 * 左上のボタンを押すとタイトルへ戻るためのプログラム
 * Author:Issei Furutani
 * date:2022/02/13
 ***/

#pragma warning disable 0649
using UnityEngine;
using UnityEngine.InputSystem;
using UnityEngine.SceneManagement;

namespace ARradicon
{
    /// <summary>
    /// ボタンを押すとシーンがTitleに切り替わる
    /// </summary>
    public class BackTitle : MonoBehaviour
    {
        /// <summary>
        /// どこかしらにタップしたらシーンがMainからTitleに遷移する
        /// </summary>
        void Update()
        {
            var keybord = Keyboard.current;

            var qKey = keybord.qKey;
            if (qKey.wasReleasedThisFrame)
            {
                SceneManager.LoadScene("Title");
            }
        }
    }
}