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

// MorePPEffects.BlackAndGreen
struct  BlackAndGreen_t1263616361  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.BlackAndGreen::smoothness
	float ___smoothness_6;
	// UnityEngine.Shader MorePPEffects.BlackAndGreen::blackAndGreenShader
	Shader_t3191267369 * ___blackAndGreenShader_7;
	// UnityEngine.Material MorePPEffects.BlackAndGreen::blackAndGreenMaterial
	Material_t3870600107 * ___blackAndGreenMaterial_8;

public:
	inline static int32_t get_offset_of_smoothness_6() { return static_cast<int32_t>(offsetof(BlackAndGreen_t1263616361, ___smoothness_6)); }
	inline float get_smoothness_6() const { return ___smoothness_6; }
	inline float* get_address_of_smoothness_6() { return &___smoothness_6; }
	inline void set_smoothness_6(float value)
	{
		___smoothness_6 = value;
	}

	inline static int32_t get_offset_of_blackAndGreenShader_7() { return static_cast<int32_t>(offsetof(BlackAndGreen_t1263616361, ___blackAndGreenShader_7)); }
	inline Shader_t3191267369 * get_blackAndGreenShader_7() const { return ___blackAndGreenShader_7; }
	inline Shader_t3191267369 ** get_address_of_blackAndGreenShader_7() { return &___blackAndGreenShader_7; }
	inline void set_blackAndGreenShader_7(Shader_t3191267369 * value)
	{
		___blackAndGreenShader_7 = value;
		Il2CppCodeGenWriteBarrier(&___blackAndGreenShader_7, value);
	}

	inline static int32_t get_offset_of_blackAndGreenMaterial_8() { return static_cast<int32_t>(offsetof(BlackAndGreen_t1263616361, ___blackAndGreenMaterial_8)); }
	inline Material_t3870600107 * get_blackAndGreenMaterial_8() const { return ___blackAndGreenMaterial_8; }
	inline Material_t3870600107 ** get_address_of_blackAndGreenMaterial_8() { return &___blackAndGreenMaterial_8; }
	inline void set_blackAndGreenMaterial_8(Material_t3870600107 * value)
	{
		___blackAndGreenMaterial_8 = value;
		Il2CppCodeGenWriteBarrier(&___blackAndGreenMaterial_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
