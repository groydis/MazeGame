﻿#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// GlitchEffect
struct GlitchEffect_t2030701382;
// CRT
struct CRT_t67013;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// MainMenu
struct  MainMenu_t55996120  : public MonoBehaviour_t667441552
{
public:
	// GlitchEffect MainMenu::glitchEffect
	GlitchEffect_t2030701382 * ___glitchEffect_2;
	// CRT MainMenu::crtEffect
	CRT_t67013 * ___crtEffect_3;

public:
	inline static int32_t get_offset_of_glitchEffect_2() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___glitchEffect_2)); }
	inline GlitchEffect_t2030701382 * get_glitchEffect_2() const { return ___glitchEffect_2; }
	inline GlitchEffect_t2030701382 ** get_address_of_glitchEffect_2() { return &___glitchEffect_2; }
	inline void set_glitchEffect_2(GlitchEffect_t2030701382 * value)
	{
		___glitchEffect_2 = value;
		Il2CppCodeGenWriteBarrier(&___glitchEffect_2, value);
	}

	inline static int32_t get_offset_of_crtEffect_3() { return static_cast<int32_t>(offsetof(MainMenu_t55996120, ___crtEffect_3)); }
	inline CRT_t67013 * get_crtEffect_3() const { return ___crtEffect_3; }
	inline CRT_t67013 ** get_address_of_crtEffect_3() { return &___crtEffect_3; }
	inline void set_crtEffect_3(CRT_t67013 * value)
	{
		___crtEffect_3 = value;
		Il2CppCodeGenWriteBarrier(&___crtEffect_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif