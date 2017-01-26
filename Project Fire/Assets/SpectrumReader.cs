using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class SpectrumReader : MonoBehaviour {

	// Use this for initialization
	public int samplingRate;
	public int lowestFreq;
	public int highestFreq;
	public GameObject barAsset;
	public float stepSize;
	GameObject[] bars;
	float [] heights;

	CamShake cam;

	void Start () {
		var tmp = GameObject.FindObjectsOfType<CamShake>();
		if (tmp.Length > 0)
			cam = tmp [0];
		
		bars = new GameObject[highestFreq - lowestFreq];
		heights = new float[samplingRate];
		for (int i = 0; i < highestFreq - lowestFreq; i++) {
			bars [i] = Instantiate (barAsset);
			bars[i].transform.SetParent (transform);
		}

		
	}

	// Update is called once per framevoid Update( )
	void Update()
	{
		AudioListener.GetSpectrumData (heights, 0, FFTWindow.Rectangular);

		for (int i = lowestFreq; i < highestFreq; i++) {
			bars [i - lowestFreq].transform.localScale = new Vector2 (bars[0].transform.localScale.x, 1 * heights [i]);
		}
	}
}
