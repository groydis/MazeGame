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

// MorePPEffects.Dreamy
struct  Dreamy_t2630669590  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.Dreamy::strength
	float ___strength_6;
	// UnityEngine.Shader MorePPEffects.Dreamy::dreamyShader
	Shader_t3191267369 * ___dreamyShader_7;
	// UnityEngine.Material MorePPEffects.Dreamy::dreamyMaterial
	Material_t3870600107 * ___dreamyMaterial_8;

public:
	inline static int32_t get_offset_of_strength_6() { return static_cast<int32_t>(offsetof(Dreamy_t2630669590, ___strength_6)); }
	inline float get_strength_6() const { return ___strength_6; }
	inline float* get_address_of_strength_6() { return &___strength_6; }
	inline void set_strength_6(float value)
	{
		___strength_6 = value;
	}

	inline static int32_t get_offset_of_dreamyShader_7() { return static_cast<int32_t>(offsetof(Dreamy_t2630669590, ___dreamyShader_7)); }
	inline Shader_t3191267369 * get_dreamyShader_7() const { return ___dreamyShader_7; }
	inline Shader_t3191267369 ** get_address_of_dreamyShader_7() { return &___dreamyShader_7; }
	inline void set_dreamyShader_7(Shader_t3191267369 * value)
	{
		___dreamyShader_7 = value;
		Il2CppCodeGenWriteBarrier(&___dreamyShader_7, value);
	}

	inline static int32_t get_offset_of_dreamyMaterial_8() { return static_cast<int32_t>(offsetof(Dreamy_t2630669590, ___dreamyMaterial_8)); }
	inline Material_t3870600107 * get_dreamyMaterial_8() const { return ___dreamyMaterial_8; }
	inline Material_t3870600107 ** get_address_of_dreamyMaterial_8() { return &___dreamyMaterial_8; }
	inline void set_dreamyMaterial_8(Material_t3870600107 * value)
	{
		___dreamyMaterial_8 = value;
		Il2CppCodeGenWriteBarrier(&___dreamyMaterial_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
