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

	//reference to the strength of gravity
	public float gravScale;

	//Vy
	float mVerticalVelocity;
	bool mDead;
	//Vx
	public float forwardVelocity;

	//your current state: sine, triangle, or square.
	int currentMode;

	//toggle Gravity changes gravity from pos to neg and vice versa
	//mOrientation is true: you're on the ground. else on the ceiling.
	void toggleGravity()
	{
			mOrientation = !mOrientation;
	}
	//This code
	void Start () {
		body.gravityScale = 4.0f;
		currentMode = 2;
		mOrientation = true;
		mVerticalVelocity = 0;
		bool mDead = false;
		bool mIsTouchingGround = false;
		
	}

	// Update is called once per frame
	void Update () {
		


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
					body.velocity = new Vector2 (body.velocity.x, forwardVelocity);
				else
					body.velocity = new Vector2 (body.velocity.x, -forwardVelocity);
				
				isToggled = true;
			}
			if (Input.GetKeyUp (KeyCode.Space))
				isToggled = false;
		}
		if(currentMode == 1)
		{
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
}
