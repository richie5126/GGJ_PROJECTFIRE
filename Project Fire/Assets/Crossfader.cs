﻿using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Crossfader : MonoBehaviour {
	public AudioSource SINE_AUDIO;
	public AudioSource SAW_AUDIO;
	public AudioSource SQUARE_AUDIO;
	public AudioSource CHANGE_AUDIO;
	private float timer;

	bool isSine;
	bool isSaw;
	bool isSquare;

	public float changeTime;

	int activeTrack;
	bool typeToggled;
	// Use this for initialization
	void Start () {
		timer = 0.0f;
		activeTrack = 1;
		SAW_AUDIO.volume = 0f;
		SQUARE_AUDIO.volume = 0f;
		isSine = true;
		isSaw = false;
		isSquare = false;
		typeToggled = false;
	}
	public void switchTracks(int state)
	{
		if (state == 1) {
			isSine = true;
			isSaw = false;
			isSquare = false;
			timer = changeTime;
		} else if (state == 2) {
		isSine = false;
		isSaw = true;
		isSquare = false;
		timer = changeTime;
		} else if (state == 3) {
		isSine = false;
		isSaw = false;
		isSquare = true;
		timer = changeTime;
	}
	}
	
	// Update is called once per frame
	void Update () {
		timer -= Time.deltaTime;

		if (Input.GetKeyDown (KeyCode.A) ||
		    Input.GetKeyDown (KeyCode.S) ||
		    Input.GetKeyDown (KeyCode.D) && !typeToggled) {
			if (Input.GetKeyDown (KeyCode.A))
				switchTracks (1);
			if (Input.GetKeyDown (KeyCode.S))
				switchTracks (2);
			if (Input.GetKeyDown (KeyCode.D))
				switchTracks (3);
			typeToggled = true;
		}


		if (isSine && timer > 0 && activeTrack != 1) {
			SINE_AUDIO.volume = (changeTime - timer) / changeTime;
			if(activeTrack == 2)
				SAW_AUDIO.volume = timer / changeTime;
			if(activeTrack == 3)
				SQUARE_AUDIO.volume = timer / changeTime;
		}
		else if (isSaw && timer > 0 && activeTrack != 2) {
			SAW_AUDIO.volume = (changeTime - timer) / changeTime;
			if(activeTrack == 1)
				SINE_AUDIO.volume = timer / changeTime;
			if(activeTrack == 3)
				SQUARE_AUDIO.volume = timer / changeTime;
		}
		else if (isSquare && timer > 0 && activeTrack != 3) {

			SQUARE_AUDIO.volume = (changeTime - timer) / changeTime;
			if(activeTrack == 2)
				SAW_AUDIO.volume = timer / changeTime;
			if(activeTrack == 1)
				SINE_AUDIO.volume = timer / changeTime;

		}
		if (timer <= 0f && typeToggled) {

			typeToggled = false;
			if(isSine) activeTrack = 1;
			else if(isSaw) activeTrack = 2;
			else if(isSquare) activeTrack = 3;

			timer = 0f;
		}
		
	}
}
