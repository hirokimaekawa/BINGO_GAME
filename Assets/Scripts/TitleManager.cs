using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{

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
        SceneManager.LoadScene("SingleBingo");
    }
}
