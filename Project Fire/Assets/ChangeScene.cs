﻿using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour {
	float timer;
	bool clicked;
	bool mainGameCalled;
	public AudioSource start;
	GameObject singletonReference;

	void Start()
	{
		Application.targetFrameRate = 60;
	}

	void Awake()
	{
		mainGameCalled = false;
		singletonReference = GameObject.Find ("SingletonParent");
	}
		
	public void QuitLevel()
	{
		Application.Quit();
	}
	public void LoadTutorial()
	{
		mainGameCalled = true;
		SceneManager.LoadSceneAsync ("Main-Empty");
	}
	public void LoadMenu()
	{
		SceneManager.LoadSceneAsync("MainMenu");
	}
	public void LoadCredits()
	{
		SceneManager.LoadSceneAsync ("Credits");
	}
	public void LoadHelp()
	{
		SceneManager.LoadScene ("Controls");
	}
	public void LoadMain()
	{
		if (start != null)
			start.Play ();
		mainGameCalled = true;
		SceneManager.LoadSceneAsync("Main");
	}
	void OnDestroy()
	{
		if (mainGameCalled) {
			Destroy (singletonReference);
		}
	}
}