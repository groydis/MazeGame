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

// DG.Tweening.Plugins.Color2Plugin
struct Color2Plugin_t850426008;
// DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t67468338;
// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2>
struct DOGetter_1_t27465137;
// DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2>
struct DOSetter_1_t1064104965;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Color22672154097.h"
#include "DOTween_DG_Tweening_Plugins_Options_ColorOptions3802927537.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice872982709.h"

// System.Void DG.Tweening.Plugins.Color2Plugin::Reset(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void Color2Plugin_Reset_m2261938170 (Color2Plugin_t850426008 * __this, TweenerCore_3_t67468338 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::SetFrom(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>,System.Boolean)
extern "C"  void Color2Plugin_SetFrom_m563765830 (Color2Plugin_t850426008 * __this, TweenerCore_3_t67468338 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Color2 DG.Tweening.Plugins.Color2Plugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>,DG.Tweening.Color2)
extern "C"  Color2_t2672154097  Color2Plugin_ConvertToStartValue_m1940479465 (Color2Plugin_t850426008 * __this, TweenerCore_3_t67468338 * ___t0, Color2_t2672154097  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void Color2Plugin_SetRelativeEndValue_m3257636079 (Color2Plugin_t850426008 * __this, TweenerCore_3_t67468338 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<DG.Tweening.Color2,DG.Tweening.Color2,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void Color2Plugin_SetChangeValue_m2218276910 (Color2Plugin_t850426008 * __this, TweenerCore_3_t67468338 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Color2Plugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.ColorOptions,System.Single,DG.Tweening.Color2)
extern "C"  float Color2Plugin_GetSpeedBasedDuration_m2968245394 (Color2Plugin_t850426008 * __this, ColorOptions_t3802927537  ___options0, float ___unitsXSecond1, Color2_t2672154097  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::EvaluateAndApply(DG.Tweening.Plugins.Options.ColorOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<DG.Tweening.Color2>,DG.Tweening.Core.DOSetter`1<DG.Tweening.Color2>,System.Single,DG.Tweening.Color2,DG.Tweening.Color2,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Color2Plugin_EvaluateAndApply_m1041386315 (Color2Plugin_t850426008 * __this, ColorOptions_t3802927537  ___options0, Tween_t675658773 * ___t1, bool ___isRelative2, DOGetter_1_t27465137 * ___getter3, DOSetter_1_t1064104965 * ___setter4, float ___elapsed5, Color2_t2672154097  ___startValue6, Color2_t2672154097  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Color2Plugin::.ctor()
extern "C"  void Color2Plugin__ctor_m3870660721 (Color2Plugin_t850426008 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
