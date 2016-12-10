using UnityEngine;
using System.Collections;

public class PlayerMovement : MonoBehaviour {

	public float movementSpeed = 10f;

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
		//Player always moves forward
		transform.Translate (0f, 0f,movementSpeed*Time.deltaTime);

//		#if UNITY_IPHONE
		if (SwipeManager.IsSwipingLeft()) {
			transform.rotation = Quaternion.identity;
			transform.Rotate (0f, -90f, 0f);
		}
		if (SwipeManager.IsSwipingRight()) {
			transform.rotation = Quaternion.identity;
			transform.Rotate (0f, 90f, 0f);
		}
		if (SwipeManager.IsSwipingUp()) {
			transform.rotation = Quaternion.identity;
			transform.Rotate (0f, 0f, 0f);
		}
		if (SwipeManager.IsSwipingDown()) {
			transform.rotation = Quaternion.identity;
			transform.Rotate (0f, 180f, 0f);
		}

//		#elif UNITY_EDITOR
		
		if (Input.GetKeyDown("left")) {
			transform.rotation = Quaternion.identity;
			transform.Rotate (0f, -90f, 0f);
		}
		if (Input.GetKeyDown ("right")) {
			transform.rotation = Quaternion.identity;
			transform.Rotate (0f, 90f, 0f);
		}
		if (Input.GetKeyDown ("up")) {
			transform.rotation = Quaternion.identity;
			transform.Rotate (0f, 0f, 0f);
		}
		if (Input.GetKeyDown ("down")) {
			transform.rotation = Quaternion.identity;
			transform.Rotate (0f, 180f, 0f);
		}

//		#endif

	}
}
