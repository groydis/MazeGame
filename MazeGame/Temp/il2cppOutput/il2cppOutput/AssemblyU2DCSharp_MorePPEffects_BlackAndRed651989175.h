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

// MorePPEffects.BlackAndRed
struct  BlackAndRed_t651989175  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.BlackAndRed::smoothness
	float ___smoothness_6;
	// UnityEngine.Shader MorePPEffects.BlackAndRed::blackAndRedShader
	Shader_t3191267369 * ___blackAndRedShader_7;
	// UnityEngine.Material MorePPEffects.BlackAndRed::blackAndRedMaterial
	Material_t3870600107 * ___blackAndRedMaterial_8;

public:
	inline static int32_t get_offset_of_smoothness_6() { return static_cast<int32_t>(offsetof(BlackAndRed_t651989175, ___smoothness_6)); }
	inline float get_smoothness_6() const { return ___smoothness_6; }
	inline float* get_address_of_smoothness_6() { return &___smoothness_6; }
	inline void set_smoothness_6(float value)
	{
		___smoothness_6 = value;
	}

	inline static int32_t get_offset_of_blackAndRedShader_7() { return static_cast<int32_t>(offsetof(BlackAndRed_t651989175, ___blackAndRedShader_7)); }
	inline Shader_t3191267369 * get_blackAndRedShader_7() const { return ___blackAndRedShader_7; }
	inline Shader_t3191267369 ** get_address_of_blackAndRedShader_7() { return &___blackAndRedShader_7; }
	inline void set_blackAndRedShader_7(Shader_t3191267369 * value)
	{
		___blackAndRedShader_7 = value;
		Il2CppCodeGenWriteBarrier(&___blackAndRedShader_7, value);
	}

	inline static int32_t get_offset_of_blackAndRedMaterial_8() { return static_cast<int32_t>(offsetof(BlackAndRed_t651989175, ___blackAndRedMaterial_8)); }
	inline Material_t3870600107 * get_blackAndRedMaterial_8() const { return ___blackAndRedMaterial_8; }
	inline Material_t3870600107 ** get_address_of_blackAndRedMaterial_8() { return &___blackAndRedMaterial_8; }
	inline void set_blackAndRedMaterial_8(Material_t3870600107 * value)
	{
		___blackAndRedMaterial_8 = value;
		Il2CppCodeGenWriteBarrier(&___blackAndRedMaterial_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
