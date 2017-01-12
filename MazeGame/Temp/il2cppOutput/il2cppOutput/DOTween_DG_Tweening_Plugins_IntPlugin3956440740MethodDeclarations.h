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

// DG.Tweening.Plugins.IntPlugin
struct IntPlugin_t3956440740;
// DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t3986127068;
// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.Core.DOGetter`1<System.Int32>
struct DOGetter_1_t2804116836;
// DG.Tweening.Core.DOSetter`1<System.Int32>
struct DOSetter_1_t3840756664;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Plugins_Options_NoOptions385204223.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice872982709.h"

// System.Void DG.Tweening.Plugins.IntPlugin::Reset(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void IntPlugin_Reset_m53643796 (IntPlugin_t3956440740 * __this, TweenerCore_3_t3986127068 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>,System.Boolean)
extern "C"  void IntPlugin_SetFrom_m3252350790 (IntPlugin_t3956440740 * __this, TweenerCore_3_t3986127068 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Plugins.IntPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>,System.Int32)
extern "C"  int32_t IntPlugin_ConvertToStartValue_m14477251 (IntPlugin_t3956440740 * __this, TweenerCore_3_t3986127068 * ___t0, int32_t ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void IntPlugin_SetRelativeEndValue_m433758655 (IntPlugin_t3956440740 * __this, TweenerCore_3_t3986127068 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<System.Int32,System.Int32,DG.Tweening.Plugins.Options.NoOptions>)
extern "C"  void IntPlugin_SetChangeValue_m635967264 (IntPlugin_t3956440740 * __this, TweenerCore_3_t3986127068 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.IntPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.NoOptions,System.Single,System.Int32)
extern "C"  float IntPlugin_GetSpeedBasedDuration_m2166726052 (IntPlugin_t3956440740 * __this, NoOptions_t385204223  ___options0, float ___unitsXSecond1, int32_t ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.NoOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<System.Int32>,DG.Tweening.Core.DOSetter`1<System.Int32>,System.Single,System.Int32,System.Int32,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void IntPlugin_EvaluateAndApply_m3418362625 (IntPlugin_t3956440740 * __this, NoOptions_t385204223  ___options0, Tween_t675658773 * ___t1, bool ___isRelative2, DOGetter_1_t2804116836 * ___getter3, DOSetter_1_t3840756664 * ___setter4, float ___elapsed5, int32_t ___startValue6, int32_t ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.IntPlugin::.ctor()
extern "C"  void IntPlugin__ctor_m1224723921 (IntPlugin_t3956440740 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
