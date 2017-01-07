#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.LineRenderer
struct LineRenderer_t1892709339;

#include "mscorlib_System_Object4170816371.h"
#include "DOTween_DG_Tweening_Color22672154097.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.ShortcutExtensions/<>c__DisplayClass17_0
struct  U3CU3Ec__DisplayClass17_0_t1425607813  : public Il2CppObject
{
public:
	// DG.Tweening.Color2 DG.Tweening.ShortcutExtensions/<>c__DisplayClass17_0::startValue
	Color2_t2672154097  ___startValue_0;
	// UnityEngine.LineRenderer DG.Tweening.ShortcutExtensions/<>c__DisplayClass17_0::target
	LineRenderer_t1892709339 * ___target_1;

public:
	inline static int32_t get_offset_of_startValue_0() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t1425607813, ___startValue_0)); }
	inline Color2_t2672154097  get_startValue_0() const { return ___startValue_0; }
	inline Color2_t2672154097 * get_address_of_startValue_0() { return &___startValue_0; }
	inline void set_startValue_0(Color2_t2672154097  value)
	{
		___startValue_0 = value;
	}

	inline static int32_t get_offset_of_target_1() { return static_cast<int32_t>(offsetof(U3CU3Ec__DisplayClass17_0_t1425607813, ___target_1)); }
	inline LineRenderer_t1892709339 * get_target_1() const { return ___target_1; }
	inline LineRenderer_t1892709339 ** get_address_of_target_1() { return &___target_1; }
	inline void set_target_1(LineRenderer_t1892709339 * value)
	{
		___target_1 = value;
		Il2CppCodeGenWriteBarrier(&___target_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
