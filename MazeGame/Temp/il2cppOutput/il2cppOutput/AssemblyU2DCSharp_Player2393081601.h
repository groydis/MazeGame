#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.GameObject
struct GameObject_t3674682005;
// UnityEngine.Animator
struct Animator_t2776330603;
// UnityEngine.Renderer[]
struct RendererU5BU5D_t440051646;
// UnityStandardAssets.ImageEffects.Fisheye
struct Fisheye_t2084831179;
// UnityStandardAssets.ImageEffects.MotionBlur
struct MotionBlur_t3002754187;
// UnityStandardAssets.ImageEffects.ContrastEnhance
struct ContrastEnhance_t3797097022;
// MorePPEffects.Anaglyph3D
struct Anaglyph3D_t2235875337;
// UnityEngine.Animation
struct Animation_t1724966010;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Player
struct  Player_t2393081601  : public MonoBehaviour_t667441552
{
public:
	// System.Single Player::sodaEffectMovementSpeed
	float ___sodaEffectMovementSpeed_5;
	// System.Single Player::intoxicationDuration
	float ___intoxicationDuration_12;
	// System.Single Player::intoxicationCountDown
	float ___intoxicationCountDown_13;
	// System.Single Player::sodaEffectDuration
	float ___sodaEffectDuration_14;
	// System.Single Player::sodaEffectCountDown
	float ___sodaEffectCountDown_15;
	// System.Single Player::popCornEffectDuration
	float ___popCornEffectDuration_16;
	// System.Single Player::popCornEffectCountDown
	float ___popCornEffectCountDown_17;
	// System.Single Player::threeDeeEffectDuration
	float ___threeDeeEffectDuration_18;
	// System.Single Player::threeDeeEffectCountDown
	float ___threeDeeEffectCountDown_19;
	// System.Boolean Player::sodaActive
	bool ___sodaActive_20;
	// System.Boolean Player::popcornActive
	bool ___popcornActive_21;
	// System.Boolean Player::drunkActive
	bool ___drunkActive_22;
	// System.Boolean Player::threedeeActive
	bool ___threedeeActive_23;
	// System.Boolean Player::imageEffectActive
	bool ___imageEffectActive_24;
	// UnityEngine.GameObject Player::mainCamera
	GameObject_t3674682005 * ___mainCamera_25;
	// UnityEngine.GameObject Player::popCornTrail
	GameObject_t3674682005 * ___popCornTrail_26;
	// UnityEngine.Animator Player::playerAnim
	Animator_t2776330603 * ___playerAnim_28;
	// UnityEngine.Renderer[] Player::renderers
	RendererU5BU5D_t440051646* ___renderers_29;
	// UnityStandardAssets.ImageEffects.Fisheye Player::fishEyeEffect
	Fisheye_t2084831179 * ___fishEyeEffect_30;
	// UnityStandardAssets.ImageEffects.MotionBlur Player::motionBlurEffect
	MotionBlur_t3002754187 * ___motionBlurEffect_31;
	// UnityStandardAssets.ImageEffects.ContrastEnhance Player::contrastEnhanceEffect
	ContrastEnhance_t3797097022 * ___contrastEnhanceEffect_32;
	// MorePPEffects.Anaglyph3D Player::threeDeeEffect
	Anaglyph3D_t2235875337 * ___threeDeeEffect_33;
	// UnityEngine.Animation Player::fishEyeAnim
	Animation_t1724966010 * ___fishEyeAnim_34;
	// System.Boolean Player::guiModelShowing
	bool ___guiModelShowing_35;
	// UnityEngine.GameObject Player::guiThreeDeeGlasses
	GameObject_t3674682005 * ___guiThreeDeeGlasses_36;
	// UnityEngine.GameObject Player::guiPopCorn
	GameObject_t3674682005 * ___guiPopCorn_37;
	// UnityEngine.GameObject Player::guiSoda
	GameObject_t3674682005 * ___guiSoda_38;

public:
	inline static int32_t get_offset_of_sodaEffectMovementSpeed_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaEffectMovementSpeed_5)); }
	inline float get_sodaEffectMovementSpeed_5() const { return ___sodaEffectMovementSpeed_5; }
	inline float* get_address_of_sodaEffectMovementSpeed_5() { return &___sodaEffectMovementSpeed_5; }
	inline void set_sodaEffectMovementSpeed_5(float value)
	{
		___sodaEffectMovementSpeed_5 = value;
	}

	inline static int32_t get_offset_of_intoxicationDuration_12() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___intoxicationDuration_12)); }
	inline float get_intoxicationDuration_12() const { return ___intoxicationDuration_12; }
	inline float* get_address_of_intoxicationDuration_12() { return &___intoxicationDuration_12; }
	inline void set_intoxicationDuration_12(float value)
	{
		___intoxicationDuration_12 = value;
	}

	inline static int32_t get_offset_of_intoxicationCountDown_13() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___intoxicationCountDown_13)); }
	inline float get_intoxicationCountDown_13() const { return ___intoxicationCountDown_13; }
	inline float* get_address_of_intoxicationCountDown_13() { return &___intoxicationCountDown_13; }
	inline void set_intoxicationCountDown_13(float value)
	{
		___intoxicationCountDown_13 = value;
	}

	inline static int32_t get_offset_of_sodaEffectDuration_14() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaEffectDuration_14)); }
	inline float get_sodaEffectDuration_14() const { return ___sodaEffectDuration_14; }
	inline float* get_address_of_sodaEffectDuration_14() { return &___sodaEffectDuration_14; }
	inline void set_sodaEffectDuration_14(float value)
	{
		___sodaEffectDuration_14 = value;
	}

	inline static int32_t get_offset_of_sodaEffectCountDown_15() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaEffectCountDown_15)); }
	inline float get_sodaEffectCountDown_15() const { return ___sodaEffectCountDown_15; }
	inline float* get_address_of_sodaEffectCountDown_15() { return &___sodaEffectCountDown_15; }
	inline void set_sodaEffectCountDown_15(float value)
	{
		___sodaEffectCountDown_15 = value;
	}

	inline static int32_t get_offset_of_popCornEffectDuration_16() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popCornEffectDuration_16)); }
	inline float get_popCornEffectDuration_16() const { return ___popCornEffectDuration_16; }
	inline float* get_address_of_popCornEffectDuration_16() { return &___popCornEffectDuration_16; }
	inline void set_popCornEffectDuration_16(float value)
	{
		___popCornEffectDuration_16 = value;
	}

	inline static int32_t get_offset_of_popCornEffectCountDown_17() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popCornEffectCountDown_17)); }
	inline float get_popCornEffectCountDown_17() const { return ___popCornEffectCountDown_17; }
	inline float* get_address_of_popCornEffectCountDown_17() { return &___popCornEffectCountDown_17; }
	inline void set_popCornEffectCountDown_17(float value)
	{
		___popCornEffectCountDown_17 = value;
	}

	inline static int32_t get_offset_of_threeDeeEffectDuration_18() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___threeDeeEffectDuration_18)); }
	inline float get_threeDeeEffectDuration_18() const { return ___threeDeeEffectDuration_18; }
	inline float* get_address_of_threeDeeEffectDuration_18() { return &___threeDeeEffectDuration_18; }
	inline void set_threeDeeEffectDuration_18(float value)
	{
		___threeDeeEffectDuration_18 = value;
	}

	inline static int32_t get_offset_of_threeDeeEffectCountDown_19() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___threeDeeEffectCountDown_19)); }
	inline float get_threeDeeEffectCountDown_19() const { return ___threeDeeEffectCountDown_19; }
	inline float* get_address_of_threeDeeEffectCountDown_19() { return &___threeDeeEffectCountDown_19; }
	inline void set_threeDeeEffectCountDown_19(float value)
	{
		___threeDeeEffectCountDown_19 = value;
	}

	inline static int32_t get_offset_of_sodaActive_20() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaActive_20)); }
	inline bool get_sodaActive_20() const { return ___sodaActive_20; }
	inline bool* get_address_of_sodaActive_20() { return &___sodaActive_20; }
	inline void set_sodaActive_20(bool value)
	{
		___sodaActive_20 = value;
	}

	inline static int32_t get_offset_of_popcornActive_21() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popcornActive_21)); }
	inline bool get_popcornActive_21() const { return ___popcornActive_21; }
	inline bool* get_address_of_popcornActive_21() { return &___popcornActive_21; }
	inline void set_popcornActive_21(bool value)
	{
		___popcornActive_21 = value;
	}

	inline static int32_t get_offset_of_drunkActive_22() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___drunkActive_22)); }
	inline bool get_drunkActive_22() const { return ___drunkActive_22; }
	inline bool* get_address_of_drunkActive_22() { return &___drunkActive_22; }
	inline void set_drunkActive_22(bool value)
	{
		___drunkActive_22 = value;
	}

	inline static int32_t get_offset_of_threedeeActive_23() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___threedeeActive_23)); }
	inline bool get_threedeeActive_23() const { return ___threedeeActive_23; }
	inline bool* get_address_of_threedeeActive_23() { return &___threedeeActive_23; }
	inline void set_threedeeActive_23(bool value)
	{
		___threedeeActive_23 = value;
	}

	inline static int32_t get_offset_of_imageEffectActive_24() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___imageEffectActive_24)); }
	inline bool get_imageEffectActive_24() const { return ___imageEffectActive_24; }
	inline bool* get_address_of_imageEffectActive_24() { return &___imageEffectActive_24; }
	inline void set_imageEffectActive_24(bool value)
	{
		___imageEffectActive_24 = value;
	}

	inline static int32_t get_offset_of_mainCamera_25() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___mainCamera_25)); }
	inline GameObject_t3674682005 * get_mainCamera_25() const { return ___mainCamera_25; }
	inline GameObject_t3674682005 ** get_address_of_mainCamera_25() { return &___mainCamera_25; }
	inline void set_mainCamera_25(GameObject_t3674682005 * value)
	{
		___mainCamera_25 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_25, value);
	}

	inline static int32_t get_offset_of_popCornTrail_26() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popCornTrail_26)); }
	inline GameObject_t3674682005 * get_popCornTrail_26() const { return ___popCornTrail_26; }
	inline GameObject_t3674682005 ** get_address_of_popCornTrail_26() { return &___popCornTrail_26; }
	inline void set_popCornTrail_26(GameObject_t3674682005 * value)
	{
		___popCornTrail_26 = value;
		Il2CppCodeGenWriteBarrier(&___popCornTrail_26, value);
	}

	inline static int32_t get_offset_of_playerAnim_28() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerAnim_28)); }
	inline Animator_t2776330603 * get_playerAnim_28() const { return ___playerAnim_28; }
	inline Animator_t2776330603 ** get_address_of_playerAnim_28() { return &___playerAnim_28; }
	inline void set_playerAnim_28(Animator_t2776330603 * value)
	{
		___playerAnim_28 = value;
		Il2CppCodeGenWriteBarrier(&___playerAnim_28, value);
	}

	inline static int32_t get_offset_of_renderers_29() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___renderers_29)); }
	inline RendererU5BU5D_t440051646* get_renderers_29() const { return ___renderers_29; }
	inline RendererU5BU5D_t440051646** get_address_of_renderers_29() { return &___renderers_29; }
	inline void set_renderers_29(RendererU5BU5D_t440051646* value)
	{
		___renderers_29 = value;
		Il2CppCodeGenWriteBarrier(&___renderers_29, value);
	}

	inline static int32_t get_offset_of_fishEyeEffect_30() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___fishEyeEffect_30)); }
	inline Fisheye_t2084831179 * get_fishEyeEffect_30() const { return ___fishEyeEffect_30; }
	inline Fisheye_t2084831179 ** get_address_of_fishEyeEffect_30() { return &___fishEyeEffect_30; }
	inline void set_fishEyeEffect_30(Fisheye_t2084831179 * value)
	{
		___fishEyeEffect_30 = value;
		Il2CppCodeGenWriteBarrier(&___fishEyeEffect_30, value);
	}

	inline static int32_t get_offset_of_motionBlurEffect_31() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___motionBlurEffect_31)); }
	inline MotionBlur_t3002754187 * get_motionBlurEffect_31() const { return ___motionBlurEffect_31; }
	inline MotionBlur_t3002754187 ** get_address_of_motionBlurEffect_31() { return &___motionBlurEffect_31; }
	inline void set_motionBlurEffect_31(MotionBlur_t3002754187 * value)
	{
		___motionBlurEffect_31 = value;
		Il2CppCodeGenWriteBarrier(&___motionBlurEffect_31, value);
	}

	inline static int32_t get_offset_of_contrastEnhanceEffect_32() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___contrastEnhanceEffect_32)); }
	inline ContrastEnhance_t3797097022 * get_contrastEnhanceEffect_32() const { return ___contrastEnhanceEffect_32; }
	inline ContrastEnhance_t3797097022 ** get_address_of_contrastEnhanceEffect_32() { return &___contrastEnhanceEffect_32; }
	inline void set_contrastEnhanceEffect_32(ContrastEnhance_t3797097022 * value)
	{
		___contrastEnhanceEffect_32 = value;
		Il2CppCodeGenWriteBarrier(&___contrastEnhanceEffect_32, value);
	}

	inline static int32_t get_offset_of_threeDeeEffect_33() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___threeDeeEffect_33)); }
	inline Anaglyph3D_t2235875337 * get_threeDeeEffect_33() const { return ___threeDeeEffect_33; }
	inline Anaglyph3D_t2235875337 ** get_address_of_threeDeeEffect_33() { return &___threeDeeEffect_33; }
	inline void set_threeDeeEffect_33(Anaglyph3D_t2235875337 * value)
	{
		___threeDeeEffect_33 = value;
		Il2CppCodeGenWriteBarrier(&___threeDeeEffect_33, value);
	}

	inline static int32_t get_offset_of_fishEyeAnim_34() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___fishEyeAnim_34)); }
	inline Animation_t1724966010 * get_fishEyeAnim_34() const { return ___fishEyeAnim_34; }
	inline Animation_t1724966010 ** get_address_of_fishEyeAnim_34() { return &___fishEyeAnim_34; }
	inline void set_fishEyeAnim_34(Animation_t1724966010 * value)
	{
		___fishEyeAnim_34 = value;
		Il2CppCodeGenWriteBarrier(&___fishEyeAnim_34, value);
	}

	inline static int32_t get_offset_of_guiModelShowing_35() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___guiModelShowing_35)); }
	inline bool get_guiModelShowing_35() const { return ___guiModelShowing_35; }
	inline bool* get_address_of_guiModelShowing_35() { return &___guiModelShowing_35; }
	inline void set_guiModelShowing_35(bool value)
	{
		___guiModelShowing_35 = value;
	}

	inline static int32_t get_offset_of_guiThreeDeeGlasses_36() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___guiThreeDeeGlasses_36)); }
	inline GameObject_t3674682005 * get_guiThreeDeeGlasses_36() const { return ___guiThreeDeeGlasses_36; }
	inline GameObject_t3674682005 ** get_address_of_guiThreeDeeGlasses_36() { return &___guiThreeDeeGlasses_36; }
	inline void set_guiThreeDeeGlasses_36(GameObject_t3674682005 * value)
	{
		___guiThreeDeeGlasses_36 = value;
		Il2CppCodeGenWriteBarrier(&___guiThreeDeeGlasses_36, value);
	}

	inline static int32_t get_offset_of_guiPopCorn_37() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___guiPopCorn_37)); }
	inline GameObject_t3674682005 * get_guiPopCorn_37() const { return ___guiPopCorn_37; }
	inline GameObject_t3674682005 ** get_address_of_guiPopCorn_37() { return &___guiPopCorn_37; }
	inline void set_guiPopCorn_37(GameObject_t3674682005 * value)
	{
		___guiPopCorn_37 = value;
		Il2CppCodeGenWriteBarrier(&___guiPopCorn_37, value);
	}

	inline static int32_t get_offset_of_guiSoda_38() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___guiSoda_38)); }
	inline GameObject_t3674682005 * get_guiSoda_38() const { return ___guiSoda_38; }
	inline GameObject_t3674682005 ** get_address_of_guiSoda_38() { return &___guiSoda_38; }
	inline void set_guiSoda_38(GameObject_t3674682005 * value)
	{
		___guiSoda_38 = value;
		Il2CppCodeGenWriteBarrier(&___guiSoda_38, value);
	}
};

