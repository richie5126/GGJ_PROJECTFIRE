using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleRenderer : MonoBehaviour {
	public GameObject SINE_OBS;
	public GameObject TRIANGLE_OBS;
	public GameObject SQUARE_OBS;
	public GameObject CHOKE_OBS;
	public GameObject SHORTRECTANGLE_OBS;
	public GameObject SHORTSAW_OBS;
	public GameObject SHORTSINE_OBS;
	public float spawnDistance;
	public float obstacleXScale;
	public float obstacleYScale;
	public float stepSize;
	public GameObject player;

	int state;
	float lifetime;

	float timer;
	bool toggledOnce;
	public float secondsBetweenSpawning;
	// Use this for initialization
	void Start () {
		stepSize = player.GetComponent<GravityPlatformer2D> ().maxSpeed;
		secondsBetweenSpawning = (stepSize * 2) / player.GetComponent<GravityPlatformer2D> ().maxSpeed;
		state = 1;
		timer = 1000.0f;
		toggledOnce = false;
		obstacleYScale = SINE_OBS.transform.localScale.y;
		lifetime = 15f;

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
		} else if (type == 6) {

			GameObject tmp = Instantiate (SHORTSAW_OBS, 
				new Vector2 (transform.position.x + spawnDistance + posX, transform.position.y), 
				transform.rotation);

			if (orientation)
				tmp.transform.Rotate (new Vector3 (0, 0, 180));

			tmp.transform.localScale = new Vector2(obstacleXScale, tmp.transform.localScale.y);
			Destroy (tmp, lifetime);
		} else if (type == 7) {

			GameObject tmp = Instantiate (SHORTSINE_OBS, 
				new Vector2 (transform.position.x + spawnDistance + posX, transform.position.y), 
				transform.rotation);

			if (orientation)
				tmp.transform.Rotate (new Vector3 (0, 0, 180));

			tmp.transform.localScale = new Vector2(obstacleXScale, tmp.transform.localScale.y);
			Destroy (tmp, lifetime);
		} else if (type == 8) {

			GameObject tmp = Instantiate (SHORTSINE_OBS, 
				new Vector2 (transform.position.x + spawnDistance + posX, transform.position.y), 
				transform.rotation);

			if (orientation)
				tmp.transform.Rotate (new Vector3 (0, 0, 180));

			tmp.transform.localScale = new Vector2(-tmp.transform.localScale.x, tmp.transform.localScale.y);
			Destroy (tmp, lifetime);
		} else if (type == 9) {

			GameObject tmp = Instantiate (SHORTSAW_OBS, 
				new Vector2 (transform.position.x + spawnDistance + posX, transform.position.y), 
				transform.rotation);

			if (orientation)
				tmp.transform.Rotate (new Vector3 (0, 0, 180));

			tmp.transform.localScale = new Vector2(-tmp.transform.localScale.x, tmp.transform.localScale.y);
			Destroy (tmp, lifetime);
		}
	}
	
	// Update is called once per frame
	void Update () {

		stepSize = player.GetComponent<GravityPlatformer2D> ().maxSpeed * 1.1f;
		secondsBetweenSpawning = (stepSize * 2) / player.GetComponent<GravityPlatformer2D> ().maxSpeed;
		timer += Time.smoothDeltaTime;

		int rng = (int)Random.Range (1f, 7.99f);

		if(timer > secondsBetweenSpawning)
		{
			switch(rng)
			{
			case 7:
				generateObstaclePatterns (new int[] { 7, -1}, new int[] { 7, 1 });
				break;
			case 6:
				generateObstaclePatterns (new int[] { 6, -1}, new int[] { 6, 2 });
				break;
			case 5:
				generateObstaclePatterns (new int[] { 5, -1}, new int[] { 5, 3 });
				break;
			case 4:
				generateObstaclePatterns (new int[] { 4, 4 }, new int[] { 4, 4 });
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
