using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class MultiBingoManager : MonoBehaviour
{
    [SerializeField] BallGenerator ballGenerator;

    [SerializeField] Text _numberText;

    int minNumber = 1;
    //int maxNumber = 75;
    public int i;


    public static GameManager instance;


    public int ransu;

    public BingoListPanel bingoListPanel;

    public GameObject startButton;
    public GameObject stopButton;
    public GameObject listPanel;
    public GameObject bingoListCard;
    public GameObject listFalseButton;
    public GameObject backButton;
    public GameObject listButton;


    public GameObject toTitleButton;
    public GameObject retryButton;
    public GameObject finishPanel;

    public GameObject titleBackQuestion;


    List<int> numbers = new List<int>();

    public List<int> ranses = new List<int>();

    public AudioClip audioClip;
    public AudioSource audioSource;

    //bool canTouch = false;

    private void Start()
    {
        
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
            finishPanel.SetActive(true);
        }
    }

    bool roulette = false;
    public void OnStartButton()
    {
        StopAllCoroutines();
        StartCoroutine(NumberSelection());
        int index = Random.Range(0, numbers.Count);
        ransu = numbers[index];
        ranses.Add(ransu);
        Appear(ransu);
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
       
        GameObject.Find("BingoNumber/Text").GetComponent<Text>().text = i.ToString();
        Image image = GetComponent<Image>();
        gameObject.SetActive(true);
    }

    //スタートを押して1秒後に、canTouchできるようにしていつでも、ストップ押せるようにする
    public void OnStopButton()
    {
        
        roulette = false;
        
        stopButton.SetActive(false);
        startButton.SetActive(true);
       
        bingoListPanel.ChangeColor(ransu - 1);
       
        Appear(ransu);
            
        numbers.Remove(ransu);
       
    }

    IEnumerator CanTouch()
    {
        yield return new WaitForSeconds(1.5f);
        stopButton.SetActive(true);
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

    public void TitleButton()
    {
        OptionManager.instance.OnButtonSE();
        SceneManager.LoadScene("Title");
    }

    public void RetryButton()
    {
        OptionManager.instance.OnButtonSE();
        SceneManager.LoadScene("MultiBingo");
    }
  
}
