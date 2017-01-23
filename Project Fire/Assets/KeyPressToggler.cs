using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class KeyPressToggler : MonoBehaviour {

	// Use this for initialization
	public Button b;
	public void ToggleButtonFromKey(Button b, KeyCode k)
	{
		if (Input.GetKeyDown (k))
			b.onClick.Invoke ();
	}
	void Start () {
		
	}
	
	// Update is called once per frame
	void Update () {
		ToggleButtonFromKey(b, KeyCode.Space);
	}
}
