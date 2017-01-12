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

// DG.Tweening.Core.Easing.EaseCurve
struct EaseCurve_t537469723;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_AnimationCurve3667593487.h"

// System.Void DG.Tweening.Core.Easing.EaseCurve::.ctor(UnityEngine.AnimationCurve)
extern "C"  void EaseCurve__ctor_m3872958390 (EaseCurve_t537469723 * __this, AnimationCurve_t3667593487 * ___animCurve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Core.Easing.EaseCurve::Evaluate(System.Single,System.Single,System.Single,System.Single)
extern "C"  float EaseCurve_Evaluate_m212486625 (EaseCurve_t537469723 * __this, float ___time0, float ___duration1, float ___unusedOvershoot2, float ___unusedPeriod3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
