using UnityEngine;
using System.Collections;

public class PlayerMovement : MonoBehaviour {

	public float movementSpeed;
	private Vector3 moveDirection;
	private Rigidbody rbody;

	private Quaternion startingRotation;

	public float rotationSpeed = 10;


	//private Vector3 directionTurn;

	// Use this for initialization
	void Start () 
	{
		rbody = GetComponent<Rigidbody> ();
		moveDirection = Vector3.forward;

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
		rbody.velocity = transform.forward * movementSpeed;

	}
		
	void TurnLeft() 
	{
		StopAllCoroutines();
		StartCoroutine(Rotate(-90));
//		moveDirection = Vector3.left;
//		transform.rotation = Quaternion.identity;
//		//transform.Rotate (0f, -90f, 0f);
//		transform.Rotate(moveDirection * 30f * Time.deltaTime);

	}

	void TurnRight() 
	{
		StopAllCoroutines();
		StartCoroutine(Rotate(90));
//		moveDirection = Vector3.right;
//		transform.rotation = Quaternion.identity;
//		//transform.Rotate (0f, 90f, 0f);
//		transform.Rotate(moveDirection * 30f * Time.deltaTime);
	}

	void TurnUp() 
	{
		StopAllCoroutines();
		StartCoroutine(Rotate(0));
//		moveDirection = Vector3.forward;
//		transform.rotation = Quaternion.identity;
//		//transform.Rotate (0f, 0f, 0f);
//		transform.Rotate(moveDirection * 30f * Time.deltaTime);
	}

	void TurnDown() 
	{
		StopAllCoroutines();
		StartCoroutine(Rotate(180));
//		moveDirection = Vector3.back;
//		transform.rotation = Quaternion.identity;
//		//transform.Rotate (0f, 180f, 0f);
//		transform.Rotate(moveDirection * 30f * Time.deltaTime);
	}

	IEnumerator Rotate(float rotationAmount){
		Quaternion finalRotation = Quaternion.Euler( 0, rotationAmount, 0 ) * startingRotation;

		while(this.transform.rotation != finalRotation){
			this.transform.rotation = Quaternion.Lerp(this.transform.rotation, finalRotation, Time.deltaTime * rotationSpeed);
			yield return 0;
		}
	}
		
}
