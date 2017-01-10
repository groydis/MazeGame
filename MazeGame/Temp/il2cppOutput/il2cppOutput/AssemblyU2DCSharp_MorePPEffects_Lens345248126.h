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

// MorePPEffects.Lens
struct  Lens_t345248126  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.Lens::lensDistortion
	float ___lensDistortion_6;
	// System.Single MorePPEffects.Lens::cubicDistortion
	float ___cubicDistortion_7;
	// UnityEngine.Shader MorePPEffects.Lens::lensShader
	Shader_t3191267369 * ___lensShader_8;
	// UnityEngine.Material MorePPEffects.Lens::lensMaterial
	Material_t3870600107 * ___lensMaterial_9;

public:
	inline static int32_t get_offset_of_lensDistortion_6() { return static_cast<int32_t>(offsetof(Lens_t345248126, ___lensDistortion_6)); }
	inline float get_lensDistortion_6() const { return ___lensDistortion_6; }
	inline float* get_address_of_lensDistortion_6() { return &___lensDistortion_6; }
	inline void set_lensDistortion_6(float value)
	{
		___lensDistortion_6 = value;
	}

	inline static int32_t get_offset_of_cubicDistortion_7() { return static_cast<int32_t>(offsetof(Lens_t345248126, ___cubicDistortion_7)); }
	inline float get_cubicDistortion_7() const { return ___cubicDistortion_7; }
	inline float* get_address_of_cubicDistortion_7() { return &___cubicDistortion_7; }
	inline void set_cubicDistortion_7(float value)
	{
		___cubicDistortion_7 = value;
	}

	inline static int32_t get_offset_of_lensShader_8() { return static_cast<int32_t>(offsetof(Lens_t345248126, ___lensShader_8)); }
	inline Shader_t3191267369 * get_lensShader_8() const { return ___lensShader_8; }
	inline Shader_t3191267369 ** get_address_of_lensShader_8() { return &___lensShader_8; }
	inline void set_lensShader_8(Shader_t3191267369 * value)
	{
		___lensShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___lensShader_8, value);
	}

	inline static int32_t get_offset_of_lensMaterial_9() { return static_cast<int32_t>(offsetof(Lens_t345248126, ___lensMaterial_9)); }
	inline Material_t3870600107 * get_lensMaterial_9() const { return ___lensMaterial_9; }
	inline Material_t3870600107 ** get_address_of_lensMaterial_9() { return &___lensMaterial_9; }
	inline void set_lensMaterial_9(Material_t3870600107 * value)
	{
		___lensMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___lensMaterial_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
