using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{ 
    [SerializeField] BallGenerator ballGenerator;
    //
    BingoBallView []balls = new BingoBallView[7];

    //[SerializeField] BingoBallView bingoBallView;

    int minNumber = 1;
    int maxNumber = 75;

    public int ransu;

    public InputPanel inputPanel;

    public BingoListPanel bingoListPanel;

    public GameObject bingoPanelPrefab;

    public GameObject startButton;
    public GameObject listPanel;

    List<int> numbers = new List<int>();

    public List<int> ranses = new List<int>();

    private void Start()
    {
        for (int i = minNumber; i <= maxNumber; i++)
        { 
            numbers.Add(i);
        }


        //Spawn関数を実行することで、returnしたやつが代入される
        for (int i = 0;i<balls.Length;i++)
        {
            balls[i] = ballGenerator.Spawn();
        }
    }

    // Update is called once per frame
    void Update()
    {
        //色を変える関数は、GameManager.csと新しく作ったBingoListPanel.CSのどちらのクラスで作ったら良いのか、迷っている（9月20日）
        //とりあえず、GameManager.csで色を変える関数を作っている（9月21日）
        //if (bingoListPanel.bingoPanelList.Contains(ransu))
        //{
            //プレハブのボタンのであるBingoPanelButtonのImageのColorを変更する
            //bingoPanelPrefab.GetComponent<Image>().color = Color.cyan;
        //}
    }

    public void OnStartButton()
    {
        //9月13日
        //Debug.Log("スタートを押した");
         for (int i = balls.Length-1; i>=0 ;i--)
         {
            if (balls[i].gameObject.activeSelf == true)
            {
                balls[i].MoveToNextPosition();
                continue;//SpawnBall関数の処理終わり →一個飛ばす
            }
            int index = Random.Range(0, numbers.Count);
            ransu = numbers[index];
            SpawnBall(i, ransu);

            
        }
        //Listを作ってransuを記録する
        ranses.Add(ransu);
        numbers.Remove(ransu);
        //Debug.Log(ransu);
        bingoListPanel.ChangeColor(ransu-1);
        if (inputPanel.panelRausuList.Contains(ransu))
        {

            startButton.SetActive(false);

        }
        else
        {
            startButton.SetActive(true);
        }
    }

    public bool isAppear;
    public void OnListButton()
    {
        if (isAppear)
        {
            listPanel.SetActive(false);
            isAppear = false;
        }
        else if (!isAppear)
        {
            listPanel.SetActive(true);
            isAppear = true;
        }

    }

    void SpawnBall(int index,int number)
    {

        //表示されていない場合
        if (index == 0)
        {
            balls[index].Appear(number);
            //numbers.Remove(ransu);
        }
        else 
        {
            //0以外は、数字が表示されているなら表示
            if (balls[index - 1].gameObject.activeSelf == true)
            {
                balls[index].Appear(number);
                //numbers.Remove(ransu);
            }
      
        }
    }

    
    public void onBackButton()
    {
        SceneManager.LoadScene("Title");
    }
}
