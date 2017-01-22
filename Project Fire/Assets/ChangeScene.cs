using UnityEngine;
using System.Collections;
using UnityEngine.SceneManagement;

public class ChangeScene : MonoBehaviour {
	float timer;
	bool clicked;

	public AudioSource start;

	public void Start()
	{
		start = null;
		clicked = false;
		timer = 0.0f;
	}
	public void Update()
	{
		timer += Time.deltaTime;
		if (clicked && timer >= 1.0f)
			SceneManager.LoadScene("Main");
	}

	public void LoadLevel() {
		clicked = true;
		if(start != null)
		start.Play ();
		
		timer = 0.0f;
	}
	public void QuitLevel()
	{
		Application.Quit();
	}
	public void LoadMenu()
	{
		SceneManager.LoadScene ("MainMenu");
	}
	public void LoadCredits()
	{
		SceneManager.LoadScene ("Credits");
	}
	public void LoadHelp()
	{
		SceneManager.LoadScene ("Controls");
	}
}