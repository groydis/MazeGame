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

// MorePPEffects.Posterization
struct  Posterization_t2776592213  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.Posterization::tonesAmount
	float ___tonesAmount_6;
	// System.Single MorePPEffects.Posterization::gamma
	float ___gamma_7;
	// UnityEngine.Shader MorePPEffects.Posterization::posterizationShader
	Shader_t3191267369 * ___posterizationShader_8;
	// UnityEngine.Material MorePPEffects.Posterization::posterizationMaterial
	Material_t3870600107 * ___posterizationMaterial_9;

public:
	inline static int32_t get_offset_of_tonesAmount_6() { return static_cast<int32_t>(offsetof(Posterization_t2776592213, ___tonesAmount_6)); }
	inline float get_tonesAmount_6() const { return ___tonesAmount_6; }
	inline float* get_address_of_tonesAmount_6() { return &___tonesAmount_6; }
	inline void set_tonesAmount_6(float value)
	{
		___tonesAmount_6 = value;
	}

	inline static int32_t get_offset_of_gamma_7() { return static_cast<int32_t>(offsetof(Posterization_t2776592213, ___gamma_7)); }
	inline float get_gamma_7() const { return ___gamma_7; }
	inline float* get_address_of_gamma_7() { return &___gamma_7; }
	inline void set_gamma_7(float value)
	{
		___gamma_7 = value;
	}

	inline static int32_t get_offset_of_posterizationShader_8() { return static_cast<int32_t>(offsetof(Posterization_t2776592213, ___posterizationShader_8)); }
	inline Shader_t3191267369 * get_posterizationShader_8() const { return ___posterizationShader_8; }
	inline Shader_t3191267369 ** get_address_of_posterizationShader_8() { return &___posterizationShader_8; }
	inline void set_posterizationShader_8(Shader_t3191267369 * value)
	{
		___posterizationShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___posterizationShader_8, value);
	}

	inline static int32_t get_offset_of_posterizationMaterial_9() { return static_cast<int32_t>(offsetof(Posterization_t2776592213, ___posterizationMaterial_9)); }
	inline Material_t3870600107 * get_posterizationMaterial_9() const { return ___posterizationMaterial_9; }
	inline Material_t3870600107 ** get_address_of_posterizationMaterial_9() { return &___posterizationMaterial_9; }
	inline void set_posterizationMaterial_9(Material_t3870600107 * value)
	{
		___posterizationMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___posterizationMaterial_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
