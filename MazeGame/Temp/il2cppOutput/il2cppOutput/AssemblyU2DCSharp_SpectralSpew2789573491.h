#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Rigidbody
struct Rigidbody_t3346577219;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// SpectralSpew
struct  SpectralSpew_t2789573491  : public MonoBehaviour_t667441552
{
public:
	// System.Single SpectralSpew::despawnTimeMin
	float ___despawnTimeMin_2;
	// System.Single SpectralSpew::despawnTimeMax
	float ___despawnTimeMax_3;
	// UnityEngine.Rigidbody SpectralSpew::rBody
	Rigidbody_t3346577219 * ___rBody_4;

public:
	inline static int32_t get_offset_of_despawnTimeMin_2() { return static_cast<int32_t>(offsetof(SpectralSpew_t2789573491, ___despawnTimeMin_2)); }
	inline float get_despawnTimeMin_2() const { return ___despawnTimeMin_2; }
	inline float* get_address_of_despawnTimeMin_2() { return &___despawnTimeMin_2; }
	inline void set_despawnTimeMin_2(float value)
	{
		___despawnTimeMin_2 = value;
	}

	inline static int32_t get_offset_of_despawnTimeMax_3() { return static_cast<int32_t>(offsetof(SpectralSpew_t2789573491, ___despawnTimeMax_3)); }
	inline float get_despawnTimeMax_3() const { return ___despawnTimeMax_3; }
	inline float* get_address_of_despawnTimeMax_3() { return &___despawnTimeMax_3; }
	inline void set_despawnTimeMax_3(float value)
	{
		___despawnTimeMax_3 = value;
	}

	inline static int32_t get_offset_of_rBody_4() { return static_cast<int32_t>(offsetof(SpectralSpew_t2789573491, ___rBody_4)); }
	inline Rigidbody_t3346577219 * get_rBody_4() const { return ___rBody_4; }
	inline Rigidbody_t3346577219 ** get_address_of_rBody_4() { return &___rBody_4; }
	inline void set_rBody_4(Rigidbody_t3346577219 * value)
	{
		___rBody_4 = value;
		Il2CppCodeGenWriteBarrier(&___rBody_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
