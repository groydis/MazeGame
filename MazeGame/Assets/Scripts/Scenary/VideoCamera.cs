using UnityEngine;
using System.Collections;
using DG.Tweening;

public class VideoCamera : MonoBehaviour {

	public GameObject cameraHead;
	public Transform target;
	private bool moveHead;

	void Update() {
		if (moveHead) {
			if (target != null) {
				Vector3 lookAtPos = target.position;
				Vector3 lookAtPosLocalised = cameraHead.transform.InverseTransformPoint (target.position);
				lookAtPosLocalised.y = 0f;
				lookAtPos = cameraHead.transform.TransformPoint (lookAtPosLocalised);
				cameraHead.transform.LookAt (lookAtPos);
			}
		}
	}
		
	void OnTriggerEnter(Collider hit) 
	{	
		if (hit.gameObject.tag == "Player") {
			moveHead = true;
			target = hit.transform;
		}
	}

	void OnTriggerExit(Collider hit) {
		if (hit.gameObject.tag == "Player") {
			moveHead = false;
			target = null;
		}
	}
		
}