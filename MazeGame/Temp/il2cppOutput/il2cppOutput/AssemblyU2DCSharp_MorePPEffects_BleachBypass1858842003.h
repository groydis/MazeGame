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

// MorePPEffects.BleachBypass
struct  BleachBypass_t1858842003  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.BleachBypass::darkness
	float ___darkness_6;
	// UnityEngine.Shader MorePPEffects.BleachBypass::bleachBypassShader
	Shader_t3191267369 * ___bleachBypassShader_7;
	// UnityEngine.Material MorePPEffects.BleachBypass::bleachBypassMaterial
	Material_t3870600107 * ___bleachBypassMaterial_8;

public:
	inline static int32_t get_offset_of_darkness_6() { return static_cast<int32_t>(offsetof(BleachBypass_t1858842003, ___darkness_6)); }
	inline float get_darkness_6() const { return ___darkness_6; }
	inline float* get_address_of_darkness_6() { return &___darkness_6; }
	inline void set_darkness_6(float value)
	{
		___darkness_6 = value;
	}

	inline static int32_t get_offset_of_bleachBypassShader_7() { return static_cast<int32_t>(offsetof(BleachBypass_t1858842003, ___bleachBypassShader_7)); }
	inline Shader_t3191267369 * get_bleachBypassShader_7() const { return ___bleachBypassShader_7; }
	inline Shader_t3191267369 ** get_address_of_bleachBypassShader_7() { return &___bleachBypassShader_7; }
	inline void set_bleachBypassShader_7(Shader_t3191267369 * value)
	{
		___bleachBypassShader_7 = value;
		Il2CppCodeGenWriteBarrier(&___bleachBypassShader_7, value);
	}

	inline static int32_t get_offset_of_bleachBypassMaterial_8() { return static_cast<int32_t>(offsetof(BleachBypass_t1858842003, ___bleachBypassMaterial_8)); }
	inline Material_t3870600107 * get_bleachBypassMaterial_8() const { return ___bleachBypassMaterial_8; }
	inline Material_t3870600107 ** get_address_of_bleachBypassMaterial_8() { return &___bleachBypassMaterial_8; }
	inline void set_bleachBypassMaterial_8(Material_t3870600107 * value)
	{
		___bleachBypassMaterial_8 = value;
		Il2CppCodeGenWriteBarrier(&___bleachBypassMaterial_8, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
