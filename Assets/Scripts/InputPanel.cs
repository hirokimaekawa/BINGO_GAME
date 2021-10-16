using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using System.Text;

public class InputPanel : MonoBehaviour
{
    //なんで、defaultって入るのか？→ネットでは、値がどの条件値にも当てはまらない場合の処理を、switch文で書きたい時に使うのがdefault

    [SerializeField] GameObject BingoButtonPrefab = default;

    //[SerializeField] Text bingoNumberText;

    int minNumber = 1;
    int maxNumber = 75;
    int count = 25;

    public int panelRansu;

    List<int> numbers = new List<int>();

    public List<int> panelRausuList = new List<int>();

    public List<int> aNumber = new List<int>();

    public GameManager gameManager;

    private void Start()
    {

        for (int i = minNumber; i <= maxNumber; i++)
        {

            numbers.Add(i);

        }


        while (count-- > 0)
        {

            int index = Random.Range(0, numbers.Count);

            panelRansu = numbers[index];

            //ここで、panelRansuをListに入れる
            panelRausuList.Add(panelRansu);

            numbers.Remove(panelRansu);
            GameObject buttonObj = Instantiate(BingoButtonPrefab, transform);

            buttonObj.GetComponentInChildren<Text>().text = panelRansu.ToString();
            buttonObj.GetComponent<InputButton>().number = panelRansu;
        }

        Debug.Log(numbers[0]);


    }

    //横ビンゴ！
    bool Checkcol(int col)
    {
        for (int i = 0; i < 5; i++)
        {
            //aNumberの要素番号とpanelRausuListの要素番号が一致する
            if (!gameManager.ranses.Contains(panelRausuList[i + 5 * col]))
            {
                return false;
            }
        }
        return true;

    }

    //【できた】横リーチ判定=>0,1,2,3のリーチ判定はできる
    bool CheckcolReach1(int col)
    {
        for (int i = 0; i < 4; i++)
        {
            if (!gameManager.ranses.Contains(panelRausuList[i + 5 * col]))
            {
                return false;
            }
        }
        return true;
    }

    //【できた】横リーチ判定=>1,2,3,4のリーチ判定はできる
    bool CheckcolReach2(int col)
    {
        for (int i = 1; i < 5; i++)
        {
            if (!gameManager.ranses.Contains(panelRausuList[i + 5 * col]))
            {
                return false;
            }
        }
        return true;
    }


    

    //【できた】横リーチ判定=>0,2,3,4のリーチ判定はできる
    bool CheckcolReach3(int col)
    {
        for (int i = 2; i < 5; i++)
        {
            if (!gameManager.ranses.Contains(panelRausuList[i + 5 * col]))
            {
                return false;
            }
            
        }
        if (!gameManager.ranses.Contains(panelRausuList[5 * col]))
        {
            return false;
        }
        return true;
    }

    //0, 1, 2, 3, 4,
    //5, 6, 7, 8, 9,
    //10,11,12,13,14,
    //15,16,17,18,19,
    //20,21,22,23,24,

    //【まだできていない】横リーチ判定=>0,1,3,4のリーチ判定はできる
    bool CheckcolReach4(int col)
    {
        for (int i = 0; i < 3; i++)
        {
            if (!gameManager.ranses.Contains(panelRausuList[i + 5 * col]))
            {
                return false;
            }

        }

        for (int i = 3; i < 5; i++)
        {
            if (!gameManager.ranses.Contains(panelRausuList[i + 5 * col]))
            {
                return false;
            }

        }

        return true;
    }
    //【できた】横リーチ判定=>0,1,2,4のリーチ判定はできる
    bool CheckcolReach5(int col)
    {
        for (int i = 0; i < 3; i++)
        {
            if (!gameManager.ranses.Contains(panelRausuList[i + 5 * col]))
            {
                return false;
            }

        }
        if (!gameManager.ranses.Contains(panelRausuList[4+5 * col]))
        {
            return false;
        }
        return true;
    }

    //一致しているのに、falseのまま
    bool CheckRow(int row)
    {
        // 横5つ
        for (int i = 0; i < 5; i++)
        {
            // 答えと一致するか？
            if (!gameManager.ranses.Contains(panelRausuList[5 * i + row]))
            {
                return false; // 一致しないものがあれば,　その時点でfalse
            }
        }
        // 1つもfalseがない => 横は全て一致
        return true;
    }


    //一致しているはずなのに、falseのまま
    bool CheckCross0()
    {
        // 横5つ
        for (int i = 0; i < 5; i++)
        {
            // 答えと一致するか？
            if (!gameManager.ranses.Contains(panelRausuList[6 * i]))
            {
                return false; // 一致しないものがあれば,　その時点でfalse
            }
        }
        // 1つもfalseがない => 横は全て一致
        return true;
    }

    bool CheckCross4()
    {
        // 横5つ
        for (int i = 0; i < 5; i++)
        {
            // 答えと一致するか？
            if (!gameManager.ranses.Contains(panelRausuList[4 * i + 4]))
            {
                return false; // 一致しないものがあれば,　その時点でfalse
            }
        }
        // 1つもfalseがない => 横は全て一致
        return true;
    }

    public void DebugBingo()
    {
        for (int i = 0; i < 5; i++)
        {
            //Debug.Log($"{i+1}行目ビンゴ:{Checkcol(i)}");
            //Debug.Log($"{i + 1}行目リーチ:{CheckcolReach1(i)}");
            //Debug.Log($"{i + 1}行目リーチ:{CheckcolReach2(i)}");
            //Debug.Log($"{i + 1}行目リーチ:{CheckcolReach3(i)}");
            //Debug.Log($"{i + 1}行目リーチ:{CheckcolReach4(i)}");
            Debug.Log($"{i + 1}行目リーチ:{CheckcolReach4(i)}");
            //Debug.Log($"{i+1}列目ビンゴ:{CheckRow(i)}");
        }
        //Debug.Log("左上→右下ななめビンゴ"+CheckCross0());
        //Debug.Log("右上→左下ななめビンゴ"+CheckCross4());

    }

    
}




