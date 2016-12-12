using UnityEngine;
using System.Collections;


[RequireComponent (typeof (CharacterController))]
public class PlayerMovement : MonoBehaviour {

	public float movementSpeed;
	public float turnCheckDistance;
	private Vector3 forward;
	private Vector3 moveDirection;
	private Vector3 left = Vector3.left;
	private Vector3 right = Vector3.right;
	private Vector3 down = Vector3.back;
	private Vector3 up = Vector3.forward;

	private CharacterController controller;

	private Quaternion targetRotation;

	public float rotationSpeed;

	private void Awake() {

	}

	// Use this for initialization
	void Start () {

		controller = GetComponent<CharacterController> ();

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
	void Update () {

//		Vector3 input = new Vector3(Input.GetAxisRaw("Horizontal"), 0, Input.GetAxisRaw("Vertical"));
//		if (input != Vector3.zero) {
//			targetRotation = Quaternion.LookRotation (input);
//			transform.eulerAngles = Vector3.up * Mathf.MoveTowardsAngle (transform.eulerAngles.y, targetRotation.eulerAngles.y, rotationSpeed * Time.deltaTime);
//			transform.rotation = Quaternion.identity;
//		}
//		controller.Move (Vector3.forward);

		//forward = transform.TransformDirection (Vector3.forward) * 10;

		//Debug.DrawRay (transform.position, forward, Color.red);

		//Player always moves forward
		controller.Move (moveDirection * movementSpeed * Time.deltaTime);

		//		#if UNITY_IPHONE
		if (SwipeManager.IsSwipingLeft ()) {
			TurnLeft ();
		}
		if (SwipeManager.IsSwipingRight ()) {
			TurnRight ();
		}
		if (SwipeManager.IsSwipingUp ()) {
			TurnUp ();
		}
		if (SwipeManager.IsSwipingDown ()) {
			TurnDown ();
		}

		//		#elif UNITY_EDITOR
		if (Input.GetKeyDown ("left")) {
			TurnLeft ();
		}
		if (Input.GetKeyDown ("right")) {
			TurnRight ();
		}
		
		if (Input.GetKeyDown ("up")) {
			TurnUp ();
		}

		if (Input.GetKeyDown ("down")) {
			TurnDown ();
		}
		//		#endif
	}
		
	void TurnLeft() {
		moveDirection = Vector3.left;
		transform.rotation = Quaternion.identity;
		transform.Rotate (0f, -90f, 0f);
	}

	void TurnRight() {
		moveDirection = Vector3.right;
		transform.rotation = Quaternion.identity;
		transform.Rotate (0f, 90f, 0f);
	}

	void TurnUp() {
		moveDirection = Vector3.forward;
		transform.rotation = Quaternion.identity;
		transform.Rotate (0f, 0f, 0f);
	}

	void TurnDown() {
		moveDirection = Vector3.back;
		transform.rotation = Quaternion.identity;
		transform.Rotate (0f, 180f, 0f);
	}
		
}
