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

// WallLamp
struct  WallLamp_t388237026  : public MonoBehaviour_t667441552
{
public:
	// System.Single WallLamp::minFlickerSpeed
	float ___minFlickerSpeed_2;
	// System.Single WallLamp::maxFlickerSpeed
	float ___maxFlickerSpeed_3;
	// System.Boolean WallLamp::scarePlayer
	bool ___scarePlayer_4;
	// UnityEngine.Light WallLamp::wallLampLight
	Light_t4202674828 * ___wallLampLight_5;

public:
	inline static int32_t get_offset_of_minFlickerSpeed_2() { return static_cast<int32_t>(offsetof(WallLamp_t388237026, ___minFlickerSpeed_2)); }
	inline float get_minFlickerSpeed_2() const { return ___minFlickerSpeed_2; }
	inline float* get_address_of_minFlickerSpeed_2() { return &___minFlickerSpeed_2; }
	inline void set_minFlickerSpeed_2(float value)
	{
		___minFlickerSpeed_2 = value;
	}

	inline static int32_t get_offset_of_maxFlickerSpeed_3() { return static_cast<int32_t>(offsetof(WallLamp_t388237026, ___maxFlickerSpeed_3)); }
	inline float get_maxFlickerSpeed_3() const { return ___maxFlickerSpeed_3; }
	inline float* get_address_of_maxFlickerSpeed_3() { return &___maxFlickerSpeed_3; }
	inline void set_maxFlickerSpeed_3(float value)
	{
		___maxFlickerSpeed_3 = value;
	}

	inline static int32_t get_offset_of_scarePlayer_4() { return static_cast<int32_t>(offsetof(WallLamp_t388237026, ___scarePlayer_4)); }
	inline bool get_scarePlayer_4() const { return ___scarePlayer_4; }
	inline bool* get_address_of_scarePlayer_4() { return &___scarePlayer_4; }
	inline void set_scarePlayer_4(bool value)
	{
		___scarePlayer_4 = value;
	}

	inline static int32_t get_offset_of_wallLampLight_5() { return static_cast<int32_t>(offsetof(WallLamp_t388237026, ___wallLampLight_5)); }
	inline Light_t4202674828 * get_wallLampLight_5() const { return ___wallLampLight_5; }
	inline Light_t4202674828 ** get_address_of_wallLampLight_5() { return &___wallLampLight_5; }
	inline void set_wallLampLight_5(Light_t4202674828 * value)
	{
		___wallLampLight_5 = value;
		Il2CppCodeGenWriteBarrier(&___wallLampLight_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
