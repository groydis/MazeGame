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
	// System.Single Player::intoxicationDuration
	float ___intoxicationDuration_9;
	// System.Single Player::intoxicationCountDown
	float ___intoxicationCountDown_10;
	// System.Single Player::sodaEffectDuration
	float ___sodaEffectDuration_11;
	// System.Single Player::sodaEffectCountDown
	float ___sodaEffectCountDown_12;
	// System.Single Player::popCornEffectDuration
	float ___popCornEffectDuration_13;
	// System.Single Player::popCornEffectCountDown
	float ___popCornEffectCountDown_14;
	// System.Boolean Player::imageEffectActive
	bool ___imageEffectActive_15;
	// UnityEngine.GameObject Player::mainCamera
	GameObject_t3674682005 * ___mainCamera_16;
	// UnityEngine.GameObject Player::popCornTrail
	GameObject_t3674682005 * ___popCornTrail_17;
	// UnityEngine.Animator Player::playerAnim
	Animator_t2776330603 * ___playerAnim_19;
	// UnityEngine.Renderer[] Player::renderers
	RendererU5BU5D_t440051646* ___renderers_20;

public:
	inline static int32_t get_offset_of_intoxicationDuration_9() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___intoxicationDuration_9)); }
	inline float get_intoxicationDuration_9() const { return ___intoxicationDuration_9; }
	inline float* get_address_of_intoxicationDuration_9() { return &___intoxicationDuration_9; }
	inline void set_intoxicationDuration_9(float value)
	{
		___intoxicationDuration_9 = value;
	}

	inline static int32_t get_offset_of_intoxicationCountDown_10() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___intoxicationCountDown_10)); }
	inline float get_intoxicationCountDown_10() const { return ___intoxicationCountDown_10; }
	inline float* get_address_of_intoxicationCountDown_10() { return &___intoxicationCountDown_10; }
	inline void set_intoxicationCountDown_10(float value)
	{
		___intoxicationCountDown_10 = value;
	}

	inline static int32_t get_offset_of_sodaEffectDuration_11() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaEffectDuration_11)); }
	inline float get_sodaEffectDuration_11() const { return ___sodaEffectDuration_11; }
	inline float* get_address_of_sodaEffectDuration_11() { return &___sodaEffectDuration_11; }
	inline void set_sodaEffectDuration_11(float value)
	{
		___sodaEffectDuration_11 = value;
	}

	inline static int32_t get_offset_of_sodaEffectCountDown_12() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___sodaEffectCountDown_12)); }
	inline float get_sodaEffectCountDown_12() const { return ___sodaEffectCountDown_12; }
	inline float* get_address_of_sodaEffectCountDown_12() { return &___sodaEffectCountDown_12; }
	inline void set_sodaEffectCountDown_12(float value)
	{
		___sodaEffectCountDown_12 = value;
	}

	inline static int32_t get_offset_of_popCornEffectDuration_13() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popCornEffectDuration_13)); }
	inline float get_popCornEffectDuration_13() const { return ___popCornEffectDuration_13; }
	inline float* get_address_of_popCornEffectDuration_13() { return &___popCornEffectDuration_13; }
	inline void set_popCornEffectDuration_13(float value)
	{
		___popCornEffectDuration_13 = value;
	}

	inline static int32_t get_offset_of_popCornEffectCountDown_14() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popCornEffectCountDown_14)); }
	inline float get_popCornEffectCountDown_14() const { return ___popCornEffectCountDown_14; }
	inline float* get_address_of_popCornEffectCountDown_14() { return &___popCornEffectCountDown_14; }
	inline void set_popCornEffectCountDown_14(float value)
	{
		___popCornEffectCountDown_14 = value;
	}

	inline static int32_t get_offset_of_imageEffectActive_15() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___imageEffectActive_15)); }
	inline bool get_imageEffectActive_15() const { return ___imageEffectActive_15; }
	inline bool* get_address_of_imageEffectActive_15() { return &___imageEffectActive_15; }
	inline void set_imageEffectActive_15(bool value)
	{
		___imageEffectActive_15 = value;
	}

	inline static int32_t get_offset_of_mainCamera_16() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___mainCamera_16)); }
	inline GameObject_t3674682005 * get_mainCamera_16() const { return ___mainCamera_16; }
	inline GameObject_t3674682005 ** get_address_of_mainCamera_16() { return &___mainCamera_16; }
	inline void set_mainCamera_16(GameObject_t3674682005 * value)
	{
		___mainCamera_16 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_16, value);
	}

	inline static int32_t get_offset_of_popCornTrail_17() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___popCornTrail_17)); }
	inline GameObject_t3674682005 * get_popCornTrail_17() const { return ___popCornTrail_17; }
	inline GameObject_t3674682005 ** get_address_of_popCornTrail_17() { return &___popCornTrail_17; }
	inline void set_popCornTrail_17(GameObject_t3674682005 * value)
	{
		___popCornTrail_17 = value;
		Il2CppCodeGenWriteBarrier(&___popCornTrail_17, value);
	}

	inline static int32_t get_offset_of_playerAnim_19() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___playerAnim_19)); }
	inline Animator_t2776330603 * get_playerAnim_19() const { return ___playerAnim_19; }
	inline Animator_t2776330603 ** get_address_of_playerAnim_19() { return &___playerAnim_19; }
	inline void set_playerAnim_19(Animator_t2776330603 * value)
	{
		___playerAnim_19 = value;
		Il2CppCodeGenWriteBarrier(&___playerAnim_19, value);
	}

	inline static int32_t get_offset_of_renderers_20() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___renderers_20)); }
	inline RendererU5BU5D_t440051646* get_renderers_20() const { return ___renderers_20; }
	inline RendererU5BU5D_t440051646** get_address_of_renderers_20() { return &___renderers_20; }
	inline void set_renderers_20(RendererU5BU5D_t440051646* value)
	{
		___renderers_20 = value;
		Il2CppCodeGenWriteBarrier(&___renderers_20, value);
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
	// System.Boolean Player::isDrunk
	bool ___isDrunk_5;
	// System.Boolean Player::activateSoda
	bool ___activateSoda_6;
	// System.Boolean Player::activatePopCorn
	bool ___activatePopCorn_7;
	// System.Single Player::spectralEffect
	float ___spectralEffect_8;
	// System.Boolean Player::canMove
	bool ___canMove_18;

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

	inline static int32_t get_offset_of_isDrunk_5() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___isDrunk_5)); }
	inline bool get_isDrunk_5() const { return ___isDrunk_5; }
	inline bool* get_address_of_isDrunk_5() { return &___isDrunk_5; }
	inline void set_isDrunk_5(bool value)
	{
		___isDrunk_5 = value;
	}

	inline static int32_t get_offset_of_activateSoda_6() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___activateSoda_6)); }
	inline bool get_activateSoda_6() const { return ___activateSoda_6; }
	inline bool* get_address_of_activateSoda_6() { return &___activateSoda_6; }
	inline void set_activateSoda_6(bool value)
	{
		___activateSoda_6 = value;
	}

	inline static int32_t get_offset_of_activatePopCorn_7() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___activatePopCorn_7)); }
	inline bool get_activatePopCorn_7() const { return ___activatePopCorn_7; }
	inline bool* get_address_of_activatePopCorn_7() { return &___activatePopCorn_7; }
	inline void set_activatePopCorn_7(bool value)
	{
		___activatePopCorn_7 = value;
	}

	inline static int32_t get_offset_of_spectralEffect_8() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___spectralEffect_8)); }
	inline float get_spectralEffect_8() const { return ___spectralEffect_8; }
	inline float* get_address_of_spectralEffect_8() { return &___spectralEffect_8; }
	inline void set_spectralEffect_8(float value)
	{
		___spectralEffect_8 = value;
	}

	inline static int32_t get_offset_of_canMove_18() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___canMove_18)); }
	inline bool get_canMove_18() const { return ___canMove_18; }
	inline bool* get_address_of_canMove_18() { return &___canMove_18; }
	inline void set_canMove_18(bool value)
	{
		___canMove_18 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
