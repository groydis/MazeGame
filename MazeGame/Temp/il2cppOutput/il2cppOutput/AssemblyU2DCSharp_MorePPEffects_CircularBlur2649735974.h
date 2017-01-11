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

// MorePPEffects.CircularBlur
struct  CircularBlur_t2649735974  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.CircularBlur::strength
	float ___strength_6;
	// System.Int32 MorePPEffects.CircularBlur::samples
	int32_t ___samples_7;
	// UnityEngine.Shader MorePPEffects.CircularBlur::circularBlurShader
	Shader_t3191267369 * ___circularBlurShader_8;
	// UnityEngine.Material MorePPEffects.CircularBlur::circularBlurMaterial
	Material_t3870600107 * ___circularBlurMaterial_9;

public:
	inline static int32_t get_offset_of_strength_6() { return static_cast<int32_t>(offsetof(CircularBlur_t2649735974, ___strength_6)); }
	inline float get_strength_6() const { return ___strength_6; }
	inline float* get_address_of_strength_6() { return &___strength_6; }
	inline void set_strength_6(float value)
	{
		___strength_6 = value;
	}

	inline static int32_t get_offset_of_samples_7() { return static_cast<int32_t>(offsetof(CircularBlur_t2649735974, ___samples_7)); }
	inline int32_t get_samples_7() const { return ___samples_7; }
	inline int32_t* get_address_of_samples_7() { return &___samples_7; }
	inline void set_samples_7(int32_t value)
	{
		___samples_7 = value;
	}

	inline static int32_t get_offset_of_circularBlurShader_8() { return static_cast<int32_t>(offsetof(CircularBlur_t2649735974, ___circularBlurShader_8)); }
	inline Shader_t3191267369 * get_circularBlurShader_8() const { return ___circularBlurShader_8; }
	inline Shader_t3191267369 ** get_address_of_circularBlurShader_8() { return &___circularBlurShader_8; }
	inline void set_circularBlurShader_8(Shader_t3191267369 * value)
	{
		___circularBlurShader_8 = value;
		Il2CppCodeGenWriteBarrier(&___circularBlurShader_8, value);
	}

	inline static int32_t get_offset_of_circularBlurMaterial_9() { return static_cast<int32_t>(offsetof(CircularBlur_t2649735974, ___circularBlurMaterial_9)); }
	inline Material_t3870600107 * get_circularBlurMaterial_9() const { return ___circularBlurMaterial_9; }
	inline Material_t3870600107 ** get_address_of_circularBlurMaterial_9() { return &___circularBlurMaterial_9; }
	inline void set_circularBlurMaterial_9(Material_t3870600107 * value)
	{
		___circularBlurMaterial_9 = value;
		Il2CppCodeGenWriteBarrier(&___circularBlurMaterial_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
