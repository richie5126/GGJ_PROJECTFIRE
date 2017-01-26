using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.EventSystems;
using UnityEngine.UI;
public class GravityPlatformer2DAI : MonoBehaviour {

	// Use this for initialization

	//reference to the assembly containing the player, the ceiling, and the ground
	public GameObject playerAssembly;
	//orientation - gravity is upwards or downwards
	bool mOrientation;

	//reference to the hitbox of the player
	public CircleCollider2D hitbox;

	//reference to the player's rigid body
	public Rigidbody2D body;


	public TrailRenderer trail;

	//reference to the strength of gravity
	float gravScale;

	public Material particleMat;
	public Material overlayMat;
	//Vy
	float mVerticalVelocity;
	bool mDead;
	float timer;
	float sTimer;
	//Vx
	float forwardVelocity;
	public float maxSpeed;
	bool typeToggled;

	//your current state: sine, triangle, or square.
	int currentMode;
	//toggle Gravity changes gravity from pos to neg and vice versa
	//mOrientation is true: you're on the ground. else on the ceiling.
	public void spacePress()
	{
		if (currentMode != 2)
			toggleGravity ();
		else {
			toggleGravity ();
			if (mOrientation)
				body.velocity = new Vector2 (body.velocity.x, -forwardVelocity);
			else
				body.velocity = new Vector2 (body.velocity.x, forwardVelocity);
		}
	}
	void toggleGravity()
	{
		mOrientation = !mOrientation;
	}
	//This code
	void Start () {
		particleMat.SetColor ("_TintColor", new Color(0f,0.3f, 0.7f, 0.99f));
		overlayMat.SetColor ("_TintColor", new Color(0f,0.3f, 0.7f, 0.99f));
		typeToggled = false;
		body.gravityScale = 4.0f;
		forwardVelocity = maxSpeed;
		gravScale = 0.8f * maxSpeed;
		currentMode = 1;
		mOrientation = true;
		mVerticalVelocity = 0;
		timer = 0.0f;
		sTimer = 0.0f;


	}
	public void switchState(int state)
	{
		if (state == 1) {
			if (currentMode != 1) {

				particleMat.SetColor ("_TintColor", new Color (0f, 0.3f, 0.7f, 0.99f));
				overlayMat.SetColor ("_TintColor", new Color (0f, 0.3f, 0.7f, 0.99f));
			}
			currentMode = 1;
		} else if (state == 2) {
			if (currentMode != 2) {
				particleMat.SetColor ("_TintColor", new Color (0.5f, 0.0f, 0.2f, 0.99f));
				overlayMat.SetColor ("_TintColor", new Color (0.5f, 0.0f, 0.2f, 0.99f));
			}
			currentMode = 2;
		} else if (state == 3) {
			if (currentMode != 3) {

				particleMat.SetColor ("_TintColor", new Color (0.102f, 0.9f, 0.1f, 0.99f));
				overlayMat.SetColor ("_TintColor", new Color (0.102f, 0.9f, 0.1f, 0.99f));
			}
			currentMode = 3;
		}
	}
	void FixedUpdate()
	{

		sTimer += Time.deltaTime;
		if (sTimer > 2.0f) {
			int coinFlipRNG = (int)Random.Range (0f, 1.99f);
			int tetraRNG = (int)Random.Range (0f, 9f);
			switch (tetraRNG) {
			case 3:
				switchState (3);
				break;
			case 2:
				switchState (2);
				break;
			case 1:
				switchState (1);
				break;
			default:
				break;
			}
			if (coinFlipRNG == 0)
				spacePress ();
			sTimer = 0.0f;
		}
	}
	// Update is called once per frame
	void Update () {
		timer += Time.deltaTime;
		if(!mDead){
			forwardVelocity = 1.1f * maxSpeed;
			gravScale = 0.9f * maxSpeed;

			if(playerAssembly != null)
				playerAssembly.transform.Translate (Vector2.left * -forwardVelocity * Time.smoothDeltaTime);         

			if (currentMode == 3) {
				if (mOrientation)
					body.gravityScale = 1000f;
				else
					body.gravityScale = -1000f;
			}
			if (currentMode == 2) {
				body.gravityScale = 0.0f;
			}
			if (currentMode == 1) {
				if (body.velocity.magnitude > maxSpeed * 0.8f) {
					body.AddForce (-transform.InverseTransformDirection (body.velocity)
						* body.velocity.magnitude * 0.9f);
				}
				if (mOrientation)
					body.gravityScale = gravScale;
				else
					body.gravityScale = -gravScale;
			}
		}
		if (timer > 2.0f && mDead)
			SceneManager.LoadScene ("GameOver");



	}
	void OnTriggerEnter2D(Collider2D other)
	{
		Destroy (body);
		mDead = true;
		timer = 0.0f;
		GetComponent<Animator> ().Play ("Death Animation");

	}
}
