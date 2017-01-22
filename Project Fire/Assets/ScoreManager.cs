using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
public class ScoreManager : MonoBehaviour {

	// Use this for initialization
	public string score;
	public Text scoreDisp;
	void Start () {
		score = "00:00:00";
		var s = GameObject.Find ("Clock");
		if(s != null)
			score = s.transform.GetComponent<Clock> ().getScore ();
	
		scoreDisp.text = ""+score;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
