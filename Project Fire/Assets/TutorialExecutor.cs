using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class TutorialExecutor : MonoBehaviour {

	// Use this for initialization
	public string [] tutorialText;
	int stage;
	int tipCount;
	void Start () {
		tipCount = tutorialText.Length;
		stage = 0;
		
	}
	public void nextTip()
	{
		if (stage < tipCount)
		stage++;
	}
	public string getCurrentTip()
	{
		return tutorialText [stage];
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
