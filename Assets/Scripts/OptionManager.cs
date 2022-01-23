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

 
    public static OptionManager instance;

    private void Awake()
    {
        //このセーブ（Awake）シングルトンのクラスの場合、いつ発動しているんだろう？
        //コメントアウトしたら、InspectorのmaxNumberが、0になっている
        //Save();
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
       
        audioSourceSE.PlayOneShot(audioClipsSE[0]);
     
    }

    public void OnBingoSE()
    {
        audioSourceSE.PlayOneShot(audioClipsSE[1]);
        
    }
    

    void Save()
    {
        PlayerPrefs.SetInt(SAVEKEY, maxNumber);
        PlayerPrefs.Save();
    }

    public void Load()
    {
        maxNumber = PlayerPrefs.GetInt(SAVEKEY, maxNumber);
    }
}
