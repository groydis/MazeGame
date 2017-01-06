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

// MorePPEffects.Anaglyph3D
struct  Anaglyph3D_t2235875337  : public PostEffectsBase_t1415309093
{
public:
	// UnityEngine.Shader MorePPEffects.Anaglyph3D::anaglyph3DShader
	Shader_t3191267369 * ___anaglyph3DShader_6;
	// UnityEngine.Material MorePPEffects.Anaglyph3D::anaglyph3DMaterial
	Material_t3870600107 * ___anaglyph3DMaterial_7;

public:
	inline static int32_t get_offset_of_anaglyph3DShader_6() { return static_cast<int32_t>(offsetof(Anaglyph3D_t2235875337, ___anaglyph3DShader_6)); }
	inline Shader_t3191267369 * get_anaglyph3DShader_6() const { return ___anaglyph3DShader_6; }
	inline Shader_t3191267369 ** get_address_of_anaglyph3DShader_6() { return &___anaglyph3DShader_6; }
	inline void set_anaglyph3DShader_6(Shader_t3191267369 * value)
	{
		___anaglyph3DShader_6 = value;
		Il2CppCodeGenWriteBarrier(&___anaglyph3DShader_6, value);
	}

	inline static int32_t get_offset_of_anaglyph3DMaterial_7() { return static_cast<int32_t>(offsetof(Anaglyph3D_t2235875337, ___anaglyph3DMaterial_7)); }
	inline Material_t3870600107 * get_anaglyph3DMaterial_7() const { return ___anaglyph3DMaterial_7; }
	inline Material_t3870600107 ** get_address_of_anaglyph3DMaterial_7() { return &___anaglyph3DMaterial_7; }
	inline void set_anaglyph3DMaterial_7(Material_t3870600107 * value)
	{
		___anaglyph3DMaterial_7 = value;
		Il2CppCodeGenWriteBarrier(&___anaglyph3DMaterial_7, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
