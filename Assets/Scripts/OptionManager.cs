using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;

public class OptionManager : MonoBehaviour
{
    public int maxNumber;

    public AudioSource audioSourceBGM;
    public AudioSource audioSourceSE;
    public AudioClip [] audioClipsSE;

    //public GameManager gameManager;
 
    public static OptionManager instance;

    private void Awake()
    {
        if (instance == null)
        {
            instance = this;
            DontDestroyOnLoad(this.gameObject);
        }
        else
        {
            Destroy(this.gameObject);
        }
    }
    //シングルトン終わり

    // Start is called before the first frame update
    void Start()
    {
        //Titleから始めると、ここでエラーが生じている。OptionManagerのinspectorに何も入っていない状態だから
        audioSourceSE.PlayOneShot(audioClipsSE[2]);
       
        maxNumber = 75;
    }

    // Update is called once per frame
    void Update()
    {
        
    }

    public void OnBGMVolumeUp()
    {
        audioSourceBGM.volume += 0.1f;
    }

    public void OnBGMVolumeDown()
    {
        audioSourceBGM.volume -= 0.1f;
    }

    public void OnSoundVolumeUp()
    {
        audioSourceSE.volume += 0.1f;
        audioSourceSE.PlayOneShot(audioClipsSE[2]);
    }

    public void OnSoundVolumeDown()
    {
        audioSourceSE.volume -= 0.1f;
        audioSourceSE.PlayOneShot(audioClipsSE[2]);
    }

    public void OnBingoNumberReduce()
    {
        if (maxNumber <= 75 && maxNumber > 25)
        {
            maxNumber--;
            Debug.Log("左ボタン");
        }
        
    }

    public void OnBingoumberIncrease()
    {
        if (maxNumber < 75 && maxNumber >= 25)
        {
            maxNumber++;
            Debug.Log("右ボタン");
        }
        
    }

    public void OnButtonSE()
    {
        audioSourceSE.PlayOneShot(audioClipsSE[2]);
    }

    string SAVEKEY = "SAVE-KEY";

    public void OnBackButton()
    {
        Save();
        Debug.Log(maxNumber);
        SceneManager.LoadScene("Title");
    }

    public void OnReachSE()
    {
        //なっている。
        //Debug.Log("SEが鳴っている");
        audioSourceSE.PlayOneShot(audioClipsSE[0]);
        //GameManager.instance.InvokeReachPanel();
    }

    public void OnBingoSE()
    {
        audioSourceSE.PlayOneShot(audioClipsSE[1]);
        //GameManager.instance.InvokeBingoPanel();
        //【11月23日】GameManager.csのBingoPanelもSEも鳴っていない＜スクショ済み＞
    }
    

    void Save()
    {
        PlayerPrefs.SetInt(SAVEKEY, maxNumber);
        PlayerPrefs.Save();
    }

    public void Load()
    {
        //デバックを取るためには、maxNumberを作る
        maxNumber = PlayerPrefs.GetInt(SAVEKEY, maxNumber);
        Debug.Log(maxNumber);
    }
}
