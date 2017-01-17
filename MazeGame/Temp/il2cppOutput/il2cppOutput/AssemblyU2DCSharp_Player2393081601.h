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
// UnityEngine.AudioSource
struct AudioSource_t1740077639;
// UnityEngine.AudioClip
struct AudioClip_t794140988;

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
	float ___intoxicationDuration_17;
	// System.Single Player::intoxicationCountDown
	float ___intoxicationCountDown_18;
	// System.Single Player::sodaEffectDuration
	float ___sodaEffectDuration_19;
	// System.Single Player::sodaEffectCountDown
	float ___sodaEffectCountDown_20;
	// System.Single Player::popCornEffectDuration
	float ___popCornEffectDuration_21;
	// System.Single Player::popCornEffectCountDown
	float ___popCornEffectCountDown_22;
	// System.Single Player::threeDeeEffectDuration
	float ___threeDeeEffectDuration_23;
	// System.Single Player::threeDeeEffectCountDown
	float ___threeDeeEffectCountDown_24;
	// System.Boolean Player::sodaActive
	bool ___sodaActive_25;
	// System.Boolean Player::popcornActive
	bool ___popcornActive_26;
	// System.Boolean Player::drunkActive
	bool ___drunkActive_27;
	// System.Boolean Player::threedeeActive
	bool ___threedeeActive_28;
	// System.Boolean Player::imageEffectActive
	bool ___imageEffectActive_29;
	// UnityEngine.GameObject Player::mainCamera
	GameObject_t3674682005 * ___mainCamera_30;
	// UnityEngine.GameObject Player::popCornTrail
	GameObject_t3674682005 * ___popCornTrail_31;
	// UnityEngine.Animator Player::playerAnim
	Animator_t2776330603 * ___playerAnim_33;
	// UnityEngine.Renderer[] Player::renderers
	RendererU5BU5D_t440051646* ___renderers_34;
	// UnityStandardAssets.ImageEffects.Fisheye Player::fishEyeEffect
	Fisheye_t2084831179 * ___fishEyeEffect_35;
	// UnityStandardAssets.ImageEffects.MotionBlur Player::motionBlurEffect
	MotionBlur_t3002754187 * ___motionBlurEffect_36;
	// UnityStandardAssets.ImageEffects.ContrastEnhance Player::contrastEnhanceEffect
	ContrastEnhance_t3797097022 * ___contrastEnhanceEffect_37;
	// MorePPEffects.Anaglyph3D Player::threeDeeEffect
	Anaglyph3D_t2235875337 * ___threeDeeEffect_38;
	// UnityEngine.Animation Player::fishEyeAnim
	Animation_t1724966010 * ___fishEyeAnim_39;
	// System.Boolean Player::guiModelShowing
	bool ___guiModelShowing_40;
	// UnityEngine.GameObject Player::guiThreeDeeGlasses
	GameObject_t3674682005 * ___guiThreeDeeGlasses_41;
	// UnityEngine.GameObject Player::guiPopCorn
	GameObject_t3674682005 * ___guiPopCorn_42;
	// UnityEngine.GameObject Player::guiSoda
	GameObject_t3674682005 * ___guiSoda_43;
	// UnityEngine.AudioSource Player::aSource
	AudioSource_t1740077639 * ___aSource_44;
	// UnityEngine.AudioClip Player::guiPop
	AudioClip_t794140988 * ___guiPop_45;

