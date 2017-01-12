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

// MorePPEffects.Negative
struct  Negative_t1767793717  : public PostEffectsBase_t1415309093
{
public:
	// UnityEngine.Shader MorePPEffects.Negative::negativeShader
	Shader_t3191267369 * ___negativeShader_6;
	// UnityEngine.Material MorePPEffects.Negative::negativeMaterial
	Material_t3870600107 * ___negativeMaterial_7;

public:
	inline static int32_t get_offset_of_negativeShader_6() { return static_cast<int32_t>(offsetof(Negative_t1767793717, ___negativeShader_6)); }
	inline Shader_t3191267369 * get_negativeShader_6() const { return ___negativeShader_6; }
	inline Shader_t3191267369 ** get_address_of_negativeShader_6() { return &___negativeShader_6; }
	inline void set_negativeShader_6(Shader_t3191267369 * value)
	{
		___negativeShader_6 = value;
		Il2CppCodeGenWriteBarrier(&___negativeShader_6, value);
	}

	inline static int32_t get_offset_of_negativeMaterial_7() { return static_cast<int32_t>(offsetof(Negative_t1767793717, ___negativeMaterial_7)); }
	inline Material_t3870600107 * get_negativeMaterial_7() const { return ___negativeMaterial_7; }
	inline Material_t3870600107 ** get_address_of_negativeMaterial_7() { return &___negativeMaterial_7; }
	inline void set_negativeMaterial_7(Material_t3870600107 * value)
	{
		___negativeMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___negativeMaterial_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
