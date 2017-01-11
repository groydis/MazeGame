#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder
struct CatmullRomDecoder_t2686499616;
// DG.Tweening.Plugins.Core.PathCore.LinearDecoder
struct LinearDecoder_t3688033549;
// UnityEngine.Vector3[]
struct Vector3U5BU5D_t215400611;
// DG.Tweening.Plugins.Core.PathCore.ControlPoint[]
struct ControlPointU5BU5D_t1040784202;
// System.Single[]
struct SingleU5BU5D_t2316563989;
// DG.Tweening.Plugins.Core.PathCore.Path
struct Path_t4203839645;
// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder
struct ABSPathDecoder_t3187462853;

#include "mscorlib_System_Object4170816371.h"
#include "DOTween_DG_Tweening_PathType3702710977.h"
#include "UnityEngine_UnityEngine_Vector34282066566.h"
#include "mscorlib_System_Nullable_1_gen71225793.h"
#include "UnityEngine_UnityEngine_Color4194546905.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DG.Tweening.Plugins.Core.PathCore.Path
struct  Path_t4203839645  : public Il2CppObject
{
public:
	// DG.Tweening.PathType DG.Tweening.Plugins.Core.PathCore.Path::type
	int32_t ___type_2;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisionsXSegment
	int32_t ___subdivisionsXSegment_3;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::subdivisions
	int32_t ___subdivisions_4;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::wps
	Vector3U5BU5D_t215400611* ___wps_5;
	// DG.Tweening.Plugins.Core.PathCore.ControlPoint[] DG.Tweening.Plugins.Core.PathCore.Path::controlPoints
	ControlPointU5BU5D_t1040784202* ___controlPoints_6;
	// System.Single DG.Tweening.Plugins.Core.PathCore.Path::length
	float ___length_7;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::wpLengths
	SingleU5BU5D_t2316563989* ___wpLengths_8;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::isFinalized
	bool ___isFinalized_9;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::timesTable
	SingleU5BU5D_t2316563989* ___timesTable_10;
	// System.Single[] DG.Tweening.Plugins.Core.PathCore.Path::lengthsTable
	SingleU5BU5D_t2316563989* ___lengthsTable_11;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::linearWPIndex
	int32_t ___linearWPIndex_12;
	// DG.Tweening.Plugins.Core.PathCore.Path DG.Tweening.Plugins.Core.PathCore.Path::_incrementalClone
	Path_t4203839645 * ____incrementalClone_13;
	// System.Int32 DG.Tweening.Plugins.Core.PathCore.Path::_incrementalIndex
	int32_t ____incrementalIndex_14;
	// DG.Tweening.Plugins.Core.PathCore.ABSPathDecoder DG.Tweening.Plugins.Core.PathCore.Path::_decoder
	ABSPathDecoder_t3187462853 * ____decoder_15;
	// System.Boolean DG.Tweening.Plugins.Core.PathCore.Path::_changed
	bool ____changed_16;
	// UnityEngine.Vector3[] DG.Tweening.Plugins.Core.PathCore.Path::nonLinearDrawWps
	Vector3U5BU5D_t215400611* ___nonLinearDrawWps_17;
	// UnityEngine.Vector3 DG.Tweening.Plugins.Core.PathCore.Path::targetPosition
	Vector3_t4282066566  ___targetPosition_18;
	// System.Nullable`1<UnityEngine.Vector3> DG.Tweening.Plugins.Core.PathCore.Path::lookAtPosition
	Nullable_1_t71225793  ___lookAtPosition_19;
	// UnityEngine.Color DG.Tweening.Plugins.Core.PathCore.Path::gizmoColor
	Color_t4194546905  ___gizmoColor_20;

public:
	inline static int32_t get_offset_of_type_2() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___type_2)); }
	inline int32_t get_type_2() const { return ___type_2; }
	inline int32_t* get_address_of_type_2() { return &___type_2; }
	inline void set_type_2(int32_t value)
	{
		___type_2 = value;
	}

	inline static int32_t get_offset_of_subdivisionsXSegment_3() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___subdivisionsXSegment_3)); }
	inline int32_t get_subdivisionsXSegment_3() const { return ___subdivisionsXSegment_3; }
	inline int32_t* get_address_of_subdivisionsXSegment_3() { return &___subdivisionsXSegment_3; }
	inline void set_subdivisionsXSegment_3(int32_t value)
	{
		___subdivisionsXSegment_3 = value;
	}

	inline static int32_t get_offset_of_subdivisions_4() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___subdivisions_4)); }
	inline int32_t get_subdivisions_4() const { return ___subdivisions_4; }
	inline int32_t* get_address_of_subdivisions_4() { return &___subdivisions_4; }
	inline void set_subdivisions_4(int32_t value)
	{
		___subdivisions_4 = value;
	}

	inline static int32_t get_offset_of_wps_5() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___wps_5)); }
	inline Vector3U5BU5D_t215400611* get_wps_5() const { return ___wps_5; }
	inline Vector3U5BU5D_t215400611** get_address_of_wps_5() { return &___wps_5; }
	inline void set_wps_5(Vector3U5BU5D_t215400611* value)
	{
		___wps_5 = value;
		Il2CppCodeGenWriteBarrier(&___wps_5, value);
	}

	inline static int32_t get_offset_of_controlPoints_6() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___controlPoints_6)); }
	inline ControlPointU5BU5D_t1040784202* get_controlPoints_6() const { return ___controlPoints_6; }
	inline ControlPointU5BU5D_t1040784202** get_address_of_controlPoints_6() { return &___controlPoints_6; }
	inline void set_controlPoints_6(ControlPointU5BU5D_t1040784202* value)
	{
		___controlPoints_6 = value;
		Il2CppCodeGenWriteBarrier(&___controlPoints_6, value);
	}

	inline static int32_t get_offset_of_length_7() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___length_7)); }
	inline float get_length_7() const { return ___length_7; }
	inline float* get_address_of_length_7() { return &___length_7; }
	inline void set_length_7(float value)
	{
		___length_7 = value;
	}

	inline static int32_t get_offset_of_wpLengths_8() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___wpLengths_8)); }
	inline SingleU5BU5D_t2316563989* get_wpLengths_8() const { return ___wpLengths_8; }
	inline SingleU5BU5D_t2316563989** get_address_of_wpLengths_8() { return &___wpLengths_8; }
	inline void set_wpLengths_8(SingleU5BU5D_t2316563989* value)
	{
		___wpLengths_8 = value;
		Il2CppCodeGenWriteBarrier(&___wpLengths_8, value);
	}

	inline static int32_t get_offset_of_isFinalized_9() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___isFinalized_9)); }
	inline bool get_isFinalized_9() const { return ___isFinalized_9; }
	inline bool* get_address_of_isFinalized_9() { return &___isFinalized_9; }
	inline void set_isFinalized_9(bool value)
	{
		___isFinalized_9 = value;
	}

	inline static int32_t get_offset_of_timesTable_10() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___timesTable_10)); }
	inline SingleU5BU5D_t2316563989* get_timesTable_10() const { return ___timesTable_10; }
	inline SingleU5BU5D_t2316563989** get_address_of_timesTable_10() { return &___timesTable_10; }
	inline void set_timesTable_10(SingleU5BU5D_t2316563989* value)
	{
		___timesTable_10 = value;
		Il2CppCodeGenWriteBarrier(&___timesTable_10, value);
	}

	inline static int32_t get_offset_of_lengthsTable_11() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___lengthsTable_11)); }
	inline SingleU5BU5D_t2316563989* get_lengthsTable_11() const { return ___lengthsTable_11; }
	inline SingleU5BU5D_t2316563989** get_address_of_lengthsTable_11() { return &___lengthsTable_11; }
	inline void set_lengthsTable_11(SingleU5BU5D_t2316563989* value)
	{
		___lengthsTable_11 = value;
		Il2CppCodeGenWriteBarrier(&___lengthsTable_11, value);
	}

	inline static int32_t get_offset_of_linearWPIndex_12() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___linearWPIndex_12)); }
	inline int32_t get_linearWPIndex_12() const { return ___linearWPIndex_12; }
	inline int32_t* get_address_of_linearWPIndex_12() { return &___linearWPIndex_12; }
	inline void set_linearWPIndex_12(int32_t value)
	{
		___linearWPIndex_12 = value;
	}

	inline static int32_t get_offset_of__incrementalClone_13() { return static_cast<int32_t>(offsetof(Path_t4203839645, ____incrementalClone_13)); }
	inline Path_t4203839645 * get__incrementalClone_13() const { return ____incrementalClone_13; }
	inline Path_t4203839645 ** get_address_of__incrementalClone_13() { return &____incrementalClone_13; }
	inline void set__incrementalClone_13(Path_t4203839645 * value)
	{
		____incrementalClone_13 = value;
		Il2CppCodeGenWriteBarrier(&____incrementalClone_13, value);
	}

	inline static int32_t get_offset_of__incrementalIndex_14() { return static_cast<int32_t>(offsetof(Path_t4203839645, ____incrementalIndex_14)); }
	inline int32_t get__incrementalIndex_14() const { return ____incrementalIndex_14; }
	inline int32_t* get_address_of__incrementalIndex_14() { return &____incrementalIndex_14; }
	inline void set__incrementalIndex_14(int32_t value)
	{
		____incrementalIndex_14 = value;
	}

	inline static int32_t get_offset_of__decoder_15() { return static_cast<int32_t>(offsetof(Path_t4203839645, ____decoder_15)); }
	inline ABSPathDecoder_t3187462853 * get__decoder_15() const { return ____decoder_15; }
	inline ABSPathDecoder_t3187462853 ** get_address_of__decoder_15() { return &____decoder_15; }
	inline void set__decoder_15(ABSPathDecoder_t3187462853 * value)
	{
		____decoder_15 = value;
		Il2CppCodeGenWriteBarrier(&____decoder_15, value);
	}

	inline static int32_t get_offset_of__changed_16() { return static_cast<int32_t>(offsetof(Path_t4203839645, ____changed_16)); }
	inline bool get__changed_16() const { return ____changed_16; }
	inline bool* get_address_of__changed_16() { return &____changed_16; }
	inline void set__changed_16(bool value)
	{
		____changed_16 = value;
	}

	inline static int32_t get_offset_of_nonLinearDrawWps_17() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___nonLinearDrawWps_17)); }
	inline Vector3U5BU5D_t215400611* get_nonLinearDrawWps_17() const { return ___nonLinearDrawWps_17; }
	inline Vector3U5BU5D_t215400611** get_address_of_nonLinearDrawWps_17() { return &___nonLinearDrawWps_17; }
	inline void set_nonLinearDrawWps_17(Vector3U5BU5D_t215400611* value)
	{
		___nonLinearDrawWps_17 = value;
		Il2CppCodeGenWriteBarrier(&___nonLinearDrawWps_17, value);
	}

	inline static int32_t get_offset_of_targetPosition_18() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___targetPosition_18)); }
	inline Vector3_t4282066566  get_targetPosition_18() const { return ___targetPosition_18; }
	inline Vector3_t4282066566 * get_address_of_targetPosition_18() { return &___targetPosition_18; }
	inline void set_targetPosition_18(Vector3_t4282066566  value)
	{
		___targetPosition_18 = value;
	}

	inline static int32_t get_offset_of_lookAtPosition_19() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___lookAtPosition_19)); }
	inline Nullable_1_t71225793  get_lookAtPosition_19() const { return ___lookAtPosition_19; }
	inline Nullable_1_t71225793 * get_address_of_lookAtPosition_19() { return &___lookAtPosition_19; }
	inline void set_lookAtPosition_19(Nullable_1_t71225793  value)
	{
		___lookAtPosition_19 = value;
	}

	inline static int32_t get_offset_of_gizmoColor_20() { return static_cast<int32_t>(offsetof(Path_t4203839645, ___gizmoColor_20)); }
	inline Color_t4194546905  get_gizmoColor_20() const { return ___gizmoColor_20; }
	inline Color_t4194546905 * get_address_of_gizmoColor_20() { return &___gizmoColor_20; }
	inline void set_gizmoColor_20(Color_t4194546905  value)
	{
		___gizmoColor_20 = value;
	}
};

