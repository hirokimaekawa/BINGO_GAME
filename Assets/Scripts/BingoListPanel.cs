using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class BingoListPanel : MonoBehaviour
{
    //public OptionManager optionManager;

    int minNumber = 1;

    int maxNumber = 75;
    public GameObject bingoPanelPrefab;

    //ゆくゆく設定で、ビンゴの数を変更するから配列ではなく、List
    public List<GameObject> bingoPanelList = new List<GameObject>();

    //非表示だから、まだ実行されていない
    // Start is called before the first frame update
    void Awake()
    {
        OptionManager.instance.Load();
        //ここだけ、Debugができていない『なんでだろう？』
        Debug.Log("BingoListPanelのMaxNumberは" + OptionManager.instance.maxNumber);

        for (int i = minNumber; i <= OptionManager.instance.maxNumber; i++)
        {
            
            GameObject buttonObj = Instantiate(bingoPanelPrefab, transform);
            buttonObj.GetComponentInChildren<Text>().text = i.ToString();
            bingoPanelList.Add(buttonObj);
        }
    }

    private void Start()
    {
       
        gameObject.SetActive(false);
    }

    public void ChangeColor(int index)
    {
        bingoPanelList[index].GetComponent<Image>().color = Color.blue;
    }

    // Update is called once per frame
    void Update()
    {
        
    }
}
