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

// DG.Tweening.Plugins.RectPlugin
struct RectPlugin_t547917837;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>
struct TweenerCore_3_t675430313;
// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>
struct DOGetter_1_t1597215656;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>
struct DOSetter_1_t2633855484;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "DOTween_DG_Tweening_Plugins_Options_RectOptions1148721404.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice872982709.h"

// System.Void DG.Tweening.Plugins.RectPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>)
extern "C"  void RectPlugin_Reset_m2460298854 (RectPlugin_t547917837 * __this, TweenerCore_3_t675430313 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>,System.Boolean)
extern "C"  void RectPlugin_SetFrom_m3863078324 (RectPlugin_t547917837 * __this, TweenerCore_3_t675430313 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Rect DG.Tweening.Plugins.RectPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>,UnityEngine.Rect)
extern "C"  Rect_t4241904616  RectPlugin_ConvertToStartValue_m2834420557 (RectPlugin_t547917837 * __this, TweenerCore_3_t675430313 * ___t0, Rect_t4241904616  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>)
extern "C"  void RectPlugin_SetRelativeEndValue_m2415223697 (RectPlugin_t547917837 * __this, TweenerCore_3_t675430313 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Rect,UnityEngine.Rect,DG.Tweening.Plugins.Options.RectOptions>)
extern "C"  void RectPlugin_SetChangeValue_m1714030056 (RectPlugin_t547917837 * __this, TweenerCore_3_t675430313 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.RectPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.RectOptions,System.Single,UnityEngine.Rect)
extern "C"  float RectPlugin_GetSpeedBasedDuration_m3924978056 (RectPlugin_t547917837 * __this, RectOptions_t1148721404  ___options0, float ___unitsXSecond1, Rect_t4241904616  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.RectOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Rect>,DG.Tweening.Core.DOSetter`1<UnityEngine.Rect>,System.Single,UnityEngine.Rect,UnityEngine.Rect,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void RectPlugin_EvaluateAndApply_m59091607 (RectPlugin_t547917837 * __this, RectOptions_t1148721404  ___options0, Tween_t675658773 * ___t1, bool ___isRelative2, DOGetter_1_t1597215656 * ___getter3, DOSetter_1_t2633855484 * ___setter4, float ___elapsed5, Rect_t4241904616  ___startValue6, Rect_t4241904616  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.RectPlugin::.ctor()
extern "C"  void RectPlugin__ctor_m1101551388 (RectPlugin_t547917837 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
