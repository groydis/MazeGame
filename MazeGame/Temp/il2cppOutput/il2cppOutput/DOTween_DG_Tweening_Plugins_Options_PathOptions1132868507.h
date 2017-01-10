#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.Transform
struct Transform_t1659122786;

#include "mscorlib_System_ValueType1744280289.h"
#include "DOTween_DG_Tweening_PathMode3702492458.h"
#include "DOTween_DG_Tweening_Plugins_Options_OrientType3818937237.h"
#include "DOTween_DG_Tweening_AxisConstraint334106912.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "UnityEngine_UnityEngine_Quaternion1553702882.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Options.PathOptions
struct  PathOptions_t1132868507 
{
public:
	// DG.Tweening.PathMode DG.Tweening.Plugins.Options.PathOptions::mode
	int32_t ___mode_0;
	// DG.Tweening.Plugins.Options.OrientType DG.Tweening.Plugins.Options.PathOptions::orientType
	int32_t ___orientType_1;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockPositionAxis
	int32_t ___lockPositionAxis_2;
	// DG.Tweening.AxisConstraint DG.Tweening.Plugins.Options.PathOptions::lockRotationAxis
	int32_t ___lockRotationAxis_3;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::isClosedPath
	bool ___isClosedPath_4;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Options.PathOptions::lookAtPosition
	Vector3_t4282066566  ___lookAtPosition_5;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::lookAtTransform
	Transform_t1659122786 * ___lookAtTransform_6;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::lookAhead
	float ___lookAhead_7;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::hasCustomForwardDirection
	bool ___hasCustomForwardDirection_8;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::forward
	Quaternion_t1553702882  ___forward_9;
	// System.Boolean DG.Tweening.Plugins.Options.PathOptions::useLocalPosition
	bool ___useLocalPosition_10;
	// UnityEngine.Transform DG.Tweening.Plugins.Options.PathOptions::parent
	Transform_t1659122786 * ___parent_11;
	// UnityEngine.Quaternion DG.Tweening.Plugins.Options.PathOptions::startupRot
	Quaternion_t1553702882  ___startupRot_12;
	// System.Single DG.Tweening.Plugins.Options.PathOptions::startupZRot
	float ___startupZRot_13;

public:
	inline static int32_t get_offset_of_mode_0() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___mode_0)); }
	inline int32_t get_mode_0() const { return ___mode_0; }
	inline int32_t* get_address_of_mode_0() { return &___mode_0; }
	inline void set_mode_0(int32_t value)
	{
		___mode_0 = value;
	}

	inline static int32_t get_offset_of_orientType_1() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___orientType_1)); }
	inline int32_t get_orientType_1() const { return ___orientType_1; }
	inline int32_t* get_address_of_orientType_1() { return &___orientType_1; }
	inline void set_orientType_1(int32_t value)
	{
		___orientType_1 = value;
	}

	inline static int32_t get_offset_of_lockPositionAxis_2() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___lockPositionAxis_2)); }
	inline int32_t get_lockPositionAxis_2() const { return ___lockPositionAxis_2; }
	inline int32_t* get_address_of_lockPositionAxis_2() { return &___lockPositionAxis_2; }
	inline void set_lockPositionAxis_2(int32_t value)
	{
		___lockPositionAxis_2 = value;
	}

	inline static int32_t get_offset_of_lockRotationAxis_3() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___lockRotationAxis_3)); }
	inline int32_t get_lockRotationAxis_3() const { return ___lockRotationAxis_3; }
	inline int32_t* get_address_of_lockRotationAxis_3() { return &___lockRotationAxis_3; }
	inline void set_lockRotationAxis_3(int32_t value)
	{
		___lockRotationAxis_3 = value;
	}

	inline static int32_t get_offset_of_isClosedPath_4() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___isClosedPath_4)); }
	inline bool get_isClosedPath_4() const { return ___isClosedPath_4; }
	inline bool* get_address_of_isClosedPath_4() { return &___isClosedPath_4; }
	inline void set_isClosedPath_4(bool value)
	{
		___isClosedPath_4 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_5() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___lookAtPosition_5)); }
	inline Vector3_t4282066566  get_lookAtPosition_5() const { return ___lookAtPosition_5; }
	inline Vector3_t4282066566 * get_address_of_lookAtPosition_5() { return &___lookAtPosition_5; }
	inline void set_lookAtPosition_5(Vector3_t4282066566  value)
	{
		___lookAtPosition_5 = value;
	}

	inline static int32_t get_offset_of_lookAtTransform_6() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___lookAtTransform_6)); }
	inline Transform_t1659122786 * get_lookAtTransform_6() const { return ___lookAtTransform_6; }
	inline Transform_t1659122786 ** get_address_of_lookAtTransform_6() { return &___lookAtTransform_6; }
	inline void set_lookAtTransform_6(Transform_t1659122786 * value)
	{
		___lookAtTransform_6 = value;
		Il2CppCodeGenWriteBarrier(&___lookAtTransform_6, value);
	}

	inline static int32_t get_offset_of_lookAhead_7() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___lookAhead_7)); }
	inline float get_lookAhead_7() const { return ___lookAhead_7; }
	inline float* get_address_of_lookAhead_7() { return &___lookAhead_7; }
	inline void set_lookAhead_7(float value)
	{
		___lookAhead_7 = value;
	}

	inline static int32_t get_offset_of_hasCustomForwardDirection_8() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___hasCustomForwardDirection_8)); }
	inline bool get_hasCustomForwardDirection_8() const { return ___hasCustomForwardDirection_8; }
	inline bool* get_address_of_hasCustomForwardDirection_8() { return &___hasCustomForwardDirection_8; }
	inline void set_hasCustomForwardDirection_8(bool value)
	{
		___hasCustomForwardDirection_8 = value;
	}

	inline static int32_t get_offset_of_forward_9() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___forward_9)); }
	inline Quaternion_t1553702882  get_forward_9() const { return ___forward_9; }
	inline Quaternion_t1553702882 * get_address_of_forward_9() { return &___forward_9; }
	inline void set_forward_9(Quaternion_t1553702882  value)
	{
		___forward_9 = value;
	}

	inline static int32_t get_offset_of_useLocalPosition_10() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___useLocalPosition_10)); }
	inline bool get_useLocalPosition_10() const { return ___useLocalPosition_10; }
	inline bool* get_address_of_useLocalPosition_10() { return &___useLocalPosition_10; }
	inline void set_useLocalPosition_10(bool value)
	{
		___useLocalPosition_10 = value;
	}

	inline static int32_t get_offset_of_parent_11() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___parent_11)); }
	inline Transform_t1659122786 * get_parent_11() const { return ___parent_11; }
	inline Transform_t1659122786 ** get_address_of_parent_11() { return &___parent_11; }
	inline void set_parent_11(Transform_t1659122786 * value)
	{
		___parent_11 = value;
		Il2CppCodeGenWriteBarrier(&___parent_11, value);
	}

	inline static int32_t get_offset_of_startupRot_12() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___startupRot_12)); }
	inline Quaternion_t1553702882  get_startupRot_12() const { return ___startupRot_12; }
	inline Quaternion_t1553702882 * get_address_of_startupRot_12() { return &___startupRot_12; }
	inline void set_startupRot_12(Quaternion_t1553702882  value)
	{
		___startupRot_12 = value;
	}

	inline static int32_t get_offset_of_startupZRot_13() { return static_cast<int32_t>(offsetof(PathOptions_t1132868507, ___startupZRot_13)); }
	inline float get_startupZRot_13() const { return ___startupZRot_13; }
	inline float* get_address_of_startupZRot_13() { return &___startupZRot_13; }
	inline void set_startupZRot_13(float value)
	{
		___startupZRot_13 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
// Native definition for marshalling of: DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t1132868507_marshaled_pinvoke
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t4282066566_marshaled_pinvoke ___lookAtPosition_5;
	Transform_t1659122786 * ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_t1553702882_marshaled_pinvoke ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_t1659122786 * ___parent_11;
	Quaternion_t1553702882_marshaled_pinvoke ___startupRot_12;
	float ___startupZRot_13;
};
// Native definition for marshalling of: DG.Tweening.Plugins.Options.PathOptions
struct PathOptions_t1132868507_marshaled_com
{
	int32_t ___mode_0;
	int32_t ___orientType_1;
	int32_t ___lockPositionAxis_2;
	int32_t ___lockRotationAxis_3;
	int32_t ___isClosedPath_4;
	Vector3_t4282066566_marshaled_com ___lookAtPosition_5;
	Transform_t1659122786 * ___lookAtTransform_6;
	float ___lookAhead_7;
	int32_t ___hasCustomForwardDirection_8;
	Quaternion_t1553702882_marshaled_com ___forward_9;
	int32_t ___useLocalPosition_10;
	Transform_t1659122786 * ___parent_11;
	Quaternion_t1553702882_marshaled_com ___startupRot_12;
	float ___startupZRot_13;
};
