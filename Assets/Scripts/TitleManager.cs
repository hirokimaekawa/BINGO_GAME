using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{
    
    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnSingleBingoButton()
    {
        OptionManager.instance.OnButtonSE();
        OptionManager.instance.Load();
        SceneManager.LoadScene("SingleBingo");
    }

    public void OnOptionSceneButton()
    {
        OptionManager.instance.OnButtonSE();
        SceneManager.LoadScene("OptionMenu");
    }

    public void OnMultiBingoButton()
    {
        OptionManager.instance.OnButtonSE();
        SceneManager.LoadScene("MultiBingo");
    }

    public void OnRuleButton()
    {
        OptionManager.instance.OnButtonSE();
        SceneManager.LoadScene("Rule");
    }
}
