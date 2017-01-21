using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GravityPlatformer2D : MonoBehaviour {

	// Use this for initialization

	//reference to the assembly containing the player, the ceiling, and the ground
	public GameObject playerAssembly;
	//orientation - gravity is upwards or downwards
	bool mOrientation;

	//reference to the hitbox of the player
	public CircleCollider2D hitbox;

	//reference to the player's rigid body
	public Rigidbody2D body;

	//reference to camera-shaking component located on main camera
	public Camera mainCam;

	public TrailRenderer trail;

	//reference to the strength of gravity
	float gravScale;

	//Vy
	float mVerticalVelocity;
	bool mDead;
	//Vx
	float forwardVelocity;
	public float maxSpeed;

	//your current state: sine, triangle, or square.
	int currentMode;
	//toggle Gravity changes gravity from pos to neg and vice versa
	//mOrientation is true: you're on the ground. else on the ceiling.
	void shakeCamera()
	{
		mainCam.GetComponent<CamShake> ().DoShake ();
	}
	void toggleGravity()
	{
			mOrientation = !mOrientation;
	}
	//This code
	void Start () {
		body.gravityScale = 4.0f;
		forwardVelocity = maxSpeed;
		gravScale = 0.6f * maxSpeed;
		currentMode = 1;
		mOrientation = true;
		mVerticalVelocity = 0;
		bool mDead = false;
		bool mIsTouchingGround = false;
		
	}

	// Update is called once per frame
	void Update () {
		forwardVelocity = maxSpeed;
		gravScale = 0.6f * maxSpeed;
		maxSpeed += 0.1f * Time.deltaTime;
		bool typeToggled = false;
		if (Input.GetKeyDown (KeyCode.A) ||
		    Input.GetKeyDown (KeyCode.S) ||
		    Input.GetKeyDown (KeyCode.D))
		if (!typeToggled) {

			if (Input.GetKeyDown (KeyCode.A)) {
				if (currentMode != 1)
					shakeCamera ();
				currentMode = 1;
			} else if (Input.GetKeyDown (KeyCode.S)) {
				if (currentMode != 2)
					shakeCamera ();
				currentMode = 2;
			} else if (Input.GetKeyDown (KeyCode.D)) {
				if (currentMode != 3)
					shakeCamera ();
				currentMode = 3;
			}
			typeToggled = true;
		}

		if (Input.GetKeyUp (KeyCode.A) ||
		    Input.GetKeyUp (KeyCode.S) ||
		    Input.GetKeyUp (KeyCode.D))
			typeToggled = false;
			


		playerAssembly.transform.Translate (Vector2.left * -forwardVelocity * Time.deltaTime);         

		if (currentMode == 3) {
			if (mOrientation)
				body.gravityScale = 1000f;
			else
				body.gravityScale = -1000f;

			bool isToggled = false;
			if (Input.GetKeyDown (KeyCode.Space) && !isToggled) {
				toggleGravity ();
				isToggled = true;
			}
			if (Input.GetKeyUp (KeyCode.Space))
				isToggled = false;
		}
		if (currentMode == 2) {
			body.gravityScale = 0.0f;

			bool isToggled = false;
			if (Input.GetKeyDown (KeyCode.Space) && !isToggled) {
				toggleGravity ();
				if (mOrientation)
					body.velocity = new Vector2 (body.velocity.x, -forwardVelocity);
				else
					body.velocity = new Vector2 (body.velocity.x, forwardVelocity);
				
				isToggled = true;
			}
			if (Input.GetKeyUp (KeyCode.Space))
				isToggled = false;
		}
		if(currentMode == 1)
		{
			if (body.velocity.magnitude > maxSpeed) {
				body.AddForce (-transform.InverseTransformDirection (body.velocity) 
					* body.velocity.magnitude);
			}
			if (mOrientation)
				body.gravityScale = gravScale;
			else
				body.gravityScale = -gravScale;
		
			bool isToggled = false;
			if (Input.GetKeyDown (KeyCode.Space) && !isToggled) {
				toggleGravity ();
				isToggled = true;
			}
			if (Input.GetKeyUp (KeyCode.Space))
				isToggled = false;
		}


		
	}
	void OnTriggerEnter2D(Collider2D other)
	{
		Debug.Log ("Contact!");
	}
}
