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
	float ___intoxicationDuration_11;
	// System.Single Player::intoxicationCountDown
	float ___intoxicationCountDown_12;
	// System.Single Player::sodaEffectDuration
	float ___sodaEffectDuration_13;
	// System.Single Player::sodaEffectCountDown
	float ___sodaEffectCountDown_14;
	// System.Single Player::popCornEffectDuration
	float ___popCornEffectDuration_15;
	// System.Single Player::popCornEffectCountDown
	float ___popCornEffectCountDown_16;
	// System.Boolean Player::sodaActive
	bool ___sodaActive_17;
	// System.Boolean Player::popcornActive
	bool ___popcornActive_18;
	// System.Boolean Player::drunkActive
	bool ___drunkActive_19;
	// System.Boolean Player::imageEffectActive
	bool ___imageEffectActive_20;
	// UnityEngine.GameObject Player::mainCamera
	GameObject_t3674682005 * ___mainCamera_21;
	// UnityEngine.GameObject Player::popCornTrail
	GameObject_t3674682005 * ___popCornTrail_22;
	// UnityEngine.Animator Player::playerAnim
	Animator_t2776330603 * ___playerAnim_24;
	// UnityEngine.Renderer[] Player::renderers
	RendererU5BU5D_t440051646* ___renderers_25;
	// UnityStandardAssets.ImageEffects.Fisheye Player::fishEyeEffect
	Fisheye_t2084831179 * ___fishEyeEffect_26;
	// UnityStandardAssets.ImageEffects.MotionBlur Player::motionBlurEffect
	MotionBlur_t3002754187 * ___motionBlurEffect_27;
	// UnityStandardAssets.ImageEffects.ContrastEnhance Player::contrastEnhanceEffect
	ContrastEnhance_t3797097022 * ___contrastEnhanceEffect_28;
	// UnityEngine.Animation Player::fishEyeAnim
	Animation_t1724966010 * ___fishEyeAnim_29;

