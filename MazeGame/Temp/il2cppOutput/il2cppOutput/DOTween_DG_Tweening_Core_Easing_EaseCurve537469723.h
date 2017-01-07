#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;

#include "mscorlib_System_Object4170816371.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.Easing.EaseCurve
struct  EaseCurve_t537469723  : public Il2CppObject
{
public:
	// UnityEngine.AnimationCurve DG.Tweening.Core.Easing.EaseCurve::_animCurve
	AnimationCurve_t3667593487 * ____animCurve_0;

public:
	inline static int32_t get_offset_of__animCurve_0() { return static_cast<int32_t>(offsetof(EaseCurve_t537469723, ____animCurve_0)); }
	inline AnimationCurve_t3667593487 * get__animCurve_0() const { return ____animCurve_0; }
	inline AnimationCurve_t3667593487 ** get_address_of__animCurve_0() { return &____animCurve_0; }
	inline void set__animCurve_0(AnimationCurve_t3667593487 * value)
	{
		____animCurve_0 = value;
		Il2CppCodeGenWriteBarrier(&____animCurve_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
