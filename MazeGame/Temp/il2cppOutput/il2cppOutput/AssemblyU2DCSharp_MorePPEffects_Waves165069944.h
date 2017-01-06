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

// MorePPEffects.Waves
struct  Waves_t165069944  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.Waves::timer
	float ___timer_6;
	// System.Single MorePPEffects.Waves::strengthX
	float ___strengthX_7;
	// System.Single MorePPEffects.Waves::strengthY
	float ___strengthY_8;
	// System.Single MorePPEffects.Waves::frequencyX
	float ___frequencyX_9;
	// System.Single MorePPEffects.Waves::frequencyY
	float ___frequencyY_10;
	// System.Single MorePPEffects.Waves::speed
	float ___speed_11;
	// UnityEngine.Shader MorePPEffects.Waves::wavesShader
	Shader_t3191267369 * ___wavesShader_12;
	// UnityEngine.Material MorePPEffects.Waves::wavesMaterial
	Material_t3870600107 * ___wavesMaterial_13;

public:
	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(Waves_t165069944, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_strengthX_7() { return static_cast<int32_t>(offsetof(Waves_t165069944, ___strengthX_7)); }
	inline float get_strengthX_7() const { return ___strengthX_7; }
	inline float* get_address_of_strengthX_7() { return &___strengthX_7; }
	inline void set_strengthX_7(float value)
	{
		___strengthX_7 = value;
	}

	inline static int32_t get_offset_of_strengthY_8() { return static_cast<int32_t>(offsetof(Waves_t165069944, ___strengthY_8)); }
	inline float get_strengthY_8() const { return ___strengthY_8; }
	inline float* get_address_of_strengthY_8() { return &___strengthY_8; }
	inline void set_strengthY_8(float value)
	{
		___strengthY_8 = value;
	}

	inline static int32_t get_offset_of_frequencyX_9() { return static_cast<int32_t>(offsetof(Waves_t165069944, ___frequencyX_9)); }
	inline float get_frequencyX_9() const { return ___frequencyX_9; }
	inline float* get_address_of_frequencyX_9() { return &___frequencyX_9; }
	inline void set_frequencyX_9(float value)
	{
		___frequencyX_9 = value;
	}

	inline static int32_t get_offset_of_frequencyY_10() { return static_cast<int32_t>(offsetof(Waves_t165069944, ___frequencyY_10)); }
	inline float get_frequencyY_10() const { return ___frequencyY_10; }
	inline float* get_address_of_frequencyY_10() { return &___frequencyY_10; }
	inline void set_frequencyY_10(float value)
	{
		___frequencyY_10 = value;
	}

	inline static int32_t get_offset_of_speed_11() { return static_cast<int32_t>(offsetof(Waves_t165069944, ___speed_11)); }
	inline float get_speed_11() const { return ___speed_11; }
	inline float* get_address_of_speed_11() { return &___speed_11; }
	inline void set_speed_11(float value)
	{
		___speed_11 = value;
	}

	inline static int32_t get_offset_of_wavesShader_12() { return static_cast<int32_t>(offsetof(Waves_t165069944, ___wavesShader_12)); }
	inline Shader_t3191267369 * get_wavesShader_12() const { return ___wavesShader_12; }
	inline Shader_t3191267369 ** get_address_of_wavesShader_12() { return &___wavesShader_12; }
	inline void set_wavesShader_12(Shader_t3191267369 * value)
	{
		___wavesShader_12 = value;
		Il2CppCodeGenWriteBarrier(&___wavesShader_12, value);
	}

	inline static int32_t get_offset_of_wavesMaterial_13() { return static_cast<int32_t>(offsetof(Waves_t165069944, ___wavesMaterial_13)); }
	inline Material_t3870600107 * get_wavesMaterial_13() const { return ___wavesMaterial_13; }
	inline Material_t3870600107 ** get_address_of_wavesMaterial_13() { return &___wavesMaterial_13; }
	inline void set_wavesMaterial_13(Material_t3870600107 * value)
	{
		___wavesMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&___wavesMaterial_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
