using System.Collections;
using System.Collections.Generic;
using UnityEngine;

public class GravityPlatformer2D : MonoBehaviour {

	// Use this for initialization
	enum MovementTypes
	{
		SINE,
		TRIANGLE,
		SQUARE
	}
	bool mOrientation;
	float mGAccel;
	public CircleCollider2D hitbox;
	public Rigidbody2D body;
	public float gravScale;
	float mVerticalVelocity;
	bool mDead;
	public int forwardVelocity;
	bool mIsTouchingGround;

	MovementTypes currentMode;

	void toggleGravity()
	{
			mOrientation = !mOrientation;
	}

	void Start () {
		currentMode = MovementTypes.SINE;
		mOrientation = true;
		mVerticalVelocity = 0;
		bool mDead = false;
		bool mIsTouchingGround = false;
		
	}

	// Update is called once per frame
	void Update () {

		gameObject.transform.Translate(Vector2.left * -1.0f * Time.deltaTime);
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
