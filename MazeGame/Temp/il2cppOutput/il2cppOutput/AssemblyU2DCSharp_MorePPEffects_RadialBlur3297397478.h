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

// MorePPEffects.RadialBlur
struct  RadialBlur_t3297397478  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.RadialBlur::blurStrength
	float ___blurStrength_6;
	// System.Int32 MorePPEffects.RadialBlur::samples
	int32_t ___samples_7;
	// System.Single MorePPEffects.RadialBlur::centerX
	float ___centerX_8;
	// System.Single MorePPEffects.RadialBlur::centerY
	float ___centerY_9;
	// UnityEngine.Shader MorePPEffects.RadialBlur::radialBlurVisionShader
	Shader_t3191267369 * ___radialBlurVisionShader_10;
	// UnityEngine.Material MorePPEffects.RadialBlur::radialBlurMaterial
	Material_t3870600107 * ___radialBlurMaterial_11;

public:
	inline static int32_t get_offset_of_blurStrength_6() { return static_cast<int32_t>(offsetof(RadialBlur_t3297397478, ___blurStrength_6)); }
	inline float get_blurStrength_6() const { return ___blurStrength_6; }
	inline float* get_address_of_blurStrength_6() { return &___blurStrength_6; }
	inline void set_blurStrength_6(float value)
	{
		___blurStrength_6 = value;
	}

	inline static int32_t get_offset_of_samples_7() { return static_cast<int32_t>(offsetof(RadialBlur_t3297397478, ___samples_7)); }
	inline int32_t get_samples_7() const { return ___samples_7; }
	inline int32_t* get_address_of_samples_7() { return &___samples_7; }
	inline void set_samples_7(int32_t value)
	{
		___samples_7 = value;
	}

	inline static int32_t get_offset_of_centerX_8() { return static_cast<int32_t>(offsetof(RadialBlur_t3297397478, ___centerX_8)); }
	inline float get_centerX_8() const { return ___centerX_8; }
	inline float* get_address_of_centerX_8() { return &___centerX_8; }
	inline void set_centerX_8(float value)
	{
		___centerX_8 = value;
	}

	inline static int32_t get_offset_of_centerY_9() { return static_cast<int32_t>(offsetof(RadialBlur_t3297397478, ___centerY_9)); }
	inline float get_centerY_9() const { return ___centerY_9; }
	inline float* get_address_of_centerY_9() { return &___centerY_9; }
	inline void set_centerY_9(float value)
	{
		___centerY_9 = value;
	}

	inline static int32_t get_offset_of_radialBlurVisionShader_10() { return static_cast<int32_t>(offsetof(RadialBlur_t3297397478, ___radialBlurVisionShader_10)); }
	inline Shader_t3191267369 * get_radialBlurVisionShader_10() const { return ___radialBlurVisionShader_10; }
	inline Shader_t3191267369 ** get_address_of_radialBlurVisionShader_10() { return &___radialBlurVisionShader_10; }
	inline void set_radialBlurVisionShader_10(Shader_t3191267369 * value)
	{
		___radialBlurVisionShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___radialBlurVisionShader_10, value);
	}

	inline static int32_t get_offset_of_radialBlurMaterial_11() { return static_cast<int32_t>(offsetof(RadialBlur_t3297397478, ___radialBlurMaterial_11)); }
	inline Material_t3870600107 * get_radialBlurMaterial_11() const { return ___radialBlurMaterial_11; }
	inline Material_t3870600107 ** get_address_of_radialBlurMaterial_11() { return &___radialBlurMaterial_11; }
	inline void set_radialBlurMaterial_11(Material_t3870600107 * value)
	{
		___radialBlurMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___radialBlurMaterial_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
