using System.Collections;
using System.Collections.Generic;
using UnityEngine;
using UnityEngine.SceneManagement;
using UnityEngine.UI;
public class GravityPlatformer2D : MonoBehaviour {

	// Use this for initialization

	public Image SineInput;
	public Image SawInput;
	public Image SquareInput;

	public AudioSource death;
	public AudioSource change;

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
	void shakeCamera()
	{
		mainCam.GetComponent<CamShake> ().DoShake(0.5f, 0.02f);
	}
	void shakeCamera(float intensity, float decayRate)
	{
		mainCam.GetComponent<CamShake> ().DoShake (intensity, decayRate);
	}
	void toggleGravity()
	{
			mOrientation = !mOrientation;
	}
	void Awake()
	{
		shakeCamera ();
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
		bool mDead = false;
		bool mIsTouchingGround = false;
		timer = 0.0f;
		sTimer = 0.0f;

		
	}
	public void switchState(int state)
	{

		if (state == 1) {
			if (currentMode != 1) {
				SineInput.CrossFadeColor (
					new Color (0.5f, 0.5f, 1.0f, 1f), 0.5f, false, false);
				SawInput.CrossFadeColor (
					new Color (1.0f, 1.0f, 1.0f, 1f), 0.5f, false, false);
				SawInput.CrossFadeColor (
					new Color (1.0f, 1.0f, 1.0f, 1f), 0.5f, false, false);

				particleMat.SetColor ("_TintColor", new Color (0f, 0.3f, 0.7f, 0.99f));
				overlayMat.SetColor ("_TintColor", new Color (0f, 0.3f, 0.7f, 0.99f));
				shakeCamera ();
				change.Play ();
			}
			currentMode = 1;
		} else if (state == 2) {
			if (currentMode != 2) {
				SawInput.CrossFadeColor (
					new Color (1.0f, 0.5f, 0.5f, 1f), 0.5f, false, false);
				SineInput.CrossFadeColor (
					new Color (1.0f, 1.0f, 1.0f, 1f), 0.5f, false, false);
				SquareInput.CrossFadeColor (
					new Color (1.0f, 1.0f, 1.0f, 1f), 0.5f, false, false);
				shakeCamera ();
				change.Play ();

				particleMat.SetColor ("_TintColor", new Color (0.5f, 0.0f, 0.2f, 0.99f));
				overlayMat.SetColor ("_TintColor", new Color (0.5f, 0.0f, 0.2f, 0.99f));
			}
			currentMode = 2;
		} else if (state == 3) {
			if (currentMode != 3) {
				SquareInput.CrossFadeColor (
					new Color (0.5f, 1.0f, 0.5f, 1f), 0.5f, false, false);
				SawInput.CrossFadeColor (
					new Color (1.0f, 1.0f, 1.0f, 1f), 0.5f, false, false);
				SineInput.CrossFadeColor (
					new Color (1.0f, 1.0f, 1.0f, 1f), 0.5f, false, false);
				shakeCamera ();
				change.Play ();

				particleMat.SetColor ("_TintColor", new Color (0.102f, 0.9f, 0.1f, 0.99f));
				overlayMat.SetColor ("_TintColor", new Color (0.102f, 0.9f, 0.1f, 0.99f));
			}
			currentMode = 3;
		}
	}
	// Update is called once per frame
	void Update () {
			timer += Time.deltaTime;
		sTimer += Time.deltaTime;
		if (sTimer > 1 / 2.16667f) {
			//insert a beat action here
		}
		if(!mDead){
			forwardVelocity = 1.2f * maxSpeed;
			gravScale = 0.9f * maxSpeed;
			maxSpeed += 0.01f * Time.deltaTime;
		
			if (Input.GetKeyDown (KeyCode.A) ||
			   Input.GetKeyDown (KeyCode.S) ||
			   Input.GetKeyDown (KeyCode.D))
			if (!typeToggled) {
				if (Input.GetKeyDown (KeyCode.A))
					switchState (1);
				else if (Input.GetKeyDown (KeyCode.S))
					switchState (2);
				else if (Input.GetKeyDown (KeyCode.D))
					switchState (3);
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
					spacePress ();
					isToggled = true;
				}
				if (Input.GetKeyUp (KeyCode.Space))
					isToggled = false;
			}
			if (currentMode == 2) {
				body.gravityScale = 0.0f;

				bool isToggled = false;
				if (Input.GetKeyDown (KeyCode.Space) && !isToggled) {
					spacePress ();
				
					isToggled = true;
				}
				if (Input.GetKeyUp (KeyCode.Space))
					isToggled = false;
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
		
				bool isToggled = false;
				if (Input.GetKeyDown (KeyCode.Space) && !isToggled) {
					spacePress ();
					isToggled = true;
				}
				if (Input.GetKeyUp (KeyCode.Space))
					isToggled = false;
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
		death.Play ();


	}
}
