#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2>
struct DOGetter_1_t27465137;
// DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2>
struct DOSetter_1_t1064104965;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct ABSTweenPlugin_3_t551274153;
// System.String
struct String_t;

#include "DOTween_DG_Tweening_Tweener3057794306.h"
#include "DOTween_DG_Tweening_Color22672154097.h"
#include "DOTween_DG_Tweening_Plugins_Options_ColorOptions3802927537.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct  TweenerCore_3_t67468338  : public Tweener_t3057794306
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Color2_t2672154097  ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Color2_t2672154097  ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Color2_t2672154097  ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	ColorOptions_t3802927537  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t27465137 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t1064104965 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t551274153 * ___tweenPlugin_59;

public:
	inline static int32_t get_offset_of_startValue_53() { return static_cast<int32_t>(offsetof(TweenerCore_3_t67468338, ___startValue_53)); }
	inline Color2_t2672154097  get_startValue_53() const { return ___startValue_53; }
	inline Color2_t2672154097 * get_address_of_startValue_53() { return &___startValue_53; }
	inline void set_startValue_53(Color2_t2672154097  value)
	{
		___startValue_53 = value;
	}

	inline static int32_t get_offset_of_endValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t67468338, ___endValue_54)); }
	inline Color2_t2672154097  get_endValue_54() const { return ___endValue_54; }
	inline Color2_t2672154097 * get_address_of_endValue_54() { return &___endValue_54; }
	inline void set_endValue_54(Color2_t2672154097  value)
	{
		___endValue_54 = value;
	}

	inline static int32_t get_offset_of_changeValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t67468338, ___changeValue_55)); }
	inline Color2_t2672154097  get_changeValue_55() const { return ___changeValue_55; }
	inline Color2_t2672154097 * get_address_of_changeValue_55() { return &___changeValue_55; }
	inline void set_changeValue_55(Color2_t2672154097  value)
	{
		___changeValue_55 = value;
	}

	inline static int32_t get_offset_of_plugOptions_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t67468338, ___plugOptions_56)); }
	inline ColorOptions_t3802927537  get_plugOptions_56() const { return ___plugOptions_56; }
	inline ColorOptions_t3802927537 * get_address_of_plugOptions_56() { return &___plugOptions_56; }
	inline void set_plugOptions_56(ColorOptions_t3802927537  value)
	{
		___plugOptions_56 = value;
	}

	inline static int32_t get_offset_of_getter_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t67468338, ___getter_57)); }
	inline DOGetter_1_t27465137 * get_getter_57() const { return ___getter_57; }
	inline DOGetter_1_t27465137 ** get_address_of_getter_57() { return &___getter_57; }
	inline void set_getter_57(DOGetter_1_t27465137 * value)
	{
		___getter_57 = value;
		Il2CppCodeGenWriteBarrier(&___getter_57, value);
	}

	inline static int32_t get_offset_of_setter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t67468338, ___setter_58)); }
	inline DOSetter_1_t1064104965 * get_setter_58() const { return ___setter_58; }
	inline DOSetter_1_t1064104965 ** get_address_of_setter_58() { return &___setter_58; }
	inline void set_setter_58(DOSetter_1_t1064104965 * value)
	{
		___setter_58 = value;
		Il2CppCodeGenWriteBarrier(&___setter_58, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t67468338, ___tweenPlugin_59)); }
	inline ABSTweenPlugin_3_t551274153 * get_tweenPlugin_59() const { return ___tweenPlugin_59; }
	inline ABSTweenPlugin_3_t551274153 ** get_address_of_tweenPlugin_59() { return &___tweenPlugin_59; }
	inline void set_tweenPlugin_59(ABSTweenPlugin_3_t551274153 * value)
	{
		___tweenPlugin_59 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
