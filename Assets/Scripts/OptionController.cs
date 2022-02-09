using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class OptionController : MonoBehaviour
{
    public Text bingoNumberText;
    public Text bgmVolumeText;
    public Text seVolumeText;

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
        bgmVolumeText.text = OptionManager.instance.audioSourceBGM.volume.ToString();//ここのvolumeを*10したい。
        //*10したやつを、ToString()で表記したい
    }

    public void OnBGMVolumeDown()
    {
        OptionManager.instance.OnBGMVolumeDown();
    }

    public void OnSoundVolumeUp()
    {
        OptionManager.instance.OnSoundVolumeUp();
        
    }

    public void OnSoundVolumeDown()
    {
        OptionManager.instance.OnSoundVolumeDown();
    }

    public void OnBingoNumberReduce()
    {
        OptionManager.instance.OnBingoNumberReduce();
        bingoNumberText.text = OptionManager.instance.maxNumber.ToString();

    }

    public void OnBingoNumberIncrease()
    {
        OptionManager.instance.OnBingoumberIncrease();
        bingoNumberText.text = OptionManager.instance.maxNumber.ToString();
    }

    public void OnStopFlashButton()
    {
        OptionManager.instance.OnButtonSE();
    }

}
