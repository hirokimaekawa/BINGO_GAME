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


    public static GameManager instance;


    public int ransu;

    public InputPanel inputPanel;

    public BingoListPanel bingoListPanel;

    public GameObject bingoPanelPrefab;

    public GameObject startButton;
    public GameObject listPanel;

    public GameObject reachPanel;
    public GameObject bingoPanel;

    public GameObject finishPanel;

    public GameObject rulePanel;



    List<int> numbers = new List<int>();

    public List<int> ranses = new List<int>();

    private void Start()
    {
        //そもそも、なんでここに書いたんだろう？
        //だって、このランダムを固定するのは、InputPanelでのパネルをSpwanする時の話。
        //
        //Random.InitState(10);

        OptionManager.instance.Load();
        Debug.Log("GameManagerのMaxNumberは" + OptionManager.instance.maxNumber);
        for (int i = minNumber; i <= OptionManager.instance.maxNumber; i++)
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
        
    }

    public void OnStartButton()
    {
        Debug.Log("スタートボタンが押された");
         for (int i = balls.Length-1; i>=0 ;i--)
         {
            if (balls[i].gameObject.activeSelf == true)
            {
                balls[i].MoveToNextPosition();
                continue;//SpawnBall関数の処理終わり →一個飛ばす
            }
            //ここで乱数が決まっている
            int index = Random.Range(0, numbers.Count);
            ransu = numbers[index];
            SpawnBall(i, ransu);            
        }
        //Listを作ってransuを記録する
        ranses.Add(ransu);
        numbers.Remove(ransu);
        //Debug.Log(ransu);
        bingoListPanel.ChangeColor(ransu-1);

        //inputPanelはNull
        Debug.Log(inputPanel);
        Debug.Log(inputPanel.panelRausuList);
        //このpanelRausuListには、panelRansuが入っている
        if (inputPanel.panelRausuList.Contains(ransu))
        {
            startButton.SetActive(false);
            //そのransuと一致したpanelRausuListのpanelRansuが反映されたButtonプレハブ
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

    IEnumerator ShowReachPanel()
    {
        reachPanel.SetActive(true);

        yield return new WaitForSeconds(0.8f);

        reachPanel.SetActive(false);

    }

    public void InvokeReachPanel()
    {
        StartCoroutine("ShowReachPanel");
    }

    IEnumerator ShowBingoPanel()
    {
        bingoPanel.SetActive(true);

        yield return new WaitForSeconds(0.8f);

        finishPanel.SetActive(true);
        //bingoPanel.SetActive(false);

    }

    public void OnFinishBackBUtton()
    {
        SceneManager.LoadScene("Title");
    }

    public void InvokeBingoPanel()
    {
        StartCoroutine("ShowBingoPanel");
    }

    public void onBackButton()
    {
        SceneManager.LoadScene("Title");
    }
    public void OnShowRuleButtonOn()
    {
        Debug.Log("押した");
        rulePanel.SetActive(true);
    }
    public void OnShowRuleButtonOff()
    {
        rulePanel.SetActive(false); 
    }
    public void RuleOffButton()
    {
        rulePanel.SetActive(false);
    }
}
