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

// DG.Tweening.Plugins.ColorPlugin
struct ColorPlugin_t2735281560;
// DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>
struct TweenerCore_3_t1967117138;
// DG.Tweening.Tween
struct Tween_t675658773;
// DG.Tweening.Core.DOGetter`1<UnityEngine.Color>
struct DOGetter_1_t1549857945;
// DG.Tweening.Core.DOSetter`1<UnityEngine.Color>
struct DOSetter_1_t2586497773;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "DOTween_DG_Tweening_Plugins_Options_ColorOptions3802927537.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice872982709.h"

// System.Void DG.Tweening.Plugins.ColorPlugin::Reset(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void ColorPlugin_Reset_m2353844678 (ColorPlugin_t2735281560 * __this, TweenerCore_3_t1967117138 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.ColorPlugin::SetFrom(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>,System.Boolean)
extern "C"  void ColorPlugin_SetFrom_m2456510138 (ColorPlugin_t2735281560 * __this, TweenerCore_3_t1967117138 * ___t0, bool ___isRelative1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color DG.Tweening.Plugins.ColorPlugin::ConvertToStartValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>,UnityEngine.Color)
extern "C"  Color_t4194546905  ColorPlugin_ConvertToStartValue_m3722635387 (ColorPlugin_t2735281560 * __this, TweenerCore_3_t1967117138 * ___t0, Color_t4194546905  ___value1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.ColorPlugin::SetRelativeEndValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void ColorPlugin_SetRelativeEndValue_m2268840699 (ColorPlugin_t2735281560 * __this, TweenerCore_3_t1967117138 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.ColorPlugin::SetChangeValue(DG.Tweening.Core.TweenerCore`3<UnityEngine.Color,UnityEngine.Color,DG.Tweening.Plugins.Options.ColorOptions>)
extern "C"  void ColorPlugin_SetChangeValue_m1606159778 (ColorPlugin_t2735281560 * __this, TweenerCore_3_t1967117138 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Single DG.Tweening.Plugins.ColorPlugin::GetSpeedBasedDuration(DG.Tweening.Plugins.Options.ColorOptions,System.Single,UnityEngine.Color)
extern "C"  float ColorPlugin_GetSpeedBasedDuration_m1607965213 (ColorPlugin_t2735281560 * __this, ColorOptions_t3802927537  ___options0, float ___unitsXSecond1, Color_t4194546905  ___changeValue2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.ColorPlugin::EvaluateAndApply(DG.Tweening.Plugins.Options.ColorOptions,DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.DOGetter`1<UnityEngine.Color>,DG.Tweening.Core.DOSetter`1<UnityEngine.Color>,System.Single,UnityEngine.Color,UnityEngine.Color,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  void ColorPlugin_EvaluateAndApply_m1124152077 (ColorPlugin_t2735281560 * __this, ColorOptions_t3802927537  ___options0, Tween_t675658773 * ___t1, bool ___isRelative2, DOGetter_1_t1549857945 * ___getter3, DOSetter_1_t2586497773 * ___setter4, float ___elapsed5, Color_t4194546905  ___startValue6, Color_t4194546905  ___changeValue7, float ___duration8, bool ___usingInversePosition9, int32_t ___updateNotice10, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Plugins.ColorPlugin::.ctor()
extern "C"  void ColorPlugin__ctor_m1884576733 (ColorPlugin_t2735281560 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
