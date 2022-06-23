using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class InputButton : MonoBehaviour
{

 
    public int number;

    Animator animator;

    Canvas canvas;

    GameManager gameManager;
    float x;

    private void Start()
    {
        gameManager = GameObject.Find("GameManager").GetComponent<GameManager>();
        animator = GetComponent<Animator>();
        canvas = GetComponent<Canvas>();
    }

    bool wasTapped;

    private void Update()
    {
        if (wasTapped)
        {
            Invoke("DeleteOverride",1.0f);
            //canvas.overrideSorting = false;
            return;
        }
        if (number == gameManager.ransu)
        {
            x += Time.deltaTime;
           
            if (x > 3.0 && gameManager.isAppear == false)
            {
                
                    canvas.overrideSorting = true;
                    
                    animator.SetBool("ZoomOut", true);
               
            }
            if (gameManager.isAppear == true)
            {
                //canvas.overrideSorting = false;
            }
        }

    }

    //新しく作った
    public void DeleteOverride()
    {
        canvas.overrideSorting = false;
        Debug.Log("ちゃんと動いてる");
    }

    [SerializeField] Sprite touchButtonSprite;

    public void OnThis()
    {

        //プレハブ自身が持つImageコンポーネントのColor要素の変更
        InputPanel inputPanel = GameObject.Find("InputPanel").GetComponent<InputPanel>();
        
        //Debug.Log(number);
        //GetComponent<Image>().color = Color.cyan;

        //}
        if (number == gameManager.ransu)
        {
            wasTapped = true;
            animator.SetBool("ZoomOut", false);
            //このZoomOutがfalseになっただけではなく、アニメーションも終わった後に、overrideをfalseにしたい
            //canvas.overrideSorting = false;

            GetComponent<Image>().sprite = touchButtonSprite;
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
