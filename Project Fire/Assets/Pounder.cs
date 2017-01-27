using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class Pounder : MonoBehaviour {

	// Use this for initialization
	public float bpm;
	public float intensity;
	public float interpolationRate = 0.5f;
	float timer;
	float bpm_fraction;
	Vector2 origScale;
	void Start () {
		origScale = transform.localScale;
		timer = 0.0f;
		bpm_fraction = (60.0f / bpm);
	}
	
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;
		if (timer >= bpm_fraction) {
			transform.localScale *= (1f + intensity);
			timer = 0;
		}
		if (transform.localScale.magnitude > origScale.magnitude)
			transform.localScale = Vector2.Lerp (transform.localScale, origScale, interpolationRate);
		
		else transform.localScale = origScale;

		
	}
}
