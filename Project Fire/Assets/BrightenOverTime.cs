using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class BrightenOverTime : MonoBehaviour {

	// Use this for initialization
	public float fadeRate = 15.0f;
	public float interpolationRate = 0.5f;
	float start;
	Color origColor;
	void Start () {
		origColor = GetComponent<SpriteRenderer> ().color;
		GetComponent<SpriteRenderer>().color = new Color(0.4f,0.4f,0.4f,1f);
		start = Time.time;
		
	}

	// Update is called once per frame
	void Update () {
		
		float colorOsc = (0.3f * -Mathf.Cos (fadeRate * (Time.time - start)) + 0.6f);
		GetComponent<SpriteRenderer>().color = new Color(colorOsc,colorOsc,colorOsc,1f);
		
	}
}
