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

// MorePPEffects.Shadows2D
struct  Shadows2D_t842017091  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.Shadows2D::shadowStrength
	float ___shadowStrength_6;
	// System.Single MorePPEffects.Shadows2D::offsetStrength
	float ___offsetStrength_7;
	// UnityEngine.Shader MorePPEffects.Shadows2D::shadows2DShader
	Shader_t3191267369 * ___shadows2DShader_8;
	// UnityEngine.Material MorePPEffects.Shadows2D::shadows2DMaterial
	Material_t3870600107 * ___shadows2DMaterial_9;

public:
	inline static int32_t get_offset_of_shadowStrength_6() { return static_cast<int32_t>(offsetof(Shadows2D_t842017091, ___shadowStrength_6)); }
	inline float get_shadowStrength_6() const { return ___shadowStrength_6; }
	inline float* get_address_of_shadowStrength_6() { return &___shadowStrength_6; }
	inline void set_shadowStrength_6(float value)
	{
		___shadowStrength_6 = value;
	}

	inline static int32_t get_offset_of_offsetStrength_7() { return static_cast<int32_t>(offsetof(Shadows2D_t842017091, ___offsetStrength_7)); }
	inline float get_offsetStrength_7() const { return ___offsetStrength_7; }
	inline float* get_address_of_offsetStrength_7() { return &___offsetStrength_7; }
	inline void set_offsetStrength_7(float value)
	{
		___offsetStrength_7 = value;
	}

	inline static int32_t get_offset_of_shadows2DShader_8() { return static_cast<int32_t>(offsetof(Shadows2D_t842017091, ___shadows2DShader_8)); }
	inline Shader_t3191267369 * get_shadows2DShader_8() const { return ___shadows2DShader_8; }
	inline Shader_t3191267369 ** get_address_of_shadows2DShader_8() { return &___shadows2DShader_8; }
	inline void set_shadows2DShader_8(Shader_t3191267369 * value)
	{
		___shadows2DShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___shadows2DShader_8, value);
	}

	inline static int32_t get_offset_of_shadows2DMaterial_9() { return static_cast<int32_t>(offsetof(Shadows2D_t842017091, ___shadows2DMaterial_9)); }
	inline Material_t3870600107 * get_shadows2DMaterial_9() const { return ___shadows2DMaterial_9; }
	inline Material_t3870600107 ** get_address_of_shadows2DMaterial_9() { return &___shadows2DMaterial_9; }
	inline void set_shadows2DMaterial_9(Material_t3870600107 * value)
	{
		___shadows2DMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___shadows2DMaterial_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
