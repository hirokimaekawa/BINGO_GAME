using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BallGenerator : MonoBehaviour
{
    [SerializeField] Transform ballparent;
    [SerializeField] Transform spawnPosition;
    
    [SerializeField] BingoBallView bingoBallPrefab;

    //Ballの生成
    public BingoBallView Spawn()
    {
        //生成するときに、親を設定できるからballparentを作る。
        BingoBallView bingoBall = Instantiate(bingoBallPrefab,ballparent,false);
        //でも、この状態だと親の下にプレハブが生成できても、どのポジションに生成されるのかはわからない。→だから、spawnPositionを作った。
        bingoBall.transform.position = spawnPosition.position;
        return bingoBall;
    }

}
