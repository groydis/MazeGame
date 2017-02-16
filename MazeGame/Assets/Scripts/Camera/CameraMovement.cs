using UnityEngine;
using System.Collections;

public class CameraMovement : MonoBehaviour {

	public static CameraMovement Instance { get; set; }

	private GameObject player;

	public Vector3 offset;

	private float smoothTime = 0.5f;
	public float startMovementTime = 2f;

	private Vector3 velocity = Vector3.zero;

	public bool inPlay;

	void Awake() {
		if (Instance != null && Instance != this) {
			Destroy (gameObject);
		} else {
			Instance = this;
		}
	}
	// Use this for initialization
	void Start () 
	{
		player = GameObject.Find ("Player");

		inPlay = false;

	}
		
	// Update is called once per frame
	void FixedUpdate () 
	{
		if (inPlay) {
			transform.position = Vector3.SmoothDamp (transform.position, player.transform.position + offset, ref velocity, smoothTime);
		}

	}

}
