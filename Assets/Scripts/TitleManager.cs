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
       
        OptionManager.instance.Load();
        SceneManager.LoadScene("SingleBingo");
    }

    public void OnOptionSceneButton()
    {
        SceneManager.LoadScene("OptionMenu");
    }

    public void OnMultiBingoButton()
    {
        SceneManager.LoadScene("MultiBingo");
    }

    public void OnRuleButton()
    {
        SceneManager.LoadScene("Rule");
    }
}
