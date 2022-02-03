using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OptionController : MonoBehaviour
{


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
       
    }

    public void OnBingoumberIncrease()
    {
        OptionManager.instance.OnBingoumberIncrease();
        
    }

    public void OnStopFlashButton()
    {
        OptionManager.instance.OnButtonSE();
    }

}