struct Player_t2393081601_StaticFields
{
public:
	// System.Single Player::batteryCharge
	float ___batteryCharge_2;
	// System.Single Player::batteryDrainRate
	float ___batteryDrainRate_3;
	// System.Single Player::movementSpeed
	float ___movementSpeed_4;
	// System.Boolean Player::PickedUpPowerUp
	bool ___PickedUpPowerUp_6;
	// System.Boolean Player::isDrunk
	bool ___isDrunk_7;
	// System.Boolean Player::activateSoda
	bool ___activateSoda_8;
	// System.Boolean Player::activatePopCorn
	bool ___activatePopCorn_9;
	// System.Boolean Player::activateThreeDee
	bool ___activateThreeDee_10;
	// System.Single Player::spectralEffect
	float ___spectralEffect_11;
	// System.Boolean Player::canMove
	bool ___canMove_27;

public:
	inline static int32_t get_offset_of_batteryCharge_2() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___batteryCharge_2)); }
	inline float get_batteryCharge_2() const { return ___batteryCharge_2; }
	inline float* get_address_of_batteryCharge_2() { return &___batteryCharge_2; }
	inline void set_batteryCharge_2(float value)
	{
		___batteryCharge_2 = value;
	}

	inline static int32_t get_offset_of_batteryDrainRate_3() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___batteryDrainRate_3)); }
	inline float get_batteryDrainRate_3() const { return ___batteryDrainRate_3; }
	inline float* get_address_of_batteryDrainRate_3() { return &___batteryDrainRate_3; }
	inline void set_batteryDrainRate_3(float value)
	{
		___batteryDrainRate_3 = value;
	}

	inline static int32_t get_offset_of_movementSpeed_4() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___movementSpeed_4)); }
	inline float get_movementSpeed_4() const { return ___movementSpeed_4; }
	inline float* get_address_of_movementSpeed_4() { return &___movementSpeed_4; }
	inline void set_movementSpeed_4(float value)
	{
		___movementSpeed_4 = value;
	}

	inline static int32_t get_offset_of_PickedUpPowerUp_6() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___PickedUpPowerUp_6)); }
	inline bool get_PickedUpPowerUp_6() const { return ___PickedUpPowerUp_6; }
	inline bool* get_address_of_PickedUpPowerUp_6() { return &___PickedUpPowerUp_6; }
	inline void set_PickedUpPowerUp_6(bool value)
	{
		___PickedUpPowerUp_6 = value;
	}

	inline static int32_t get_offset_of_isDrunk_7() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___isDrunk_7)); }
	inline bool get_isDrunk_7() const { return ___isDrunk_7; }
	inline bool* get_address_of_isDrunk_7() { return &___isDrunk_7; }
	inline void set_isDrunk_7(bool value)
	{
		___isDrunk_7 = value;
	}

	inline static int32_t get_offset_of_activateSoda_8() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___activateSoda_8)); }
	inline bool get_activateSoda_8() const { return ___activateSoda_8; }
	inline bool* get_address_of_activateSoda_8() { return &___activateSoda_8; }
	inline void set_activateSoda_8(bool value)
	{
		___activateSoda_8 = value;
	}

	inline static int32_t get_offset_of_activatePopCorn_9() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___activatePopCorn_9)); }
	inline bool get_activatePopCorn_9() const { return ___activatePopCorn_9; }
	inline bool* get_address_of_activatePopCorn_9() { return &___activatePopCorn_9; }
	inline void set_activatePopCorn_9(bool value)
	{
		___activatePopCorn_9 = value;
	}

	inline static int32_t get_offset_of_activateThreeDee_10() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___activateThreeDee_10)); }
	inline bool get_activateThreeDee_10() const { return ___activateThreeDee_10; }
	inline bool* get_address_of_activateThreeDee_10() { return &___activateThreeDee_10; }
	inline void set_activateThreeDee_10(bool value)
	{
		___activateThreeDee_10 = value;
	}

	inline static int32_t get_offset_of_spectralEffect_11() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___spectralEffect_11)); }
	inline float get_spectralEffect_11() const { return ___spectralEffect_11; }
	inline float* get_address_of_spectralEffect_11() { return &___spectralEffect_11; }
	inline void set_spectralEffect_11(float value)
	{
		___spectralEffect_11 = value;
	}

	inline static int32_t get_offset_of_canMove_27() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___canMove_27)); }
	inline bool get_canMove_27() const { return ___canMove_27; }
	inline bool* get_address_of_canMove_27() { return &___canMove_27; }
	inline void set_canMove_27(bool value)
	{
		___canMove_27 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
