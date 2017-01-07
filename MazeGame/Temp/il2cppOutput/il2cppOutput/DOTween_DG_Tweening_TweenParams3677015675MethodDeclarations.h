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

// DG.Tweening.TweenParams
struct TweenParams_t3677015675;
// System.Object
struct Il2CppObject;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// DG.Tweening.EaseFunction
struct EaseFunction_t48414120;
// DG.Tweening.TweenCallback
struct TweenCallback_t4095062394;
// DG.Tweening.TweenCallback`1<System.Int32>
struct TweenCallback_1_t3678288188;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "mscorlib_System_Nullable_1_gen514955515.h"
#include "DOTween_DG_Tweening_Ease1564688304.h"
#include "mscorlib_System_Nullable_1_gen81078199.h"
#include "UnityEngine_UnityEngine_AnimationCurve3667593487.h"
#include "DOTween_DG_Tweening_EaseFunction48414120.h"
#include "DOTween_DG_Tweening_UpdateType3196617317.h"
#include "DOTween_DG_Tweening_TweenCallback4095062394.h"

// System.Void DG.Tweening.TweenParams::.ctor()
extern "C"  void TweenParams__ctor_m3864746804 (TweenParams_t3677015675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::Clear()
extern "C"  TweenParams_t3677015675 * TweenParams_Clear_m2366292877 (TweenParams_t3677015675 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetAutoKill(System.Boolean)
extern "C"  TweenParams_t3677015675 * TweenParams_SetAutoKill_m4026438886 (TweenParams_t3677015675 * __this, bool ___autoKillOnCompletion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetId(System.Object)
extern "C"  TweenParams_t3677015675 * TweenParams_SetId_m665514583 (TweenParams_t3677015675 * __this, Il2CppObject * ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetTarget(System.Object)
extern "C"  TweenParams_t3677015675 * TweenParams_SetTarget_m318499745 (TweenParams_t3677015675 * __this, Il2CppObject * ___target0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetLoops(System.Int32,System.Nullable`1<DG.Tweening.LoopType>)
extern "C"  TweenParams_t3677015675 * TweenParams_SetLoops_m2701380547 (TweenParams_t3677015675 * __this, int32_t ___loops0, Nullable_1_t514955515  ___loopType1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetEase(DG.Tweening.Ease,System.Nullable`1<System.Single>,System.Nullable`1<System.Single>)
extern "C"  TweenParams_t3677015675 * TweenParams_SetEase_m1259794614 (TweenParams_t3677015675 * __this, int32_t ___ease0, Nullable_1_t81078199  ___overshootOrAmplitude1, Nullable_1_t81078199  ___period2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetEase(UnityEngine.AnimationCurve)
extern "C"  TweenParams_t3677015675 * TweenParams_SetEase_m1803970798 (TweenParams_t3677015675 * __this, AnimationCurve_t3667593487 * ___animCurve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetEase(DG.Tweening.EaseFunction)
extern "C"  TweenParams_t3677015675 * TweenParams_SetEase_m294535102 (TweenParams_t3677015675 * __this, EaseFunction_t48414120 * ___customEase0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetRecyclable(System.Boolean)
extern "C"  TweenParams_t3677015675 * TweenParams_SetRecyclable_m1996147045 (TweenParams_t3677015675 * __this, bool ___recyclable0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetUpdate(System.Boolean)
extern "C"  TweenParams_t3677015675 * TweenParams_SetUpdate_m1340810306 (TweenParams_t3677015675 * __this, bool ___isIndependentUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetUpdate(DG.Tweening.UpdateType,System.Boolean)
extern "C"  TweenParams_t3677015675 * TweenParams_SetUpdate_m3100965889 (TweenParams_t3677015675 * __this, int32_t ___updateType0, bool ___isIndependentUpdate1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnStart(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t3677015675 * TweenParams_OnStart_m3775106763 (TweenParams_t3677015675 * __this, TweenCallback_t4095062394 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnPlay(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t3677015675 * TweenParams_OnPlay_m4114563705 (TweenParams_t3677015675 * __this, TweenCallback_t4095062394 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnRewind(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t3677015675 * TweenParams_OnRewind_m2541022354 (TweenParams_t3677015675 * __this, TweenCallback_t4095062394 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnUpdate(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t3677015675 * TweenParams_OnUpdate_m1091766212 (TweenParams_t3677015675 * __this, TweenCallback_t4095062394 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnStepComplete(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t3677015675 * TweenParams_OnStepComplete_m2842578664 (TweenParams_t3677015675 * __this, TweenCallback_t4095062394 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnComplete(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t3677015675 * TweenParams_OnComplete_m1783533908 (TweenParams_t3677015675 * __this, TweenCallback_t4095062394 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnKill(DG.Tweening.TweenCallback)
extern "C"  TweenParams_t3677015675 * TweenParams_OnKill_m377407503 (TweenParams_t3677015675 * __this, TweenCallback_t4095062394 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::OnWaypointChange(DG.Tweening.TweenCallback`1<System.Int32>)
extern "C"  TweenParams_t3677015675 * TweenParams_OnWaypointChange_m854313880 (TweenParams_t3677015675 * __this, TweenCallback_1_t3678288188 * ___action0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetDelay(System.Single)
extern "C"  TweenParams_t3677015675 * TweenParams_SetDelay_m2183859048 (TweenParams_t3677015675 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetRelative(System.Boolean)
extern "C"  TweenParams_t3677015675 * TweenParams_SetRelative_m3060618245 (TweenParams_t3677015675 * __this, bool ___isRelative0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.TweenParams DG.Tweening.TweenParams::SetSpeedBased(System.Boolean)
extern "C"  TweenParams_t3677015675 * TweenParams_SetSpeedBased_m3223418021 (TweenParams_t3677015675 * __this, bool ___isSpeedBased0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.TweenParams::.cctor()
extern "C"  void TweenParams__cctor_m3360937721 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
