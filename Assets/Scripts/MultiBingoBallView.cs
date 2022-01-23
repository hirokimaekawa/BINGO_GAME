using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class MultiBingoBallView : MonoBehaviour
{
    [SerializeField] Text _numberText;
    public int i;

    //private Image _ballImage;


    public int _currentBallPosition;


    //private AudioSource _audioSource;

    public static MultiBingoBallView instance;

    OptionManager optionManager;

    int minNumber = 1;
    int maxNumber = 75;
    List<int> numbers = new List<int>();

    // Start is called before the first frame update
    private void Start()
    {
        //プレハブには、ヒエラルキーからアタッチできないから、GetComponent<OptionManager>()をつけることで、左右の変数の型を揃えている
        optionManager = GameObject.Find("OptionManager").GetComponent<OptionManager>();
        // image.color = Random.ColorHSV(1,1,1,1);
        //UnityEngine.Random
        //★★ゆくゆくmaxNumber→optionManager.maxNumberへ

        optionManager.Load();
        Debug.Log("BingoBallViewのMaxNumberは" + optionManager.maxNumber);

        for (int i = minNumber; i <= optionManager.maxNumber; i++)
        {

            numbers.Add(i);
            //numbersに１〜75が入った

        }
        //75が0になるまで、繰り返す
        while (optionManager.maxNumber-- > 0)
        {

        }
    }


    public void Appear(int number)
    {
       
        i = number;

        _numberText.text = i.ToString();
        //Debug.Log(i);

        GameObject.Find("BingoNumber/Text").GetComponent<Text>().text = i.ToString();
        Image image = GetComponent<Image>();
        gameObject.SetActive(true);

    }


    // Update is called once per frame
    void Update()
    {
        
    }
}
