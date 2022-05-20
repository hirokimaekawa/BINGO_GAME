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
    public BingoPanelButton bingoPanelButton;

    // public GameObject bingoPanelPrefab;

    public GameObject startButton;
    public GameObject listPanel;
    public GameObject bingoListCard;
    public GameObject listFalseButton;

    public GameObject reachPanel;
    public GameObject bingoPanel;

    public GameObject bingoEffect;
    public GameObject bingoEffectSpot;


    public GameObject finishPanel;

    public GameObject rulePanel;

    public GameObject titleBackQuestion;

    bool isTouch = false;

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
        if (isTouch == false)
        {
            
            Debug.Log("スタートボタンが押された");
            for (int i = balls.Length - 1; i >= 0; i--)
            {
                if (balls[i].gameObject.activeSelf == true)
                {
                    balls[i].MoveToNextPosition();
                    continue;//SpawnBall関数の処理終わり →一個飛ばす
                }
                //ここで乱数が決まっている
                int index = Random.Range(0, numbers.Count);
                ransu = numbers[index];
                //☆に該当するransuは除いて、引数に当てはめたい【4/27】 =>12番目のransu
                //RemoveAt(12);//12番を飛ばして、新しくリストを作った方が良いのか？
                SpawnBall(i, ransu);
            }
            //Listを作ってransuを記録する
            ranses.Add(ransu);
            numbers.Remove(ransu);
            //Debug.Log(ransu);
            //bingoListPanel.ChangeColor(ransu - 1);
            bingoPanelButton.ChangeSprite(ransu - 1);

            //inputPanelはNull
            Debug.Log(inputPanel);
            Debug.Log(inputPanel.panelRausuList);
            //このpanelRausuListには、panelRansuが入っている

            StartCoroutine(Touch());

            Debug.Log("調べる！"+inputPanel.panelRausuList[12]);
            if (inputPanel.panelRausuList.Contains(ransu)&& inputPanel.panelRausuList[12] != ransu)
            {
                startButton.SetActive(false);
                //そのransuと一致したpanelRausuListのpanelRansuが反映されたButtonプレハブ
            }
            else
            {
                startButton.SetActive(true);
            }
        }
    }

    IEnumerator Touch()
    {
        isTouch = true;
        yield return new WaitForSeconds(0.5f);
        isTouch = false;
    }

    public bool isAppear;
    public void OnListButton()
    {
        if (!isAppear)
        {
            bingoListCard.SetActive(true);
            listFalseButton.SetActive(true);
            listPanel.SetActive(true);
            isAppear = true;
        }
        
    }


    public void FalseListButton()
    {
        bingoListCard.SetActive(false);
        listFalseButton.SetActive(false);
        listPanel.SetActive(false);
        isAppear = false;
    }

    public void NoBackButton()
    {
        titleBackQuestion.SetActive(false);
        isAppear = false;
    }

    public void ReallyBackQuestion()
    {
        titleBackQuestion.SetActive(true);
        isAppear = true;
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

        //
        //Instantiate(bingoEffect, bingoEffectSpot.transform.position,transform.rotation); //1回目

        　//2回目 古い情報なのかもしれない
        //https://clrmemory.com/programming/unity/child-obj-prefub/
        //型変換しているのは、その後、Instantiateした後、Object型では操作できないため

        
        yield return new WaitForSeconds(0.8f);

        Instantiate(bingoEffect, bingoEffectSpot.transform.position, Quaternion.identity, bingoEffectSpot.transform);
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
