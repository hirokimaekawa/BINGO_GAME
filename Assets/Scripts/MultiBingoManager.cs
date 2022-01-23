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

    public void OnStartButton()
    {
        Debug.Log("スタートボタンが押された");

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

    void Appear(int number)
    {
        i = number;

        _numberText.text = i.ToString();
        //Debug.Log(i);

        GameObject.Find("BingoNumber/Text").GetComponent<Text>().text = i.ToString();
        Image image = GetComponent<Image>();
        gameObject.SetActive(true);
    }

    public void OnStopButton()
    {
        stopButton.SetActive(false);
        startButton.SetActive(true);
    }

    public bool isAppear;
    public void OnListButton()
    {
        Debug.Log("リストを押した");
        Debug.Log(isAppear);//false
        Debug.Log("リストのアクティブセルフは:" + listPanel.activeSelf);
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
  
}
