#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>
struct DOGetter_1_t1597215656;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>
struct DOSetter_1_t2633855484;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct ABSTweenPlugin_3_t1159236128;
// System.String
struct String_t;

#include "DOTween_DG_Tweening_Tweener3057794306.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "DOTween_DG_Tweening_Plugins_Options_RectOptions1148721404.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct  TweenerCore_3_t675430313  : public Tweener_t3057794306
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Rect_t4241904616  ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Rect_t4241904616  ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Rect_t4241904616  ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	RectOptions_t1148721404  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t1597215656 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t2633855484 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t1159236128 * ___tweenPlugin_59;

public:
	inline static int32_t get_offset_of_startValue_53() { return static_cast<int32_t>(offsetof(TweenerCore_3_t675430313, ___startValue_53)); }
	inline Rect_t4241904616  get_startValue_53() const { return ___startValue_53; }
	inline Rect_t4241904616 * get_address_of_startValue_53() { return &___startValue_53; }
	inline void set_startValue_53(Rect_t4241904616  value)
	{
		___startValue_53 = value;
	}

	inline static int32_t get_offset_of_endValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t675430313, ___endValue_54)); }
	inline Rect_t4241904616  get_endValue_54() const { return ___endValue_54; }
	inline Rect_t4241904616 * get_address_of_endValue_54() { return &___endValue_54; }
	inline void set_endValue_54(Rect_t4241904616  value)
	{
		___endValue_54 = value;
	}

	inline static int32_t get_offset_of_changeValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t675430313, ___changeValue_55)); }
	inline Rect_t4241904616  get_changeValue_55() const { return ___changeValue_55; }
	inline Rect_t4241904616 * get_address_of_changeValue_55() { return &___changeValue_55; }
	inline void set_changeValue_55(Rect_t4241904616  value)
	{
		___changeValue_55 = value;
	}

	inline static int32_t get_offset_of_plugOptions_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t675430313, ___plugOptions_56)); }
	inline RectOptions_t1148721404  get_plugOptions_56() const { return ___plugOptions_56; }
	inline RectOptions_t1148721404 * get_address_of_plugOptions_56() { return &___plugOptions_56; }
	inline void set_plugOptions_56(RectOptions_t1148721404  value)
	{
		___plugOptions_56 = value;
	}

	inline static int32_t get_offset_of_getter_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t675430313, ___getter_57)); }
	inline DOGetter_1_t1597215656 * get_getter_57() const { return ___getter_57; }
	inline DOGetter_1_t1597215656 ** get_address_of_getter_57() { return &___getter_57; }
	inline void set_getter_57(DOGetter_1_t1597215656 * value)
	{
		___getter_57 = value;
		Il2CppCodeGenWriteBarrier(&___getter_57, value);
	}

	inline static int32_t get_offset_of_setter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t675430313, ___setter_58)); }
	inline DOSetter_1_t2633855484 * get_setter_58() const { return ___setter_58; }
	inline DOSetter_1_t2633855484 ** get_address_of_setter_58() { return &___setter_58; }
	inline void set_setter_58(DOSetter_1_t2633855484 * value)
	{
		___setter_58 = value;
		Il2CppCodeGenWriteBarrier(&___setter_58, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t675430313, ___tweenPlugin_59)); }
	inline ABSTweenPlugin_3_t1159236128 * get_tweenPlugin_59() const { return ___tweenPlugin_59; }
	inline ABSTweenPlugin_3_t1159236128 ** get_address_of_tweenPlugin_59() { return &___tweenPlugin_59; }
	inline void set_tweenPlugin_59(ABSTweenPlugin_3_t1159236128 * value)
	{
		___tweenPlugin_59 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
