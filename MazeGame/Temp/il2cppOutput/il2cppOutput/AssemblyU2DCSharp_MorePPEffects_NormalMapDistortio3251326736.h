#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture
struct Texture_t2526458961;
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

// MorePPEffects.NormalMapDistortion
struct  NormalMapDistortion_t3251326736  : public PostEffectsBase_t1415309093
{
public:
	// System.Single MorePPEffects.NormalMapDistortion::timer
	float ___timer_6;
	// System.Single MorePPEffects.NormalMapDistortion::speedX
	float ___speedX_7;
	// System.Single MorePPEffects.NormalMapDistortion::speedY
	float ___speedY_8;
	// UnityEngine.Texture MorePPEffects.NormalMapDistortion::normalMap
	Texture_t2526458961 * ___normalMap_9;
	// UnityEngine.Shader MorePPEffects.NormalMapDistortion::normalMapDistortionShader
	Shader_t3191267369 * ___normalMapDistortionShader_10;
	// UnityEngine.Material MorePPEffects.NormalMapDistortion::normalMapDistortionMaterial
	Material_t3870600107 * ___normalMapDistortionMaterial_11;

public:
	inline static int32_t get_offset_of_timer_6() { return static_cast<int32_t>(offsetof(NormalMapDistortion_t3251326736, ___timer_6)); }
	inline float get_timer_6() const { return ___timer_6; }
	inline float* get_address_of_timer_6() { return &___timer_6; }
	inline void set_timer_6(float value)
	{
		___timer_6 = value;
	}

	inline static int32_t get_offset_of_speedX_7() { return static_cast<int32_t>(offsetof(NormalMapDistortion_t3251326736, ___speedX_7)); }
	inline float get_speedX_7() const { return ___speedX_7; }
	inline float* get_address_of_speedX_7() { return &___speedX_7; }
	inline void set_speedX_7(float value)
	{
		___speedX_7 = value;
	}

	inline static int32_t get_offset_of_speedY_8() { return static_cast<int32_t>(offsetof(NormalMapDistortion_t3251326736, ___speedY_8)); }
	inline float get_speedY_8() const { return ___speedY_8; }
	inline float* get_address_of_speedY_8() { return &___speedY_8; }
	inline void set_speedY_8(float value)
	{
		___speedY_8 = value;
	}

	inline static int32_t get_offset_of_normalMap_9() { return static_cast<int32_t>(offsetof(NormalMapDistortion_t3251326736, ___normalMap_9)); }
	inline Texture_t2526458961 * get_normalMap_9() const { return ___normalMap_9; }
	inline Texture_t2526458961 ** get_address_of_normalMap_9() { return &___normalMap_9; }
	inline void set_normalMap_9(Texture_t2526458961 * value)
	{
		___normalMap_9 = value;
		Il2CppCodeGenWriteBarrier(&___normalMap_9, value);
	}

	inline static int32_t get_offset_of_normalMapDistortionShader_10() { return static_cast<int32_t>(offsetof(NormalMapDistortion_t3251326736, ___normalMapDistortionShader_10)); }
	inline Shader_t3191267369 * get_normalMapDistortionShader_10() const { return ___normalMapDistortionShader_10; }
	inline Shader_t3191267369 ** get_address_of_normalMapDistortionShader_10() { return &___normalMapDistortionShader_10; }
	inline void set_normalMapDistortionShader_10(Shader_t3191267369 * value)
	{
		___normalMapDistortionShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___normalMapDistortionShader_10, value);
	}

	inline static int32_t get_offset_of_normalMapDistortionMaterial_11() { return static_cast<int32_t>(offsetof(NormalMapDistortion_t3251326736, ___normalMapDistortionMaterial_11)); }
	inline Material_t3870600107 * get_normalMapDistortionMaterial_11() const { return ___normalMapDistortionMaterial_11; }
	inline Material_t3870600107 ** get_address_of_normalMapDistortionMaterial_11() { return &___normalMapDistortionMaterial_11; }
	inline void set_normalMapDistortionMaterial_11(Material_t3870600107 * value)
	{
		___normalMapDistortionMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___normalMapDistortionMaterial_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
