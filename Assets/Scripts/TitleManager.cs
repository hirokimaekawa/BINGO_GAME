using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{
    public OptionManager optionManager;
   
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
        
        //ここも、エラーが生じる
        optionManager.Load();
        SceneManager.LoadScene("SingleBingo");
    }
}
