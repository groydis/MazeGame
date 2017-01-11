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

// MorePPEffects.Ripple
struct  Ripple_t3023508080  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.Ripple::waves
	float ___waves_6;
	// System.Single MorePPEffects.Ripple::distortion
	float ___distortion_7;
	// UnityEngine.Shader MorePPEffects.Ripple::rippleShader
	Shader_t3191267369 * ___rippleShader_8;
	// UnityEngine.Material MorePPEffects.Ripple::rippleMaterial
	Material_t3870600107 * ___rippleMaterial_9;

public:
	inline static int32_t get_offset_of_waves_6() { return static_cast<int32_t>(offsetof(Ripple_t3023508080, ___waves_6)); }
	inline float get_waves_6() const { return ___waves_6; }
	inline float* get_address_of_waves_6() { return &___waves_6; }
	inline void set_waves_6(float value)
	{
		___waves_6 = value;
	}

	inline static int32_t get_offset_of_distortion_7() { return static_cast<int32_t>(offsetof(Ripple_t3023508080, ___distortion_7)); }
	inline float get_distortion_7() const { return ___distortion_7; }
	inline float* get_address_of_distortion_7() { return &___distortion_7; }
	inline void set_distortion_7(float value)
	{
		___distortion_7 = value;
	}

	inline static int32_t get_offset_of_rippleShader_8() { return static_cast<int32_t>(offsetof(Ripple_t3023508080, ___rippleShader_8)); }
	inline Shader_t3191267369 * get_rippleShader_8() const { return ___rippleShader_8; }
	inline Shader_t3191267369 ** get_address_of_rippleShader_8() { return &___rippleShader_8; }
	inline void set_rippleShader_8(Shader_t3191267369 * value)
	{
		___rippleShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___rippleShader_8, value);
	}

	inline static int32_t get_offset_of_rippleMaterial_9() { return static_cast<int32_t>(offsetof(Ripple_t3023508080, ___rippleMaterial_9)); }
	inline Material_t3870600107 * get_rippleMaterial_9() const { return ___rippleMaterial_9; }
	inline Material_t3870600107 ** get_address_of_rippleMaterial_9() { return &___rippleMaterial_9; }
	inline void set_rippleMaterial_9(Material_t3870600107 * value)
	{
		___rippleMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___rippleMaterial_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
