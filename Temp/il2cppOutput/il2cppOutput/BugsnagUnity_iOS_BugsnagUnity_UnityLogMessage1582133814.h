#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"
#include "UnityEngine_UnityEngine_LogType73765434.h"
#include "mscorlib_System_DateTime3738529785.h"

// System.String
struct String_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.UnityLogMessage
struct  UnityLogMessage_t1582133814  : public Il2CppObject
{
public:
	// System.String BugsnagUnity.UnityLogMessage::<Condition>k__BackingField
	String_t* ___U3CConditionU3Ek__BackingField_0;
	// System.String BugsnagUnity.UnityLogMessage::<StackTrace>k__BackingField
	String_t* ___U3CStackTraceU3Ek__BackingField_1;
	// UnityEngine.LogType BugsnagUnity.UnityLogMessage::<Type>k__BackingField
	int32_t ___U3CTypeU3Ek__BackingField_2;
	// System.DateTime BugsnagUnity.UnityLogMessage::<CreatedAt>k__BackingField
	DateTime_t3738529785  ___U3CCreatedAtU3Ek__BackingField_3;

public:
	inline static int32_t get_offset_of_U3CConditionU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnityLogMessage_t1582133814, ___U3CConditionU3Ek__BackingField_0)); }
	inline String_t* get_U3CConditionU3Ek__BackingField_0() const { return ___U3CConditionU3Ek__BackingField_0; }
	inline String_t** get_address_of_U3CConditionU3Ek__BackingField_0() { return &___U3CConditionU3Ek__BackingField_0; }
	inline void set_U3CConditionU3Ek__BackingField_0(String_t* value)
	{
		___U3CConditionU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CConditionU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CStackTraceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnityLogMessage_t1582133814, ___U3CStackTraceU3Ek__BackingField_1)); }
	inline String_t* get_U3CStackTraceU3Ek__BackingField_1() const { return ___U3CStackTraceU3Ek__BackingField_1; }
	inline String_t** get_address_of_U3CStackTraceU3Ek__BackingField_1() { return &___U3CStackTraceU3Ek__BackingField_1; }
	inline void set_U3CStackTraceU3Ek__BackingField_1(String_t* value)
	{
		___U3CStackTraceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStackTraceU3Ek__BackingField_1, value);
	}

	inline static int32_t get_offset_of_U3CTypeU3Ek__BackingField_2() { return static_cast<int32_t>(offsetof(UnityLogMessage_t1582133814, ___U3CTypeU3Ek__BackingField_2)); }
	inline int32_t get_U3CTypeU3Ek__BackingField_2() const { return ___U3CTypeU3Ek__BackingField_2; }
	inline int32_t* get_address_of_U3CTypeU3Ek__BackingField_2() { return &___U3CTypeU3Ek__BackingField_2; }
	inline void set_U3CTypeU3Ek__BackingField_2(int32_t value)
	{
		___U3CTypeU3Ek__BackingField_2 = value;
	}

	inline static int32_t get_offset_of_U3CCreatedAtU3Ek__BackingField_3() { return static_cast<int32_t>(offsetof(UnityLogMessage_t1582133814, ___U3CCreatedAtU3Ek__BackingField_3)); }
	inline DateTime_t3738529785  get_U3CCreatedAtU3Ek__BackingField_3() const { return ___U3CCreatedAtU3Ek__BackingField_3; }
	inline DateTime_t3738529785 * get_address_of_U3CCreatedAtU3Ek__BackingField_3() { return &___U3CCreatedAtU3Ek__BackingField_3; }
	inline void set_U3CCreatedAtU3Ek__BackingField_3(DateTime_t3738529785  value)
	{
		___U3CCreatedAtU3Ek__BackingField_3 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
