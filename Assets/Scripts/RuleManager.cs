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
        singleBingoButton.GetComponent<Image>().color = Color.blue;
        multiBingoButton.GetComponent<Image>().color = Color.white;
        multiBingoPanel.SetActive(false);
        singleBingoPanel.SetActive(true);

    }

    public void OnMultiPanelButton()
    {
        singleBingoButton.GetComponent<Image>().color = Color.white;
        multiBingoButton.GetComponent<Image>().color = Color.blue;
        singleBingoPanel.SetActive(false);
        multiBingoPanel.SetActive(true);
    }

    public void OnBackButton()
    {
        SceneManager.LoadScene("Title");
    }
}
