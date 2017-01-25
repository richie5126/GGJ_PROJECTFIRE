using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;


public class InputInvoker : MonoBehaviour {
	private GameObject s;



	void Start () {
		s = GameObject.Find ("SingletonParent");
	}
	
	// Update is called once per frame
	void Update () {
		
	}
	void OnEnable()
	{SceneManager.sceneLoaded += OnLoaded;}
	void OnDisable()
	{SceneManager.sceneLoaded -= OnLoaded;}
	void OnLoaded(Scene scene, LoadSceneMode mode)
	{
		if (s != null)
			Destroy (s);
	}

}
