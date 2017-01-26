using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OptionsSingleton : MonoBehaviour {

	// Use this for initialization
	public static GameObject instance;
	public float gameVolume;

	void Awake()
	{
		if (instance == null)
			instance = this.gameObject;
		else
			Destroy (this.gameObject);

		DontDestroyOnLoad (this.gameObject);

	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
