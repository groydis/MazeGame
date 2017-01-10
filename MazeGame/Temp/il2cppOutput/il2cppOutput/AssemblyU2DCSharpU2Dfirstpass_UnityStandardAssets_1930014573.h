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
// UnityEngine.Texture3D
struct Texture3D_t3884108226;
// System.String
struct String_t;

#include "AssemblyU2DCSharpU2Dfirstpass_UnityStandardAssets_1415309093.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// UnityStandardAssets.ImageEffects.ColorCorrectionLookup
struct  ColorCorrectionLookup_t1930014573  : public PostEffectsBase_t1415309093
{
public:
	// UnityEngine.Shader UnityStandardAssets.ImageEffects.ColorCorrectionLookup::shader
	Shader_t3191267369 * ___shader_6;
	// UnityEngine.Material UnityStandardAssets.ImageEffects.ColorCorrectionLookup::material
	Material_t3870600107 * ___material_7;
	// UnityEngine.Texture3D UnityStandardAssets.ImageEffects.ColorCorrectionLookup::converted3DLut
	Texture3D_t3884108226 * ___converted3DLut_8;
	// System.String UnityStandardAssets.ImageEffects.ColorCorrectionLookup::basedOnTempTex
	String_t* ___basedOnTempTex_9;

public:
	inline static int32_t get_offset_of_shader_6() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t1930014573, ___shader_6)); }
	inline Shader_t3191267369 * get_shader_6() const { return ___shader_6; }
	inline Shader_t3191267369 ** get_address_of_shader_6() { return &___shader_6; }
	inline void set_shader_6(Shader_t3191267369 * value)
	{
		___shader_6 = value;
		Il2CppCodeGenWriteBarrier(&___shader_6, value);
	}

	inline static int32_t get_offset_of_material_7() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t1930014573, ___material_7)); }
	inline Material_t3870600107 * get_material_7() const { return ___material_7; }
	inline Material_t3870600107 ** get_address_of_material_7() { return &___material_7; }
	inline void set_material_7(Material_t3870600107 * value)
	{
		___material_7 = value;
		Il2CppCodeGenWriteBarrier(&___material_7, value);
	}

	inline static int32_t get_offset_of_converted3DLut_8() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t1930014573, ___converted3DLut_8)); }
	inline Texture3D_t3884108226 * get_converted3DLut_8() const { return ___converted3DLut_8; }
	inline Texture3D_t3884108226 ** get_address_of_converted3DLut_8() { return &___converted3DLut_8; }
	inline void set_converted3DLut_8(Texture3D_t3884108226 * value)
	{
		___converted3DLut_8 = value;
		Il2CppCodeGenWriteBarrier(&___converted3DLut_8, value);
	}

	inline static int32_t get_offset_of_basedOnTempTex_9() { return static_cast<int32_t>(offsetof(ColorCorrectionLookup_t1930014573, ___basedOnTempTex_9)); }
	inline String_t* get_basedOnTempTex_9() const { return ___basedOnTempTex_9; }
	inline String_t** get_address_of_basedOnTempTex_9() { return &___basedOnTempTex_9; }
	inline void set_basedOnTempTex_9(String_t* value)
	{
		___basedOnTempTex_9 = value;
		Il2CppCodeGenWriteBarrier(&___basedOnTempTex_9, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
