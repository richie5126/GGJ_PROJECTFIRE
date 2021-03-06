﻿using UnityEngine; 
using System.Collections;

public class CamShake : MonoBehaviour { 

	public bool shakePosition;
	public bool shakeRotation;

	float shakeIntensity = 0.0f;
	float shakeDecay = 0.0f;
	private Vector3 OriginalPos;
	private Quaternion OriginalRot;
	float currentShakeIntensity = 0.0f;

	private bool isShakeRunning = false;


	public void DoShake(float intensity, float decayRate)
	{
		if (currentShakeIntensity > 0.0f)
			return;
		
		OriginalPos = transform.localPosition;
		OriginalRot = transform.rotation;
		shakeIntensity = intensity;
		shakeDecay = decayRate;

		StartCoroutine ("ProcessShake");
	}

	IEnumerator ProcessShake()
	{
		if (!isShakeRunning) {
			isShakeRunning = true;
			currentShakeIntensity = shakeIntensity;

			while (currentShakeIntensity > 0) {
				if (shakePosition) {
					transform.localPosition = OriginalPos + Random.insideUnitSphere * currentShakeIntensity;
				}
				if (shakeRotation) {
					transform.rotation = new Quaternion (OriginalRot.x + Random.Range (-currentShakeIntensity, currentShakeIntensity) * .2f,
						OriginalRot.y + Random.Range (-currentShakeIntensity, currentShakeIntensity) * .2f,
						OriginalRot.z + Random.Range (-currentShakeIntensity, currentShakeIntensity) * .2f,
						OriginalRot.w + Random.Range (-currentShakeIntensity, currentShakeIntensity) * .2f);
				}
				currentShakeIntensity -= shakeDecay;
				yield return null;
			}

			isShakeRunning = false;
		}
	}
}