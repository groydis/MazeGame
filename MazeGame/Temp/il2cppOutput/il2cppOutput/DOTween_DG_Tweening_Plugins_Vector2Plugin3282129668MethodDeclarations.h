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

// DG.Tweening.Plugins.Vector2Plugin
struct Vector2Plugin_t3282129668;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>
struct TweenerCore_3_t980437966;
// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>
struct DOGetter_1_t1637377605;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>
struct DOSetter_1_t2674017433;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "DOTween_DG_Tweening_Plugins_Options_VectorOptions798145341.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice872982709.h"

// System.Void DG.Tweening.Plugins.Vector2Plugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector2Plugin_Reset_m1376680426 (Vector2Plugin_t3282129668 * __this, TweenerCore_3_t980437966 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>,System.Boolean)
extern "C"  void Vector2Plugin_SetFrom_m2738844528 (Vector2Plugin_t3282129668 * __this, TweenerCore_3_t980437966 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector2 DG.Tweening.Plugins.Vector2Plugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>,UnityEngine.Vector2)
extern "C"  Vector2_t4282066565  Vector2Plugin_ConvertToStartValue_m3633437333 (Vector2Plugin_t3282129668 * __this, TweenerCore_3_t980437966 * ___t0, Vector2_t4282066565  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector2Plugin_SetRelativeEndValue_m675919061 (Vector2Plugin_t3282129668 * __this, TweenerCore_3_t980437966 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector2,UnityEngine.Vector2,DG.Tweening.Plugins.Options.VectorOptions>)
extern "C"  void Vector2Plugin_SetChangeValue_m1058552118 (Vector2Plugin_t3282129668 * __this, TweenerCore_3_t980437966 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.Vector2Plugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.VectorOptions,System.Single,UnityEngine.Vector2)
extern "C"  float Vector2Plugin_GetSpeedBasedDuration_m1311381865 (Vector2Plugin_t3282129668 * __this, VectorOptions_t798145341  ___options0, float ___unitsXSecond1, Vector2_t4282066565  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::EvaluateAndApply(DG.Tweening.Plugins.Options.VectorOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector2>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector2>,System.Single,UnityEngine.Vector2,UnityEngine.Vector2,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void Vector2Plugin_EvaluateAndApply_m4033664081 (Vector2Plugin_t3282129668 * __this, VectorOptions_t798145341  ___options0, Tween_t675658773 * ___t1, bool ___isRelative2, DOGetter_1_t1637377605 * ___getter3, DOSetter_1_t2674017433 * ___setter4, float ___elapsed5, Vector2_t4282066565  ___startValue6, Vector2_t4282066565  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.Vector2Plugin::.ctor()
extern "C"  void Vector2Plugin__ctor_m1993632369 (Vector2Plugin_t3282129668 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
