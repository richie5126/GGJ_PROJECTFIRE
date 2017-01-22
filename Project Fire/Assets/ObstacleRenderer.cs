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
	public Transform player;

	int state;
	float lifetime;

	float timer;
	bool toggledOnce;
	public int secondsBetweenSpawning;
	// Use this for initialization
	void Start () {
		state = 1;
		timer = 1000.0f;
		toggledOnce = false;
		obstacleYScale = SINE_OBS.transform.localScale.y;
		lifetime = 60f;

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
		int rng = (int)Random.Range (0f, 5.99f);

		timer = timer + Time.deltaTime;

		if(timer > secondsBetweenSpawning)
		{
			switch(rng)
			{
			case 5:
				generateObstaclePatterns (new int[] { 5, -1 }, new int[] { 5, -1 });
				break;
			case 3:
				generateObstaclePatterns (new int[] { 3, -1 }, new int[] { -1, 3 });
				break;
			case 2:
				generateObstaclePatterns (new int[] { 2, -1 }, new int[] { -1, 2 });
				break;
			default:
				generateObstaclePatterns (new int[] { 1, -1 }, new int[] { -1, 1 });
			break;
			}
			timer = 0.0f;
		}
		
	}
}
