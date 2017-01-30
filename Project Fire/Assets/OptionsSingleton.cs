using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class OptionsSingleton : MonoBehaviour {

	// Use this for initialization
	public static GameObject instance;
	public float gameVolume;
	public int difficulty;
	void Start()
	{
		Application.targetFrameRate = 60;
	}

	void Awake()
	{
		if (instance == null)
			instance = this.gameObject;
		else
			Destroy (this.gameObject);

		DontDestroyOnLoad (this.gameObject);

	}
	public void setDifficulty(int x)
	{
		difficulty = x;
	}
	public int getDifficulty()
	{
		return difficulty;
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
