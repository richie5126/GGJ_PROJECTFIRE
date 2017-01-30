using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;
using UnityEngine.UI;

public class ChangeScene : MonoBehaviour {
	float timer;
	bool clicked;
	public GameObject loadingScreenAsset;
	bool mainGameCalled;
	AsyncOperation nextScene;
	public AudioSource start;

	GameObject loadingOverlay;
	GameObject singletonReference;

	public void displayLoad(AsyncOperation nextSceneBytes)
	{
		if (loadingOverlay == null)
			loadingOverlay = Instantiate (loadingScreenAsset);
		float f = loadingOverlay.transform.GetChild (1).GetComponent<Image> ().fillAmount;

		//Lerp on loading bar for better anim
		loadingOverlay.transform.GetChild (1).GetComponent<Image> ().fillAmount = Mathf.Lerp(
			f, nextSceneBytes.progress, 0.4f);
	
	}
	void Start()
	{
	}

	void Awake()
	{
		mainGameCalled = false;
		singletonReference = GameObject.Find ("SingletonParent");
	}
	void FixedUpdate()
	{
		if (nextScene != null)
			displayLoad (nextScene);
	}
		
	public void QuitLevel()
	{
		Application.Quit();
	}
	public void LoadTutorial()
	{
		mainGameCalled = true;
		nextScene = SceneManager.LoadSceneAsync ("Main-Empty");
	}
	public void LoadMenu()
	{
		nextScene = SceneManager.LoadSceneAsync("MainMenu");
	}
	public void LoadDifficulty()
	{
		nextScene = SceneManager.LoadSceneAsync ("Difficulty");
	}
	public void LoadCredits()
	{
		nextScene = SceneManager.LoadSceneAsync ("Credits");
	}
	public void LoadHelp()
	{
		nextScene = SceneManager.LoadSceneAsync ("Controls");
	}
	public void LoadStart()
	{
		if (!PlayerPrefs.HasKey ("FirstTimePlay")) {
			PlayerPrefs.SetInt ("FirstTimePlay", 0);
			mainGameCalled = true;
			nextScene = SceneManager.LoadSceneAsync ("Main-Empty");
		} else {
			nextScene = SceneManager.LoadSceneAsync ("Difficulty");
		}
	}
	public void LoadMain()
	{
		if (start != null)
			start.Play ();
		mainGameCalled = true;
		nextScene = SceneManager.LoadSceneAsync ("Main");
	}
	void OnDestroy()
	{
		if (mainGameCalled) {
			Destroy (singletonReference);
		}
	}
}