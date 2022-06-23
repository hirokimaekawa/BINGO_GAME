using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class RuleManager : MonoBehaviour
{
    public GameObject singleBingoPanel;
    public GameObject multiBingoPanel;

    public GameObject singleBingoButton;
    public GameObject multiBingoButton;
    public GameObject singleBingoImage_1;
    public GameObject singleBingoImage_2;
    public GameObject multiBingoImage_1;
    public GameObject multiBingoImage_2;


    // Start is called before the first frame update
    void Start()
    {
        
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnSinglePanelButton()
    {
        OptionManager.instance.OnButtonSE();
        singleBingoPanel.SetActive(true);
        singleBingoImage_1.SetActive(true);

    }

    public void OnSingleBingoImage_1()
    {
        OptionManager.instance.OnButtonSE();
        singleBingoImage_1.SetActive(false);
        singleBingoImage_2.SetActive(true);
    }
    public void OnSingleBingoImage_2()
    {
        OptionManager.instance.OnButtonSE();
        singleBingoImage_2.SetActive(false);
        singleBingoPanel.SetActive(false);
    }

    public void OnMultiPanelButton()
    {
        OptionManager.instance.OnButtonSE();
        multiBingoPanel.SetActive(true);
        multiBingoImage_1.SetActive(true);
    }

    public void OnMultiBingoImage_1()
    {
        OptionManager.instance.OnButtonSE();
        multiBingoImage_1.SetActive(false);
        multiBingoImage_2.SetActive(true);
    }

    public void OnMultiBingoImage_2()
    {
        OptionManager.instance.OnButtonSE();
        multiBingoImage_2.SetActive(false);
        multiBingoPanel.SetActive(false);
    }

    public void OnBackButton()
    {
        OptionManager.instance.OnButtonSE();
        SceneManager.LoadScene("Title");
    }
}
