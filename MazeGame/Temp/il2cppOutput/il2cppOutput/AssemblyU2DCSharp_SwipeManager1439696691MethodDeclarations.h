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

// SwipeManager
struct SwipeManager_t1439696691;
// SwipeManager/OnSwipeDetectedHandler
struct OnSwipeDetectedHandler_t2219817673;

#include "codegen/il2cpp-codegen.h"
#include "AssemblyU2DCSharp_SwipeManager_OnSwipeDetectedHand2219817673.h"
#include "UnityEngine_UnityEngine_Vector24282066565.h"
#include "AssemblyU2DCSharp_Swipe80301850.h"

// System.Void SwipeManager::.ctor()
extern "C"  void SwipeManager__ctor_m1756452040 (SwipeManager_t1439696691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeManager::.cctor()
extern "C"  void SwipeManager__cctor_m2428309477 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeManager::add_OnSwipeDetected(SwipeManager/OnSwipeDetectedHandler)
extern "C"  void SwipeManager_add_OnSwipeDetected_m3485873956 (Il2CppObject * __this /* static, unused */, OnSwipeDetectedHandler_t2219817673 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeManager::remove_OnSwipeDetected(SwipeManager/OnSwipeDetectedHandler)
extern "C"  void SwipeManager_remove_OnSwipeDetected_m2240197131 (Il2CppObject * __this /* static, unused */, OnSwipeDetectedHandler_t2219817673 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeManager::Awake()
extern "C"  void SwipeManager_Awake_m1994057259 (SwipeManager_t1439696691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeManager::Update()
extern "C"  void SwipeManager_Update_m342300485 (SwipeManager_t1439696691 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void SwipeManager::DetectSwipe()
extern "C"  void SwipeManager_DetectSwipe_m3903936189 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeManager::IsSwipingRight()
extern "C"  bool SwipeManager_IsSwipingRight_m915066591 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeManager::IsSwipingLeft()
extern "C"  bool SwipeManager_IsSwipingLeft_m2209333318 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeManager::IsSwipingUp()
extern "C"  bool SwipeManager_IsSwipingUp_m2760114522 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeManager::IsSwipingDown()
extern "C"  bool SwipeManager_IsSwipingDown_m1990036001 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeManager::IsSwipingDownLeft()
extern "C"  bool SwipeManager_IsSwipingDownLeft_m3146096776 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeManager::IsSwipingDownRight()
extern "C"  bool SwipeManager_IsSwipingDownRight_m4184930013 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeManager::IsSwipingUpLeft()
extern "C"  bool SwipeManager_IsSwipingUpLeft_m377213761 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeManager::IsSwipingUpRight()
extern "C"  bool SwipeManager_IsSwipingUpRight_m4248902468 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeManager::GetTouchInput()
extern "C"  bool SwipeManager_GetTouchInput_m2298971699 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeManager::GetMouseInput()
extern "C"  bool SwipeManager_GetMouseInput_m1607428621 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeManager::IsDirection(UnityEngine.Vector2,UnityEngine.Vector2)
extern "C"  bool SwipeManager_IsDirection_m3114322727 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___direction0, Vector2_t4282066565  ___cardinalDirection1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// Swipe SwipeManager::GetSwipeDirByTouch(UnityEngine.Vector2)
extern "C"  int32_t SwipeManager_GetSwipeDirByTouch_m2116532358 (Il2CppObject * __this /* static, unused */, Vector2_t4282066565  ___currentSwipe0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean SwipeManager::IsSwipingDirection(Swipe)
extern "C"  bool SwipeManager_IsSwipingDirection_m2230816150 (Il2CppObject * __this /* static, unused */, int32_t ___swipeDir0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
