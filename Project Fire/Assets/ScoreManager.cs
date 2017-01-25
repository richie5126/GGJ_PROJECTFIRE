using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ScoreManager : MonoBehaviour {

	// Use this for initialization
	public Text scoreDisp;
	public LeaderboardPopulator lp;
	void Start () {
		scoreDisp.text = lp.getRecentTime ();
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
