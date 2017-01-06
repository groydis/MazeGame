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

// DG.Tweening.Plugins.QuaternionPlugin
struct QuaternionPlugin_t1465715271;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>
struct TweenerCore_3_t4267772355;
// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>
struct DOGetter_1_t3203981218;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>
struct DOSetter_1_t4240621046;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"
#include "DOTween_DG_Tweening_Plugins_Options_QuaternionOptio261798402.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice872982709.h"

// System.Void DG.Tweening.Plugins.QuaternionPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>)
extern "C"  void QuaternionPlugin_Reset_m3025157714 (QuaternionPlugin_t1465715271 * __this, TweenerCore_3_t4267772355 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>,System.Boolean)
extern "C"  void QuaternionPlugin_SetFrom_m3734716782 (QuaternionPlugin_t1465715271 * __this, TweenerCore_3_t4267772355 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 DG.Tweening.Plugins.QuaternionPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>,UnityEngine.Quaternion)
extern "C"  Vector3_t4282066566  QuaternionPlugin_ConvertToStartValue_m1926838571 (QuaternionPlugin_t1465715271 * __this, TweenerCore_3_t4267772355 * ___t0, Quaternion_t1553702882  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>)
extern "C"  void QuaternionPlugin_SetRelativeEndValue_m1935444807 (QuaternionPlugin_t1465715271 * __this, TweenerCore_3_t4267772355 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Quaternion,UnityEngine.Vector3,DG.Tweening.Plugins.Options.QuaternionOptions>)
extern "C"  void QuaternionPlugin_SetChangeValue_m3471572548 (QuaternionPlugin_t1465715271 * __this, TweenerCore_3_t4267772355 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.QuaternionPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.QuaternionOptions,System.Single,UnityEngine.Vector3)
extern "C"  float QuaternionPlugin_GetSpeedBasedDuration_m899293546 (QuaternionPlugin_t1465715271 * __this, QuaternionOptions_t261798402  ___options0, float ___unitsXSecond1, Vector3_t4282066566  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.QuaternionOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Quaternion>,DG.Tweening.Core.DOSetter`1<UnityEngine.Quaternion>,System.Single,UnityEngine.Vector3,UnityEngine.Vector3,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void QuaternionPlugin_EvaluateAndApply_m1073407645 (QuaternionPlugin_t1465715271 * __this, QuaternionOptions_t261798402  ___options0, Tween_t675658773 * ___t1, bool ___isRelative2, DOGetter_1_t3203981218 * ___getter3, DOSetter_1_t4240621046 * ___setter4, float ___elapsed5, Vector3_t4282066566  ___startValue6, Vector3_t4282066566  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.QuaternionPlugin::.ctor()
extern "C"  void QuaternionPlugin__ctor_m2925254306 (QuaternionPlugin_t1465715271 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