public:
	inline static int32_t get_offset_of_sodaEffectMovementSpeed_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaEffectMovementSpeed_5)); }
	inline float get_sodaEffectMovementSpeed_5() const { return ___sodaEffectMovementSpeed_5; }
	inline float* get_address_of_sodaEffectMovementSpeed_5() { return &___sodaEffectMovementSpeed_5; }
	inline void set_sodaEffectMovementSpeed_5(float value)
	{
		___sodaEffectMovementSpeed_5 = value;
	}

	inline static int32_t get_offset_of_intoxicationDuration_17() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___intoxicationDuration_17)); }
	inline float get_intoxicationDuration_17() const { return ___intoxicationDuration_17; }
	inline float* get_address_of_intoxicationDuration_17() { return &___intoxicationDuration_17; }
	inline void set_intoxicationDuration_17(float value)
	{
		___intoxicationDuration_17 = value;
	}

	inline static int32_t get_offset_of_intoxicationCountDown_18() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___intoxicationCountDown_18)); }
	inline float get_intoxicationCountDown_18() const { return ___intoxicationCountDown_18; }
	inline float* get_address_of_intoxicationCountDown_18() { return &___intoxicationCountDown_18; }
	inline void set_intoxicationCountDown_18(float value)
	{
		___intoxicationCountDown_18 = value;
	}

	inline static int32_t get_offset_of_sodaEffectDuration_19() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaEffectDuration_19)); }
	inline float get_sodaEffectDuration_19() const { return ___sodaEffectDuration_19; }
	inline float* get_address_of_sodaEffectDuration_19() { return &___sodaEffectDuration_19; }
	inline void set_sodaEffectDuration_19(float value)
	{
		___sodaEffectDuration_19 = value;
	}

	inline static int32_t get_offset_of_sodaEffectCountDown_20() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaEffectCountDown_20)); }
	inline float get_sodaEffectCountDown_20() const { return ___sodaEffectCountDown_20; }
	inline float* get_address_of_sodaEffectCountDown_20() { return &___sodaEffectCountDown_20; }
	inline void set_sodaEffectCountDown_20(float value)
	{
		___sodaEffectCountDown_20 = value;
	}

	inline static int32_t get_offset_of_popCornEffectDuration_21() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popCornEffectDuration_21)); }
	inline float get_popCornEffectDuration_21() const { return ___popCornEffectDuration_21; }
	inline float* get_address_of_popCornEffectDuration_21() { return &___popCornEffectDuration_21; }
	inline void set_popCornEffectDuration_21(float value)
	{
		___popCornEffectDuration_21 = value;
	}

	inline static int32_t get_offset_of_popCornEffectCountDown_22() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popCornEffectCountDown_22)); }
	inline float get_popCornEffectCountDown_22() const { return ___popCornEffectCountDown_22; }
	inline float* get_address_of_popCornEffectCountDown_22() { return &___popCornEffectCountDown_22; }
	inline void set_popCornEffectCountDown_22(float value)
	{
		___popCornEffectCountDown_22 = value;
	}

	inline static int32_t get_offset_of_threeDeeEffectDuration_23() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___threeDeeEffectDuration_23)); }
	inline float get_threeDeeEffectDuration_23() const { return ___threeDeeEffectDuration_23; }
	inline float* get_address_of_threeDeeEffectDuration_23() { return &___threeDeeEffectDuration_23; }
	inline void set_threeDeeEffectDuration_23(float value)
	{
		___threeDeeEffectDuration_23 = value;
	}

	inline static int32_t get_offset_of_threeDeeEffectCountDown_24() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___threeDeeEffectCountDown_24)); }
	inline float get_threeDeeEffectCountDown_24() const { return ___threeDeeEffectCountDown_24; }
	inline float* get_address_of_threeDeeEffectCountDown_24() { return &___threeDeeEffectCountDown_24; }
	inline void set_threeDeeEffectCountDown_24(float value)
	{
		___threeDeeEffectCountDown_24 = value;
	}

	inline static int32_t get_offset_of_sodaActive_25() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaActive_25)); }
	inline bool get_sodaActive_25() const { return ___sodaActive_25; }
	inline bool* get_address_of_sodaActive_25() { return &___sodaActive_25; }
	inline void set_sodaActive_25(bool value)
	{
		___sodaActive_25 = value;
	}

	inline static int32_t get_offset_of_popcornActive_26() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popcornActive_26)); }
	inline bool get_popcornActive_26() const { return ___popcornActive_26; }
	inline bool* get_address_of_popcornActive_26() { return &___popcornActive_26; }
	inline void set_popcornActive_26(bool value)
	{
		___popcornActive_26 = value;
	}

	inline static int32_t get_offset_of_drunkActive_27() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___drunkActive_27)); }
	inline bool get_drunkActive_27() const { return ___drunkActive_27; }
	inline bool* get_address_of_drunkActive_27() { return &___drunkActive_27; }
	inline void set_drunkActive_27(bool value)
	{
		___drunkActive_27 = value;
	}

	inline static int32_t get_offset_of_threedeeActive_28() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___threedeeActive_28)); }
	inline bool get_threedeeActive_28() const { return ___threedeeActive_28; }
	inline bool* get_address_of_threedeeActive_28() { return &___threedeeActive_28; }
	inline void set_threedeeActive_28(bool value)
	{
		___threedeeActive_28 = value;
	}

	inline static int32_t get_offset_of_imageEffectActive_29() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___imageEffectActive_29)); }
	inline bool get_imageEffectActive_29() const { return ___imageEffectActive_29; }
	inline bool* get_address_of_imageEffectActive_29() { return &___imageEffectActive_29; }
	inline void set_imageEffectActive_29(bool value)
	{
		___imageEffectActive_29 = value;
	}

	inline static int32_t get_offset_of_mainCamera_30() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___mainCamera_30)); }
	inline GameObject_t3674682005 * get_mainCamera_30() const { return ___mainCamera_30; }
	inline GameObject_t3674682005 ** get_address_of_mainCamera_30() { return &___mainCamera_30; }
	inline void set_mainCamera_30(GameObject_t3674682005 * value)
	{
		___mainCamera_30 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_30, value);
	}

	inline static int32_t get_offset_of_popCornTrail_31() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popCornTrail_31)); }
	inline GameObject_t3674682005 * get_popCornTrail_31() const { return ___popCornTrail_31; }
	inline GameObject_t3674682005 ** get_address_of_popCornTrail_31() { return &___popCornTrail_31; }
	inline void set_popCornTrail_31(GameObject_t3674682005 * value)
	{
		___popCornTrail_31 = value;
		Il2CppCodeGenWriteBarrier(&___popCornTrail_31, value);
	}

	inline static int32_t get_offset_of_playerAnim_33() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerAnim_33)); }
	inline Animator_t2776330603 * get_playerAnim_33() const { return ___playerAnim_33; }
	inline Animator_t2776330603 ** get_address_of_playerAnim_33() { return &___playerAnim_33; }
	inline void set_playerAnim_33(Animator_t2776330603 * value)
	{
		___playerAnim_33 = value;
		Il2CppCodeGenWriteBarrier(&___playerAnim_33, value);
	}

	inline static int32_t get_offset_of_renderers_34() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___renderers_34)); }
	inline RendererU5BU5D_t440051646* get_renderers_34() const { return ___renderers_34; }
	inline RendererU5BU5D_t440051646** get_address_of_renderers_34() { return &___renderers_34; }
	inline void set_renderers_34(RendererU5BU5D_t440051646* value)
	{
		___renderers_34 = value;
		Il2CppCodeGenWriteBarrier(&___renderers_34, value);
	}

	inline static int32_t get_offset_of_fishEyeEffect_35() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___fishEyeEffect_35)); }
	inline Fisheye_t2084831179 * get_fishEyeEffect_35() const { return ___fishEyeEffect_35; }
	inline Fisheye_t2084831179 ** get_address_of_fishEyeEffect_35() { return &___fishEyeEffect_35; }
	inline void set_fishEyeEffect_35(Fisheye_t2084831179 * value)
	{
		___fishEyeEffect_35 = value;
		Il2CppCodeGenWriteBarrier(&___fishEyeEffect_35, value);
	}

	inline static int32_t get_offset_of_motionBlurEffect_36() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___motionBlurEffect_36)); }
	inline MotionBlur_t3002754187 * get_motionBlurEffect_36() const { return ___motionBlurEffect_36; }
	inline MotionBlur_t3002754187 ** get_address_of_motionBlurEffect_36() { return &___motionBlurEffect_36; }
	inline void set_motionBlurEffect_36(MotionBlur_t3002754187 * value)
	{
		___motionBlurEffect_36 = value;
		Il2CppCodeGenWriteBarrier(&___motionBlurEffect_36, value);
	}

	inline static int32_t get_offset_of_contrastEnhanceEffect_37() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___contrastEnhanceEffect_37)); }
	inline ContrastEnhance_t3797097022 * get_contrastEnhanceEffect_37() const { return ___contrastEnhanceEffect_37; }
	inline ContrastEnhance_t3797097022 ** get_address_of_contrastEnhanceEffect_37() { return &___contrastEnhanceEffect_37; }
	inline void set_contrastEnhanceEffect_37(ContrastEnhance_t3797097022 * value)
	{
		___contrastEnhanceEffect_37 = value;
		Il2CppCodeGenWriteBarrier(&___contrastEnhanceEffect_37, value);
	}

	inline static int32_t get_offset_of_threeDeeEffect_38() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___threeDeeEffect_38)); }
	inline Anaglyph3D_t2235875337 * get_threeDeeEffect_38() const { return ___threeDeeEffect_38; }
	inline Anaglyph3D_t2235875337 ** get_address_of_threeDeeEffect_38() { return &___threeDeeEffect_38; }
	inline void set_threeDeeEffect_38(Anaglyph3D_t2235875337 * value)
	{
		___threeDeeEffect_38 = value;
		Il2CppCodeGenWriteBarrier(&___threeDeeEffect_38, value);
	}

	inline static int32_t get_offset_of_fishEyeAnim_39() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___fishEyeAnim_39)); }
	inline Animation_t1724966010 * get_fishEyeAnim_39() const { return ___fishEyeAnim_39; }
	inline Animation_t1724966010 ** get_address_of_fishEyeAnim_39() { return &___fishEyeAnim_39; }
	inline void set_fishEyeAnim_39(Animation_t1724966010 * value)
	{
		___fishEyeAnim_39 = value;
		Il2CppCodeGenWriteBarrier(&___fishEyeAnim_39, value);
	}

	inline static int32_t get_offset_of_guiModelShowing_40() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___guiModelShowing_40)); }
	inline bool get_guiModelShowing_40() const { return ___guiModelShowing_40; }
	inline bool* get_address_of_guiModelShowing_40() { return &___guiModelShowing_40; }
	inline void set_guiModelShowing_40(bool value)
	{
		___guiModelShowing_40 = value;
	}

	inline static int32_t get_offset_of_guiThreeDeeGlasses_41() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___guiThreeDeeGlasses_41)); }
	inline GameObject_t3674682005 * get_guiThreeDeeGlasses_41() const { return ___guiThreeDeeGlasses_41; }
	inline GameObject_t3674682005 ** get_address_of_guiThreeDeeGlasses_41() { return &___guiThreeDeeGlasses_41; }
	inline void set_guiThreeDeeGlasses_41(GameObject_t3674682005 * value)
	{
		___guiThreeDeeGlasses_41 = value;
		Il2CppCodeGenWriteBarrier(&___guiThreeDeeGlasses_41, value);
	}

	inline static int32_t get_offset_of_guiPopCorn_42() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___guiPopCorn_42)); }
	inline GameObject_t3674682005 * get_guiPopCorn_42() const { return ___guiPopCorn_42; }
	inline GameObject_t3674682005 ** get_address_of_guiPopCorn_42() { return &___guiPopCorn_42; }
	inline void set_guiPopCorn_42(GameObject_t3674682005 * value)
	{
		___guiPopCorn_42 = value;
		Il2CppCodeGenWriteBarrier(&___guiPopCorn_42, value);
	}

	inline static int32_t get_offset_of_guiSoda_43() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___guiSoda_43)); }
	inline GameObject_t3674682005 * get_guiSoda_43() const { return ___guiSoda_43; }
	inline GameObject_t3674682005 ** get_address_of_guiSoda_43() { return &___guiSoda_43; }
	inline void set_guiSoda_43(GameObject_t3674682005 * value)
	{
		___guiSoda_43 = value;
		Il2CppCodeGenWriteBarrier(&___guiSoda_43, value);
	}

	inline static int32_t get_offset_of_aSource_44() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___aSource_44)); }
	inline AudioSource_t1740077639 * get_aSource_44() const { return ___aSource_44; }
	inline AudioSource_t1740077639 ** get_address_of_aSource_44() { return &___aSource_44; }
	inline void set_aSource_44(AudioSource_t1740077639 * value)
	{
		___aSource_44 = value;
		Il2CppCodeGenWriteBarrier(&___aSource_44, value);
	}

	inline static int32_t get_offset_of_guiPop_45() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___guiPop_45)); }
	inline AudioClip_t794140988 * get_guiPop_45() const { return ___guiPop_45; }
	inline AudioClip_t794140988 ** get_address_of_guiPop_45() { return &___guiPop_45; }
	inline void set_guiPop_45(AudioClip_t794140988 * value)
	{
		___guiPop_45 = value;
		Il2CppCodeGenWriteBarrier(&___guiPop_45, value);
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
	// System.Int32 Player::vhsCollectedCount
	int32_t ___vhsCollectedCount_6;
	// System.Int32 Player::batteryCollectedCount
	int32_t ___batteryCollectedCount_7;
	// System.Int32 Player::popcornCollectedCount
	int32_t ___popcornCollectedCount_8;
	// System.Int32 Player::sodaCollectedCount
	int32_t ___sodaCollectedCount_9;
	// System.Int32 Player::threedeeglassesCollectedCount
	int32_t ___threedeeglassesCollectedCount_10;
	// System.Boolean Player::PickedUpPowerUp
	bool ___PickedUpPowerUp_11;
	// System.Boolean Player::isDrunk
	bool ___isDrunk_12;
	// System.Boolean Player::activateSoda
	bool ___activateSoda_13;
	// System.Boolean Player::activatePopCorn
	bool ___activatePopCorn_14;
	// System.Boolean Player::activateThreeDee
	bool ___activateThreeDee_15;
	// System.Single Player::spectralEffect
	float ___spectralEffect_16;
	// System.Boolean Player::canMove
	bool ___canMove_32;

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

	inline static int32_t get_offset_of_vhsCollectedCount_6() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___vhsCollectedCount_6)); }
	inline int32_t get_vhsCollectedCount_6() const { return ___vhsCollectedCount_6; }
	inline int32_t* get_address_of_vhsCollectedCount_6() { return &___vhsCollectedCount_6; }
	inline void set_vhsCollectedCount_6(int32_t value)
	{
		___vhsCollectedCount_6 = value;
	}

	inline static int32_t get_offset_of_batteryCollectedCount_7() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___batteryCollectedCount_7)); }
	inline int32_t get_batteryCollectedCount_7() const { return ___batteryCollectedCount_7; }
	inline int32_t* get_address_of_batteryCollectedCount_7() { return &___batteryCollectedCount_7; }
	inline void set_batteryCollectedCount_7(int32_t value)
	{
		___batteryCollectedCount_7 = value;
	}

	inline static int32_t get_offset_of_popcornCollectedCount_8() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___popcornCollectedCount_8)); }
	inline int32_t get_popcornCollectedCount_8() const { return ___popcornCollectedCount_8; }
	inline int32_t* get_address_of_popcornCollectedCount_8() { return &___popcornCollectedCount_8; }
	inline void set_popcornCollectedCount_8(int32_t value)
	{
		___popcornCollectedCount_8 = value;
	}

	inline static int32_t get_offset_of_sodaCollectedCount_9() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___sodaCollectedCount_9)); }
	inline int32_t get_sodaCollectedCount_9() const { return ___sodaCollectedCount_9; }
	inline int32_t* get_address_of_sodaCollectedCount_9() { return &___sodaCollectedCount_9; }
	inline void set_sodaCollectedCount_9(int32_t value)
	{
		___sodaCollectedCount_9 = value;
	}

	inline static int32_t get_offset_of_threedeeglassesCollectedCount_10() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___threedeeglassesCollectedCount_10)); }
	inline int32_t get_threedeeglassesCollectedCount_10() const { return ___threedeeglassesCollectedCount_10; }
	inline int32_t* get_address_of_threedeeglassesCollectedCount_10() { return &___threedeeglassesCollectedCount_10; }
	inline void set_threedeeglassesCollectedCount_10(int32_t value)
	{
		___threedeeglassesCollectedCount_10 = value;
	}

	inline static int32_t get_offset_of_PickedUpPowerUp_11() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___PickedUpPowerUp_11)); }
	inline bool get_PickedUpPowerUp_11() const { return ___PickedUpPowerUp_11; }
	inline bool* get_address_of_PickedUpPowerUp_11() { return &___PickedUpPowerUp_11; }
	inline void set_PickedUpPowerUp_11(bool value)
	{
		___PickedUpPowerUp_11 = value;
	}

	inline static int32_t get_offset_of_isDrunk_12() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___isDrunk_12)); }
	inline bool get_isDrunk_12() const { return ___isDrunk_12; }
	inline bool* get_address_of_isDrunk_12() { return &___isDrunk_12; }
	inline void set_isDrunk_12(bool value)
	{
		___isDrunk_12 = value;
	}

	inline static int32_t get_offset_of_activateSoda_13() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___activateSoda_13)); }
	inline bool get_activateSoda_13() const { return ___activateSoda_13; }
	inline bool* get_address_of_activateSoda_13() { return &___activateSoda_13; }
	inline void set_activateSoda_13(bool value)
	{
		___activateSoda_13 = value;
	}

	inline static int32_t get_offset_of_activatePopCorn_14() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___activatePopCorn_14)); }
	inline bool get_activatePopCorn_14() const { return ___activatePopCorn_14; }
	inline bool* get_address_of_activatePopCorn_14() { return &___activatePopCorn_14; }
	inline void set_activatePopCorn_14(bool value)
	{
		___activatePopCorn_14 = value;
	}

	inline static int32_t get_offset_of_activateThreeDee_15() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___activateThreeDee_15)); }
	inline bool get_activateThreeDee_15() const { return ___activateThreeDee_15; }
	inline bool* get_address_of_activateThreeDee_15() { return &___activateThreeDee_15; }
	inline void set_activateThreeDee_15(bool value)
	{
		___activateThreeDee_15 = value;
	}

	inline static int32_t get_offset_of_spectralEffect_16() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___spectralEffect_16)); }
	inline float get_spectralEffect_16() const { return ___spectralEffect_16; }
	inline float* get_address_of_spectralEffect_16() { return &___spectralEffect_16; }
	inline void set_spectralEffect_16(float value)
	{
		___spectralEffect_16 = value;
	}

	inline static int32_t get_offset_of_canMove_32() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___canMove_32)); }
	inline bool get_canMove_32() const { return ___canMove_32; }
	inline bool* get_address_of_canMove_32() { return &___canMove_32; }
	inline void set_canMove_32(bool value)
	{
		___canMove_32 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
