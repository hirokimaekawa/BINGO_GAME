using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Text;

public class InputPanel : MonoBehaviour
{
    //なんで、defaultって入るのか？→ネットでは、値がどの条件値にも当てはまらない場合の処理を、switch文で書きたい時に使うのがdefault

    [SerializeField] GameObject BingoButtonPrefab = default;

    //public OptionManager optionManager;

    //[SerializeField] Text bingoNumberText;

    int minNumber = 1;
    int maxNumber = 75;
    int count = 25;

    public int panelRansu;

    List<int> numbers = new List<int>();

    public List<int> panelRausuList = new List<int>();

    //public List<int> aNumber = new List<int>();

    public GameManager gameManager;

    private void Start()
    {
        OptionManager.instance.Load();
        Debug.Log("InputPanelのMaxNumberは" + OptionManager.instance.maxNumber);

        Invoke("SwapnPanel", 1);
        
    }

    void SwapnPanel()
    {
        for (int i = minNumber; i <= OptionManager.instance.maxNumber; i++)
        {
            //minNumber=1〜maxNumber=75
            numbers.Add(i);

        }


        while (count-- > 0)
        {

            int index = Random.Range(0, numbers.Count);

            panelRansu = numbers[index];

            //ここで、panelRansuをListに入れる
            panelRausuList.Add(panelRansu);
            Debug.Log(panelRansu);
            numbers.Remove(panelRansu);
            Debug.Log(panelRansu);
            GameObject buttonObj = Instantiate(BingoButtonPrefab, transform);

            buttonObj.GetComponentInChildren<Text>().text = panelRansu.ToString();
            buttonObj.GetComponent<InputButton>().number = panelRansu;
        }

        //Debug.Log(numbers[0]);
        //panelRansuは、パネル1個1個の数字、panelRansuそのものが数字
        //Debug.Log(panelRansu);

    }


    //0, 1, 2, 3, 4,
    //5, 6, 7, 8, 9,
    //10,11,12,13,14,
    //15,16,17,18,19,
    //20,21,22,23,24,
    bool CheckColBingo(int col)
    {
        for (int i = 0; i < 5; i++)
        {
            //aNumberの要素番号とpanelRausuListの要素番号が一致する
            if (!gameManager.ranses.Contains(panelRausuList[i + 5 * col]))
            {
                return false;
            }
        }
        OptionManager.instance.OnBingoSE();
        gameManager.InvokeBingoPanel();
        return true;

    }

    bool CheckColReach(int col,int number)
    {
        Debug.Log("CheckcolReach1");

        //この辺、もう一度確認
        //numberは5回ループさせて、チェックするということ？
        //colは、列のこと？
        for (int i = 0; i < 5; i++)
        {
            if (number == i)
            {
                continue;//iを飛ばしている。
            }

            if (!gameManager.ranses.Contains(panelRausuList[i + 5 * col]))
            {
                return false;
            }
        }
        //number = 0の時
        OptionManager.instance.OnReachSE();
        gameManager.InvokeReachPanel();
        return true;
    }

   
    bool CheckRowReach(int row,int number)
    {
        Debug.Log("CheckRow1");
       
        for (int i = 0; i < 5; i++)
        {
            if (number == i)
            {
                continue;
            }
          
            if (!gameManager.ranses.Contains(panelRausuList[5 * i + row]))
            {
                return false; 
            }
        }
       
        OptionManager.instance.OnReachSE();
        gameManager.InvokeReachPanel();
        return true;
    }

    bool CheckRowBingo(int row)
    {
        for (int i = 0; i < 5; i++)
        {
            
            if (!gameManager.ranses.Contains(panelRausuList[5 * i + row]))
            {
                return false;
            }
        }
        
        OptionManager.instance.OnBingoSE();
        gameManager.InvokeBingoPanel();
        return true;
    }

    bool CheckCrossBingo_0()
    {
        for (int i = 0; i < 5; i++)
        {
          
            if (!gameManager.ranses.Contains(panelRausuList[6 * i]))
            {
                return false;
            }
        }
        OptionManager.instance.OnBingoSE();
        gameManager.InvokeBingoPanel();
        return true;
    }

    bool CheckCrossReach_0(int number)
    {
        Debug.Log("CheckCross0_1");
       

        for (int i = 0; i < 5; i++)
        {

            if (number == i)
            {
                continue;
            }
            if (!gameManager.ranses.Contains(panelRausuList[6 * i]))
            {
                return false; 
            }
        }
        OptionManager.instance.OnReachSE();
        gameManager.InvokeReachPanel();
        return true;
    }

  

    bool CheckCrossBingo_4()
    {
        
        for (int i = 0; i < 5; i++)
        {
            if (!gameManager.ranses.Contains(panelRausuList[4 * i + 4]))
            {
                return false; 
            }
        }
        OptionManager.instance.OnBingoSE();
        gameManager.InvokeBingoPanel();
        return true;
    }

    bool CheckCrossReach_4(int number)
    {
        for (int i = 0; i < 5; i++)
        {
            if (number == i)
            {
                continue;
            }
            if (!gameManager.ranses.Contains(panelRausuList[4 * i + 4]))
            {
                return false; 
            }
        }
        OptionManager.instance.OnReachSE();
        gameManager.InvokeReachPanel();
        return true;
    }

    
    public void DebugReach()
    {
        for (int i = 0; i < 5; i++)
        {
            for (int col = 0; col < 5; col++)
            {
                //col=0　=>　配列になにもない（null）なら→UI表示→表示したら配列に入れる　もう二度とcol=0で反応しないようにしたい
                Debug.Log(col);
                CheckColReach(col, i);
            }
            for (int row = 0; row < 5; row++)
            {
                CheckRowReach(row, i);
            }
            CheckCrossReach_0(i);
            CheckCrossReach_4(i);
        }

    }

    public void DebugBingo()
    {
        //
        for (int i = 0; i < 5; i++)
        {
            CheckColBingo(i);
            CheckRowBingo(i);
        }
        CheckCrossBingo_0();
        CheckCrossBingo_4();

    }
}
