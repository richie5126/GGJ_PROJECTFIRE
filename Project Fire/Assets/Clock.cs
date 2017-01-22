using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class Clock : MonoBehaviour {

	// Use this for initialization
	int minTens;
	int minUnits;
	int secTens;
	int secUnits;
	int msecTens;
	int msecUnits;

	float start;
	Text clock;
	void Start() {
		minTens = 0;
		minUnits = 0;
		secTens = 0;
		secUnits = 0;
		msecTens = 0;
		msecUnits = 0;

		clock = GameObject.Find ("Alive").GetComponent<Text> ();
		start = Time.time;
		
	}
	void Awake()
	{
		DontDestroyOnLoad (gameObject);
	}
	public string getScore()
	{

		Destroy (gameObject, 1.0f);
		return (minTens + "" + minUnits + ":" + secTens + "" + secUnits + ":" + msecTens + "" + msecUnits);
	}
	void SetClock(float secondsElapsed)
	{
		
		minTens = (int) secondsElapsed / 600;
		minUnits = (int)secondsElapsed / 60;

		secTens = (int)(secondsElapsed % 60) / 10;
		secUnits = (int)(secondsElapsed % 10);

		msecTens = (int) ((secondsElapsed % 1)*10);
		msecUnits = (int) ((secondsElapsed % 1)*100 % 10);
	}

	// Update is called once per frame
	void FixedUpdate () {
		SetClock (Time.time - start);
		if(clock != null)
		clock.text = 
			(minTens +""+ minUnits + ":" + secTens +""+ secUnits + ":" + msecTens +""+ msecUnits);
		
	}
}
