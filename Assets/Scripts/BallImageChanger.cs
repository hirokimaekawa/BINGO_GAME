using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

//このスクリプトは、BingoBallTubeViewでアタッチする予定
public class BallImageChanger : MonoBehaviour
{
    //ここに、⑤種類のビンゴボールのImageを格納する
    public Sprite[] sprite;

    private Image images;

    public BingoBallView bingoBallView;

    // Start is called before the first frame update
    void Start()
    {
        images = GetComponent<Image>();
        
    }

    // Update is called once per frame
    void Update()
    {
        //もし、ビンゴボールのSetActiveがTrueなら
        //if (bingoBallView.gameObject.SetActive(true))
        //{
        images.sprite = sprite[Random.Range(0,sprite.Length)];

        //}
    }
}
