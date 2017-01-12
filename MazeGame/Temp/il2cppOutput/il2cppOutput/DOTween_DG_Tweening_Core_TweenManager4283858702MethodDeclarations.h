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

// DG.Tweening.Sequence
struct Sequence_t3817835907;
// DG.Tweening.Tween
struct Tween_t675658773;
// System.Object
struct Il2CppObject;
// System.Object[]
struct ObjectU5BU5D_t1108656482;
// System.Collections.Generic.List`1<DG.Tweening.Tween>
struct List_1_t2043844325;
// DG.Tweening.Tween[]
struct TweenU5BU5D_t2368679928;

#include "codegen/il2cpp-codegen.h"
#include "DOTween_DG_Tweening_Tween675658773.h"
#include "DOTween_DG_Tweening_UpdateType3196617317.h"
#include "DOTween_DG_Tweening_Core_Enums_OperationType160191447.h"
#include "DOTween_DG_Tweening_Core_Enums_FilterType2124533318.h"
#include "mscorlib_System_Object4170816371.h"
#include "DOTween_DG_Tweening_Core_Enums_UpdateMode3381450112.h"
#include "DOTween_DG_Tweening_Core_TweenManager_CapacityIncre499642441.h"

// DG.Tweening.Sequence DG.Tweening.Core.TweenManager::GetSequence()
extern "C"  Sequence_t3817835907 * TweenManager_GetSequence_m820409917 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::SetUpdateType(DG.Tweening.Tween,DG.Tweening.UpdateType,System.Boolean)
extern "C"  void TweenManager_SetUpdateType_m2105083394 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, int32_t ___updateType1, bool ___isIndependentUpdate2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::AddActiveTweenToSequence(DG.Tweening.Tween)
extern "C"  void TweenManager_AddActiveTweenToSequence_m801211459 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::DespawnAll()
extern "C"  int32_t TweenManager_DespawnAll_m3244117765 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::Despawn(DG.Tweening.Tween,System.Boolean)
extern "C"  void TweenManager_Despawn_m4133721302 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, bool ___modifyActiveLists1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::PurgeAll()
extern "C"  void TweenManager_PurgeAll_m2869772806 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::PurgePools()
extern "C"  void TweenManager_PurgePools_m1001072060 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ResetCapacities()
extern "C"  void TweenManager_ResetCapacities_m1451007065 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::SetCapacities(System.Int32,System.Int32)
extern "C"  void TweenManager_SetCapacities_m841848186 (Il2CppObject * __this /* static, unused */, int32_t ___tweenersCapacity0, int32_t ___sequencesCapacity1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::Validate()
extern "C"  int32_t TweenManager_Validate_m4093646836 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::Update(DG.Tweening.UpdateType,System.Single,System.Single)
extern "C"  void TweenManager_Update_m3326434900 (Il2CppObject * __this /* static, unused */, int32_t ___updateType0, float ___deltaTime1, float ___independentTime2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::FilteredOperation(DG.Tweening.Core.Enums.OperationType,DG.Tweening.Core.Enums.FilterType,System.Object,System.Boolean,System.Single,System.Object,System.Object[])
extern "C"  int32_t TweenManager_FilteredOperation_m447207681 (Il2CppObject * __this /* static, unused */, int32_t ___operationType0, int32_t ___filterType1, Il2CppObject * ___id2, bool ___optionalBool3, float ___optionalFloat4, Il2CppObject * ___optionalObj5, ObjectU5BU5D_t1108656482* ___optionalArray6, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Complete(DG.Tweening.Tween,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool TweenManager_Complete_m278286300 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, bool ___modifyActiveLists1, int32_t ___updateMode2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Flip(DG.Tweening.Tween)
extern "C"  bool TweenManager_Flip_m3475222510 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ForceInit(DG.Tweening.Tween,System.Boolean)
extern "C"  void TweenManager_ForceInit_m2487491415 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, bool ___isSequenced1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Goto(DG.Tweening.Tween,System.Single,System.Boolean,DG.Tweening.Core.Enums.UpdateMode)
extern "C"  bool TweenManager_Goto_m3639668801 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, float ___to1, bool ___andPlay2, int32_t ___updateMode3, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Pause(DG.Tweening.Tween)
extern "C"  bool TweenManager_Pause_m2347938323 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Play(DG.Tweening.Tween)
extern "C"  bool TweenManager_Play_m1962707399 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::PlayBackwards(DG.Tweening.Tween)
extern "C"  bool TweenManager_PlayBackwards_m3213173549 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::PlayForward(DG.Tweening.Tween)
extern "C"  bool TweenManager_PlayForward_m142640632 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Restart(DG.Tweening.Tween,System.Boolean)
extern "C"  bool TweenManager_Restart_m3412874403 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, bool ___includeDelay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::Rewind(DG.Tweening.Tween,System.Boolean)
extern "C"  bool TweenManager_Rewind_m3453837533 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, bool ___includeDelay1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::SmoothRewind(DG.Tweening.Tween)
extern "C"  bool TweenManager_SmoothRewind_m3106907602 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean DG.Tweening.Core.TweenManager::TogglePause(DG.Tweening.Tween)
extern "C"  bool TweenManager_TogglePause_m3739906119 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::TotalPooledTweens()
extern "C"  int32_t TweenManager_TotalPooledTweens_m600279787 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 DG.Tweening.Core.TweenManager::TotalPlayingTweens()
extern "C"  int32_t TweenManager_TotalPlayingTweens_m1809316848 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::GetActiveTweens(System.Boolean)
extern "C"  List_1_t2043844325 * TweenManager_GetActiveTweens_m3088081041 (Il2CppObject * __this /* static, unused */, bool ___playing0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::GetTweensById(System.Object,System.Boolean)
extern "C"  List_1_t2043844325 * TweenManager_GetTweensById_m1146229775 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___id0, bool ___playingOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Collections.Generic.List`1<DG.Tweening.Tween> DG.Tweening.Core.TweenManager::GetTweensByTarget(System.Object,System.Boolean)
extern "C"  List_1_t2043844325 * TweenManager_GetTweensByTarget_m1607274757 (Il2CppObject * __this /* static, unused */, Il2CppObject * ___target0, bool ___playingOnly1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::MarkForKilling(DG.Tweening.Tween)
extern "C"  void TweenManager_MarkForKilling_m118408507 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::AddActiveTween(DG.Tweening.Tween)
extern "C"  void TweenManager_AddActiveTween_m1869434239 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ReorganizeActiveTweens()
extern "C"  void TweenManager_ReorganizeActiveTweens_m3502491988 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::DespawnTweens(System.Collections.Generic.List`1<DG.Tweening.Tween>,System.Boolean)
extern "C"  void TweenManager_DespawnTweens_m171906374 (Il2CppObject * __this /* static, unused */, List_1_t2043844325 * ___tweens0, bool ___modifyActiveLists1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::RemoveActiveTween(DG.Tweening.Tween)
extern "C"  void TweenManager_RemoveActiveTween_m3697489248 (Il2CppObject * __this /* static, unused */, Tween_t675658773 * ___t0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::ClearTweenArray(DG.Tweening.Tween[])
extern "C"  void TweenManager_ClearTweenArray_m2361966468 (Il2CppObject * __this /* static, unused */, TweenU5BU5D_t2368679928* ___tweens0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::IncreaseCapacities(DG.Tweening.Core.TweenManager/CapacityIncreaseMode)
extern "C"  void TweenManager_IncreaseCapacities_m4137155233 (Il2CppObject * __this /* static, unused */, int32_t ___increaseMode0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void DG.Tweening.Core.TweenManager::.cctor()
extern "C"  void TweenManager__cctor_m4158543225 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
