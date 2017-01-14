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

// MorePPEffects.Colorization
struct  Colorization_t2822934305  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.Colorization::Rchannel
	float ___Rchannel_6;
	// System.Single MorePPEffects.Colorization::Gchannel
	float ___Gchannel_7;
	// System.Single MorePPEffects.Colorization::Bchannel
	float ___Bchannel_8;
	// UnityEngine.Shader MorePPEffects.Colorization::colorizationShader
	Shader_t3191267369 * ___colorizationShader_9;
	// UnityEngine.Material MorePPEffects.Colorization::colorizationMaterial
	Material_t3870600107 * ___colorizationMaterial_10;

public:
	inline static int32_t get_offset_of_Rchannel_6() { return static_cast<int32_t>(offsetof(Colorization_t2822934305, ___Rchannel_6)); }
	inline float get_Rchannel_6() const { return ___Rchannel_6; }
	inline float* get_address_of_Rchannel_6() { return &___Rchannel_6; }
	inline void set_Rchannel_6(float value)
	{
		___Rchannel_6 = value;
	}

	inline static int32_t get_offset_of_Gchannel_7() { return static_cast<int32_t>(offsetof(Colorization_t2822934305, ___Gchannel_7)); }
	inline float get_Gchannel_7() const { return ___Gchannel_7; }
	inline float* get_address_of_Gchannel_7() { return &___Gchannel_7; }
	inline void set_Gchannel_7(float value)
	{
		___Gchannel_7 = value;
	}

	inline static int32_t get_offset_of_Bchannel_8() { return static_cast<int32_t>(offsetof(Colorization_t2822934305, ___Bchannel_8)); }
	inline float get_Bchannel_8() const { return ___Bchannel_8; }
	inline float* get_address_of_Bchannel_8() { return &___Bchannel_8; }
	inline void set_Bchannel_8(float value)
	{
		___Bchannel_8 = value;
	}

	inline static int32_t get_offset_of_colorizationShader_9() { return static_cast<int32_t>(offsetof(Colorization_t2822934305, ___colorizationShader_9)); }
	inline Shader_t3191267369 * get_colorizationShader_9() const { return ___colorizationShader_9; }
	inline Shader_t3191267369 ** get_address_of_colorizationShader_9() { return &___colorizationShader_9; }
	inline void set_colorizationShader_9(Shader_t3191267369 * value)
	{
		___colorizationShader_9 = value;
		Il2CppCodeGenWriteBarrier(&___colorizationShader_9, value);
	}

	inline static int32_t get_offset_of_colorizationMaterial_10() { return static_cast<int32_t>(offsetof(Colorization_t2822934305, ___colorizationMaterial_10)); }
	inline Material_t3870600107 * get_colorizationMaterial_10() const { return ___colorizationMaterial_10; }
	inline Material_t3870600107 ** get_address_of_colorizationMaterial_10() { return &___colorizationMaterial_10; }
	inline void set_colorizationMaterial_10(Material_t3870600107 * value)
	{
		___colorizationMaterial_10 = value;
		Il2CppCodeGenWriteBarrier(&___colorizationMaterial_10, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
