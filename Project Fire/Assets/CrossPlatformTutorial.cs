using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class CrossPlatformTutorial : MonoBehaviour {

	// Use this for initialization
	void Start () {
		#if UNITY_IOS
		GetComponentInParent<TutorialRendererMobile>().enabled = true;
		#endif
		#if UNITY_STANDALONE
		GetComponentInParent<TutorialRenderer>().enabled = true;
		#endif
		
	}
	
	// Update is called once per frame
	void Update () {
		
	}
}
