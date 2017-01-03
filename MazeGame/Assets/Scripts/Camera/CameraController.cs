using UnityEngine;
using System.Collections;

[RequireComponent (typeof (UnityStandardAssets.ImageEffects.Fisheye), typeof(UnityStandardAssets.ImageEffects.MotionBlur), typeof(UnityStandardAssets.ImageEffects.ContrastEnhance))]
[RequireComponent (typeof (CRT), typeof(GlitchEffect))]
public class CameraController : MonoBehaviour {

	// Use this for initialization
	void Start () {

		GetComponent<UnityStandardAssets.ImageEffects.Fisheye> ().enabled = false;
		GetComponent<UnityStandardAssets.ImageEffects.MotionBlur> ().enabled = false;
		GetComponent<UnityStandardAssets.ImageEffects.ContrastEnhance> ().enabled = false;
		GetComponent<GlitchEffect> ().enabled = true;
		GetComponent<CRT> ().enabled = true;
	
	}
	
	// Update is called once per frame
	void Update () {
	
	}
}
