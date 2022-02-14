/***
 * 画面をタップしてゲームをスタートするプログラム
 * Author:Issei Furutani
 * date:2022/02/13
 ***/

#pragma warning disable 0649
using UnityEngine;
using UnityEngine.SceneManagement;

namespace ARradicon
{
    /// <summary>
    /// 画面をタップしてゲームをスタートするプログラム
    /// </summary>
    public class GameStart : MonoBehaviour
    {
        /// <summary>
        /// どこかしらにタップしたらシーンがタイトルからメインに遷移する
        /// </summary>
        void Update()
        {
            if (Input.GetMouseButtonDown(0))
            {
                SceneManager.LoadScene("Main");
            }
        }
    }
}