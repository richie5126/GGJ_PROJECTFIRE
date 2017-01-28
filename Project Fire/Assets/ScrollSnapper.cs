using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class ScrollSnapper : MonoBehaviour, IBeginDragHandler, IEndDragHandler {

	// Use this for initialization
	int elements;
	public float interpolationRate = 0.5f;
	float totalSize;
	bool dragged;
	float [] elementMidpoints;
	float stepMid;

	float leftBound;
	float rightBound;
	int midptIndex;
	int indexSelection;

	float midpointDistances;
	void Start () {
		indexSelection = 1;
		dragged = false;
		elements = transform.childCount;
		totalSize = GetComponent<RectTransform> ().sizeDelta.x;
		elementMidpoints = new float[elements];
		float step = totalSize / elements;
		stepMid = totalSize / (2 * elements);
		for (int i = 0; i < elements; i++) {
			elementMidpoints[i] = (-totalSize / 2f) + (i*step + (totalSize / (2*elements)));
			Debug.Log (elementMidpoints [i]);
		}
	}
	public void OnBeginDrag(PointerEventData data)
	{
		dragged = true;
	}
	public void OnEndDrag(PointerEventData data)
	{
		dragged = false;
	}
	public void incrementSelection(int x)
	{
		indexSelection += x;
	}

	int inQuadrant(float x, float begin, float end, float partitions)
	{
		return (int)((x / (end - begin)) * partitions);
	}
	
	// Update is called once per frame
	void Update () {
		if (Input.GetKeyDown (KeyCode.D) && indexSelection > 0)
			incrementSelection (-1);
		if (Input.GetKeyDown (KeyCode.A) && indexSelection < elements - 1)
			incrementSelection (1);
		
		float x = transform.localPosition.x;
		int quadmap = inQuadrant (x, (-totalSize / 2f), (totalSize / 2f), elements * 2);
		int midptIndex = quadmap + (elements / 2);

		if (dragged)
			indexSelection = midptIndex;

		Debug.Log (indexSelection);

		if (indexSelection >= 0 && indexSelection < elements) {
				
			if(!dragged)
				transform.localPosition = Vector2.Lerp (transform.localPosition,
					new Vector2(elementMidpoints [indexSelection], transform.localPosition.y),
					interpolationRate);
		}
	}
}
