#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

// UnityEngine.RectTransform
struct RectTransform_t3349966182;

#include "UnityEngine_UnityEngine_MonoBehaviour1158329972.h"
#include "UnityEngine_UnityEngine_Vector22243707579.h"
#include "UnityEngine_UnityEngine_Vector32243707580.h"

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// DragPanel
struct  DragPanel_t1084021440  : public MonoBehaviour_t1158329972
{
public:
	// UnityEngine.Vector2 DragPanel::originalLocalPointerPosition
	Vector2_t2243707579  ___originalLocalPointerPosition_2;
	// UnityEngine.Vector3 DragPanel::originalPanelLocalPosition
	Vector3_t2243707580  ___originalPanelLocalPosition_3;
	// UnityEngine.RectTransform DragPanel::panelRectTransform
	RectTransform_t3349966182 * ___panelRectTransform_4;
	// UnityEngine.RectTransform DragPanel::parentRectTransform
	RectTransform_t3349966182 * ___parentRectTransform_5;

public:
	inline static int32_t get_offset_of_originalLocalPointerPosition_2() { return static_cast<int32_t>(offsetof(DragPanel_t1084021440, ___originalLocalPointerPosition_2)); }
	inline Vector2_t2243707579  get_originalLocalPointerPosition_2() const { return ___originalLocalPointerPosition_2; }
	inline Vector2_t2243707579 * get_address_of_originalLocalPointerPosition_2() { return &___originalLocalPointerPosition_2; }
	inline void set_originalLocalPointerPosition_2(Vector2_t2243707579  value)
	{
		___originalLocalPointerPosition_2 = value;
	}

	inline static int32_t get_offset_of_originalPanelLocalPosition_3() { return static_cast<int32_t>(offsetof(DragPanel_t1084021440, ___originalPanelLocalPosition_3)); }
	inline Vector3_t2243707580  get_originalPanelLocalPosition_3() const { return ___originalPanelLocalPosition_3; }
	inline Vector3_t2243707580 * get_address_of_originalPanelLocalPosition_3() { return &___originalPanelLocalPosition_3; }
	inline void set_originalPanelLocalPosition_3(Vector3_t2243707580  value)
	{
		___originalPanelLocalPosition_3 = value;
	}

	inline static int32_t get_offset_of_panelRectTransform_4() { return static_cast<int32_t>(offsetof(DragPanel_t1084021440, ___panelRectTransform_4)); }
	inline RectTransform_t3349966182 * get_panelRectTransform_4() const { return ___panelRectTransform_4; }
	inline RectTransform_t3349966182 ** get_address_of_panelRectTransform_4() { return &___panelRectTransform_4; }
	inline void set_panelRectTransform_4(RectTransform_t3349966182 * value)
	{
		___panelRectTransform_4 = value;
		Il2CppCodeGenWriteBarrier(&___panelRectTransform_4, value);
	}

	inline static int32_t get_offset_of_parentRectTransform_5() { return static_cast<int32_t>(offsetof(DragPanel_t1084021440, ___parentRectTransform_5)); }
	inline RectTransform_t3349966182 * get_parentRectTransform_5() const { return ___parentRectTransform_5; }
	inline RectTransform_t3349966182 ** get_address_of_parentRectTransform_5() { return &___parentRectTransform_5; }
	inline void set_parentRectTransform_5(RectTransform_t3349966182 * value)
	{
		___parentRectTransform_5 = value;
		Il2CppCodeGenWriteBarrier(&___parentRectTransform_5, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
