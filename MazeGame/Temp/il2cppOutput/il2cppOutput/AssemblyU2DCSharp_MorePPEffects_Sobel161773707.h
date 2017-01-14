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
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MorePPEffects.Sobel
struct  Sobel_t161773707  : public PostEffectsBase_t1415309093
{
public:
	// UnityEngine.Color MorePPEffects.Sobel::edgeColor
	Color_t4194546905  ___edgeColor_6;
	// UnityEngine.Color MorePPEffects.Sobel::backgroundColor
	Color_t4194546905  ___backgroundColor_7;
	// System.Boolean MorePPEffects.Sobel::showBackground
	bool ___showBackground_8;
	// System.Single MorePPEffects.Sobel::threshold
	float ___threshold_9;
	// UnityEngine.Shader MorePPEffects.Sobel::sobelShader
	Shader_t3191267369 * ___sobelShader_10;
	// UnityEngine.Material MorePPEffects.Sobel::sobelMaterial
	Material_t3870600107 * ___sobelMaterial_11;

public:
	inline static int32_t get_offset_of_edgeColor_6() { return static_cast<int32_t>(offsetof(Sobel_t161773707, ___edgeColor_6)); }
	inline Color_t4194546905  get_edgeColor_6() const { return ___edgeColor_6; }
	inline Color_t4194546905 * get_address_of_edgeColor_6() { return &___edgeColor_6; }
	inline void set_edgeColor_6(Color_t4194546905  value)
	{
		___edgeColor_6 = value;
	}

	inline static int32_t get_offset_of_backgroundColor_7() { return static_cast<int32_t>(offsetof(Sobel_t161773707, ___backgroundColor_7)); }
	inline Color_t4194546905  get_backgroundColor_7() const { return ___backgroundColor_7; }
	inline Color_t4194546905 * get_address_of_backgroundColor_7() { return &___backgroundColor_7; }
	inline void set_backgroundColor_7(Color_t4194546905  value)
	{
		___backgroundColor_7 = value;
	}

	inline static int32_t get_offset_of_showBackground_8() { return static_cast<int32_t>(offsetof(Sobel_t161773707, ___showBackground_8)); }
	inline bool get_showBackground_8() const { return ___showBackground_8; }
	inline bool* get_address_of_showBackground_8() { return &___showBackground_8; }
	inline void set_showBackground_8(bool value)
	{
		___showBackground_8 = value;
	}

	inline static int32_t get_offset_of_threshold_9() { return static_cast<int32_t>(offsetof(Sobel_t161773707, ___threshold_9)); }
	inline float get_threshold_9() const { return ___threshold_9; }
	inline float* get_address_of_threshold_9() { return &___threshold_9; }
	inline void set_threshold_9(float value)
	{
		___threshold_9 = value;
	}

	inline static int32_t get_offset_of_sobelShader_10() { return static_cast<int32_t>(offsetof(Sobel_t161773707, ___sobelShader_10)); }
	inline Shader_t3191267369 * get_sobelShader_10() const { return ___sobelShader_10; }
	inline Shader_t3191267369 ** get_address_of_sobelShader_10() { return &___sobelShader_10; }
	inline void set_sobelShader_10(Shader_t3191267369 * value)
	{
		___sobelShader_10 = value;
		Il2CppCodeGenWriteBarrier(&___sobelShader_10, value);
	}

	inline static int32_t get_offset_of_sobelMaterial_11() { return static_cast<int32_t>(offsetof(Sobel_t161773707, ___sobelMaterial_11)); }
	inline Material_t3870600107 * get_sobelMaterial_11() const { return ___sobelMaterial_11; }
	inline Material_t3870600107 ** get_address_of_sobelMaterial_11() { return &___sobelMaterial_11; }
	inline void set_sobelMaterial_11(Material_t3870600107 * value)
	{
		___sobelMaterial_11 = value;
		Il2CppCodeGenWriteBarrier(&___sobelMaterial_11, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
