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

// MorePPEffects.Laplacian
struct  Laplacian_t1937679297  : public PostEffectsBase_t1415309093
{
public:
	// UnityEngine.Shader MorePPEffects.Laplacian::laplacianShader
	Shader_t3191267369 * ___laplacianShader_6;
	// UnityEngine.Material MorePPEffects.Laplacian::laplacianMaterial
	Material_t3870600107 * ___laplacianMaterial_7;

public:
	inline static int32_t get_offset_of_laplacianShader_6() { return static_cast<int32_t>(offsetof(Laplacian_t1937679297, ___laplacianShader_6)); }
	inline Shader_t3191267369 * get_laplacianShader_6() const { return ___laplacianShader_6; }
	inline Shader_t3191267369 ** get_address_of_laplacianShader_6() { return &___laplacianShader_6; }
	inline void set_laplacianShader_6(Shader_t3191267369 * value)
	{
		___laplacianShader_6 = value;
		Il2CppCodeGenWriteBarrier(&___laplacianShader_6, value);
	}

	inline static int32_t get_offset_of_laplacianMaterial_7() { return static_cast<int32_t>(offsetof(Laplacian_t1937679297, ___laplacianMaterial_7)); }
	inline Material_t3870600107 * get_laplacianMaterial_7() const { return ___laplacianMaterial_7; }
	inline Material_t3870600107 ** get_address_of_laplacianMaterial_7() { return &___laplacianMaterial_7; }
	inline void set_laplacianMaterial_7(Material_t3870600107 * value)
	{
		___laplacianMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___laplacianMaterial_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
