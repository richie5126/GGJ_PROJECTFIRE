using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class TutorialDisplayer : MonoBehaviour {
	public TutorialExecutor tut;
	public KeyPressChecker listener;
	public GameObject dispMedium;
	Text txt;
	float timer;

	void Start()
	{
		timer = 0.0f;
	}

	// Use this for initialization
	void Awake () {
		txt.text = tut.getCurrentTip ();
		listener.waitForEvent (KeyCode.Space);
	}
	
	// Update is called once per frame
	void Update () {
		if(timer > 0)
		timer -= Time.deltaTime;
		
		if (listener.heardEvent ()) {
			timer = 2.0f;
			tut.nextTip ();
		}
		
	}
}
