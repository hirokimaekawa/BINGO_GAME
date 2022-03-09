using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InputButton : MonoBehaviour
{

 
    public int number;

    Animator animator;

    GameManager gameManager;
    float x;

    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        animator = GetComponent<Animator>();
    }

    //bool isBingo = false;

    bool wasTapped;

    private void Update()
    {
        if (wasTapped)
        {
            return;
        }
        if (number == gameManager.ransu)
        {
            x += Time.deltaTime;
            //Debug.Log(Time.time);
            //2秒間経ってもボタンが押されなかったら
            //このthis.gameobjectをハイライトする
            //なおかつ、
            if (x > 2.0)
            {
                //animator.enabled = true;
                //遷移する
                
                animator.SetBool("ZoomOut", true);
            }
        }

    }

    public void OnThis()
    {

        //プレハブ自身が持つImageコンポーネントのColor要素の変更
        InputPanel inputPanel = GameObject.Find("InputPanel").GetComponent<InputPanel>();
        
        Debug.Log(number);
        //GetComponent<Image>().color = Color.cyan;

        //}
        if (number == gameManager.ransu)
        {
            wasTapped = true;
            animator.SetBool("ZoomOut", false);

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
