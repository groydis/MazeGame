#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>


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

public:
};

struct Player_t2393081601_StaticFields
{
public:
	// System.Single Player::batteryCharge
	float ___batteryCharge_2;
	// System.Single Player::batteryDrainRate
	float ___batteryDrainRate_3;

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
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
