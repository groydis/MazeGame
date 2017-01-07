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

// DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>
struct TweenerCore_3_t2340078120;
// DG.Tweening.Tweener
struct Tweener_t3057794306;
// System.Object
struct Il2CppObject;

#include "codegen/il2cpp-codegen.h"
#include "mscorlib_System_Object4170816371.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode3381450112.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateNotice872982709.h"

// System.Void DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::.ctor()
extern "C"  void TweenerCore_3__ctor_m3871336793_gshared (TweenerCore_3_t2340078120 * __this, const MethodInfo* method);
#define TweenerCore_3__ctor_m3871336793(__this, method) ((  void (*) (TweenerCore_3_t2340078120 *, const MethodInfo*))TweenerCore_3__ctor_m3871336793_gshared)(__this, method)
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::ChangeStartValue(System.Object,System.Single)
extern "C"  Tweener_t3057794306 * TweenerCore_3_ChangeStartValue_m2678046198_gshared (TweenerCore_3_t2340078120 * __this, Il2CppObject * ___newStartValue0, float ___newDuration1, const MethodInfo* method);
#define TweenerCore_3_ChangeStartValue_m2678046198(__this, ___newStartValue0, ___newDuration1, method) ((  Tweener_t3057794306 * (*) (TweenerCore_3_t2340078120 *, Il2CppObject *, float, const MethodInfo*))TweenerCore_3_ChangeStartValue_m2678046198_gshared)(__this, ___newStartValue0, ___newDuration1, method)
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::ChangeEndValue(System.Object,System.Boolean)
extern "C"  Tweener_t3057794306 * TweenerCore_3_ChangeEndValue_m902640691_gshared (TweenerCore_3_t2340078120 * __this, Il2CppObject * ___newEndValue0, bool ___snapStartValue1, const MethodInfo* method);
#define TweenerCore_3_ChangeEndValue_m902640691(__this, ___newEndValue0, ___snapStartValue1, method) ((  Tweener_t3057794306 * (*) (TweenerCore_3_t2340078120 *, Il2CppObject *, bool, const MethodInfo*))TweenerCore_3_ChangeEndValue_m902640691_gshared)(__this, ___newEndValue0, ___snapStartValue1, method)
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::ChangeEndValue(System.Object,System.Single,System.Boolean)
extern "C"  Tweener_t3057794306 * TweenerCore_3_ChangeEndValue_m941517870_gshared (TweenerCore_3_t2340078120 * __this, Il2CppObject * ___newEndValue0, float ___newDuration1, bool ___snapStartValue2, const MethodInfo* method);
#define TweenerCore_3_ChangeEndValue_m941517870(__this, ___newEndValue0, ___newDuration1, ___snapStartValue2, method) ((  Tweener_t3057794306 * (*) (TweenerCore_3_t2340078120 *, Il2CppObject *, float, bool, const MethodInfo*))TweenerCore_3_ChangeEndValue_m941517870_gshared)(__this, ___newEndValue0, ___newDuration1, ___snapStartValue2, method)
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::ChangeValues(System.Object,System.Object,System.Single)
extern "C"  Tweener_t3057794306 * TweenerCore_3_ChangeValues_m2823088177_gshared (TweenerCore_3_t2340078120 * __this, Il2CppObject * ___newStartValue0, Il2CppObject * ___newEndValue1, float ___newDuration2, const MethodInfo* method);
#define TweenerCore_3_ChangeValues_m2823088177(__this, ___newStartValue0, ___newEndValue1, ___newDuration2, method) ((  Tweener_t3057794306 * (*) (TweenerCore_3_t2340078120 *, Il2CppObject *, Il2CppObject *, float, const MethodInfo*))TweenerCore_3_ChangeValues_m2823088177_gshared)(__this, ___newStartValue0, ___newEndValue1, ___newDuration2, method)
// DG.Tweening.Tweener DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::SetFrom(System.Boolean)
extern "C"  Tweener_t3057794306 * TweenerCore_3_SetFrom_m690514785_gshared (TweenerCore_3_t2340078120 * __this, bool ___relative0, const MethodInfo* method);
#define TweenerCore_3_SetFrom_m690514785(__this, ___relative0, method) ((  Tweener_t3057794306 * (*) (TweenerCore_3_t2340078120 *, bool, const MethodInfo*))TweenerCore_3_SetFrom_m690514785_gshared)(__this, ___relative0, method)
// System.Void DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::Reset()
extern "C"  void TweenerCore_3_Reset_m1517769734_gshared (TweenerCore_3_t2340078120 * __this, const MethodInfo* method);
#define TweenerCore_3_Reset_m1517769734(__this, method) ((  void (*) (TweenerCore_3_t2340078120 *, const MethodInfo*))TweenerCore_3_Reset_m1517769734_gshared)(__this, method)
// System.Boolean DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::Validate()
extern "C"  bool TweenerCore_3_Validate_m2040796617_gshared (TweenerCore_3_t2340078120 * __this, const MethodInfo* method);
#define TweenerCore_3_Validate_m2040796617(__this, method) ((  bool (*) (TweenerCore_3_t2340078120 *, const MethodInfo*))TweenerCore_3_Validate_m2040796617_gshared)(__this, method)
// System.Single DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::UpdateDelay(System.Single)
extern "C"  float TweenerCore_3_UpdateDelay_m410919630_gshared (TweenerCore_3_t2340078120 * __this, float ___elapsed0, const MethodInfo* method);
#define TweenerCore_3_UpdateDelay_m410919630(__this, ___elapsed0, method) ((  float (*) (TweenerCore_3_t2340078120 *, float, const MethodInfo*))TweenerCore_3_UpdateDelay_m410919630_gshared)(__this, ___elapsed0, method)
// System.Boolean DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::Startup()
extern "C"  bool TweenerCore_3_Startup_m3757918412_gshared (TweenerCore_3_t2340078120 * __this, const MethodInfo* method);
#define TweenerCore_3_Startup_m3757918412(__this, method) ((  bool (*) (TweenerCore_3_t2340078120 *, const MethodInfo*))TweenerCore_3_Startup_m3757918412_gshared)(__this, method)
// System.Boolean DG.Tweening.Core.TweenerCore`3<System.Int64,System.Int64,DG.Tweening.Plugins.Options.NoOptions>::ApplyTween(System.Single,System.Int32,System.Int32,System.Boolean,DG.Tweening.Core.Enums.UpdateMode,DG.Tweening.Core.Enums.UpdateNotice)
extern "C"  bool TweenerCore_3_ApplyTween_m1087086735_gshared (TweenerCore_3_t2340078120 * __this, float ___prevPosition0, int32_t ___prevCompletedLoops1, int32_t ___newCompletedSteps2, bool ___useInversePosition3, int32_t ___updateMode4, int32_t ___updateNotice5, const MethodInfo* method);
#define TweenerCore_3_ApplyTween_m1087086735(__this, ___prevPosition0, ___prevCompletedLoops1, ___newCompletedSteps2, ___useInversePosition3, ___updateMode4, ___updateNotice5, method) ((  bool (*) (TweenerCore_3_t2340078120 *, float, int32_t, int32_t, bool, int32_t, int32_t, const MethodInfo*))TweenerCore_3_ApplyTween_m1087086735_gshared)(__this, ___prevPosition0, ___prevCompletedLoops1, ___newCompletedSteps2, ___useInversePosition3, ___updateMode4, ___updateNotice5, method)
