using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class ObstacleRenderer : MonoBehaviour {
	public GameObject SINE_OBS;
	public GameObject TRIANGLE_OBS;
	public GameObject SQUARE_OBS;

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

	}
	public void generateObstaclePatterns (int[] type, bool[] orientations)
	{
		for (int i = 0; i < type.Length; i++) {
			generateObstacle (type [i], orientations [i], i * stepSize);
		}
	}


	void generateObstacle(int type, bool orientation, float posX = 0)
	{
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
		}
		
		Debug.Log ("Instantiated" + timer);
	}
	
	// Update is called once per frame
	void Update () {
		timer = timer + Time.deltaTime;
		if ((int)timer % secondsBetweenSpawning == 0 && !toggledOnce) {

		   delegate (int[] a, bool[] b);

			generateObstaclePatterns(new int[] {3,3,3,1,1,2,2},
				new bool[] {true, false, true, false, true, false, true });


			toggledOnce = true;
		}
		else if ((int)timer % secondsBetweenSpawning != 0)
			toggledOnce = false;
		
	}
}
