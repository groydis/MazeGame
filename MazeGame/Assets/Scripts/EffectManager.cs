using UnityEngine;
using System.Collections;

public class EffectManager : MonoBehaviour {

	public static EffectManager Instance { get; set; }

	public static GlitchEffect glitchEffect;
	public static MorePPEffects.ColoredRays coloredRays;
	public static UnityStandardAssets.ImageEffects.ContrastEnhance contrastEnhance;
	public static CRT crtEffect;
	public static UnityStandardAssets.ImageEffects.MotionBlur motionBlurEffect;
	public static UnityStandardAssets.ImageEffects.ContrastEnhance contrastEnhanceEffect;
	public static MorePPEffects.Anaglyph3D threeDeeEffect;

	private GameObject mainCamera;

	public Shader glitchShader;
	public Texture2D glitchDisplacementMap;

	public Shader crtShader;


	void Awake() {
		mainCamera = GameObject.Find ("Main Camera");

		if (mainCamera.GetComponent<GlitchEffect>() == null) {
			mainCamera.AddComponent<GlitchEffect> ();
			glitchEffect = mainCamera.GetComponent<GlitchEffect>();
		} else {
			glitchEffect = mainCamera.GetComponent<GlitchEffect>();
		}

		if (mainCamera.GetComponent<MorePPEffects.ColoredRays> () == null) {
			mainCamera.AddComponent<MorePPEffects.ColoredRays> ();
			coloredRays = mainCamera.GetComponent<MorePPEffects.ColoredRays>();
		} else {
			coloredRays = mainCamera.GetComponent<MorePPEffects.ColoredRays>();
		}

		if (mainCamera.GetComponent<UnityStandardAssets.ImageEffects.ContrastEnhance>() == null) {
			mainCamera.AddComponent<UnityStandardAssets.ImageEffects.ContrastEnhance> ();
			contrastEnhance = mainCamera.GetComponent<UnityStandardAssets.ImageEffects.ContrastEnhance>();
		} else {
			contrastEnhance = mainCamera.GetComponent<UnityStandardAssets.ImageEffects.ContrastEnhance>();
		}

		if (mainCamera.GetComponent<CRT>() == null) {
			mainCamera.AddComponent<CRT> ();
			crtEffect = mainCamera.GetComponent<CRT>();
		} else {
			crtEffect = mainCamera.GetComponent<CRT>();
		}

		if (mainCamera.GetComponent<UnityStandardAssets.ImageEffects.MotionBlur>() == null) {
			mainCamera.AddComponent<UnityStandardAssets.ImageEffects.MotionBlur> ();
			motionBlurEffect = mainCamera.GetComponent<UnityStandardAssets.ImageEffects.MotionBlur>();
		} else {
			motionBlurEffect = mainCamera.GetComponent<UnityStandardAssets.ImageEffects.MotionBlur>();
		}

		if (mainCamera.GetComponent<MorePPEffects.Anaglyph3D>() == null) {
			mainCamera.AddComponent<MorePPEffects.Anaglyph3D> ();
			threeDeeEffect = mainCamera.GetComponent<MorePPEffects.Anaglyph3D>();
		} else {
			threeDeeEffect = mainCamera.GetComponent<MorePPEffects.Anaglyph3D>();
		}

		SetupGlitch ();
		SetupCRT ();
		SetupColoredRays();
		GlitchEffectOff ();
		ColoredRaysOff ();
		ContrastEnhanceOff ();
		CRTOff ();
		MotionBlurOff ();
		ThreeDeeEffectOff ();

		if (Instance != null && Instance != this) {
			Destroy (gameObject);
		} else {
			Instance = this;
		}

	}

	public void SetupGlitch() {
		glitchEffect.shader = glitchShader;
		glitchEffect.displacementMap = glitchDisplacementMap;
		glitchEffect.intensity = 0.25f;
		glitchEffect.flipIntensity = 0.25f;
		glitchEffect.colorIntensity = 0.25f;
	}

	public void GlitchEffectOn() {
		glitchEffect.enabled = true;
		Debug.Log ("Glitch On");
	}

	public void GlitchEffectOff() {
		glitchEffect.enabled = false;
		Debug.Log ("Glitch Off");
	}

	public void SetupColoredRays() {
		coloredRays.strength = 0.5f;
	}

	public void ColoredRaysOn() {
		coloredRays.enabled = true;
		Debug.Log ("Colored Rays On");
	}

	public void ColoredRaysOff() {
		coloredRays.enabled = false;
		Debug.Log ("Colored Rays Off");
	}

	public void ContrastEnhanceOn() {

		contrastEnhance.enabled = true;
		Debug.Log ("Contrast Enhance On");
	}

	public void ContrastEnhanceOff() {
		contrastEnhance.enabled = false;
		Debug.Log ("Contrast Enhance Off");
	}

	public void SetupCRT() {
		crtEffect.curShader = crtShader;
		// Maybe more??
	}

	public void CRTOn() {
		crtEffect.enabled = true;
		Debug.Log ("CRT On");
	}

	public void CRTOff() {
		crtEffect.enabled = false;
		Debug.Log ("CRT Off");
	}

	public void MotionBlurOn() {
		motionBlurEffect.enabled = true;
		Debug.Log ("Motion Blur On");
	}

	public void MotionBlurOff() {
		motionBlurEffect.enabled = false;
		Debug.Log ("Motion Blur Off");
	}

	public void ThreeDeeEffectOn() {
		threeDeeEffect.enabled = true;
		Debug.Log ("3D On");
	}

	public void ThreeDeeEffectOff() {
		threeDeeEffect.enabled = false;
		Debug.Log ("3D Off");
	}
}
