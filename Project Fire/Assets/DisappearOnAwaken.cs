using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class DisappearOnAwaken : MonoBehaviour {

	// Use this for initialization
	void Awake () {
		GetComponent<Image> ().CrossFadeAlpha (0.0f, 1.0f, false);
		Destroy (gameObject, 1.0f);
	}

	// Update is called once per frame
	void Update () {
		
	}
}
