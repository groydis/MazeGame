#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<System.Single>
struct DOGetter_1_t1647230012;
// DG.Tweening.Core.DOSetter`1<System.Single>
struct DOSetter_1_t2683869840;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct ABSTweenPlugin_3_t2042100684;
// System.String
struct String_t;

#include "DOTween_DG_Tweening_Tweener3057794306.h"
#include "DOTween_DG_Tweening_Plugins_Options_FloatOptions3421734040.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<System.Single,System.Single,DG.Tweening.Plugins.Options.FloatOptions>
struct  TweenerCore_3_t1558294869  : public Tweener_t3057794306
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	float ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	float ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	float ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	FloatOptions_t3421734040  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t1647230012 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t2683869840 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t2042100684 * ___tweenPlugin_59;

public:
	inline static int32_t get_offset_of_startValue_53() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1558294869, ___startValue_53)); }
	inline float get_startValue_53() const { return ___startValue_53; }
	inline float* get_address_of_startValue_53() { return &___startValue_53; }
	inline void set_startValue_53(float value)
	{
		___startValue_53 = value;
	}

	inline static int32_t get_offset_of_endValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1558294869, ___endValue_54)); }
	inline float get_endValue_54() const { return ___endValue_54; }
	inline float* get_address_of_endValue_54() { return &___endValue_54; }
	inline void set_endValue_54(float value)
	{
		___endValue_54 = value;
	}

	inline static int32_t get_offset_of_changeValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1558294869, ___changeValue_55)); }
	inline float get_changeValue_55() const { return ___changeValue_55; }
	inline float* get_address_of_changeValue_55() { return &___changeValue_55; }
	inline void set_changeValue_55(float value)
	{
		___changeValue_55 = value;
	}

	inline static int32_t get_offset_of_plugOptions_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1558294869, ___plugOptions_56)); }
	inline FloatOptions_t3421734040  get_plugOptions_56() const { return ___plugOptions_56; }
	inline FloatOptions_t3421734040 * get_address_of_plugOptions_56() { return &___plugOptions_56; }
	inline void set_plugOptions_56(FloatOptions_t3421734040  value)
	{
		___plugOptions_56 = value;
	}

	inline static int32_t get_offset_of_getter_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1558294869, ___getter_57)); }
	inline DOGetter_1_t1647230012 * get_getter_57() const { return ___getter_57; }
	inline DOGetter_1_t1647230012 ** get_address_of_getter_57() { return &___getter_57; }
	inline void set_getter_57(DOGetter_1_t1647230012 * value)
	{
		___getter_57 = value;
		Il2CppCodeGenWriteBarrier(&___getter_57, value);
	}

	inline static int32_t get_offset_of_setter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1558294869, ___setter_58)); }
	inline DOSetter_1_t2683869840 * get_setter_58() const { return ___setter_58; }
	inline DOSetter_1_t2683869840 ** get_address_of_setter_58() { return &___setter_58; }
	inline void set_setter_58(DOSetter_1_t2683869840 * value)
	{
		___setter_58 = value;
		Il2CppCodeGenWriteBarrier(&___setter_58, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1558294869, ___tweenPlugin_59)); }
	inline ABSTweenPlugin_3_t2042100684 * get_tweenPlugin_59() const { return ___tweenPlugin_59; }
	inline ABSTweenPlugin_3_t2042100684 ** get_address_of_tweenPlugin_59() { return &___tweenPlugin_59; }
	inline void set_tweenPlugin_59(ABSTweenPlugin_3_t2042100684 * value)
	{
		___tweenPlugin_59 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
