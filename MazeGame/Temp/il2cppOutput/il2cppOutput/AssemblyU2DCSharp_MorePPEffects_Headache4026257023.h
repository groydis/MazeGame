#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1415309093.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MorePPEffects.Headache
struct  Headache_t4026257023  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.Headache::timer
	float ___timer_6;
	// System.Single MorePPEffects.Headache::strength
	float ___strength_7;
	// System.Single MorePPEffects.Headache::speed
	float ___speed_8;
	// UnityEngine.Shader MorePPEffects.Headache::headacheShader
	Shader_t3191267369 * ___headacheShader_9;
	// UnityEngine.Material MorePPEffects.Headache::headacheMaterial
	Material_t3870600107 * ___headacheMaterial_10;

public:
	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(Headache_t4026257023, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_strength_7() { return static_cast<int32_t>(offsetof(Headache_t4026257023, ___strength_7)); }
	inline float get_strength_7() const { return ___strength_7; }
	inline float* get_address_of_strength_7() { return &___strength_7; }
	inline void set_strength_7(float value)
	{
		___strength_7 = value;
	}

	inline static int32_t get_offset_of_speed_8() { return static_cast<int32_t>(offsetof(Headache_t4026257023, ___speed_8)); }
	inline float get_speed_8() const { return ___speed_8; }
	inline float* get_address_of_speed_8() { return &___speed_8; }
	inline void set_speed_8(float value)
	{
		___speed_8 = value;
	}

	inline static int32_t get_offset_of_headacheShader_9() { return static_cast<int32_t>(offsetof(Headache_t4026257023, ___headacheShader_9)); }
	inline Shader_t3191267369 * get_headacheShader_9() const { return ___headacheShader_9; }
	inline Shader_t3191267369 ** get_address_of_headacheShader_9() { return &___headacheShader_9; }
	inline void set_headacheShader_9(Shader_t3191267369 * value)
	{
		___headacheShader_9 = value;
		Il2CppCodeGenWriteBarrier(&___headacheShader_9, value);
	}

	inline static int32_t get_offset_of_headacheMaterial_10() { return static_cast<int32_t>(offsetof(Headache_t4026257023, ___headacheMaterial_10)); }
	inline Material_t3870600107 * get_headacheMaterial_10() const { return ___headacheMaterial_10; }
	inline Material_t3870600107 ** get_address_of_headacheMaterial_10() { return &___headacheMaterial_10; }
	inline void set_headacheMaterial_10(Material_t3870600107 * value)
	{
		___headacheMaterial_10 = value;
		Il2CppCodeGenWriteBarrier(&___headacheMaterial_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
