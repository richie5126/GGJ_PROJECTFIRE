using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraPounder : MonoBehaviour {

	// Use this for initialization
	public float bpm;
	public float intensity;
	public float interpolationRate = 0.5f;
	float [] samples;
	float timer;
	float bpm_fraction;
	Vector3 origPosition;
	void Start () {
		samples = new float[256];
		origPosition = transform.localPosition;
		timer = 0.0f;
		bpm_fraction = (60.0f / bpm);
	}

	// Update is called once per frame
	void FixedUpdate () {
		AudioListener.GetSpectrumData (samples, 0, FFTWindow.Rectangular);
		transform.Translate (new Vector3 (0f, 0f, -samples[1] * intensity));

		if (transform.localPosition.z < origPosition.z)
			transform.localPosition = Vector3.Lerp (transform.localPosition, origPosition, interpolationRate);

		else transform.localPosition = origPosition;


	}
}
