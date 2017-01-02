#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t1637377606;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t2674017434;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct ABSTweenPlugin_3_t1893992034;
// System.String
struct String_t;

#include "DOTween_DG_Tweening_Tweener3057794306.h"
#include "DOTween_DG_Tweening_Plugins_Options_Vector3ArrayOpti15364183.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct  TweenerCore_3_t1410186219  : public Tweener_t3057794306
{
public:
	// T2 DG.Tweening.Core.TweenerCore`3::startValue
	Vector3U5BU5D_t215400611* ___startValue_53;
	// T2 DG.Tweening.Core.TweenerCore`3::endValue
	Vector3U5BU5D_t215400611* ___endValue_54;
	// T2 DG.Tweening.Core.TweenerCore`3::changeValue
	Vector3U5BU5D_t215400611* ___changeValue_55;
	// TPlugOptions DG.Tweening.Core.TweenerCore`3::plugOptions
	Vector3ArrayOptions_t15364183  ___plugOptions_56;
	// DG.Tweening.Core.DOGetter`1<T1> DG.Tweening.Core.TweenerCore`3::getter
	DOGetter_1_t1637377606 * ___getter_57;
	// DG.Tweening.Core.DOSetter`1<T1> DG.Tweening.Core.TweenerCore`3::setter
	DOSetter_1_t2674017434 * ___setter_58;
	// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<T1,T2,TPlugOptions> DG.Tweening.Core.TweenerCore`3::tweenPlugin
	ABSTweenPlugin_3_t1893992034 * ___tweenPlugin_59;

public:
	inline static int32_t get_offset_of_startValue_53() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1410186219, ___startValue_53)); }
	inline Vector3U5BU5D_t215400611* get_startValue_53() const { return ___startValue_53; }
	inline Vector3U5BU5D_t215400611** get_address_of_startValue_53() { return &___startValue_53; }
	inline void set_startValue_53(Vector3U5BU5D_t215400611* value)
	{
		___startValue_53 = value;
		Il2CppCodeGenWriteBarrier(&___startValue_53, value);
	}

	inline static int32_t get_offset_of_endValue_54() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1410186219, ___endValue_54)); }
	inline Vector3U5BU5D_t215400611* get_endValue_54() const { return ___endValue_54; }
	inline Vector3U5BU5D_t215400611** get_address_of_endValue_54() { return &___endValue_54; }
	inline void set_endValue_54(Vector3U5BU5D_t215400611* value)
	{
		___endValue_54 = value;
		Il2CppCodeGenWriteBarrier(&___endValue_54, value);
	}

	inline static int32_t get_offset_of_changeValue_55() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1410186219, ___changeValue_55)); }
	inline Vector3U5BU5D_t215400611* get_changeValue_55() const { return ___changeValue_55; }
	inline Vector3U5BU5D_t215400611** get_address_of_changeValue_55() { return &___changeValue_55; }
	inline void set_changeValue_55(Vector3U5BU5D_t215400611* value)
	{
		___changeValue_55 = value;
		Il2CppCodeGenWriteBarrier(&___changeValue_55, value);
	}

	inline static int32_t get_offset_of_plugOptions_56() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1410186219, ___plugOptions_56)); }
	inline Vector3ArrayOptions_t15364183  get_plugOptions_56() const { return ___plugOptions_56; }
	inline Vector3ArrayOptions_t15364183 * get_address_of_plugOptions_56() { return &___plugOptions_56; }
	inline void set_plugOptions_56(Vector3ArrayOptions_t15364183  value)
	{
		___plugOptions_56 = value;
	}

	inline static int32_t get_offset_of_getter_57() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1410186219, ___getter_57)); }
	inline DOGetter_1_t1637377606 * get_getter_57() const { return ___getter_57; }
	inline DOGetter_1_t1637377606 ** get_address_of_getter_57() { return &___getter_57; }
	inline void set_getter_57(DOGetter_1_t1637377606 * value)
	{
		___getter_57 = value;
		Il2CppCodeGenWriteBarrier(&___getter_57, value);
	}

	inline static int32_t get_offset_of_setter_58() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1410186219, ___setter_58)); }
	inline DOSetter_1_t2674017434 * get_setter_58() const { return ___setter_58; }
	inline DOSetter_1_t2674017434 ** get_address_of_setter_58() { return &___setter_58; }
	inline void set_setter_58(DOSetter_1_t2674017434 * value)
	{
		___setter_58 = value;
		Il2CppCodeGenWriteBarrier(&___setter_58, value);
	}

	inline static int32_t get_offset_of_tweenPlugin_59() { return static_cast<int32_t>(offsetof(TweenerCore_3_t1410186219, ___tweenPlugin_59)); }
	inline ABSTweenPlugin_3_t1893992034 * get_tweenPlugin_59() const { return ___tweenPlugin_59; }
	inline ABSTweenPlugin_3_t1893992034 ** get_address_of_tweenPlugin_59() { return &___tweenPlugin_59; }
	inline void set_tweenPlugin_59(ABSTweenPlugin_3_t1893992034 * value)
	{
		___tweenPlugin_59 = value;
		Il2CppCodeGenWriteBarrier(&___tweenPlugin_59, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
