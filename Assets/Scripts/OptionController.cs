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
        bgmVolumeText.text = ((int)(OptionManager.instance.audioSourceBGM.volume*10)).ToString();
        //*10したやつを、ToString()で表記したい
    }

    public void OnBGMVolumeDown()
    {
        OptionManager.instance.OnBGMVolumeDown();
        bgmVolumeText.text = ((int)(OptionManager.instance.audioSourceBGM.volume * 10)).ToString();
    }

    public void OnSoundVolumeUp()
    {
        OptionManager.instance.OnSoundVolumeUp();
        seVolumeText.text = ((int)(OptionManager.instance.audioSourceSE.volume * 10)).ToString();
    }

    public void OnSoundVolumeDown()
    {
        OptionManager.instance.OnSoundVolumeDown();
        seVolumeText.text = ((int)(OptionManager.instance.audioSourceSE.volume * 10)).ToString();
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
