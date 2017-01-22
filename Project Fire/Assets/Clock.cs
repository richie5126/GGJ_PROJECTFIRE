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

	void Start() {
		minTens = 0;
		minUnits = 0;
		secTens = 0;
		secUnits = 0;
		msecTens = 0;
		msecUnits = 0;
		start = Time.time;
		
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
		GetComponent<Text>().text = 
			(minTens +""+ minUnits + ":" + secTens +""+ secUnits + ":" + msecTens +""+ msecUnits);
		
	}
}
