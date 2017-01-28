using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class LoopingOsc : MonoBehaviour {

	// Use this for initialization
	public float intensity = 1.0f;
	public float rate = 3.0f;
	float start;

	float iX;
	void Start () {
		start = Time.time;
		iX = GetComponent<RectTransform> ().localPosition.x;
	}
	
	// Update is called once per frame
	void Update () {
		var pos = GetComponent<RectTransform> ().localPosition;

		float x = (intensity * -Mathf.Cos (rate * (Time.time - start)) + 0.5f);
		GetComponent<RectTransform> ().localPosition = new Vector2 (iX + x, pos.y);

	}
}
