using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MultiBingoManager : MonoBehaviour
{
    [SerializeField] BallGenerator ballGenerator;

    [SerializeField] Text _numberText;

    //①MultiBingo用のBingoBallViewを別に作る必要があるか

    //[SerializeField] BingoBallView bingoBallView;

    int minNumber = 1;
    int maxNumber = 75;
    public int i;


    public static GameManager instance;


    public int ransu;

    //public InputPanel inputPanel;

    public BingoListPanel bingoListPanel;

    //public GameObject bingoPanelPrefab;

    public GameObject startButton;
    public GameObject stopButton;
    public GameObject listPanel;


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

    }

    // Update is called once per frame
    void Update()
    {

    }

    bool roulette = false;
    public void OnStartButton()
    {
        Debug.Log("スタートボタンが押された");
        StopAllCoroutines();
        StartCoroutine(NumberSelection());
        int index = Random.Range(0, numbers.Count);
       
        ransu = numbers[index];

        //Listを作ってransuを記録する
        ranses.Add(ransu);
        Appear(ransu);
        Debug.Log(ransu);
        bingoListPanel.ChangeColor(ransu - 1);
        numbers.Remove(ransu);
        Debug.Log(ransu);

        Debug.Log("ビンゴパネル"+bingoListPanel);
        startButton.SetActive(false);
        stopButton.SetActive(true);
        //ここで、Ransuをランダム表示させるコードが必要
       
    }

    IEnumerator NumberSelection()
    {
        roulette = true;
        //ずっと、whileになって、応答なしになる
        while (roulette)
        {
            _numberText.text = Random.Range(1, 76).ToString();//ランダムで止まった数字と、リストで青色になった数字が違う
            //Appear()で   _numberText.text = i.ToString();が殺されてしまっている
            yield return new WaitForSeconds(0.1f);//ちょっと遅い
        }
    }

    void Appear(int number)
    {
        number = i;
        //Debug.Log(i);

        GameObject.Find("BingoNumber/Text").GetComponent<Text>().text = i.ToString();
        Image image = GetComponent<Image>();
        gameObject.SetActive(true);
    }

    public void OnStopButton()
    {
        roulette = false;
        //Appear(ransu);
        stopButton.SetActive(false);
        startButton.SetActive(true);
    }

    public bool isAppear;
    public void OnListButton()
    {
        Debug.Log("リストを押した");
        Debug.Log(isAppear);//false
        
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
        Debug.Log("リストのアクティブセルフは:" + listPanel.activeSelf);
    }
  
}
