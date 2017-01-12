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

// DG.Tweening.Plugins.UintPlugin
struct UintPlugin_t3309538563;
// DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>
struct TweenerCore_3_t4126622711;
// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.Core.DOGetter`1<System.UInt32>
struct DOGetter_1_t1674946317;
// DG.Tweening.Core.DOSetter`1<System.UInt32>
struct DOSetter_1_t2711586145;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_UintOptions859617990.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice872982709.h"

// System.Void DG.Tweening.Plugins.UintPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>)
extern "C"  void UintPlugin_Reset_m1885391646 (UintPlugin_t3309538563 * __this, TweenerCore_3_t4126622711 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>,System.Boolean)
extern "C"  void UintPlugin_SetFrom_m3300958524 (UintPlugin_t3309538563 * __this, TweenerCore_3_t4126622711 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.UInt32 DG.Tweening.Plugins.UintPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>,System.UInt32)
extern "C"  uint32_t UintPlugin_ConvertToStartValue_m3906271391 (UintPlugin_t3309538563 * __this, TweenerCore_3_t4126622711 * ___t0, uint32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>)
extern "C"  void UintPlugin_SetRelativeEndValue_m2078397961 (UintPlugin_t3309538563 * __this, TweenerCore_3_t4126622711 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.UInt32,System.UInt32,DG.Tweening.Plugins.Options.UintOptions>)
extern "C"  void UintPlugin_SetChangeValue_m3180304628 (UintPlugin_t3309538563 * __this, TweenerCore_3_t4126622711 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.UintPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.UintOptions,System.Single,System.UInt32)
extern "C"  float UintPlugin_GetSpeedBasedDuration_m612963971 (UintPlugin_t3309538563 * __this, UintOptions_t859617990  ___options0, float ___unitsXSecond1, uint32_t ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.UintOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.UInt32>,DG.Tweening.Core.DOSetter`1<System.UInt32>,System.Single,System.UInt32,System.UInt32,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void UintPlugin_EvaluateAndApply_m1637652765 (UintPlugin_t3309538563 * __this, UintOptions_t859617990  ___options0, Tween_t675658773 * ___t1, bool ___isRelative2, DOGetter_1_t1674946317 * ___getter3, DOSetter_1_t2711586145 * ___setter4, float ___elapsed5, uint32_t ___startValue6, uint32_t ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.UintPlugin::.ctor()
extern "C"  void UintPlugin__ctor_m876318438 (UintPlugin_t3309538563 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
