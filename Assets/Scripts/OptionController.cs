using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OptionController : MonoBehaviour
{
    public Text bingoNumberText;
    public Text bgmVolumeText;
    public Text seVolumeText;


    private void Start()
    {
        bgmVolumeText.text = (Mathf.RoundToInt(OptionManager.instance.audioSourceBGM.volume * 10)).ToString();
        seVolumeText.text = (Mathf.RoundToInt(OptionManager.instance.audioSourceSE.volume * 10)).ToString();
        bingoNumberText.text = OptionManager.instance.maxNumber.ToString();
    }

    public void OnBackButton()
    {
        OptionManager.instance.OnBackButton();
    }

    public void OnBingoSE()
    {
        OptionManager.instance.OnBingoSE();
    }

    public void OnBGMVolumeUp()
    {
        OptionManager.instance.OnBGMVolumeUp();
        bgmVolumeText.text = (Mathf.RoundToInt(OptionManager.instance.audioSourceBGM.volume*10)).ToString();
        //*10したやつを、ToString()で表記したい
    }

    public void OnBGMVolumeDown()
    {
        OptionManager.instance.OnBGMVolumeDown();
        bgmVolumeText.text = (Mathf.RoundToInt(OptionManager.instance.audioSourceBGM.volume * 10)).ToString();
    }

    public void OnSoundVolumeUp()
    {
        OptionManager.instance.OnSoundVolumeUp();
        seVolumeText.text = (Mathf.RoundToInt(OptionManager.instance.audioSourceSE.volume * 10)).ToString();
    }

    public void OnSoundVolumeDown()
    {
        OptionManager.instance.OnSoundVolumeDown();
        seVolumeText.text = (Mathf.RoundToInt(OptionManager.instance.audioSourceSE.volume * 10)).ToString();
    }

    public void OnBingoNumberReduce()
    {
        OptionManager.instance.OnBingoNumberReduce();
        bingoNumberText.text = OptionManager.instance.maxNumber.ToString();
        OptionManager.instance.OnButtonSE();

    }

    public void OnBingoNumberIncrease()
    {
        OptionManager.instance.OnBingoumberIncrease();
        bingoNumberText.text = OptionManager.instance.maxNumber.ToString();
        OptionManager.instance.OnButtonSE();
    }

    public void OnStopFlashButton()
    {
        OptionManager.instance.OnButtonSE();
    }

}
