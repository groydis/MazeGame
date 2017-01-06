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

// DG.Tweening.Plugins.Vector3ArrayPlugin
struct Vector3ArrayPlugin_t3415920978;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>
struct TweenerCore_3_t1410186219;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t1637377606;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t2674017434;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "DOTween_DG_Tweening_Plugins_Options_Vector3ArrayOpti15364183.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice872982709.h"

// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>)
extern "C"  void Vector3ArrayPlugin_Reset_m754977442 (Vector3ArrayPlugin_t3415920978 * __this, TweenerCore_3_t1410186219 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>,System.Boolean)
extern "C"  void Vector3ArrayPlugin_SetFrom_m1926153528 (Vector3ArrayPlugin_t3415920978 * __this, TweenerCore_3_t1410186219 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3[] DG.Tweening.Plugins.Vector3ArrayPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>,UnityEngine.Vector3)
extern "C"  Vector3U5BU5D_t215400611* Vector3ArrayPlugin_ConvertToStartValue_m3999950783 (Vector3ArrayPlugin_t3415920978 * __this, TweenerCore_3_t1410186219 * ___t0, Vector3_t4282066566  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>)
extern "C"  void Vector3ArrayPlugin_SetRelativeEndValue_m2293439757 (Vector3ArrayPlugin_t3415920978 * __this, TweenerCore_3_t1410186219 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,UnityEngine.Vector3[],DG.Tweening.Plugins.Options.Vector3ArrayOptions>)
extern "C"  void Vector3ArrayPlugin_SetChangeValue_m3959887802 (Vector3ArrayPlugin_t3415920978 * __this, TweenerCore_3_t1410186219 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Vector3ArrayPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.Vector3ArrayOptions,System.Single,UnityEngine.Vector3[])
extern "C"  float Vector3ArrayPlugin_GetSpeedBasedDuration_m3606001438 (Vector3ArrayPlugin_t3415920978 * __this, Vector3ArrayOptions_t15364183  ___options0, float ___unitsXSecond1, Vector3U5BU5D_t215400611* ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.Vector3ArrayOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,System.Single,UnityEngine.Vector3[],UnityEngine.Vector3[],System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Vector3ArrayPlugin_EvaluateAndApply_m1477747427 (Vector3ArrayPlugin_t3415920978 * __this, Vector3ArrayOptions_t15364183  ___options0, Tween_t675658773 * ___t1, bool ___isRelative2, DOGetter_1_t1637377606 * ___getter3, DOSetter_1_t2674017434 * ___setter4, float ___elapsed5, Vector3U5BU5D_t215400611* ___startValue6, Vector3U5BU5D_t215400611* ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector3ArrayPlugin::.ctor()
extern "C"  void Vector3ArrayPlugin__ctor_m3342952823 (Vector3ArrayPlugin_t3415920978 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
