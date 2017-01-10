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

// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.TweenCallback
struct TweenCallback_t4095062394;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode3381450112.h"
#include "DOTween_DG_Tweening_TweenCallback4095062394.h"

// System.Single DG.Tweening.Tween::get_fullPosition()
extern "C"  float Tween_get_fullPosition_m1656827423 (Tween_t675658773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Tween::set_fullPosition(System.Single)
extern "C"  void Tween_set_fullPosition_m2873828012 (Tween_t675658773 * __this, float ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Tween::Reset()
extern "C"  void Tween_Reset_m1561947655 (Tween_t675658773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Tween::UpdateDelay(System.Single)
extern "C"  float Tween_UpdateDelay_m2352032301 (Tween_t675658773 * __this, float ___elapsed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Tween::DoGoto(DG.Tweening.Tween,System.Single,System.Int32,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool Tween_DoGoto_m553213920 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, float ___toPosition1, int32_t ___toCompletedLoops2, int32_t ___updateMode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Tween::OnTweenCallback(DG.Tweening.TweenCallback)
extern "C"  bool Tween_OnTweenCallback_m2405609485 (Il2CppObject * __this /* static, unused */, TweenCallback_t4095062394 * ___callback0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Tween::.ctor()
extern "C"  void Tween__ctor_m3915514714 (Tween_t675658773 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
