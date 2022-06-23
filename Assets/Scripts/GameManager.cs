using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class GameManager : MonoBehaviour
{ 
    [SerializeField] BallGenerator ballGenerator;
    
    BingoBallView []balls = new BingoBallView[7];

    int minNumber = 1;
    //int maxNumber = 75;


    public static GameManager instance;


    public int ransu;

    public InputPanel inputPanel;

    public BingoListPanel bingoListPanel;

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
       
        OptionManager.instance.Load();
        //Debug.Log("GameManagerのMaxNumberは" + OptionManager.instance.maxNumber);
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

    public void OnStartButton()
    {
        OptionManager.instance.OnButtonSE();
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
                
                SpawnBall(i, ransu);
            }

            //Listを作ってransuを記録する
            ranses.Add(ransu);
            numbers.Remove(ransu);
      
            bingoListPanel.ChangeColor(ransu - 1);
           

            StartCoroutine(Touch());

            if (inputPanel.panelRausuList.Contains(ransu)&& inputPanel.panelRausuList[12] != ransu)
            {
                startButton.SetActive(false);
               
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
        OptionManager.instance.OnButtonSE();
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
        OptionManager.instance.OnButtonSE();
        bingoListCard.SetActive(false);
        listFalseButton.SetActive(false);
        listPanel.SetActive(false);
        isAppear = false;
    }

    public void NoBackButton()
    {
        OptionManager.instance.OnButtonSE();
        titleBackQuestion.SetActive(false);
        isAppear = false;
    }

    public void ReallyBackQuestion()
    {
        OptionManager.instance.OnButtonSE();
        titleBackQuestion.SetActive(true);
        isAppear = true;
    }

    void SpawnBall(int index,int number)
    {

        //表示されていない場合
        if (index == 0)
        {
            balls[index].Appear(number);
        }
        else 
        {
            //0以外は、数字が表示されているなら表示
            if (balls[index - 1].gameObject.activeSelf == true)
            {
                balls[index].Appear(number);
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

        Instantiate(bingoEffect, bingoEffectSpot.transform.position, Quaternion.identity, bingoEffectSpot.transform);
        finishPanel.SetActive(true);

    }

    public void OnFinishBackBUtton()
    {
        OptionManager.instance.OnButtonSE();
        SceneManager.LoadScene("Title");
    }

    public void InvokeBingoPanel()
    {
        StartCoroutine("ShowBingoPanel");
    }

    public void onBackButton()
    {
        OptionManager.instance.OnButtonSE();
        SceneManager.LoadScene("Title");
    }
    public void OnShowRuleButtonOn()
    {
        OptionManager.instance.OnButtonSE();
        rulePanel.SetActive(true);
    }
    public void OnShowRuleButtonOff()
    {
        OptionManager.instance.OnButtonSE();
        rulePanel.SetActive(false); 
    }
    public void RuleOffButton()
    {
        OptionManager.instance.OnButtonSE();
        rulePanel.SetActive(false);
    }
}
