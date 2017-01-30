using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;
using UnityEngine.EventSystems;

public class SingletonAudioManager : MonoBehaviour, IPointerDownHandler {

	// Use this for initialization
	Crossfader crossfader;
	public int trackNumber;
	void Start()
	{
		crossfader = FindObjectOfType<Crossfader>();
	}

	public void OnPointerDown(PointerEventData data)
	{
		if (crossfader != null)
			crossfader.switchTracks (trackNumber);
	}
}
