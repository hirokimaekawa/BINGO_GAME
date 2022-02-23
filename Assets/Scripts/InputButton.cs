using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InputButton : MonoBehaviour
{

 
    public int number;

    Animator animator;

    private void Start()
    {
        animator = GetComponent<Animator>();
    }

    //bool isBingo = false;

   
    public void OnThis()
    {
      
        GameManager gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        //プレハブ自身が持つImageコンポーネントのColor要素の変更
        InputPanel inputPanel = GameObject.Find("InputPanel").GetComponent<InputPanel>();
        
        Debug.Log(number);
        //GetComponent<Image>().color = Color.cyan;

        //}
        if (number == gameManager.ransu)
        {
            float x = Time.time;
            //2秒間押されなかったら
            //このthis.gameobjectをハイライトする
            if (x > 2.0)
            {
                //遷移する
                //animator.SetTrigger("ZoomOut");
            }


            //押されたら、以下の処理をする
            GetComponent<Image>().color = Color.cyan;
            //Startボタンを表示する
            gameManager.startButton.SetActive(true);
            //isBingo = true;
            OptionManager.instance.OnButtonSE();

            if (inputPanel.DebugBingo())
            {
                //ビンゴなら、ビンゴ専用のエンディング

            }
            else
            {
                //ビンゴじゃないなら、リーチを調べる
                inputPanel.DebugReach();
            }
           
           
        }
        else
        {
            //スタートボタンが押せない

        }
       
        

        
    }


}
