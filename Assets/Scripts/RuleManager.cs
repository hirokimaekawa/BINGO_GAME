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
        singleBingoPanel.SetActive(true);
        singleBingoImage_1.SetActive(true);


        //singleBingoButton.GetComponent<Image>().color = Color.blue;
        //multiBingoButton.GetComponent<Image>().color = Color.white;
        //multiBingoPanel.SetActive(false);
        //singleBingoPanel.SetActive(true);

    }

    public void OnSingleBingoImage_1()
    {
        singleBingoImage_1.SetActive(false);
        singleBingoImage_2.SetActive(true);
    }
    public void OnSingleBingoImage_2()
    {
        singleBingoImage_2.SetActive(false);
        singleBingoPanel.SetActive(false);
    }

    public void OnMultiPanelButton()
    {
        multiBingoPanel.SetActive(true);
        multiBingoImage_1.SetActive(true);
        //singleBingoButton.GetComponent<Image>().color = Color.white;
        //multiBingoButton.GetComponent<Image>().color = Color.blue;
        //singleBingoPanel.SetActive(false);
        //multiBingoPanel.SetActive(true);
    }

    public void OnMultiBingoImage_1()
    {
        multiBingoImage_1.SetActive(false);
        multiBingoImage_2.SetActive(true);
    }

    public void OnMultiBingoImage_2()
    {
        multiBingoImage_2.SetActive(false);
        multiBingoPanel.SetActive(false);
    }

    public void OnBackButton()
    {
        SceneManager.LoadScene("Title");
    }
}
