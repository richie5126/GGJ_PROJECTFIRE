using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class KeyPressChecker : MonoBehaviour {

	// Use this for initialization
	bool waiting;
	KeyCode key;

	public bool heardEvent()
	{
		if (waiting && Input.GetKeyDown (key)) {
			Debug.Log ("End Waiting");
			return true;
		}
		return false;
	}
	public void waitForEvent(KeyCode k)
	{
		Debug.Log ("Waiting Start");
		waiting = true;
		key = k;
	}
	void Start () {
		waiting = false;
		
	}
	
	// Update is called once per frame
	void Update () {
		if (waiting && heardEvent ())
			waiting = false;
		
	}
}
