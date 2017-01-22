using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleRenderer : MonoBehaviour {
	public GameObject SINE_OBS;
	public GameObject TRIANGLE_OBS;
	public GameObject SQUARE_OBS;
	public GameObject CHOKE_OBS;
	public GameObject SHORTRECTANGLE_OBS;

	public float spawnDistance;
	public float obstacleXScale;
	public float obstacleYScale;
	public float stepSize;

	float lifetime;

	float timer;
	bool toggledOnce;
	public int secondsBetweenSpawning;
	// Use this for initialization
	void Start () {
		timer = 0.0f;
		toggledOnce = false;
		obstacleYScale = SINE_OBS.transform.localScale.y;
		lifetime = 60f;
		secondsBetweenSpawning = (int) (secondsBetweenSpawning * Time.deltaTime);

	}
	public void generateObstaclePatterns (int[] lowerfloor, int[] upperfloor)
	{
		if (lowerfloor.Length != upperfloor.Length)
			return;
		
		for (int i = 0; i < lowerfloor.Length; i++) {
			generateObstacle (lowerfloor [i], true, i * stepSize);
			generateObstacle (upperfloor [i], false, i * stepSize);
		}
	}


	void generateObstacle(int type, bool orientation, float posX = 0)
	{
		if (type == -1)
			return;
		
		if (type == 1) {
			GameObject tmp = Instantiate (SINE_OBS, 
				                 new Vector2 (transform.position.x + spawnDistance + posX, transform.position.y), 
				                 transform.rotation);
			if (orientation)
				tmp.transform.Rotate (new Vector3 (0, 0, 180));
			
			tmp.transform.localScale = new Vector2(obstacleXScale, tmp.transform.localScale.y);
			Destroy (tmp, lifetime);
		} else if (type == 2) {
			GameObject tmp = Instantiate (TRIANGLE_OBS, 
				                 new Vector2 (transform.position.x + spawnDistance + posX, transform.position.y), 
				                 transform.rotation);
			if (orientation)
			tmp.transform.Rotate (new Vector3 (0, 0, 180));


			tmp.transform.localScale = new Vector2(obstacleXScale, tmp.transform.localScale.y);
			Destroy (tmp, lifetime);
		} else if (type == 3) {

			GameObject tmp = Instantiate (SQUARE_OBS, 
				new Vector2 (transform.position.x + spawnDistance + posX, transform.position.y), 
				transform.rotation);

			if (orientation)
				tmp.transform.Rotate (new Vector3 (0, 0, 180));
			
			tmp.transform.localScale = new Vector2(obstacleXScale, tmp.transform.localScale.y);
			Destroy (tmp, lifetime);
		} else if (type == 4) {

			GameObject tmp = Instantiate (CHOKE_OBS, 
				new Vector2 (transform.position.x + spawnDistance + posX, transform.position.y), 
				transform.rotation);

			if (orientation)
				tmp.transform.Rotate (new Vector3 (0, 0, 180));

			tmp.transform.localScale = new Vector2(obstacleXScale, tmp.transform.localScale.y);
			Destroy (tmp, lifetime);
		} else if (type == 5) {

			GameObject tmp = Instantiate (SHORTRECTANGLE_OBS, 
				new Vector2 (transform.position.x + spawnDistance + posX, transform.position.y), 
				transform.rotation);

			if (orientation)
				tmp.transform.Rotate (new Vector3 (0, 0, 180));

			tmp.transform.localScale = new Vector2(obstacleXScale, tmp.transform.localScale.y);
			Destroy (tmp, lifetime);
		}

		
		Debug.Log ("Instantiated" + timer);
	}
	
	// Update is called once per frame
	void Update () {
		int rng = (int)Random.Range (0f, 6f);
		timer = timer + Time.deltaTime;
		if ((int)timer % secondsBetweenSpawning == 0 && !toggledOnce) {

			switch(rng)
			{
			default:
				generateObstaclePatterns (new int[] {-1, 4, -1, 4, 1, -1, 5, 4, 5},
										  new int[] { -1, 4, -1, 4, -1, 1, 5, 4, 5});

				break;
			}


			toggledOnce = true;
		}
		else if ((int)timer % secondsBetweenSpawning != 0)
			toggledOnce = false;
		
	}
}
