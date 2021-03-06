﻿using UnityEngine;
using System.Collections;


public class PlayerMovement : MonoBehaviour {

	private Rigidbody rbody;

	private Quaternion startingRotation;

	public float rotationSpeed = 5f;

	// Use this for initialization
	void Start () 
	{
		rbody = GetComponent<Rigidbody> ();


		startingRotation = this.transform.rotation;

		#if UNITY_EDITOR
		Debug.Log("Unity Editor");
		#endif

		#if UNITY_IOS
		Debug.Log("Iphone");
		#endif

		#if UNITY_STANDALONE_OSX
		Debug.Log("Stand Alone OSX");
		#endif

		#if UNITY_STANDALONE_WIN
		Debug.Log("Stand Alone Windows");
		#endif

	}
	
	// Update is called once per frame
	void Update () 
	{

		//		#if UNITY_IPHONE
		if (SwipeManager.IsSwipingLeft ()) 
		{
			TurnLeft ();
		}
		if (SwipeManager.IsSwipingRight ()) 
		{
			TurnRight ();
		}
		if (SwipeManager.IsSwipingUp ()) 
		{
			TurnUp ();
		}
		if (SwipeManager.IsSwipingDown ()) 
		{
			TurnDown ();
		}
		//		#elif UNITY_EDITOR
		if (Input.GetKeyDown ("left")) 
		{
			TurnLeft ();
		}
		if (Input.GetKeyDown ("right")) 
		{
			TurnRight ();
		}
		
		if (Input.GetKeyDown ("up")) 
		{
			TurnUp ();
		}

		if (Input.GetKeyDown ("down")) 
		{
			TurnDown ();
		}
		//		#endif
	}

	void FixedUpdate() {
		//Moves Player Constantly foward
		if (Player.canMove) {
			rbody.velocity = transform.forward * Player.movementSpeed;
		}
	}
		
		
	void TurnLeft() 
	{
		StopAllCoroutines ();
		StartCoroutine (Rotate (-90f));
	}

	void TurnRight() 
	{
		StopAllCoroutines();
		StartCoroutine(Rotate(90f));
	}

	void TurnUp() 
	{
		StopAllCoroutines();
		StartCoroutine(Rotate(0f));
	}

	void TurnDown() 
	{
		StopAllCoroutines();
		StartCoroutine(Rotate(180f));
	}

	IEnumerator Rotate(float rotationAmount){
		Quaternion finalRotation = Quaternion.Euler( 0f, rotationAmount, 0f) * startingRotation;
		while(this.transform.rotation != finalRotation){
			this.transform.rotation = Quaternion.Lerp(this.transform.rotation, finalRotation, Time.deltaTime * rotationSpeed);
			yield return 0;
		}

	}
		
}
