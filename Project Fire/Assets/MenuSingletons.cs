using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class MenuSingletons : MonoBehaviour {

	// Use this for initialization
	public static GameObject instance;

	void Awake()
	{
		if (instance == null)
			instance = this.gameObject;
		else
			Destroy (this.gameObject);

		DontDestroyOnLoad (this.gameObject);
	}
	void Start()
	{
		Crossfader cs = FindObjectOfType<Crossfader>();
		if (cs != null)
			cs.switchTracks (4);
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
