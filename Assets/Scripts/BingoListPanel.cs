using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BingoListPanel : MonoBehaviour
{
    //public OptionManager optionManager;

    int minNumber = 1;

    //int maxNumber = 75;
    public GameObject bingoPanelPrefab;


    public List<GameObject> bingoPanelList = new List<GameObject>();

   
    // Start is called before the first frame update
    void Awake()
    {
        OptionManager.instance.Load();
        for (int i = minNumber; i <= OptionManager.instance.maxNumber; i++)
        {
            GameObject buttonObj = Instantiate(bingoPanelPrefab, transform);
            buttonObj.GetComponentInChildren<Text>().text = i.ToString();
            bingoPanelList.Add(buttonObj);
        }
    }

    private void Start()
    {
       //Insepectorで最初、Trueにしておかないと、
        gameObject.SetActive(false);
    }

    public void ChangeColor(int index)
    { 
        //bingoPanelList[index].GetComponent<Image>().sprite = Resources.Load<Sprite>("TouchedButton");
        bingoPanelList[index].GetComponent<Image>().color = new Color(1,1,1,1);

    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
