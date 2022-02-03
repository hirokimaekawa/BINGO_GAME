using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class RuleManager : MonoBehaviour
{
    public GameObject singleBingoPanel;
    public GameObject multiBingoPanel;


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
        multiBingoPanel.SetActive(false);
        singleBingoPanel.SetActive(true);

    }

    public void OnMultiPanelButton()
    {
        singleBingoPanel.SetActive(false);
        multiBingoPanel.SetActive(true);
    }

    public void OnBackButton()
    {
        SceneManager.LoadScene("Title");
    }
}
