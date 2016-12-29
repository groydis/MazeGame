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

// TorchControl
struct  TorchControl_t67717601  : public MonoBehaviour_t667441552
{
public:
	// System.Single TorchControl::waitTime
	float ___waitTime_2;
	// System.Single TorchControl::minFlickerSpeed
	float ___minFlickerSpeed_3;
	// System.Single TorchControl::maxFlickerSpeed
	float ___maxFlickerSpeed_4;
	// System.Single TorchControl::flickerStartTime
	float ___flickerStartTime_5;
	// System.Boolean TorchControl::batteryFailing
	bool ___batteryFailing_6;
	// System.Boolean TorchControl::decreasingBattery
	bool ___decreasingBattery_7;

public:
	inline static int32_t get_offset_of_waitTime_2() { return static_cast<int32_t>(offsetof(TorchControl_t67717601, ___waitTime_2)); }
	inline float get_waitTime_2() const { return ___waitTime_2; }
	inline float* get_address_of_waitTime_2() { return &___waitTime_2; }
	inline void set_waitTime_2(float value)
	{
		___waitTime_2 = value;
	}

	inline static int32_t get_offset_of_minFlickerSpeed_3() { return static_cast<int32_t>(offsetof(TorchControl_t67717601, ___minFlickerSpeed_3)); }
	inline float get_minFlickerSpeed_3() const { return ___minFlickerSpeed_3; }
	inline float* get_address_of_minFlickerSpeed_3() { return &___minFlickerSpeed_3; }
	inline void set_minFlickerSpeed_3(float value)
	{
		___minFlickerSpeed_3 = value;
	}

	inline static int32_t get_offset_of_maxFlickerSpeed_4() { return static_cast<int32_t>(offsetof(TorchControl_t67717601, ___maxFlickerSpeed_4)); }
	inline float get_maxFlickerSpeed_4() const { return ___maxFlickerSpeed_4; }
	inline float* get_address_of_maxFlickerSpeed_4() { return &___maxFlickerSpeed_4; }
	inline void set_maxFlickerSpeed_4(float value)
	{
		___maxFlickerSpeed_4 = value;
	}

	inline static int32_t get_offset_of_flickerStartTime_5() { return static_cast<int32_t>(offsetof(TorchControl_t67717601, ___flickerStartTime_5)); }
	inline float get_flickerStartTime_5() const { return ___flickerStartTime_5; }
	inline float* get_address_of_flickerStartTime_5() { return &___flickerStartTime_5; }
	inline void set_flickerStartTime_5(float value)
	{
		___flickerStartTime_5 = value;
	}

	inline static int32_t get_offset_of_batteryFailing_6() { return static_cast<int32_t>(offsetof(TorchControl_t67717601, ___batteryFailing_6)); }
	inline bool get_batteryFailing_6() const { return ___batteryFailing_6; }
	inline bool* get_address_of_batteryFailing_6() { return &___batteryFailing_6; }
	inline void set_batteryFailing_6(bool value)
	{
		___batteryFailing_6 = value;
	}

	inline static int32_t get_offset_of_decreasingBattery_7() { return static_cast<int32_t>(offsetof(TorchControl_t67717601, ___decreasingBattery_7)); }
	inline bool get_decreasingBattery_7() const { return ___decreasingBattery_7; }
	inline bool* get_address_of_decreasingBattery_7() { return &___decreasingBattery_7; }
	inline void set_decreasingBattery_7(bool value)
	{
		___decreasingBattery_7 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
