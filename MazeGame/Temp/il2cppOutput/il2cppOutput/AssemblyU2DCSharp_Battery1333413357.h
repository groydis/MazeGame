#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Light
struct Light_t4202674828;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// Battery
struct  Battery_t1333413357  : public MonoBehaviour_t667441552
{
public:
	// System.Single Battery::maxBatteryCharge
	float ___maxBatteryCharge_2;
	// System.Single Battery::batteryPickUpCharge
	float ___batteryPickUpCharge_3;
	// UnityEngine.Light Battery::playerTorch
	Light_t4202674828 * ___playerTorch_4;

public:
	inline static int32_t get_offset_of_maxBatteryCharge_2() { return static_cast<int32_t>(offsetof(Battery_t1333413357, ___maxBatteryCharge_2)); }
	inline float get_maxBatteryCharge_2() const { return ___maxBatteryCharge_2; }
	inline float* get_address_of_maxBatteryCharge_2() { return &___maxBatteryCharge_2; }
	inline void set_maxBatteryCharge_2(float value)
	{
		___maxBatteryCharge_2 = value;
	}

	inline static int32_t get_offset_of_batteryPickUpCharge_3() { return static_cast<int32_t>(offsetof(Battery_t1333413357, ___batteryPickUpCharge_3)); }
	inline float get_batteryPickUpCharge_3() const { return ___batteryPickUpCharge_3; }
	inline float* get_address_of_batteryPickUpCharge_3() { return &___batteryPickUpCharge_3; }
	inline void set_batteryPickUpCharge_3(float value)
	{
		___batteryPickUpCharge_3 = value;
	}

	inline static int32_t get_offset_of_playerTorch_4() { return static_cast<int32_t>(offsetof(Battery_t1333413357, ___playerTorch_4)); }
	inline Light_t4202674828 * get_playerTorch_4() const { return ___playerTorch_4; }
	inline Light_t4202674828 ** get_address_of_playerTorch_4() { return &___playerTorch_4; }
	inline void set_playerTorch_4(Light_t4202674828 * value)
	{
		___playerTorch_4 = value;
		Il2CppCodeGenWriteBarrier(&___playerTorch_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
