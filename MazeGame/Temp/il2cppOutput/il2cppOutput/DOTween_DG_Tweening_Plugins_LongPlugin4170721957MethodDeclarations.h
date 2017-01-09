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

// DG.Tweening.Plugins.LongPlugin
struct LongPlugin_t4170721957;
// DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t2340078120;
// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.Core.DOGetter`1<System.Int64>
struct DOGetter_1_t2804116931;
// DG.Tweening.Core.DOSetter`1<System.Int64>
struct DOSetter_1_t3840756759;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions385204223.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice872982709.h"

// System.Void DG.Tweening.Plugins.LongPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void LongPlugin_Reset_m78693473 (LongPlugin_t4170721957 * __this, TweenerCore_3_t2340078120 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>,System.Boolean)
extern "C"  void LongPlugin_SetFrom_m3228754073 (LongPlugin_t4170721957 * __this, TweenerCore_3_t2340078120 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int64 DG.Tweening.Plugins.LongPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>,System.Int64)
extern "C"  int64_t LongPlugin_ConvertToStartValue_m34648786 (LongPlugin_t4170721957 * __this, TweenerCore_3_t2340078120 * ___t0, int64_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void LongPlugin_SetRelativeEndValue_m3765565772 (LongPlugin_t4170721957 * __this, TweenerCore_3_t2340078120 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void LongPlugin_SetChangeValue_m3746520115 (LongPlugin_t4170721957 * __this, TweenerCore_3_t2340078120 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.LongPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,System.Int64)
extern "C"  float LongPlugin_GetSpeedBasedDuration_m1879276992 (LongPlugin_t4170721957 * __this, NoOptions_t385204223  ___options0, float ___unitsXSecond1, int64_t ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.Int64>,DG.Tweening.Core.DOSetter`1<System.Int64>,System.Single,System.Int64,System.Int64,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void LongPlugin_EvaluateAndApply_m3886028054 (LongPlugin_t4170721957 * __this, NoOptions_t385204223  ___options0, Tween_t675658773 * ___t1, bool ___isRelative2, DOGetter_1_t2804116931 * ___getter3, DOSetter_1_t3840756759 * ___setter4, float ___elapsed5, int64_t ___startValue6, int64_t ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.LongPlugin::.ctor()
extern "C"  void LongPlugin__ctor_m541140868 (LongPlugin_t4170721957 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