struct Path_t4203839645_StaticFields
{
public:
	// DG.Tweening.Plugins.Core.PathCore.CatmullRomDecoder DG.Tweening.Plugins.Core.PathCore.Path::_catmullRomDecoder
	CatmullRomDecoder_t2686499616 * ____catmullRomDecoder_0;
	// DG.Tweening.Plugins.Core.PathCore.LinearDecoder DG.Tweening.Plugins.Core.PathCore.Path::_linearDecoder
	LinearDecoder_t3688033549 * ____linearDecoder_1;

public:
	inline static int32_t get_offset_of__catmullRomDecoder_0() { return static_cast<int32_t>(offsetof(Path_t4203839645_StaticFields, ____catmullRomDecoder_0)); }
	inline CatmullRomDecoder_t2686499616 * get__catmullRomDecoder_0() const { return ____catmullRomDecoder_0; }
	inline CatmullRomDecoder_t2686499616 ** get_address_of__catmullRomDecoder_0() { return &____catmullRomDecoder_0; }
	inline void set__catmullRomDecoder_0(CatmullRomDecoder_t2686499616 * value)
	{
		____catmullRomDecoder_0 = value;
		Il2CppCodeGenWriteBarrier(&____catmullRomDecoder_0, value);
	}

	inline static int32_t get_offset_of__linearDecoder_1() { return static_cast<int32_t>(offsetof(Path_t4203839645_StaticFields, ____linearDecoder_1)); }
	inline LinearDecoder_t3688033549 * get__linearDecoder_1() const { return ____linearDecoder_1; }
	inline LinearDecoder_t3688033549 ** get_address_of__linearDecoder_1() { return &____linearDecoder_1; }
	inline void set__linearDecoder_1(LinearDecoder_t3688033549 * value)
	{
		____linearDecoder_1 = value;
		Il2CppCodeGenWriteBarrier(&____linearDecoder_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