public:
	inline static int32_t get_offset_of_sodaEffectMovementSpeed_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaEffectMovementSpeed_5)); }
	inline float get_sodaEffectMovementSpeed_5() const { return ___sodaEffectMovementSpeed_5; }
	inline float* get_address_of_sodaEffectMovementSpeed_5() { return &___sodaEffectMovementSpeed_5; }
	inline void set_sodaEffectMovementSpeed_5(float value)
	{
		___sodaEffectMovementSpeed_5 = value;
	}

	inline static int32_t get_offset_of_intoxicationDuration_11() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___intoxicationDuration_11)); }
	inline float get_intoxicationDuration_11() const { return ___intoxicationDuration_11; }
	inline float* get_address_of_intoxicationDuration_11() { return &___intoxicationDuration_11; }
	inline void set_intoxicationDuration_11(float value)
	{
		___intoxicationDuration_11 = value;
	}

	inline static int32_t get_offset_of_intoxicationCountDown_12() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___intoxicationCountDown_12)); }
	inline float get_intoxicationCountDown_12() const { return ___intoxicationCountDown_12; }
	inline float* get_address_of_intoxicationCountDown_12() { return &___intoxicationCountDown_12; }
	inline void set_intoxicationCountDown_12(float value)
	{
		___intoxicationCountDown_12 = value;
	}

	inline static int32_t get_offset_of_sodaEffectDuration_13() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaEffectDuration_13)); }
	inline float get_sodaEffectDuration_13() const { return ___sodaEffectDuration_13; }
	inline float* get_address_of_sodaEffectDuration_13() { return &___sodaEffectDuration_13; }
	inline void set_sodaEffectDuration_13(float value)
	{
		___sodaEffectDuration_13 = value;
	}

	inline static int32_t get_offset_of_sodaEffectCountDown_14() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaEffectCountDown_14)); }
	inline float get_sodaEffectCountDown_14() const { return ___sodaEffectCountDown_14; }
	inline float* get_address_of_sodaEffectCountDown_14() { return &___sodaEffectCountDown_14; }
	inline void set_sodaEffectCountDown_14(float value)
	{
		___sodaEffectCountDown_14 = value;
	}

	inline static int32_t get_offset_of_popCornEffectDuration_15() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popCornEffectDuration_15)); }
	inline float get_popCornEffectDuration_15() const { return ___popCornEffectDuration_15; }
	inline float* get_address_of_popCornEffectDuration_15() { return &___popCornEffectDuration_15; }
	inline void set_popCornEffectDuration_15(float value)
	{
		___popCornEffectDuration_15 = value;
	}

	inline static int32_t get_offset_of_popCornEffectCountDown_16() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popCornEffectCountDown_16)); }
	inline float get_popCornEffectCountDown_16() const { return ___popCornEffectCountDown_16; }
	inline float* get_address_of_popCornEffectCountDown_16() { return &___popCornEffectCountDown_16; }
	inline void set_popCornEffectCountDown_16(float value)
	{
		___popCornEffectCountDown_16 = value;
	}

	inline static int32_t get_offset_of_sodaActive_17() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaActive_17)); }
	inline bool get_sodaActive_17() const { return ___sodaActive_17; }
	inline bool* get_address_of_sodaActive_17() { return &___sodaActive_17; }
	inline void set_sodaActive_17(bool value)
	{
		___sodaActive_17 = value;
	}

	inline static int32_t get_offset_of_popcornActive_18() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popcornActive_18)); }
	inline bool get_popcornActive_18() const { return ___popcornActive_18; }
	inline bool* get_address_of_popcornActive_18() { return &___popcornActive_18; }
	inline void set_popcornActive_18(bool value)
	{
		___popcornActive_18 = value;
	}

	inline static int32_t get_offset_of_drunkActive_19() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___drunkActive_19)); }
	inline bool get_drunkActive_19() const { return ___drunkActive_19; }
	inline bool* get_address_of_drunkActive_19() { return &___drunkActive_19; }
	inline void set_drunkActive_19(bool value)
	{
		___drunkActive_19 = value;
	}

	inline static int32_t get_offset_of_imageEffectActive_20() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___imageEffectActive_20)); }
	inline bool get_imageEffectActive_20() const { return ___imageEffectActive_20; }
	inline bool* get_address_of_imageEffectActive_20() { return &___imageEffectActive_20; }
	inline void set_imageEffectActive_20(bool value)
	{
		___imageEffectActive_20 = value;
	}

	inline static int32_t get_offset_of_mainCamera_21() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___mainCamera_21)); }
	inline GameObject_t3674682005 * get_mainCamera_21() const { return ___mainCamera_21; }
	inline GameObject_t3674682005 ** get_address_of_mainCamera_21() { return &___mainCamera_21; }
	inline void set_mainCamera_21(GameObject_t3674682005 * value)
	{
		___mainCamera_21 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_21, value);
	}

	inline static int32_t get_offset_of_popCornTrail_22() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popCornTrail_22)); }
	inline GameObject_t3674682005 * get_popCornTrail_22() const { return ___popCornTrail_22; }
	inline GameObject_t3674682005 ** get_address_of_popCornTrail_22() { return &___popCornTrail_22; }
	inline void set_popCornTrail_22(GameObject_t3674682005 * value)
	{
		___popCornTrail_22 = value;
		Il2CppCodeGenWriteBarrier(&___popCornTrail_22, value);
	}

	inline static int32_t get_offset_of_playerAnim_24() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerAnim_24)); }
	inline Animator_t2776330603 * get_playerAnim_24() const { return ___playerAnim_24; }
	inline Animator_t2776330603 ** get_address_of_playerAnim_24() { return &___playerAnim_24; }
	inline void set_playerAnim_24(Animator_t2776330603 * value)
	{
		___playerAnim_24 = value;
		Il2CppCodeGenWriteBarrier(&___playerAnim_24, value);
	}

	inline static int32_t get_offset_of_renderers_25() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___renderers_25)); }
	inline RendererU5BU5D_t440051646* get_renderers_25() const { return ___renderers_25; }
	inline RendererU5BU5D_t440051646** get_address_of_renderers_25() { return &___renderers_25; }
	inline void set_renderers_25(RendererU5BU5D_t440051646* value)
	{
		___renderers_25 = value;
		Il2CppCodeGenWriteBarrier(&___renderers_25, value);
	}

	inline static int32_t get_offset_of_fishEyeEffect_26() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___fishEyeEffect_26)); }
	inline Fisheye_t2084831179 * get_fishEyeEffect_26() const { return ___fishEyeEffect_26; }
	inline Fisheye_t2084831179 ** get_address_of_fishEyeEffect_26() { return &___fishEyeEffect_26; }
	inline void set_fishEyeEffect_26(Fisheye_t2084831179 * value)
	{
		___fishEyeEffect_26 = value;
		Il2CppCodeGenWriteBarrier(&___fishEyeEffect_26, value);
	}

	inline static int32_t get_offset_of_motionBlurEffect_27() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___motionBlurEffect_27)); }
	inline MotionBlur_t3002754187 * get_motionBlurEffect_27() const { return ___motionBlurEffect_27; }
	inline MotionBlur_t3002754187 ** get_address_of_motionBlurEffect_27() { return &___motionBlurEffect_27; }
	inline void set_motionBlurEffect_27(MotionBlur_t3002754187 * value)
	{
		___motionBlurEffect_27 = value;
		Il2CppCodeGenWriteBarrier(&___motionBlurEffect_27, value);
	}

	inline static int32_t get_offset_of_contrastEnhanceEffect_28() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___contrastEnhanceEffect_28)); }
	inline ContrastEnhance_t3797097022 * get_contrastEnhanceEffect_28() const { return ___contrastEnhanceEffect_28; }
	inline ContrastEnhance_t3797097022 ** get_address_of_contrastEnhanceEffect_28() { return &___contrastEnhanceEffect_28; }
	inline void set_contrastEnhanceEffect_28(ContrastEnhance_t3797097022 * value)
	{
		___contrastEnhanceEffect_28 = value;
		Il2CppCodeGenWriteBarrier(&___contrastEnhanceEffect_28, value);
	}

	inline static int32_t get_offset_of_fishEyeAnim_29() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___fishEyeAnim_29)); }
	inline Animation_t1724966010 * get_fishEyeAnim_29() const { return ___fishEyeAnim_29; }
	inline Animation_t1724966010 ** get_address_of_fishEyeAnim_29() { return &___fishEyeAnim_29; }
	inline void set_fishEyeAnim_29(Animation_t1724966010 * value)
	{
		___fishEyeAnim_29 = value;
		Il2CppCodeGenWriteBarrier(&___fishEyeAnim_29, value);
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
	// System.Single Player::spectralEffect
	float ___spectralEffect_10;
	// System.Boolean Player::canMove
	bool ___canMove_23;

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

	inline static int32_t get_offset_of_spectralEffect_10() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___spectralEffect_10)); }
	inline float get_spectralEffect_10() const { return ___spectralEffect_10; }
	inline float* get_address_of_spectralEffect_10() { return &___spectralEffect_10; }
	inline void set_spectralEffect_10(float value)
	{
		___spectralEffect_10 = value;
	}

	inline static int32_t get_offset_of_canMove_23() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___canMove_23)); }
	inline bool get_canMove_23() const { return ___canMove_23; }
	inline bool* get_address_of_canMove_23() { return &___canMove_23; }
	inline void set_canMove_23(bool value)
	{
		___canMove_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
