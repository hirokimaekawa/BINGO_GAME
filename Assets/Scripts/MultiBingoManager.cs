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
    public GameObject backButton;
    public GameObject listButton;


    public GameObject toTitleButton;
    public GameObject retryButton;

    List<int> numbers = new List<int>();

    public List<int> ranses = new List<int>();

    public AudioClip audioClip;
    public AudioSource audioSource;

    bool canTouch = false;

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
        Debug.Log("numbersは" + numbers.Count + "個");

    }

    // Update is called once per frame
    void Update()
    {
        if (numbers.Count == 0)
        {
            startButton.SetActive(false);
            stopButton.SetActive(false);
            backButton.SetActive(false);
            listButton.SetActive(false);
            //listPanel.SetActive(true);
            toTitleButton.SetActive(true);
            retryButton.SetActive(true);
        }
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
            //bingoListPanel.ChangeColor(ransu - 1);

            Debug.Log(ransu);

           

            Debug.Log("ビンゴパネル" + bingoListPanel);
            startButton.SetActive(false);
           
        //ここで、Ransuをランダム表示させるコードが必要
        StartCoroutine(CanTouch());
        
    }

    IEnumerator NumberSelection()
    {
        roulette = true;
        //ずっと、whileになって、応答なしになる
        while (roulette)
        {
            audioSource.PlayOneShot(audioClip);
            //フラッシュしている間に、PlayOneShotとかでずっと、SEを鳴らし続ける
            int r = Random.Range(0,numbers.Count);
            _numberText.text = numbers[r].ToString();//ランダムで止まった数字と、リストで青色になった数字が違う
            //Appear()で   _numberText.text = i.ToString();が殺されてしまっている
            yield return new WaitForSeconds(0.08f);//ちょっと遅い
        }
        //While(roulette)の処理が終わったら、以下実行される
        _numberText.text = ransu.ToString();

    }

    void Appear(int number)
    {
        number = i;
        //Debug.Log(i);

        GameObject.Find("BingoNumber/Text").GetComponent<Text>().text = i.ToString();
        Image image = GetComponent<Image>();
        gameObject.SetActive(true);
    }

    //スタートを押して1秒後に、canTouchできるようにしていつでも、ストップ押せるようにする
    public void OnStopButton()
    {
        //if (canTouch == true)
        //{
           
            roulette = false;
            Appear(ransu);
            bingoListPanel.ChangeColor(ransu - 1);
            numbers.Remove(ransu);
            Debug.Log("numbersは" + numbers.Count + "個");
            stopButton.SetActive(false);
            
            startButton.SetActive(true);
            //canTouch = false;
        //}
    }

    IEnumerator CanTouch()
    {
        //canTouch = true;
        yield return new WaitForSeconds(1.5f);
        //canTouch = true;
        stopButton.SetActive(true);
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

    public void TitleButton()
    {
        SceneManager.LoadScene("Title");
    }

    public void RetryButton()
    {
        SceneManager.LoadScene("MultiBingo");
    }
  
}
