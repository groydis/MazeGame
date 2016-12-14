using UnityEngine;
using System.Collections;


[RequireComponent (typeof (CharacterController))]
public class PlayerMovement : MonoBehaviour {

	public float movementSpeed;
	private Vector3 moveDirection;
	//private CharacterController controller;
	private Rigidbody rbody;

	// Use this for initialization
	void Start () 
	{
		
		//controller = GetComponent<CharacterController> ();
		rbody = GetComponent<Rigidbody> ();
		moveDirection = Vector3.forward;

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
		//Player always moves forward
		//controller.Move (moveDirection * movementSpeed * Time.deltaTime);
		//rbody.velocity = transform.forward * movementSpeed;

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
		//rbody.velocity = transform.forward * movementSpeed;
	}
		
	void TurnLeft() 
	{
		moveDirection = Vector3.left;
		transform.rotation = Quaternion.identity;
		transform.Rotate (0f, -90f, 0f);
	}

	void TurnRight() 
	{
		moveDirection = Vector3.right;
		transform.rotation = Quaternion.identity;
		transform.Rotate (0f, 90f, 0f);
	}

	void TurnUp() 
	{
		moveDirection = Vector3.forward;
		transform.rotation = Quaternion.identity;
		transform.Rotate (0f, 0f, 0f);
	}

	void TurnDown() 
	{
		moveDirection = Vector3.back;
		transform.rotation = Quaternion.identity;
		transform.Rotate (0f, 180f, 0f);
	}
		
}
