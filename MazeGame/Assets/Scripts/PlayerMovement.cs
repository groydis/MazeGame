using UnityEngine;
using System.Collections;

public class PlayerMovement : MonoBehaviour {

	public float movementSpeed = 5f;
	public float turnCheckDistance = 3f;
	private Vector3 forward;
	private Vector3 left = Vector3.left;
	private Vector3 right = Vector3.right;
	private Vector3 down = Vector3.back;
	private Vector3 up = Vector3.forward;

	private void Awake() {

	}

	// Use this for initialization
	void Start () {
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
		forward = transform.TransformDirection (Vector3.forward) * 10;

		Debug.DrawRay (transform.position, forward, Color.red);

		Debug.DrawRay (transform.position, down, Color.green);
		Debug.DrawRay (transform.position, up, Color.yellow);
		Debug.DrawRay (transform.position, left, Color.blue);
		Debug.DrawRay (transform.position, right, Color.magenta);

		//Player always moves forward
		if (!Physics.Raycast(transform.position, forward, 1)) {
			transform.Translate (0f, 0f, movementSpeed * Time.deltaTime);
		}

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
		if (!Physics.Raycast (transform.position, left, turnCheckDistance)) {
			if (Input.GetKeyDown ("left")) {
				TurnLeft ();
			}
		}
		if (!Physics.Raycast (transform.position, right, turnCheckDistance)) {
			if (Input.GetKeyDown ("right")) {
				TurnRight ();
			}
		}
		if (!Physics.Raycast (transform.position, up, turnCheckDistance)) {
			
			if (Input.GetKeyDown ("up")) {
				TurnUp ();
			}
		}
		if (!Physics.Raycast (transform.position, down, turnCheckDistance)) {
			if (Input.GetKeyDown ("down")) {
				TurnDown ();
			}
		}
		//		#endif
		if (Physics.Raycast (transform.position, left, turnCheckDistance)) {
			print ("Can't turn left");
		}
		if (Physics.Raycast (transform.position, right, turnCheckDistance)) {
			print ("Can't turn right");
		}
		if (Physics.Raycast (transform.position, up, turnCheckDistance)) {
			print ("Can't turn up");
		}
		if (Physics.Raycast (transform.position, down, turnCheckDistance)) {
			print ("Can't turn down");
		}
	}
		
	void TurnLeft() {
		transform.rotation = Quaternion.identity;
		transform.Rotate (0f, -90f, 0f);
	}

	void TurnRight() {
		transform.rotation = Quaternion.identity;
		transform.Rotate (0f, 90f, 0f);
	}

	void TurnUp() {
		transform.rotation = Quaternion.identity;
		transform.Rotate (0f, 0f, 0f);
	}

	void TurnDown() {
		transform.rotation = Quaternion.identity;
		transform.Rotate (0f, 180f, 0f);
	}
		
}
