using UnityEngine;
using System.Collections;

public class CameraMovement : MonoBehaviour {

	private GameObject player;

	private Vector3 offset;

	private float smoothTime = 0.2f;

	private Vector3 velocity = Vector3.zero;

	// Use this for initialization
	void Start () 
	{
		player = GameObject.FindGameObjectWithTag ("Player");
		offset = transform.position - player.transform.position;
	}
	
	// Update is called once per frame
	void FixedUpdate () 
	{
		transform.position = Vector3.SmoothDamp (transform.position, player.transform.position + offset, ref velocity, smoothTime);

	}


}
