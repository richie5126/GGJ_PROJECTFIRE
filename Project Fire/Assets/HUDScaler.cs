using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class HUDScaler : MonoBehaviour {

	// Use this for initialization
	void Start () {
		GetComponent<RectTransform> ().sizeDelta = 
			new Vector2 (Camera.main.orthographicSize * (Screen.width / Screen.height), 
				Camera.main.orthographicSize * (Screen.height / Screen.width));
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
