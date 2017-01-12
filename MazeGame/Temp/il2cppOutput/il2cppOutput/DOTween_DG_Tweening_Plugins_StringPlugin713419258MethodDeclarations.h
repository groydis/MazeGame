#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>
#include <assert.h>
#include <exception>

// DG.Tweening.Plugins.StringPlugin
struct StringPlugin_t713419258;
// DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>
struct TweenerCore_3_t1960100928;
// System.String
struct String_t;
// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.Core.DOGetter`1<System.String>
struct DOGetter_1_t1657509893;
// DG.Tweening.Core.DOSetter`1<System.String>
struct DOSetter_1_t2694149721;
// System.Text.StringBuilder
struct StringBuilder_t243639308;
// System.Char[]
struct CharU5BU5D_t3324145743;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_String7231557.h"
#include "DOTween_DG_Tweening_Plugins_Options_StringOptions113219759.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice872982709.h"

// System.Void DG.Tweening.Plugins.StringPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>,System.Boolean)
extern "C"  void StringPlugin_SetFrom_m1481154860 (StringPlugin_t713419258 * __this, TweenerCore_3_t1960100928 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>)
extern "C"  void StringPlugin_Reset_m3303411630 (StringPlugin_t713419258 * __this, TweenerCore_3_t1960100928 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String DG.Tweening.Plugins.StringPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>,System.String)
extern "C"  String_t* StringPlugin_ConvertToStartValue_m1860050175 (StringPlugin_t713419258 * __this, TweenerCore_3_t1960100928 * ___t0, String_t* ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>)
extern "C"  void StringPlugin_SetRelativeEndValue_m2390335385 (StringPlugin_t713419258 * __this, TweenerCore_3_t1960100928 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.String,System.String,DG.Tweening.Plugins.Options.StringOptions>)
extern "C"  void StringPlugin_SetChangeValue_m3608637302 (StringPlugin_t713419258 * __this, TweenerCore_3_t1960100928 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.StringPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.StringOptions,System.Single,System.String)
extern "C"  float StringPlugin_GetSpeedBasedDuration_m3300381369 (StringPlugin_t713419258 * __this, StringOptions_t113219759  ___options0, float ___unitsXSecond1, String_t* ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.StringOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.String>,DG.Tweening.Core.DOSetter`1<System.String>,System.Single,System.String,System.String,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void StringPlugin_EvaluateAndApply_m1044842605 (StringPlugin_t713419258 * __this, StringOptions_t113219759  ___options0, Tween_t675658773 * ___t1, bool ___isRelative2, DOGetter_1_t1657509893 * ___getter3, DOSetter_1_t2694149721 * ___setter4, float ___elapsed5, String_t* ___startValue6, String_t* ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Text.StringBuilder DG.Tweening.Plugins.StringPlugin::Append(System.String,System.Int32,System.Int32,System.Boolean)
extern "C"  StringBuilder_t243639308 * StringPlugin_Append_m1731639637 (StringPlugin_t713419258 * __this, String_t* ___value0, int32_t ___startIndex1, int32_t ___length2, bool ___richTextEnabled3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Char[] DG.Tweening.Plugins.StringPlugin::ScrambledCharsToUse(DG.Tweening.Plugins.Options.StringOptions)
extern "C"  CharU5BU5D_t3324145743* StringPlugin_ScrambledCharsToUse_m809956600 (StringPlugin_t713419258 * __this, StringOptions_t113219759  ___options0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::.ctor()
extern "C"  void StringPlugin__ctor_m3716977999 (StringPlugin_t713419258 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.StringPlugin::.cctor()
extern "C"  void StringPlugin__cctor_m3075072062 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
