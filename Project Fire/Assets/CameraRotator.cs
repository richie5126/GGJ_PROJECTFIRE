using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CameraRotator : MonoBehaviour {

	// Use this for initialization
	public float xMaxDegree;
	public float yMaxDegree;
	public float xRate;
	public float yRate;

	float start;
	void Start () {
		start = Time.time;
	}
	
	// Update is called once per frame
	void Update () {
		float xRotMult = Mathf.Sin (xRate * (Time.time - start));
		float yRotMult = Mathf.Sin (yRate * (Time.time - start));
		transform.localRotation = Quaternion.Euler (
			new Vector3 (xRotMult * xMaxDegree, yRotMult * yMaxDegree, 0f));
		
	}
}
