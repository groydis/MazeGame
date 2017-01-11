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
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1025302025.h"
#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_4215849182.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.BloomOptimized
struct  BloomOptimized_t3605777074  : public PostEffectsBase_t1415309093
{
public:
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::threshold
	float ___threshold_6;
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::intensity
	float ___intensity_7;
	// System.Single UnityStandardAssets.ImageEffects.BloomOptimized::blurSize
	float ___blurSize_8;
	// UnityStandardAssets.ImageEffects.BloomOptimized/Resolution UnityStandardAssets.ImageEffects.BloomOptimized::resolution
	int32_t ___resolution_9;
	// System.Int32 UnityStandardAssets.ImageEffects.BloomOptimized::blurIterations
	int32_t ___blurIterations_10;
	// UnityStandardAssets.ImageEffects.BloomOptimized/BlurType UnityStandardAssets.ImageEffects.BloomOptimized::blurType
	int32_t ___blurType_11;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.BloomOptimized::fastBloomShader
	Shader_t3191267369 * ___fastBloomShader_12;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.BloomOptimized::fastBloomMaterial
	Material_t3870600107 * ___fastBloomMaterial_13;

public:
	inline static int32_t get_offset_of_threshold_6() { return static_cast<int32_t>(offsetof(BloomOptimized_t3605777074, ___threshold_6)); }
	inline float get_threshold_6() const { return ___threshold_6; }
	inline float* get_address_of_threshold_6() { return &___threshold_6; }
	inline void set_threshold_6(float value)
	{
		___threshold_6 = value;
	}

	inline static int32_t get_offset_of_intensity_7() { return static_cast<int32_t>(offsetof(BloomOptimized_t3605777074, ___intensity_7)); }
	inline float get_intensity_7() const { return ___intensity_7; }
	inline float* get_address_of_intensity_7() { return &___intensity_7; }
	inline void set_intensity_7(float value)
	{
		___intensity_7 = value;
	}

	inline static int32_t get_offset_of_blurSize_8() { return static_cast<int32_t>(offsetof(BloomOptimized_t3605777074, ___blurSize_8)); }
	inline float get_blurSize_8() const { return ___blurSize_8; }
	inline float* get_address_of_blurSize_8() { return &___blurSize_8; }
	inline void set_blurSize_8(float value)
	{
		___blurSize_8 = value;
	}

	inline static int32_t get_offset_of_resolution_9() { return static_cast<int32_t>(offsetof(BloomOptimized_t3605777074, ___resolution_9)); }
	inline int32_t get_resolution_9() const { return ___resolution_9; }
	inline int32_t* get_address_of_resolution_9() { return &___resolution_9; }
	inline void set_resolution_9(int32_t value)
	{
		___resolution_9 = value;
	}

	inline static int32_t get_offset_of_blurIterations_10() { return static_cast<int32_t>(offsetof(BloomOptimized_t3605777074, ___blurIterations_10)); }
	inline int32_t get_blurIterations_10() const { return ___blurIterations_10; }
	inline int32_t* get_address_of_blurIterations_10() { return &___blurIterations_10; }
	inline void set_blurIterations_10(int32_t value)
	{
		___blurIterations_10 = value;
	}

	inline static int32_t get_offset_of_blurType_11() { return static_cast<int32_t>(offsetof(BloomOptimized_t3605777074, ___blurType_11)); }
	inline int32_t get_blurType_11() const { return ___blurType_11; }
	inline int32_t* get_address_of_blurType_11() { return &___blurType_11; }
	inline void set_blurType_11(int32_t value)
	{
		___blurType_11 = value;
	}

	inline static int32_t get_offset_of_fastBloomShader_12() { return static_cast<int32_t>(offsetof(BloomOptimized_t3605777074, ___fastBloomShader_12)); }
	inline Shader_t3191267369 * get_fastBloomShader_12() const { return ___fastBloomShader_12; }
	inline Shader_t3191267369 ** get_address_of_fastBloomShader_12() { return &___fastBloomShader_12; }
	inline void set_fastBloomShader_12(Shader_t3191267369 * value)
	{
		___fastBloomShader_12 = value;
		Il2CppCodeGenWriteBarrier(&___fastBloomShader_12, value);
	}

	inline static int32_t get_offset_of_fastBloomMaterial_13() { return static_cast<int32_t>(offsetof(BloomOptimized_t3605777074, ___fastBloomMaterial_13)); }
	inline Material_t3870600107 * get_fastBloomMaterial_13() const { return ___fastBloomMaterial_13; }
	inline Material_t3870600107 ** get_address_of_fastBloomMaterial_13() { return &___fastBloomMaterial_13; }
	inline void set_fastBloomMaterial_13(Material_t3870600107 * value)
	{
		___fastBloomMaterial_13 = value;
		Il2CppCodeGenWriteBarrier(&___fastBloomMaterial_13, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
