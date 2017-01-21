using UnityEngine;

public class EndlessBackground : MonoBehaviour { 
	private Vector3 backPos; 
	public float width;
	public float height; 
	private float X; 
	private float Y;
	void OnBecameInvisible()
	{
		//calculate current position
		backPos = gameObject.transform.localPosition;
		//calculate new position
		X = backPos.x + width*2;
		//move to new position when invisible
		gameObject.transform.localPosition = new Vector2 (X, 0f);
	}
	void Update()
	{
		gameObject.transform.localPosition = new Vector2 (gameObject.transform.localPosition.x - 3.0f * Time.deltaTime, 0f);
		if (gameObject.transform.localPosition.x <= -25.0f)
			gameObject.transform.localPosition = new Vector2 (gameObject.transform.localPosition.x + 50.0f, 0f);
	}
}