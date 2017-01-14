#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t972643934;

#include "UnityEngine_UnityEngine_MonoBehaviour667441552.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// GeneralSimpleUiJS
struct  GeneralSimpleUiJS_t689136279  : public MonoBehaviour_t667441552
{
public:
	// UnityEngine.RectTransform GeneralSimpleUiJS::button
	RectTransform_t972643934 * ___button_2;

public:
	inline static int32_t get_offset_of_button_2() { return static_cast<int32_t>(offsetof(GeneralSimpleUiJS_t689136279, ___button_2)); }
	inline RectTransform_t972643934 * get_button_2() const { return ___button_2; }
	inline RectTransform_t972643934 ** get_address_of_button_2() { return &___button_2; }
	inline void set_button_2(RectTransform_t972643934 * value)
	{
		___button_2 = value;
		Il2CppCodeGenWriteBarrier(&___button_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
