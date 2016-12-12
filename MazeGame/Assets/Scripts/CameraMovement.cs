using UnityEngine;
using System.Collections;

public class CameraMovement : MonoBehaviour {

	public GameObject player;

	private Vector3 offset;

	private float smoothTime = 0.2f;

	private Vector3 velocity = Vector3.zero;

	// Use this for initialization
	void Start () 
	{
		offset = transform.position - player.transform.position;
	}
	
	// Update is called once per frame
	void Update () 
	{
		transform.position = Vector3.SmoothDamp (transform.position, player.transform.position + offset, ref velocity, smoothTime);
	}
}
