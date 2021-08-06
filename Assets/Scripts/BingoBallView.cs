using System;
using UnityEngine;
using UnityEngine.UI;

public class BingoBallView : MonoBehaviour
{
    #region Fields

    //[SerializeField]
    //private Text _letterText;

    [SerializeField]
    private Text _numberText;

    //private Image _ballImage;

    private RectTransform _rectTransform;

    public int _currentBallPosition;

    private Animator _animator;

    //private AudioSource _audioSource;

    private const int MaxBallsCount = 6;

    private const string MoveToNextPositionAnimationParameterName
        = "CurrentBallPosition";

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
        Appear();
    }

    //public void PlayBallArivedSound()
    //{
    //    _audioSource.Play();
    //}
    //public void ApplyBallSprite(Sprite sprite)
    //{
    //    if (sprite == null)
    //    {
    //        throw new ArgumentNullException("sprite");
    //    }
    //    _ballImage.sprite = sprite;
    //}

    public void Appear()
    {
        _currentBallPosition = 0;
        RectTransform rt = GameObject.Find("Canvas/BingoBallTubeView/GeneratedBallAppearancePosition").GetComponent<RectTransform>();
        _rectTransform = GetComponent<RectTransform>();
        _rectTransform.anchoredPosition = rt.anchoredPosition;
        gameObject.SetActive(true);
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
