using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class TitleManager : MonoBehaviour
{
    //DontDestrotyしているのは、inspectorに格納しないほうがいい
    //public OptionManager optionManager;
   
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
}
