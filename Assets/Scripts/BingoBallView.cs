using System;
using UnityEngine;
using UnityEngine.UI;
using System.Collections.Generic;
using System.Collections;


public class BingoBallView : MonoBehaviour
{
    //#region Fields

    [SerializeField] Text _numberText;
    [SerializeField] Color[] colors;
    public int i;
    private RectTransform _rectTransform;
    public int _currentBallPosition;
    private Animator _animator;
    private const int MaxBallsCount = 6;

    OptionManager optionManager;

    int minNumber = 1;
    //int maxNumber = 75;
    List<int> numbers = new List<int>();

    private const string MoveToNextPositionAnimationParameterName
        = "CurrentBallPosition";

    public InputPanel inputPanel;

    public Sprite[] sprite;

    //#endregion

    #region Methods

    public void Awake()
    {
        _rectTransform = GetComponent<RectTransform>();
        _animator = GetComponent<Animator>();
        _currentBallPosition = 0;
    }

    private void Start()
    {
        optionManager = GameObject.Find("OptionManager").GetComponent<OptionManager>();
        optionManager.Load();
        for (int i = minNumber; i <= optionManager.maxNumber; i++)
        {

            numbers.Add(i);
            //numbersに１〜75が入った

        }
        ////75が0になるまで、繰り返す
        //while (optionManager.maxNumber-- >0)
        //{

        //}
    }

    public void Appear(int number)
    {
        _currentBallPosition = 0;
        RectTransform rt = GameObject.Find("Canvas/BingoBallTubeView/GeneratedBallAppearancePosition").GetComponent<RectTransform>();
        _rectTransform = GetComponent<RectTransform>();
        _rectTransform.anchoredPosition = rt.anchoredPosition;

  
        i = number;

        
        _numberText.text = i.ToString();
        GameObject.Find("BingoNumber/Text").GetComponent<Text>().text = i.ToString();
        Image image = GetComponent<Image>();
        gameObject.SetActive(true);

        image.sprite = sprite[UnityEngine.Random.Range(0, sprite.Length)];

        //(順番逆だけど)ランダムで決まったこれを、BingoNumbetのspriteに入れる
        GameObject.Find("BingoNumber").GetComponent<Image>().sprite = image.sprite;

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
