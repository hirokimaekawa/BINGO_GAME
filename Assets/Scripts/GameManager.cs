using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GameManager : MonoBehaviour
{ 
    [SerializeField] BallGenerator ballGenerator;
    BingoBallView []balls = new BingoBallView[7];



    [SerializeField] BingoBallView bingoBallView;

    private void Start()
    {
        //Spawn関数を実行することで、returnしたやつが代入される
      for(int i = 0;i<balls.Length;i++)
        {
            balls[i] = ballGenerator.Spawn();
        }
    }

    // Update is called once per frame
    void Update()
    {
        if (Input.GetKeyDown(KeyCode.Space))
        {
            Debug.Log("Spaceを押した");
            for (int i = balls.Length-1; i>=0 ;i--)
            {
                SpawnBall(i);
            }

        }

        
    }

    void SpawnBall(int index)
    {
        if (balls[index].gameObject.activeSelf == true)
        {
            balls[index].MoveToNextPosition();
            return;//SpawnBall関数の処理終わり
        }

        //表示されていない場合
        if (index == 0)
        {
                balls[index].Appear();
        }
        else 
        {
            //0以外は、数字が表示されているなら表示
            if (balls[index - 1].gameObject.activeSelf == true)
            {
                balls[index].Appear();
            }
      
        }
    }
    
}
