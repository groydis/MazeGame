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

// DG.Tweening.Plugins.PathPlugin
struct PathPlugin_t1378690446;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct TweenerCore_3_t4111199757;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>
struct ABSTweenPlugin_3_t300038276;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t4203839645;
// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>
struct DOGetter_1_t1637377606;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>
struct DOSetter_1_t2674017434;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "DOTween_DG_Tweening_Plugins_Options_PathOptions1132868507.h"
#include "DOTween_DG_Tweening_Plugins_Core_PathCore_Path4203839645.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice872982709.h"

// System.Void DG.Tweening.Plugins.PathPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>)
extern "C"  void PathPlugin_Reset_m849982479 (PathPlugin_t1378690446 * __this, TweenerCore_3_t4111199757 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,System.Boolean)
extern "C"  void PathPlugin_SetFrom_m1136053393 (PathPlugin_t1378690446 * __this, TweenerCore_3_t4111199757 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Plugins.Core.ABSTweenPlugin`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions> DG.Tweening.Plugins.PathPlugin::Get()
extern "C"  ABSTweenPlugin_3_t300038276 * PathPlugin_Get_m3361625602 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.Plugins.PathPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>,UnityEngine.Vector3)
extern "C"  Path_t4203839645 * PathPlugin_ConvertToStartValue_m2059156489 (PathPlugin_t1378690446 * __this, TweenerCore_3_t4111199757 * ___t0, Vector3_t4282066566  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>)
extern "C"  void PathPlugin_SetRelativeEndValue_m3885196036 (PathPlugin_t1378690446 * __this, TweenerCore_3_t4111199757 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Vector3,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Options.PathOptions>)
extern "C"  void PathPlugin_SetChangeValue_m2688024047 (PathPlugin_t1378690446 * __this, TweenerCore_3_t4111199757 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.PathPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.PathOptions,System.Single,DG.Tweening.Plugins.Core.PathCore.Path)
extern "C"  float PathPlugin_GetSpeedBasedDuration_m843470247 (PathPlugin_t1378690446 * __this, PathOptions_t1132868507  ___options0, float ___unitsXSecond1, Path_t4203839645 * ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Vector3>,DG.Tweening.Core.DOSetter`1<UnityEngine.Vector3>,System.Single,DG.Tweening.Plugins.Core.PathCore.Path,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void PathPlugin_EvaluateAndApply_m205930117 (PathPlugin_t1378690446 * __this, PathOptions_t1132868507  ___options0, Tween_t675658773 * ___t1, bool ___isRelative2, DOGetter_1_t1637377606 * ___getter3, DOSetter_1_t2674017434 * ___setter4, float ___elapsed5, Path_t4203839645 * ___startValue6, Path_t4203839645 * ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::SetOrientation(DG.Tweening.Plugins.Options.PathOptions,DG.Tweening.Tween,DG.Tweening.Plugins.Core.PathCore.Path,System.Single,UnityEngine.Vector3,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void PathPlugin_SetOrientation_m3933453335 (PathPlugin_t1378690446 * __this, PathOptions_t1132868507  ___options0, Tween_t675658773 * ___t1, Path_t4203839645 * ___path2, float ___pathPerc3, Vector3_t4282066566  ___tPos4, int32_t ___updateNotice5, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.PathPlugin::.ctor()
extern "C"  void PathPlugin__ctor_m1551721147 (PathPlugin_t1378690446 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
