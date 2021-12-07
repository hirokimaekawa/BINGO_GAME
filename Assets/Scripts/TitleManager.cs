using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{
    public OptionManager optionManager;
    //Titleの一人ボタンから、シーン遷移させる
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void onSingleBingoButton()
    {
        //optionManagerの使った関数を使うと、シーンをロードしたら、オブジェクトがSingleBingoのオブジェクトが非表示になっている
        optionManager.Load();
        SceneManager.LoadScene("SingleBingo");

        //保存されている
        //Debug.Log(optionManager.maxNumber);
    }
}
