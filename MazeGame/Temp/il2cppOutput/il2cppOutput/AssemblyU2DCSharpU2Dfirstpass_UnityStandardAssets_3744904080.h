#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Texture2D
struct Texture2D_t3884108195;
// UnityEngine.Shader
struct Shader_t3191267369;
// UnityEngine.Material
struct Material_t3870600107;
// UnityEngine.Mesh
struct Mesh_t4241756145;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1415309093.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_FilterMode1625068031.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.NoiseAndGrain
struct  NoiseAndGrain_t3744904080  : public PostEffectsBase_t1415309093
{
public:
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::intensityMultiplier
	float ___intensityMultiplier_6;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::generalIntensity
	float ___generalIntensity_7;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::blackIntensity
	float ___blackIntensity_8;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::whiteIntensity
	float ___whiteIntensity_9;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::midGrey
	float ___midGrey_10;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11Grain
	bool ___dx11Grain_11;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::softness
	float ___softness_12;
	// System.Boolean UnityStandardAssets.ImageEffects.NoiseAndGrain::monochrome
	bool ___monochrome_13;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.NoiseAndGrain::intensities
	Vector3_t4282066566  ___intensities_14;
	// UnityEngine.Vector3 UnityStandardAssets.ImageEffects.NoiseAndGrain::tiling
	Vector3_t4282066566  ___tiling_15;
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::monochromeTiling
	float ___monochromeTiling_16;
	// UnityEngine.FilterMode UnityStandardAssets.ImageEffects.NoiseAndGrain::filterMode
	int32_t ___filterMode_17;
	// UnityEngine.Texture2D UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseTexture
	Texture2D_t3884108195 * ___noiseTexture_18;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseShader
	Shader_t3191267369 * ___noiseShader_19;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndGrain::noiseMaterial
	Material_t3870600107 * ___noiseMaterial_20;
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11NoiseShader
	Shader_t3191267369 * ___dx11NoiseShader_21;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.NoiseAndGrain::dx11NoiseMaterial
	Material_t3870600107 * ___dx11NoiseMaterial_22;
	// UnityEngine.Mesh UnityStandardAssets.ImageEffects.NoiseAndGrain::mesh
	Mesh_t4241756145 * ___mesh_24;

public:
	inline static int32_t get_offset_of_intensityMultiplier_6() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___intensityMultiplier_6)); }
	inline float get_intensityMultiplier_6() const { return ___intensityMultiplier_6; }
	inline float* get_address_of_intensityMultiplier_6() { return &___intensityMultiplier_6; }
	inline void set_intensityMultiplier_6(float value)
	{
		___intensityMultiplier_6 = value;
	}

	inline static int32_t get_offset_of_generalIntensity_7() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___generalIntensity_7)); }
	inline float get_generalIntensity_7() const { return ___generalIntensity_7; }
	inline float* get_address_of_generalIntensity_7() { return &___generalIntensity_7; }
	inline void set_generalIntensity_7(float value)
	{
		___generalIntensity_7 = value;
	}

	inline static int32_t get_offset_of_blackIntensity_8() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___blackIntensity_8)); }
	inline float get_blackIntensity_8() const { return ___blackIntensity_8; }
	inline float* get_address_of_blackIntensity_8() { return &___blackIntensity_8; }
	inline void set_blackIntensity_8(float value)
	{
		___blackIntensity_8 = value;
	}

	inline static int32_t get_offset_of_whiteIntensity_9() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___whiteIntensity_9)); }
	inline float get_whiteIntensity_9() const { return ___whiteIntensity_9; }
	inline float* get_address_of_whiteIntensity_9() { return &___whiteIntensity_9; }
	inline void set_whiteIntensity_9(float value)
	{
		___whiteIntensity_9 = value;
	}

	inline static int32_t get_offset_of_midGrey_10() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___midGrey_10)); }
	inline float get_midGrey_10() const { return ___midGrey_10; }
	inline float* get_address_of_midGrey_10() { return &___midGrey_10; }
	inline void set_midGrey_10(float value)
	{
		___midGrey_10 = value;
	}

	inline static int32_t get_offset_of_dx11Grain_11() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___dx11Grain_11)); }
	inline bool get_dx11Grain_11() const { return ___dx11Grain_11; }
	inline bool* get_address_of_dx11Grain_11() { return &___dx11Grain_11; }
	inline void set_dx11Grain_11(bool value)
	{
		___dx11Grain_11 = value;
	}

	inline static int32_t get_offset_of_softness_12() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___softness_12)); }
	inline float get_softness_12() const { return ___softness_12; }
	inline float* get_address_of_softness_12() { return &___softness_12; }
	inline void set_softness_12(float value)
	{
		___softness_12 = value;
	}

	inline static int32_t get_offset_of_monochrome_13() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___monochrome_13)); }
	inline bool get_monochrome_13() const { return ___monochrome_13; }
	inline bool* get_address_of_monochrome_13() { return &___monochrome_13; }
	inline void set_monochrome_13(bool value)
	{
		___monochrome_13 = value;
	}

	inline static int32_t get_offset_of_intensities_14() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___intensities_14)); }
	inline Vector3_t4282066566  get_intensities_14() const { return ___intensities_14; }
	inline Vector3_t4282066566 * get_address_of_intensities_14() { return &___intensities_14; }
	inline void set_intensities_14(Vector3_t4282066566  value)
	{
		___intensities_14 = value;
	}

	inline static int32_t get_offset_of_tiling_15() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___tiling_15)); }
	inline Vector3_t4282066566  get_tiling_15() const { return ___tiling_15; }
	inline Vector3_t4282066566 * get_address_of_tiling_15() { return &___tiling_15; }
	inline void set_tiling_15(Vector3_t4282066566  value)
	{
		___tiling_15 = value;
	}

	inline static int32_t get_offset_of_monochromeTiling_16() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___monochromeTiling_16)); }
	inline float get_monochromeTiling_16() const { return ___monochromeTiling_16; }
	inline float* get_address_of_monochromeTiling_16() { return &___monochromeTiling_16; }
	inline void set_monochromeTiling_16(float value)
	{
		___monochromeTiling_16 = value;
	}

	inline static int32_t get_offset_of_filterMode_17() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___filterMode_17)); }
	inline int32_t get_filterMode_17() const { return ___filterMode_17; }
	inline int32_t* get_address_of_filterMode_17() { return &___filterMode_17; }
	inline void set_filterMode_17(int32_t value)
	{
		___filterMode_17 = value;
	}

	inline static int32_t get_offset_of_noiseTexture_18() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___noiseTexture_18)); }
	inline Texture2D_t3884108195 * get_noiseTexture_18() const { return ___noiseTexture_18; }
	inline Texture2D_t3884108195 ** get_address_of_noiseTexture_18() { return &___noiseTexture_18; }
	inline void set_noiseTexture_18(Texture2D_t3884108195 * value)
	{
		___noiseTexture_18 = value;
		Il2CppCodeGenWriteBarrier(&___noiseTexture_18, value);
	}

	inline static int32_t get_offset_of_noiseShader_19() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___noiseShader_19)); }
	inline Shader_t3191267369 * get_noiseShader_19() const { return ___noiseShader_19; }
	inline Shader_t3191267369 ** get_address_of_noiseShader_19() { return &___noiseShader_19; }
	inline void set_noiseShader_19(Shader_t3191267369 * value)
	{
		___noiseShader_19 = value;
		Il2CppCodeGenWriteBarrier(&___noiseShader_19, value);
	}

	inline static int32_t get_offset_of_noiseMaterial_20() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___noiseMaterial_20)); }
	inline Material_t3870600107 * get_noiseMaterial_20() const { return ___noiseMaterial_20; }
	inline Material_t3870600107 ** get_address_of_noiseMaterial_20() { return &___noiseMaterial_20; }
	inline void set_noiseMaterial_20(Material_t3870600107 * value)
	{
		___noiseMaterial_20 = value;
		Il2CppCodeGenWriteBarrier(&___noiseMaterial_20, value);
	}

	inline static int32_t get_offset_of_dx11NoiseShader_21() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___dx11NoiseShader_21)); }
	inline Shader_t3191267369 * get_dx11NoiseShader_21() const { return ___dx11NoiseShader_21; }
	inline Shader_t3191267369 ** get_address_of_dx11NoiseShader_21() { return &___dx11NoiseShader_21; }
	inline void set_dx11NoiseShader_21(Shader_t3191267369 * value)
	{
		___dx11NoiseShader_21 = value;
		Il2CppCodeGenWriteBarrier(&___dx11NoiseShader_21, value);
	}

	inline static int32_t get_offset_of_dx11NoiseMaterial_22() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___dx11NoiseMaterial_22)); }
	inline Material_t3870600107 * get_dx11NoiseMaterial_22() const { return ___dx11NoiseMaterial_22; }
	inline Material_t3870600107 ** get_address_of_dx11NoiseMaterial_22() { return &___dx11NoiseMaterial_22; }
	inline void set_dx11NoiseMaterial_22(Material_t3870600107 * value)
	{
		___dx11NoiseMaterial_22 = value;
		Il2CppCodeGenWriteBarrier(&___dx11NoiseMaterial_22, value);
	}

	inline static int32_t get_offset_of_mesh_24() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080, ___mesh_24)); }
	inline Mesh_t4241756145 * get_mesh_24() const { return ___mesh_24; }
	inline Mesh_t4241756145 ** get_address_of_mesh_24() { return &___mesh_24; }
	inline void set_mesh_24(Mesh_t4241756145 * value)
	{
		___mesh_24 = value;
		Il2CppCodeGenWriteBarrier(&___mesh_24, value);
	}
};

struct NoiseAndGrain_t3744904080_StaticFields
{
public:
	// System.Single UnityStandardAssets.ImageEffects.NoiseAndGrain::TILE_AMOUNT
	float ___TILE_AMOUNT_23;

public:
	inline static int32_t get_offset_of_TILE_AMOUNT_23() { return static_cast<int32_t>(offsetof(NoiseAndGrain_t3744904080_StaticFields, ___TILE_AMOUNT_23)); }
	inline float get_TILE_AMOUNT_23() const { return ___TILE_AMOUNT_23; }
	inline float* get_address_of_TILE_AMOUNT_23() { return &___TILE_AMOUNT_23; }
	inline void set_TILE_AMOUNT_23(float value)
	{
		___TILE_AMOUNT_23 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
