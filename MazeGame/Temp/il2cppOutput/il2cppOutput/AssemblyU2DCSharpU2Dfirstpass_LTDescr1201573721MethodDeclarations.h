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

// LTDescr
struct LTDescr_t1201573721;
// LTDescr/ActionMethodDelegate
struct ActionMethodDelegate_t139382386;
// System.String
struct String_t;
// UnityEngine.GameObject
struct GameObject_t3674682005;
// LTDescrOptional
struct LTDescrOptional_t2391725529;
// UnityEngine.Transform
struct Transform_t1659122786;
// UnityEngine.RectTransform
struct RectTransform_t972643934;
// UnityEngine.AnimationCurve
struct AnimationCurve_t3667593487;
// System.Action
struct Action_t3771233898;
// System.Action`1<System.Object>
struct Action_1_t271665211;
// System.Object
struct Il2CppObject;
// System.Action`1<System.Single>
struct Action_1_t392767812;
// System.Action`2<System.Single,System.Single>
struct Action_2_t1327107275;
// System.Action`2<System.Single,System.Object>
struct Action_2_t1206004674;
// System.Action`1<UnityEngine.Vector2>
struct Action_1_t382915405;
// System.Action`1<UnityEngine.Vector3>
struct Action_1_t382915406;
// System.Action`1<UnityEngine.Color>
struct Action_1_t295395745;
// System.Action`2<UnityEngine.Color,System.Object>
struct Action_2_t1330986321;
// System.Action`2<UnityEngine.Vector3,System.Object>
struct Action_2_t3399808592;
// LTRect
struct LTRect_t2255934348;
// LTBezierPath
struct LTBezierPath_t2218404684;
// UnityEngine.Sprite[]
struct SpriteU5BU5D_t2761310900;

#include "codegen/il2cpp-codegen.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTDescr_ActionMethodD139382386.h"
#include "UnityEngine_UnityEngine_GameObject3674682005.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTDescrOptional2391725529.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"
#include "UnityEngine_UnityEngine_Transform1659122786.h"
#include "UnityEngine_UnityEngine_RectTransform972643934.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTDescr1201573721.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LeanTweenType3149381471.h"
#include "UnityEngine_UnityEngine_AnimationCurve3667593487.h"
#include "System_Core_System_Action3771233898.h"
#include "mscorlib_System_Object4170816371.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTRect2255934348.h"
#include "UnityEngine_UnityEngine_Rect4241904616.h"
#include "AssemblyU2DCSharpU2Dfirstpass_LTBezierPath2218404684.h"

