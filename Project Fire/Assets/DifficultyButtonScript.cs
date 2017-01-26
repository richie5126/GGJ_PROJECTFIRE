using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DifficultyButtonScript : MonoBehaviour {

	// Use this for initialization
	OptionsSingleton options;
	public int difficulty;
	void Start () {
		if(GameObject.Find("Singleton Options"))
			options = GameObject.Find("Singleton Options").GetComponent<OptionsSingleton>();
		GetComponent<Button> ().onClick.AddListener (setDifficulty);
	}
	void setDifficulty()
	{
		if(options != null)
		options.setDifficulty (difficulty);
	}
}
