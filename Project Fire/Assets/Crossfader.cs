using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Crossfader : MonoBehaviour {
	public AudioSource SINE_AUDIO;
	public AudioSource SAW_AUDIO;
	public AudioSource SQUARE_AUDIO;
	public AudioSource MENU_AUDIO;
	public AudioSource GAMEOVER_AUDIO;
	private float timer;

	bool isSine;
	bool isSaw;
	bool isSquare;
	bool isMenu;
	bool isGameover;

	public float changeTime;

	int activeTrack;
	bool typeToggled;
	// Use this for initialization
	void Awake () {
		if (FindObjectsOfType<Crossfader> ().Length > 1)
			Destroy (gameObject);
		
		DontDestroyOnLoad (this);
		timer = 0.0f;
		activeTrack = 5;
		SINE_AUDIO.volume = 0f;
		SAW_AUDIO.volume = 0f;
		SQUARE_AUDIO.volume = 0f;
		MENU_AUDIO.volume = 0f;
		isSine = false;
		isSaw = false;
		isSquare = false;
		isMenu = false;
		isGameover = false;

		typeToggled = false;
	}
	public void switchTracks(int state)
	{
		if (state == 1) {
			isSine = true;
			isSaw = false;
			isSquare = false;
			isMenu = false;
			isGameover = false;
			timer = changeTime;
		} else if (state == 2) {
		isSine = false;
		isSaw = true;
		isSquare = false;
			isMenu = false;
			isGameover = false;
		timer = changeTime;
		} else if (state == 3) {
		isSine = false;
		isSaw = false;
		isSquare = true;
			isMenu = false;
			isGameover = false;
		timer = changeTime;
		} else if (state == 4) {
			isSine = false;
			isSaw = false;
			isSquare = false;
			isMenu = true;
			isGameover = false;

			timer = changeTime;
		} else if (state == 5) {
			isSine = false;
			isSaw = false;
			isSquare = false;
			isMenu = false;
			isGameover = true;
			timer = changeTime;
		}
	}
	
	// Update is called once per frame
	void Update () {
		timer -= Time.deltaTime;
		/*

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
		if (Input.GetKeyUp (KeyCode.A) ||
		    Input.GetKeyUp (KeyCode.S) ||
		    Input.GetKeyUp (KeyCode.D))
			typeToggled = false;
			*/


		if (isSine && timer >= 0 && activeTrack != 1) {
			SINE_AUDIO.volume = (changeTime - timer) / changeTime;
			if (activeTrack == 2)
				SAW_AUDIO.volume = timer / changeTime;
			if (activeTrack == 3)
				SQUARE_AUDIO.volume = timer / changeTime;
			if (activeTrack == 4)
				MENU_AUDIO.volume = timer / changeTime;
			if (activeTrack == 5)
				GAMEOVER_AUDIO.volume = timer / changeTime;
		} else if (isSaw && timer >= 0 && activeTrack != 2) {
			SAW_AUDIO.volume = (changeTime - timer) / changeTime;
			if (activeTrack == 1)
				SINE_AUDIO.volume = timer / changeTime;
			if (activeTrack == 3)
				SQUARE_AUDIO.volume = timer / changeTime;
			if (activeTrack == 4)
				MENU_AUDIO.volume = timer / changeTime;
			if (activeTrack == 5)
				GAMEOVER_AUDIO.volume = timer / changeTime;
		} else if (isSquare && timer >= 0 && activeTrack != 3) {

			SQUARE_AUDIO.volume = (changeTime - timer) / changeTime;
			if (activeTrack == 2)
				SAW_AUDIO.volume = timer / changeTime;
			if (activeTrack == 1)
				SINE_AUDIO.volume = timer / changeTime;
			if (activeTrack == 4)
				MENU_AUDIO.volume = timer / changeTime;
			if (activeTrack == 5)
				GAMEOVER_AUDIO.volume = timer / changeTime;

		} else if (isMenu && timer >= 0 && activeTrack != 4) {

			MENU_AUDIO.volume = (changeTime - timer) / changeTime;
			if (activeTrack == 2)
				SAW_AUDIO.volume = timer / changeTime;
			if (activeTrack == 1)
				SINE_AUDIO.volume = timer / changeTime;
			if (activeTrack == 3)
				SQUARE_AUDIO.volume = timer / changeTime;
			if (activeTrack == 5)
				GAMEOVER_AUDIO.volume = timer / changeTime;
		} else if (isGameover && timer > 0 && activeTrack != 5) {

			GAMEOVER_AUDIO.volume = (changeTime - timer) / changeTime;
			if (activeTrack == 2)
				SAW_AUDIO.volume = timer / changeTime;
			if (activeTrack == 1)
				SINE_AUDIO.volume = timer / changeTime;
			if (activeTrack == 3)
				SQUARE_AUDIO.volume = timer / changeTime;
			if (activeTrack == 4)
				MENU_AUDIO.volume = timer / changeTime;
		}
		if (timer <= 0f) {
			if (isSine) {
				activeTrack = 1;
				SAW_AUDIO.volume = 0f;
				SQUARE_AUDIO.volume = 0f;
				GAMEOVER_AUDIO.volume = 0f;
				MENU_AUDIO.volume = 0f;
			} else if (isSaw) {
				SINE_AUDIO.volume = 0f;
				SQUARE_AUDIO.volume = 0f;
				GAMEOVER_AUDIO.volume = 0f;
				MENU_AUDIO.volume = 0f;
				activeTrack = 2;
			} else if (isSquare) {

				SAW_AUDIO.volume = 0f;
				SINE_AUDIO.volume = 0f;
				GAMEOVER_AUDIO.volume = 0f;
				MENU_AUDIO.volume = 0f;
				activeTrack = 3;
			} else if (isMenu) {
				SAW_AUDIO.volume = 0f;
				SINE_AUDIO.volume = 0f;
				GAMEOVER_AUDIO.volume = 0f;
				SQUARE_AUDIO.volume = 0f;
				activeTrack = 4;
			} else if (isGameover) {
				SAW_AUDIO.volume = 0f;
				SINE_AUDIO.volume = 0f;
				MENU_AUDIO.volume = 0f;
				SQUARE_AUDIO.volume = 0f;
				activeTrack = 5;
			}

			timer = 0f;
		}
		
	}
}
