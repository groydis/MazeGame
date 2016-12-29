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
	float ___intoxicationDuration_5;
	// System.Single Player::intoxicationCountDown
	float ___intoxicationCountDown_6;
	// System.Boolean Player::imageEffectActive
	bool ___imageEffectActive_7;
	// UnityEngine.GameObject Player::mainCamera
	GameObject_t3674682005 * ___mainCamera_8;

public:
	inline static int32_t get_offset_of_intoxicationDuration_5() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___intoxicationDuration_5)); }
	inline float get_intoxicationDuration_5() const { return ___intoxicationDuration_5; }
	inline float* get_address_of_intoxicationDuration_5() { return &___intoxicationDuration_5; }
	inline void set_intoxicationDuration_5(float value)
	{
		___intoxicationDuration_5 = value;
	}

	inline static int32_t get_offset_of_intoxicationCountDown_6() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___intoxicationCountDown_6)); }
	inline float get_intoxicationCountDown_6() const { return ___intoxicationCountDown_6; }
	inline float* get_address_of_intoxicationCountDown_6() { return &___intoxicationCountDown_6; }
	inline void set_intoxicationCountDown_6(float value)
	{
		___intoxicationCountDown_6 = value;
	}

	inline static int32_t get_offset_of_imageEffectActive_7() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___imageEffectActive_7)); }
	inline bool get_imageEffectActive_7() const { return ___imageEffectActive_7; }
	inline bool* get_address_of_imageEffectActive_7() { return &___imageEffectActive_7; }
	inline void set_imageEffectActive_7(bool value)
	{
		___imageEffectActive_7 = value;
	}

	inline static int32_t get_offset_of_mainCamera_8() { return static_cast<int32_t>(offsetof(Player_t2393081601, ___mainCamera_8)); }
	inline GameObject_t3674682005 * get_mainCamera_8() const { return ___mainCamera_8; }
	inline GameObject_t3674682005 ** get_address_of_mainCamera_8() { return &___mainCamera_8; }
	inline void set_mainCamera_8(GameObject_t3674682005 * value)
	{
		___mainCamera_8 = value;
		Il2CppCodeGenWriteBarrier(&___mainCamera_8, value);
	}
};

struct Player_t2393081601_StaticFields
{
public:
	// System.Single Player::batteryCharge
	float ___batteryCharge_2;
	// System.Single Player::batteryDrainRate
	float ___batteryDrainRate_3;
	// System.Boolean Player::isDrunk
	bool ___isDrunk_4;
	// System.Boolean Player::isTriggered
	bool ___isTriggered_9;
	// System.Boolean Player::canMove
	bool ___canMove_10;

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

	inline static int32_t get_offset_of_isDrunk_4() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___isDrunk_4)); }
	inline bool get_isDrunk_4() const { return ___isDrunk_4; }
	inline bool* get_address_of_isDrunk_4() { return &___isDrunk_4; }
	inline void set_isDrunk_4(bool value)
	{
		___isDrunk_4 = value;
	}

	inline static int32_t get_offset_of_isTriggered_9() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___isTriggered_9)); }
	inline bool get_isTriggered_9() const { return ___isTriggered_9; }
	inline bool* get_address_of_isTriggered_9() { return &___isTriggered_9; }
	inline void set_isTriggered_9(bool value)
	{
		___isTriggered_9 = value;
	}

	inline static int32_t get_offset_of_canMove_10() { return static_cast<int32_t>(offsetof(Player_t2393081601_StaticFields, ___canMove_10)); }
	inline bool get_canMove_10() const { return ___canMove_10; }
	inline bool* get_address_of_canMove_10() { return &___canMove_10; }
	inline void set_canMove_10(bool value)
	{
		___canMove_10 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