// System.Void LTDescr::.ctor()
extern "C"  void LTDescr__ctor_m2206094078 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::.cctor()
extern "C"  void LTDescr__cctor_m3482310767 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::get_from()
extern "C"  Vector3_t4282066566  LTDescr_get_from_m1898607199 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::set_from(UnityEngine.Vector3)
extern "C"  void LTDescr_set_from_m817447724 (LTDescr_t1201573721 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::get_to()
extern "C"  Vector3_t4282066566  LTDescr_get_to_m2835903984 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::set_to(UnityEngine.Vector3)
extern "C"  void LTDescr_set_to_m3464210555 (LTDescr_t1201573721 * __this, Vector3_t4282066566  ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr/ActionMethodDelegate LTDescr::get_easeInternal()
extern "C"  ActionMethodDelegate_t139382386 * LTDescr_get_easeInternal_m1725107495 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::set_easeInternal(LTDescr/ActionMethodDelegate)
extern "C"  void LTDescr_set_easeInternal_m1111529660 (LTDescr_t1201573721 * __this, ActionMethodDelegate_t139382386 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr/ActionMethodDelegate LTDescr::get_initInternal()
extern "C"  ActionMethodDelegate_t139382386 * LTDescr_get_initInternal_m2003274697 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::set_initInternal(LTDescr/ActionMethodDelegate)
extern "C"  void LTDescr_set_initInternal_m3822760030 (LTDescr_t1201573721 * __this, ActionMethodDelegate_t139382386 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.String LTDescr::ToString()
extern "C"  String_t* LTDescr_ToString_m1615386479 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::cancel(UnityEngine.GameObject)
extern "C"  LTDescr_t1201573721 * LTDescr_cancel_m3856825470 (LTDescr_t1201573721 * __this, GameObject_t3674682005 * ___gameObject0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LTDescr::get_uniqueId()
extern "C"  int32_t LTDescr_get_uniqueId_m302355717 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Int32 LTDescr::get_id()
extern "C"  int32_t LTDescr_get_id_m1605824404 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescrOptional LTDescr::get_optional()
extern "C"  LTDescrOptional_t2391725529 * LTDescr_get_optional_m383348405 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::set_optional(LTDescrOptional)
extern "C"  void LTDescr_set_optional_m200188310 (LTDescr_t1201573721 * __this, LTDescrOptional_t2391725529 * ___value0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::reset()
extern "C"  void LTDescr_reset_m2482841035 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMoveX()
extern "C"  LTDescr_t1201573721 * LTDescr_setMoveX_m2957304049 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMoveY()
extern "C"  LTDescr_t1201573721 * LTDescr_setMoveY_m2957305010 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMoveZ()
extern "C"  LTDescr_t1201573721 * LTDescr_setMoveZ_m2957305971 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMoveLocalX()
extern "C"  LTDescr_t1201573721 * LTDescr_setMoveLocalX_m3906323862 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMoveLocalY()
extern "C"  LTDescr_t1201573721 * LTDescr_setMoveLocalY_m3906324823 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMoveLocalZ()
extern "C"  LTDescr_t1201573721 * LTDescr_setMoveLocalZ_m3906325784 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::initFromInternal()
extern "C"  void LTDescr_initFromInternal_m396111581 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMoveCurved()
extern "C"  LTDescr_t1201573721 * LTDescr_setMoveCurved_m2584621726 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMoveCurvedLocal()
extern "C"  LTDescr_t1201573721 * LTDescr_setMoveCurvedLocal_m3423803919 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMoveSpline()
extern "C"  LTDescr_t1201573721 * LTDescr_setMoveSpline_m78753306 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMoveSplineLocal()
extern "C"  LTDescr_t1201573721 * LTDescr_setMoveSplineLocal_m1191013395 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setScaleX()
extern "C"  LTDescr_t1201573721 * LTDescr_setScaleX_m694616038 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setScaleY()
extern "C"  LTDescr_t1201573721 * LTDescr_setScaleY_m694616999 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setScaleZ()
extern "C"  LTDescr_t1201573721 * LTDescr_setScaleZ_m694617960 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRotateX()
extern "C"  LTDescr_t1201573721 * LTDescr_setRotateX_m686669031 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRotateY()
extern "C"  LTDescr_t1201573721 * LTDescr_setRotateY_m686669992 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRotateZ()
extern "C"  LTDescr_t1201573721 * LTDescr_setRotateZ_m686670953 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRotateAround()
extern "C"  LTDescr_t1201573721 * LTDescr_setRotateAround_m803261152 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRotateAroundLocal()
extern "C"  LTDescr_t1201573721 * LTDescr_setRotateAroundLocal_m3669973773 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setAlpha()
extern "C"  LTDescr_t1201573721 * LTDescr_setAlpha_m805863912 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setTextAlpha()
extern "C"  LTDescr_t1201573721 * LTDescr_setTextAlpha_m3450432379 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setAlphaVertex()
extern "C"  LTDescr_t1201573721 * LTDescr_setAlphaVertex_m3624940908 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setColor()
extern "C"  LTDescr_t1201573721 * LTDescr_setColor_m2663289517 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCallbackColor()
extern "C"  LTDescr_t1201573721 * LTDescr_setCallbackColor_m2106919336 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setTextColor()
extern "C"  LTDescr_t1201573721 * LTDescr_setTextColor_m1012890688 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCanvasAlpha()
extern "C"  LTDescr_t1201573721 * LTDescr_setCanvasAlpha_m3697034928 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCanvasGroupAlpha()
extern "C"  LTDescr_t1201573721 * LTDescr_setCanvasGroupAlpha_m348636719 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCanvasColor()
extern "C"  LTDescr_t1201573721 * LTDescr_setCanvasColor_m1259493237 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCanvasMoveX()
extern "C"  LTDescr_t1201573721 * LTDescr_setCanvasMoveX_m1553507769 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCanvasMoveY()
extern "C"  LTDescr_t1201573721 * LTDescr_setCanvasMoveY_m1553508730 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCanvasMoveZ()
extern "C"  LTDescr_t1201573721 * LTDescr_setCanvasMoveZ_m1553509691 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::initCanvasRotateAround()
extern "C"  void LTDescr_initCanvasRotateAround_m2027953366 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCanvasRotateAround()
extern "C"  LTDescr_t1201573721 * LTDescr_setCanvasRotateAround_m510891288 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCanvasRotateAroundLocal()
extern "C"  LTDescr_t1201573721 * LTDescr_setCanvasRotateAroundLocal_m1240085461 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCanvasPlaySprite()
extern "C"  LTDescr_t1201573721 * LTDescr_setCanvasPlaySprite_m3445272745 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCanvasMove()
extern "C"  LTDescr_t1201573721 * LTDescr_setCanvasMove_m3790889633 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCanvasScale()
extern "C"  LTDescr_t1201573721 * LTDescr_setCanvasScale_m2220839836 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCanvasSizeDelta()
extern "C"  LTDescr_t1201573721 * LTDescr_setCanvasSizeDelta_m3466835657 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::callback()
extern "C"  void LTDescr_callback_m2120023787 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setCallback()
extern "C"  LTDescr_t1201573721 * LTDescr_setCallback_m1890563165 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setValue3()
extern "C"  LTDescr_t1201573721 * LTDescr_setValue3_m176269178 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMove()
extern "C"  LTDescr_t1201573721 * LTDescr_setMove_m649584745 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMoveLocal()
extern "C"  LTDescr_t1201573721 * LTDescr_setMoveLocal_m1372934948 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setMoveToTransform()
extern "C"  LTDescr_t1201573721 * LTDescr_setMoveToTransform_m4006360938 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRotate()
extern "C"  LTDescr_t1201573721 * LTDescr_setRotate_m1546169779 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRotateLocal()
extern "C"  LTDescr_t1201573721 * LTDescr_setRotateLocal_m1378042906 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setScale()
extern "C"  LTDescr_t1201573721 * LTDescr_setScale_m3624636116 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setGUIMove()
extern "C"  LTDescr_t1201573721 * LTDescr_setGUIMove_m940768886 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setGUIMoveMargin()
extern "C"  LTDescr_t1201573721 * LTDescr_setGUIMoveMargin_m2445904132 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setGUIScale()
extern "C"  LTDescr_t1201573721 * LTDescr_setGUIScale_m4061409895 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setGUIAlpha()
extern "C"  LTDescr_t1201573721 * LTDescr_setGUIAlpha_m1242637691 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setGUIRotate()
extern "C"  LTDescr_t1201573721 * LTDescr_setGUIRotate_m2201255040 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setDelayedSound()
extern "C"  LTDescr_t1201573721 * LTDescr_setDelayedSound_m3630924645 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::init()
extern "C"  void LTDescr_init_m938833782 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::initSpeed()
extern "C"  void LTDescr_initSpeed_m3033232915 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::updateNow()
extern "C"  LTDescr_t1201573721 * LTDescr_updateNow_m3302839971 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Boolean LTDescr::updateInternal()
extern "C"  bool LTDescr_updateInternal_m2208915248 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::callOnCompletes()
extern "C"  void LTDescr_callOnCompletes_m1462427961 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setFromColor(UnityEngine.Color)
extern "C"  LTDescr_t1201573721 * LTDescr_setFromColor_m3630727523 (LTDescr_t1201573721 * __this, Color_t4194546905  ___col0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::alphaRecursive(UnityEngine.Transform,System.Single,System.Boolean)
extern "C"  void LTDescr_alphaRecursive_m1516677365 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___transform0, float ___val1, bool ___useRecursion2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::colorRecursive(UnityEngine.Transform,UnityEngine.Color,System.Boolean)
extern "C"  void LTDescr_colorRecursive_m3739528245 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___transform0, Color_t4194546905  ___toColor1, bool ___useRecursion2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::alphaRecursive(UnityEngine.RectTransform,System.Single,System.Int32)
extern "C"  void LTDescr_alphaRecursive_m3205556171 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTransform0, float ___val1, int32_t ___recursiveLevel2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::alphaRecursiveSprite(UnityEngine.Transform,System.Single)
extern "C"  void LTDescr_alphaRecursiveSprite_m4135183491 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___transform0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::colorRecursiveSprite(UnityEngine.Transform,UnityEngine.Color)
extern "C"  void LTDescr_colorRecursiveSprite_m2673339395 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___transform0, Color_t4194546905  ___toColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::colorRecursive(UnityEngine.RectTransform,UnityEngine.Color)
extern "C"  void LTDescr_colorRecursive_m1245401292 (Il2CppObject * __this /* static, unused */, RectTransform_t972643934 * ___rectTransform0, Color_t4194546905  ___toColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::textAlphaRecursive(UnityEngine.Transform,System.Single,System.Boolean)
extern "C"  void LTDescr_textAlphaRecursive_m1299902594 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, float ___val1, bool ___useRecursion2, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::textColorRecursive(UnityEngine.Transform,UnityEngine.Color)
extern "C"  void LTDescr_textColorRecursive_m866729179 (Il2CppObject * __this /* static, unused */, Transform_t1659122786 * ___trans0, Color_t4194546905  ___toColor1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Color LTDescr::tweenColor(LTDescr,System.Single)
extern "C"  Color_t4194546905  LTDescr_tweenColor_m687961159 (Il2CppObject * __this /* static, unused */, LTDescr_t1201573721 * ___tween0, float ___val1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::pause()
extern "C"  LTDescr_t1201573721 * LTDescr_pause_m4108365708 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::resume()
extern "C"  LTDescr_t1201573721 * LTDescr_resume_m1195871865 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setAxis(UnityEngine.Vector3)
extern "C"  LTDescr_t1201573721 * LTDescr_setAxis_m113906432 (LTDescr_t1201573721 * __this, Vector3_t4282066566  ___axis0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setDelay(System.Single)
extern "C"  LTDescr_t1201573721 * LTDescr_setDelay_m1240457726 (LTDescr_t1201573721 * __this, float ___delay0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEase(LeanTweenType)
extern "C"  LTDescr_t1201573721 * LTDescr_setEase_m3732647597 (LTDescr_t1201573721 * __this, int32_t ___easeType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseLinear()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseLinear_m2138975115 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseSpring()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseSpring_m3489891443 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInQuad()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInQuad_m532580018 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseOutQuad()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseOutQuad_m670703985 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInOutQuad()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInOutQuad_m3308657420 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInCubic()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInCubic_m4086058209 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseOutCubic()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseOutCubic_m4072933890 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInOutCubic()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInOutCubic_m4245111751 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInQuart()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInQuart_m3625568790 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseOutQuart()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseOutQuart_m3612444471 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInOutQuart()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInOutQuart_m3784622332 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInQuint()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInQuint_m3632837794 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseOutQuint()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseOutQuint_m3619713475 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInOutQuint()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInOutQuint_m3791891336 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInSine()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInSine_m579144312 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseOutSine()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseOutSine_m717268279 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInOutSine()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInOutSine_m3355221714 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInExpo()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInExpo_m192258205 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseOutExpo()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseOutExpo_m330382172 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInOutExpo()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInOutExpo_m2968335607 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInCirc()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInCirc_m121195138 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseOutCirc()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseOutCirc_m259319105 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInOutCirc()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInOutCirc_m2897272540 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInBounce()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInBounce_m4184485171 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseOutBounce()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseOutBounce_m3777631282 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInOutBounce()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInOutBounce_m525210381 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInBack()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInBack_m84738642 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseOutBack()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseOutBack_m222862609 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInOutBack()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInOutBack_m2860816044 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInElastic()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInElastic_m2692945964 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseOutElastic()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseOutElastic_m2965377293 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseInOutElastic()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseInOutElastic_m924577170 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEasePunch()
extern "C"  LTDescr_t1201573721 * LTDescr_setEasePunch_m1884298602 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEaseShake()
extern "C"  LTDescr_t1201573721 * LTDescr_setEaseShake_m4162860354 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::tweenOnCurve()
extern "C"  Vector3_t4282066566  LTDescr_tweenOnCurve_m775148241 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInOutQuad()
extern "C"  Vector3_t4282066566  LTDescr_easeInOutQuad_m4006171832 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInQuad()
extern "C"  Vector3_t4282066566  LTDescr_easeInQuad_m670141574 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeOutQuad()
extern "C"  Vector3_t4282066566  LTDescr_easeOutQuad_m640144925 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeLinear()
extern "C"  Vector3_t4282066566  LTDescr_easeLinear_m2276536671 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeSpring()
extern "C"  Vector3_t4282066566  LTDescr_easeSpring_m3627452999 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInCubic()
extern "C"  Vector3_t4282066566  LTDescr_easeInCubic_m4055499149 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeOutCubic()
extern "C"  Vector3_t4282066566  LTDescr_easeOutCubic_m3125603030 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInOutCubic()
extern "C"  Vector3_t4282066566  LTDescr_easeInOutCubic_m98254747 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInQuart()
extern "C"  Vector3_t4282066566  LTDescr_easeInQuart_m3595009730 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeOutQuart()
extern "C"  Vector3_t4282066566  LTDescr_easeOutQuart_m2665113611 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInOutQuart()
extern "C"  Vector3_t4282066566  LTDescr_easeInOutQuart_m3932732624 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInQuint()
extern "C"  Vector3_t4282066566  LTDescr_easeInQuint_m3602278734 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeOutQuint()
extern "C"  Vector3_t4282066566  LTDescr_easeOutQuint_m2672382615 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInOutQuint()
extern "C"  Vector3_t4282066566  LTDescr_easeInOutQuint_m3940001628 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInSine()
extern "C"  Vector3_t4282066566  LTDescr_easeInSine_m716705868 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeOutSine()
extern "C"  Vector3_t4282066566  LTDescr_easeOutSine_m686709219 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInOutSine()
extern "C"  Vector3_t4282066566  LTDescr_easeInOutSine_m4052736126 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInExpo()
extern "C"  Vector3_t4282066566  LTDescr_easeInExpo_m329819761 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeOutExpo()
extern "C"  Vector3_t4282066566  LTDescr_easeOutExpo_m299823112 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInOutExpo()
extern "C"  Vector3_t4282066566  LTDescr_easeInOutExpo_m3665850019 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInCirc()
extern "C"  Vector3_t4282066566  LTDescr_easeInCirc_m258756694 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeOutCirc()
extern "C"  Vector3_t4282066566  LTDescr_easeOutCirc_m228760045 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInOutCirc()
extern "C"  Vector3_t4282066566  LTDescr_easeInOutCirc_m3594786952 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInBounce()
extern "C"  Vector3_t4282066566  LTDescr_easeInBounce_m3237154311 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeOutBounce()
extern "C"  Vector3_t4282066566  LTDescr_easeOutBounce_m180178398 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInOutBounce()
extern "C"  Vector3_t4282066566  LTDescr_easeInOutBounce_m821662137 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInBack()
extern "C"  Vector3_t4282066566  LTDescr_easeInBack_m222300198 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeOutBack()
extern "C"  Vector3_t4282066566  LTDescr_easeOutBack_m192303549 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInOutBack()
extern "C"  Vector3_t4282066566  LTDescr_easeInOutBack_m3558330456 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInElastic()
extern "C"  Vector3_t4282066566  LTDescr_easeInElastic_m3390460376 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeOutElastic()
extern "C"  Vector3_t4282066566  LTDescr_easeOutElastic_m3113487585 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// UnityEngine.Vector3 LTDescr::easeInOutElastic()
extern "C"  Vector3_t4282066566  LTDescr_easeInOutElastic_m1524647014 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOvershoot(System.Single)
extern "C"  LTDescr_t1201573721 * LTDescr_setOvershoot_m2318201654 (LTDescr_t1201573721 * __this, float ___overshoot0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setPeriod(System.Single)
extern "C"  LTDescr_t1201573721 * LTDescr_setPeriod_m643972530 (LTDescr_t1201573721 * __this, float ___period0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setScale(System.Single)
extern "C"  LTDescr_t1201573721 * LTDescr_setScale_m2797153111 (LTDescr_t1201573721 * __this, float ___scale0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setEase(UnityEngine.AnimationCurve)
extern "C"  LTDescr_t1201573721 * LTDescr_setEase_m4118810244 (LTDescr_t1201573721 * __this, AnimationCurve_t3667593487 * ___easeCurve0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setTo(UnityEngine.Vector3)
extern "C"  LTDescr_t1201573721 * LTDescr_setTo_m2651240102 (LTDescr_t1201573721 * __this, Vector3_t4282066566  ___to0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setTo(UnityEngine.Transform)
extern "C"  LTDescr_t1201573721 * LTDescr_setTo_m3476641482 (LTDescr_t1201573721 * __this, Transform_t1659122786 * ___to0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setFrom(UnityEngine.Vector3)
extern "C"  LTDescr_t1201573721 * LTDescr_setFrom_m1236890263 (LTDescr_t1201573721 * __this, Vector3_t4282066566  ___from0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setFrom(System.Single)
extern "C"  LTDescr_t1201573721 * LTDescr_setFrom_m3093670633 (LTDescr_t1201573721 * __this, float ___from0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setDiff(UnityEngine.Vector3)
extern "C"  LTDescr_t1201573721 * LTDescr_setDiff_m467948828 (LTDescr_t1201573721 * __this, Vector3_t4282066566  ___diff0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setHasInitialized(System.Boolean)
extern "C"  LTDescr_t1201573721 * LTDescr_setHasInitialized_m2137678697 (LTDescr_t1201573721 * __this, bool ___has0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setId(System.UInt32)
extern "C"  LTDescr_t1201573721 * LTDescr_setId_m459555559 (LTDescr_t1201573721 * __this, uint32_t ___id0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setTime(System.Single)
extern "C"  LTDescr_t1201573721 * LTDescr_setTime_m1622369638 (LTDescr_t1201573721 * __this, float ___time0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setSpeed(System.Single)
extern "C"  LTDescr_t1201573721 * LTDescr_setSpeed_m342932154 (LTDescr_t1201573721 * __this, float ___speed0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRepeat(System.Int32)
extern "C"  LTDescr_t1201573721 * LTDescr_setRepeat_m1970818756 (LTDescr_t1201573721 * __this, int32_t ___repeat0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setLoopType(LeanTweenType)
extern "C"  LTDescr_t1201573721 * LTDescr_setLoopType_m2863901725 (LTDescr_t1201573721 * __this, int32_t ___loopType0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setUseEstimatedTime(System.Boolean)
extern "C"  LTDescr_t1201573721 * LTDescr_setUseEstimatedTime_m1934141617 (LTDescr_t1201573721 * __this, bool ___useEstimatedTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setIgnoreTimeScale(System.Boolean)
extern "C"  LTDescr_t1201573721 * LTDescr_setIgnoreTimeScale_m403168140 (LTDescr_t1201573721 * __this, bool ___useUnScaledTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setUseFrames(System.Boolean)
extern "C"  LTDescr_t1201573721 * LTDescr_setUseFrames_m524597902 (LTDescr_t1201573721 * __this, bool ___useFrames0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setUseManualTime(System.Boolean)
extern "C"  LTDescr_t1201573721 * LTDescr_setUseManualTime_m462405531 (LTDescr_t1201573721 * __this, bool ___useManualTime0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setLoopCount(System.Int32)
extern "C"  LTDescr_t1201573721 * LTDescr_setLoopCount_m1547115366 (LTDescr_t1201573721 * __this, int32_t ___loopCount0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setLoopOnce()
extern "C"  LTDescr_t1201573721 * LTDescr_setLoopOnce_m243940189 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setLoopClamp()
extern "C"  LTDescr_t1201573721 * LTDescr_setLoopClamp_m1148271169 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setLoopClamp(System.Int32)
extern "C"  LTDescr_t1201573721 * LTDescr_setLoopClamp_m2017236498 (LTDescr_t1201573721 * __this, int32_t ___loops0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setLoopPingPong()
extern "C"  LTDescr_t1201573721 * LTDescr_setLoopPingPong_m902806950 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setLoopPingPong(System.Int32)
extern "C"  LTDescr_t1201573721 * LTDescr_setLoopPingPong_m1923099127 (LTDescr_t1201573721 * __this, int32_t ___loops0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnComplete(System.Action)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnComplete_m851327405 (LTDescr_t1201573721 * __this, Action_t3771233898 * ___onComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnComplete(System.Action`1<System.Object>)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnComplete_m2975416602 (LTDescr_t1201573721 * __this, Action_1_t271665211 * ___onComplete0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnComplete(System.Action`1<System.Object>,System.Object)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnComplete_m3583153768 (LTDescr_t1201573721 * __this, Action_1_t271665211 * ___onComplete0, Il2CppObject * ___onCompleteParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnCompleteParam(System.Object)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnCompleteParam_m60356917 (LTDescr_t1201573721 * __this, Il2CppObject * ___onCompleteParam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`1<System.Single>)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdate_m3144657139 (LTDescr_t1201573721 * __this, Action_1_t392767812 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdateRatio(System.Action`2<System.Single,System.Single>)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdateRatio_m1435851260 (LTDescr_t1201573721 * __this, Action_2_t1327107275 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdateObject(System.Action`2<System.Single,System.Object>)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdateObject_m2401657797 (LTDescr_t1201573721 * __this, Action_2_t1206004674 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdateVector2(System.Action`1<UnityEngine.Vector2>)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdateVector2_m155085717 (LTDescr_t1201573721 * __this, Action_1_t382915405 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdateVector3(System.Action`1<UnityEngine.Vector3>)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdateVector3_m3527370391 (LTDescr_t1201573721 * __this, Action_1_t382915406 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdateColor(System.Action`1<UnityEngine.Color>)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdateColor_m3795332029 (LTDescr_t1201573721 * __this, Action_1_t295395745 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdateColor(System.Action`2<UnityEngine.Color,System.Object>)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdateColor_m3974035120 (LTDescr_t1201573721 * __this, Action_2_t1330986321 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`1<UnityEngine.Color>)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdate_m2955205336 (LTDescr_t1201573721 * __this, Action_1_t295395745 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`2<UnityEngine.Color,System.Object>)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdate_m1704041099 (LTDescr_t1201573721 * __this, Action_2_t1330986321 * ___onUpdate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`2<System.Single,System.Object>,System.Object)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdate_m2453874228 (LTDescr_t1201573721 * __this, Action_2_t1206004674 * ___onUpdate0, Il2CppObject * ___onUpdateParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`2<UnityEngine.Vector3,System.Object>,System.Object)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdate_m1199544966 (LTDescr_t1201573721 * __this, Action_2_t3399808592 * ___onUpdate0, Il2CppObject * ___onUpdateParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`1<UnityEngine.Vector2>,System.Object)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdate_m1904963858 (LTDescr_t1201573721 * __this, Action_1_t382915405 * ___onUpdate0, Il2CppObject * ___onUpdateParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdate(System.Action`1<UnityEngine.Vector3>,System.Object)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdate_m3258273555 (LTDescr_t1201573721 * __this, Action_1_t382915406 * ___onUpdate0, Il2CppObject * ___onUpdateParam1, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnUpdateParam(System.Object)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnUpdateParam_m3899569733 (LTDescr_t1201573721 * __this, Il2CppObject * ___onUpdateParam0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOrientToPath(System.Boolean)
extern "C"  LTDescr_t1201573721 * LTDescr_setOrientToPath_m2301656372 (LTDescr_t1201573721 * __this, bool ___doesOrient0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOrientToPath2d(System.Boolean)
extern "C"  LTDescr_t1201573721 * LTDescr_setOrientToPath2d_m3852808358 (LTDescr_t1201573721 * __this, bool ___doesOrient2d0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRect(LTRect)
extern "C"  LTDescr_t1201573721 * LTDescr_setRect_m3680151920 (LTDescr_t1201573721 * __this, LTRect_t2255934348 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRect(UnityEngine.Rect)
extern "C"  LTDescr_t1201573721 * LTDescr_setRect_m1142440833 (LTDescr_t1201573721 * __this, Rect_t4241904616  ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setPath(LTBezierPath)
extern "C"  LTDescr_t1201573721 * LTDescr_setPath_m1150206961 (LTDescr_t1201573721 * __this, LTBezierPath_t2218404684 * ___path0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setPoint(UnityEngine.Vector3)
extern "C"  LTDescr_t1201573721 * LTDescr_setPoint_m1230480383 (LTDescr_t1201573721 * __this, Vector3_t4282066566  ___point0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setDestroyOnComplete(System.Boolean)
extern "C"  LTDescr_t1201573721 * LTDescr_setDestroyOnComplete_m2837422675 (LTDescr_t1201573721 * __this, bool ___doesDestroy0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setAudio(System.Object)
extern "C"  LTDescr_t1201573721 * LTDescr_setAudio_m519663412 (LTDescr_t1201573721 * __this, Il2CppObject * ___audio0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnCompleteOnRepeat(System.Boolean)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnCompleteOnRepeat_m3083435201 (LTDescr_t1201573721 * __this, bool ___isOn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnCompleteOnStart(System.Boolean)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnCompleteOnStart_m3916291820 (LTDescr_t1201573721 * __this, bool ___isOn0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRect(UnityEngine.RectTransform)
extern "C"  LTDescr_t1201573721 * LTDescr_setRect_m413326853 (LTDescr_t1201573721 * __this, RectTransform_t972643934 * ___rect0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setSprites(UnityEngine.Sprite[])
extern "C"  LTDescr_t1201573721 * LTDescr_setSprites_m3333001146 (LTDescr_t1201573721 * __this, SpriteU5BU5D_t2761310900* ___sprites0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setFrameRate(System.Single)
extern "C"  LTDescr_t1201573721 * LTDescr_setFrameRate_m1888594644 (LTDescr_t1201573721 * __this, float ___frameRate0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setOnStart(System.Action)
extern "C"  LTDescr_t1201573721 * LTDescr_setOnStart_m638530512 (LTDescr_t1201573721 * __this, Action_t3771233898 * ___onStart0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setDirection(System.Single)
extern "C"  LTDescr_t1201573721 * LTDescr_setDirection_m1738914050 (LTDescr_t1201573721 * __this, float ___direction0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// LTDescr LTDescr::setRecursive(System.Boolean)
extern "C"  LTDescr_t1201573721 * LTDescr_setRecursive_m2682617779 (LTDescr_t1201573721 * __this, bool ___useRecursion0, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveX>m__0()
extern "C"  void LTDescr_U3CsetMoveXU3Em__0_m1040540454 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveX>m__1()
extern "C"  void LTDescr_U3CsetMoveXU3Em__1_m1040541415 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveY>m__2()
extern "C"  void LTDescr_U3CsetMoveYU3Em__2_m2783352711 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveY>m__3()
extern "C"  void LTDescr_U3CsetMoveYU3Em__3_m2783353672 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveZ>m__4()
extern "C"  void LTDescr_U3CsetMoveZU3Em__4_m231197672 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveZ>m__5()
extern "C"  void LTDescr_U3CsetMoveZU3Em__5_m231198633 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveLocalX>m__6()
extern "C"  void LTDescr_U3CsetMoveLocalXU3Em__6_m404415487 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveLocalX>m__7()
extern "C"  void LTDescr_U3CsetMoveLocalXU3Em__7_m404416448 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveLocalY>m__8()
extern "C"  void LTDescr_U3CsetMoveLocalYU3Em__8_m2147227744 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveLocalY>m__9()
extern "C"  void LTDescr_U3CsetMoveLocalYU3Em__9_m2147228705 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveLocalZ>m__A()
extern "C"  void LTDescr_U3CsetMoveLocalZU3Em__A_m3890046728 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveLocalZ>m__B()
extern "C"  void LTDescr_U3CsetMoveLocalZU3Em__B_m3890047689 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveCurved>m__C()
extern "C"  void LTDescr_U3CsetMoveCurvedU3Em__C_m2009435332 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveCurvedLocal>m__D()
extern "C"  void LTDescr_U3CsetMoveCurvedLocalU3Em__D_m130064092 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveSpline>m__E()
extern "C"  void LTDescr_U3CsetMoveSplineU3Em__E_m4071614026 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveSplineLocal>m__F()
extern "C"  void LTDescr_U3CsetMoveSplineLocalU3Em__F_m3276601050 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setScaleX>m__10()
extern "C"  void LTDescr_U3CsetScaleXU3Em__10_m2877193320 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setScaleX>m__11()
extern "C"  void LTDescr_U3CsetScaleXU3Em__11_m2877194281 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setScaleY>m__12()
extern "C"  void LTDescr_U3CsetScaleYU3Em__12_m1069740779 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setScaleY>m__13()
extern "C"  void LTDescr_U3CsetScaleYU3Em__13_m1069741740 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setScaleZ>m__14()
extern "C"  void LTDescr_U3CsetScaleZU3Em__14_m3557255534 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setScaleZ>m__15()
extern "C"  void LTDescr_U3CsetScaleZU3Em__15_m3557256495 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotateX>m__16()
extern "C"  void LTDescr_U3CsetRotateXU3Em__16_m1691343623 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotateX>m__17()
extern "C"  void LTDescr_U3CsetRotateXU3Em__17_m1691344584 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotateY>m__18()
extern "C"  void LTDescr_U3CsetRotateYU3Em__18_m4178858378 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotateY>m__19()
extern "C"  void LTDescr_U3CsetRotateYU3Em__19_m4178859339 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotateZ>m__1A()
extern "C"  void LTDescr_U3CsetRotateZU3Em__1A_m2371412564 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotateZ>m__1B()
extern "C"  void LTDescr_U3CsetRotateZU3Em__1B_m2371413525 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotateAround>m__1C()
extern "C"  void LTDescr_U3CsetRotateAroundU3Em__1C_m3305937973 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotateAround>m__1D()
extern "C"  void LTDescr_U3CsetRotateAroundU3Em__1D_m3305938934 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotateAroundLocal>m__1E()
extern "C"  void LTDescr_U3CsetRotateAroundLocalU3Em__1E_m796816892 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotateAroundLocal>m__1F()
extern "C"  void LTDescr_U3CsetRotateAroundLocalU3Em__1F_m796817853 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setAlpha>m__20()
extern "C"  void LTDescr_U3CsetAlphaU3Em__20_m3545682977 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setAlpha>m__21()
extern "C"  void LTDescr_U3CsetAlphaU3Em__21_m3545683938 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setTextAlpha>m__22()
extern "C"  void LTDescr_U3CsetTextAlphaU3Em__22_m103355638 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setTextAlpha>m__23()
extern "C"  void LTDescr_U3CsetTextAlphaU3Em__23_m103356599 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setAlphaVertex>m__24()
extern "C"  void LTDescr_U3CsetAlphaVertexU3Em__24_m1997214377 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setAlphaVertex>m__25()
extern "C"  void LTDescr_U3CsetAlphaVertexU3Em__25_m1997215338 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setColor>m__26()
extern "C"  void LTDescr_U3CsetColorU3Em__26_m4201419692 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setColor>m__27()
extern "C"  void LTDescr_U3CsetColorU3Em__27_m4201420653 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCallbackColor>m__28()
extern "C"  void LTDescr_U3CsetCallbackColorU3Em__28_m618249705 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCallbackColor>m__29()
extern "C"  void LTDescr_U3CsetCallbackColorU3Em__29_m618250666 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setTextColor>m__2A()
extern "C"  void LTDescr_U3CsetTextColorU3Em__2A_m759101002 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setTextColor>m__2B()
extern "C"  void LTDescr_U3CsetTextColorU3Em__2B_m759101963 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasAlpha>m__2C()
extern "C"  void LTDescr_U3CsetCanvasAlphaU3Em__2C_m1768839484 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasAlpha>m__2D()
extern "C"  void LTDescr_U3CsetCanvasAlphaU3Em__2D_m1768840445 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasGroupAlpha>m__2E()
extern "C"  void LTDescr_U3CsetCanvasGroupAlphaU3Em__2E_m222876197 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasGroupAlpha>m__2F()
extern "C"  void LTDescr_U3CsetCanvasGroupAlphaU3Em__2F_m222877158 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasColor>m__30()
extern "C"  void LTDescr_U3CsetCanvasColorU3Em__30_m2424581965 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasColor>m__31()
extern "C"  void LTDescr_U3CsetCanvasColorU3Em__31_m2424582926 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasMoveX>m__32()
extern "C"  void LTDescr_U3CsetCanvasMoveXU3Em__32_m415220243 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasMoveX>m__33()
extern "C"  void LTDescr_U3CsetCanvasMoveXU3Em__33_m415221204 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasMoveY>m__34()
extern "C"  void LTDescr_U3CsetCanvasMoveYU3Em__34_m2902734998 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasMoveY>m__35()
extern "C"  void LTDescr_U3CsetCanvasMoveYU3Em__35_m2902735959 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasMoveZ>m__36()
extern "C"  void LTDescr_U3CsetCanvasMoveZU3Em__36_m1095282457 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasMoveZ>m__37()
extern "C"  void LTDescr_U3CsetCanvasMoveZU3Em__37_m1095283418 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasRotateAround>m__38()
extern "C"  void LTDescr_U3CsetCanvasRotateAroundU3Em__38_m1186106592 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasRotateAroundLocal>m__39()
extern "C"  void LTDescr_U3CsetCanvasRotateAroundLocalU3Em__39_m3925869430 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasPlaySprite>m__3A()
extern "C"  void LTDescr_U3CsetCanvasPlaySpriteU3Em__3A_m943513210 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasPlaySprite>m__3B()
extern "C"  void LTDescr_U3CsetCanvasPlaySpriteU3Em__3B_m943514171 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasMove>m__3C()
extern "C"  void LTDescr_U3CsetCanvasMoveU3Em__3C_m2384071924 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasMove>m__3D()
extern "C"  void LTDescr_U3CsetCanvasMoveU3Em__3D_m2384072885 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasScale>m__3E()
extern "C"  void LTDescr_U3CsetCanvasScaleU3Em__3E_m1379369225 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasScale>m__3F()
extern "C"  void LTDescr_U3CsetCanvasScaleU3Em__3F_m1379370186 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasSizeDelta>m__40()
extern "C"  void LTDescr_U3CsetCanvasSizeDeltaU3Em__40_m2185149952 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCanvasSizeDelta>m__41()
extern "C"  void LTDescr_U3CsetCanvasSizeDeltaU3Em__41_m2185150913 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setCallback>m__42()
extern "C"  void LTDescr_U3CsetCallbackU3Em__42_m3392740158 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setValue3>m__43()
extern "C"  void LTDescr_U3CsetValue3U3Em__43_m2530970972 (Il2CppObject * __this /* static, unused */, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMove>m__44()
extern "C"  void LTDescr_U3CsetMoveU3Em__44_m1333026764 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMove>m__45()
extern "C"  void LTDescr_U3CsetMoveU3Em__45_m1333027725 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveLocal>m__46()
extern "C"  void LTDescr_U3CsetMoveLocalU3Em__46_m696897953 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveLocal>m__47()
extern "C"  void LTDescr_U3CsetMoveLocalU3Em__47_m696898914 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveToTransform>m__48()
extern "C"  void LTDescr_U3CsetMoveToTransformU3Em__48_m1188208617 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setMoveToTransform>m__49()
extern "C"  void LTDescr_U3CsetMoveToTransformU3Em__49_m1188209578 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotate>m__4A()
extern "C"  void LTDescr_U3CsetRotateU3Em__4A_m4226382179 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotate>m__4B()
extern "C"  void LTDescr_U3CsetRotateU3Em__4B_m4226383140 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotateLocal>m__4C()
extern "C"  void LTDescr_U3CsetRotateLocalU3Em__4C_m1654196196 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setRotateLocal>m__4D()
extern "C"  void LTDescr_U3CsetRotateLocalU3Em__4D_m1654197157 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setScale>m__4E()
extern "C"  void LTDescr_U3CsetScaleU3Em__4E_m3156260768 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setScale>m__4F()
extern "C"  void LTDescr_U3CsetScaleU3Em__4F_m3156261729 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setGUIMove>m__50()
extern "C"  void LTDescr_U3CsetGUIMoveU3Em__50_m3319607372 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setGUIMove>m__51()
extern "C"  void LTDescr_U3CsetGUIMoveU3Em__51_m3319608333 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setGUIMoveMargin>m__52()
extern "C"  void LTDescr_U3CsetGUIMoveMarginU3Em__52_m2083622620 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setGUIMoveMargin>m__53()
extern "C"  void LTDescr_U3CsetGUIMoveMarginU3Em__53_m2083623581 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setGUIScale>m__54()
extern "C"  void LTDescr_U3CsetGUIScaleU3Em__54_m314959273 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setGUIScale>m__55()
extern "C"  void LTDescr_U3CsetGUIScaleU3Em__55_m314960234 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setGUIAlpha>m__56()
extern "C"  void LTDescr_U3CsetGUIAlphaU3Em__56_m704463167 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setGUIAlpha>m__57()
extern "C"  void LTDescr_U3CsetGUIAlphaU3Em__57_m704464128 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setGUIRotate>m__58()
extern "C"  void LTDescr_U3CsetGUIRotateU3Em__58_m2044985822 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setGUIRotate>m__59()
extern "C"  void LTDescr_U3CsetGUIRotateU3Em__59_m2044986783 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setDelayedSound>m__5A()
extern "C"  void LTDescr_U3CsetDelayedSoundU3Em__5A_m1414260468 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
// System.Void LTDescr::<setAlpha>m__5B()
extern "C"  void LTDescr_U3CsetAlphaU3Em__5B_m3545789648 (LTDescr_t1201573721 * __this, const MethodInfo* method) IL2CPP_METHOD_ATTR;
