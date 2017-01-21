using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleRenderer : MonoBehaviour {
	public GameObject SINE_OBS;
	public GameObject TRIANGLE_OBS;
	public GameObject SQUARE_OBS;

	public float spawnDistance;

	float timer;
	bool toggledOnce;
	public int secondsBetweenSpawning;
	// Use this for initialization
	void Start () {
		timer = 0.0f;
		toggledOnce = false;
		
	}

	void generateRandomObstacle()
	{
		int type = (int)Random.Range(1.1f, 3.9f);
		GameObject tmp = Instantiate (SINE_OBS, 
			new Vector2 (transform.position.x + spawnDistance, transform.position.y), 
			transform.rotation);
		if(type <= 1) tmp.transform.Rotate (new Vector2(180, 0));
		Destroy (tmp, 10.0f);
		
		Debug.Log ("Instantiated" + timer);
	}
	
	// Update is called once per frame
	void Update () {
		timer = timer + Time.deltaTime;
		if ((int)timer % secondsBetweenSpawning == 0 && !toggledOnce) {
			generateRandomObstacle ();
			toggledOnce = true;
		}
		else if ((int)timer % secondsBetweenSpawning != 0)
			toggledOnce = false;
		
	}
}
