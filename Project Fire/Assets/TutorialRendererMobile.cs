using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;
public class TutorialRendererMobile : MonoBehaviour {

	public string [] tutText;
	public string [] buttonNames;
	public GameObject tutBox;
	public GameObject HUD_Canvas;
	public ObstacleRenderer obstacleRenderer;
	public EventSystem es;
	// Use this for initialization
	GameObject tut;
	bool satisfied;
	float timer;
	int currentCondition;
	public bool getButtonDown(string name)
	{
		if (EventSystem.current.currentSelectedGameObject == null)
			return false;
		
		else if (EventSystem.current.currentSelectedGameObject.name.Equals (name)) {
			EventSystem.current.SetSelectedGameObject (null);
			return true;
		} else {
			return false;
		}
	}
	public bool conditionSatisfied()
	{
		return satisfied;
	}
	bool isAboveCenter()
	{
		return tut.transform.localPosition.y > 0.0f;
	}
	bool isAboveBottom()
	{
		return tut.transform.localPosition.y > -(Screen.height / 2) + 1;
	}
	void Start () {
		satisfied = false;
		tut = Instantiate(tutBox, new Vector2(0f, Screen.height / 2), Quaternion.identity);
		tut.transform.SetParent (HUD_Canvas.transform, false);
		currentCondition = 0;
		timer = 0.0f;
	}

	// Update is called once per frame
	void Update () {
		if (timer > 0.0f)
			timer -= Time.deltaTime;

		if (tut == null)
			return;

		tut.GetComponent<Text> ().text = tutText [currentCondition];

		//move down to display area and wait 4 seconds before testing for input
		if (!satisfied && isAboveCenter ()) {
			tut.transform.localPosition = Vector2.Lerp (tut.transform.localPosition,
				new Vector2 (0f, -4.0f), 0.2f);
			timer = 2.0f;
		}
		//when read time is up, wait for the specified input
		else if ((!satisfied) && !isAboveCenter () && buttonNames[currentCondition] == "None") {
			if (timer <= 0.0f)
				satisfied = true;
		} else if (!satisfied && !isAboveCenter ()) {
			if (getButtonDown(buttonNames[currentCondition]))
				satisfied = true;
		} else if (satisfied && isAboveBottom ()) {
			tut.transform.localPosition = Vector2.Lerp (tut.transform.localPosition, 
				new Vector2 (0f, -(Screen.height / 2)), 0.2f);
		} else if (satisfied && !isAboveBottom ()) {
			satisfied = false;
			currentCondition = currentCondition + 1;
			tut.transform.localPosition = tut.transform.localPosition * -1;
			if (currentCondition == buttonNames.Length - 1)
				obstacleRenderer.enabled = true;
			
			if (currentCondition == buttonNames.Length)
				Destroy (tut);
		}
	}
}
