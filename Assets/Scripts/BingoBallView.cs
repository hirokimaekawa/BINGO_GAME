using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Collections;


public class BingoBallView : MonoBehaviour
{
    #region Fields

    //[SerializeField]
    //private Text _letterText;

    [SerializeField] Text _numberText;
    [SerializeField] Color[] colors;
    public int i;

    //private Image _ballImage;

    private RectTransform _rectTransform;

    public int _currentBallPosition;

    private Animator _animator;

    //private AudioSource _audioSource;

    private const int MaxBallsCount = 6;

    OptionManager optionManager;

    int minNumber = 1;
    int maxNumber = 75;
    List<int> numbers = new List<int>();

    private const string MoveToNextPositionAnimationParameterName
        = "CurrentBallPosition";

    public InputPanel inputPanel;

    public Sprite[] sprite;

    #endregion

    #region Methods

    public void Awake()
    {

        //_ballImage = GetComponent<Image>();
        _rectTransform = GetComponent<RectTransform>();
        _animator = GetComponent<Animator>();
        //_audioSource = GetComponent<AudioSource>();
        _currentBallPosition = 0;
    }

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
        while (optionManager.maxNumber-- >0)
        {

        }
    }

    public void Appear(int number)
    {
        _currentBallPosition = 0;
        RectTransform rt = GameObject.Find("Canvas/BingoBallTubeView/GeneratedBallAppearancePosition").GetComponent<RectTransform>();
        _rectTransform = GetComponent<RectTransform>();
        _rectTransform.anchoredPosition = rt.anchoredPosition;

  
        i = number;

        _numberText.text = i.ToString();
        //Debug.Log(i);

        GameObject.Find("BingoNumber/Text").GetComponent<Text>().text = i.ToString();
        Image image = GetComponent<Image>();
        gameObject.SetActive(true);

        //基本的に、Unity.EngineのRandom.Rangeという認識
        image.sprite = sprite[UnityEngine.Random.Range(0, sprite.Length)];

        //image.color = colors[UnityEngine.Random.Range(0, colors.Length)];
        _animator.SetInteger(MoveToNextPositionAnimationParameterName, _currentBallPosition);
    }

    public void Disappear()
    {
        _animator.SetInteger(MoveToNextPositionAnimationParameterName, MaxBallsCount);
    }

    public void MoveToNextPosition()
    {
        _currentBallPosition++;
        _animator.SetInteger(MoveToNextPositionAnimationParameterName, _currentBallPosition);
    }

    public void Disable()
    {
        gameObject.SetActive(false);
    }

    #endregion

    #region Properties

    public bool IsDisabled
    {
        get { return !gameObject.activeInHierarchy; }
    }

    #endregion
}
