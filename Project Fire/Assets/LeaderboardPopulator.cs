using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.UI;

public class LeaderboardPopulator : MonoBehaviour {

	// Use this for initialization
	public GameObject txtAsset;
	GameObject [] leaderboardArray;
	string recentScore = "00:00:00";
	OptionsSingleton options;
	public string getRecentTime()
	{
		return recentScore;
	}
	void Start () {
		options = GameObject.FindObjectOfType<OptionsSingleton> ();

		leaderboardArray = new GameObject[5];
		GameObject s = GameObject.Find ("Clock");
		float scoreCandidate = 0f;
		string dispScore = "00:00:00";

		if (s != null) {
			scoreCandidate = s.GetComponent<Clock> ().getScoreValue ();
			dispScore = s.GetComponent<Clock> ().getScore ();
			recentScore = dispScore;

			Destroy (s, 1.0f);
		}
		for (int i = 0; i < 5; i++) {
			leaderboardArray[i] = Instantiate (txtAsset, Vector3.zero, Quaternion.identity);
			leaderboardArray [i].transform.SetParent (gameObject.transform);
			if (!PlayerPrefs.HasKey (options.getDifficulty() + "HSPos_" + i)) {
				//instantiate new players if one doesn't exist
				PlayerPrefs.SetString (options.getDifficulty() + "HSPos_" + i, "00:00:00");
				PlayerPrefs.SetFloat (options.getDifficulty() + "HScore_" + i, 0f);
			} if (PlayerPrefs.GetFloat (options.getDifficulty() + "HScore_" + i) < scoreCandidate) {
				string tmpDispScore = PlayerPrefs.GetString (options.getDifficulty() + "HSPos_" + i);
				float tmpScore = PlayerPrefs.GetFloat (options.getDifficulty() + "HScore_" + i);

				PlayerPrefs.SetFloat (options.getDifficulty() + "HScore_" + i, scoreCandidate);
				PlayerPrefs.SetString (options.getDifficulty() + "HSPos_" + i, dispScore);
				dispScore = tmpDispScore;
				scoreCandidate = tmpScore;
			}
			leaderboardArray[i].GetComponent<Text> ().text = PlayerPrefs.GetString (options.getDifficulty() + "HSPos_" + i);
		}
		PlayerPrefs.Save ();
	}
	
	// Update is called once per frame
	void Update () {
	}
}
