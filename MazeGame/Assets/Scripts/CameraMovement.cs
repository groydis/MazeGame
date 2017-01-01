using UnityEngine;
using System.Collections;

[RequireComponent (typeof (UnityStandardAssets.ImageEffects.Fisheye), typeof(UnityStandardAssets.ImageEffects.MotionBlur), typeof(UnityStandardAssets.ImageEffects.ContrastEnhance))]
public class CameraMovement : MonoBehaviour {

	private GameObject player;

	private Vector3 offset;

	private float smoothTime = 0.2f;

	private Vector3 velocity = Vector3.zero;

	public float shakeDuration = 2f;
	public float magnitude = 2f;




	// Use this for initialization
	void Start () 
	{
		player = GameObject.FindGameObjectWithTag ("Player");
		offset = transform.position - player.transform.position;
		GetComponent<UnityStandardAssets.ImageEffects.Fisheye> ().enabled = false;
		GetComponent<UnityStandardAssets.ImageEffects.MotionBlur> ().enabled = false;
		GetComponent<UnityStandardAssets.ImageEffects.ContrastEnhance> ().enabled = false;
	}
	
	// Update is called once per frame
	void FixedUpdate () 
	{
		transform.position = Vector3.SmoothDamp (transform.position, player.transform.position + offset, ref velocity, smoothTime);

	}


}
