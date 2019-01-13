#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// BugsnagUnity.UnityLogMessage
struct UnityLogMessage_t1582133814;
// System.Diagnostics.StackFrame[]
struct StackFrameU5BU5D_t1997726418;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.Payload.UnityLogExceptions
struct  UnityLogExceptions_t1191017313  : public Il2CppObject
{
public:
	// BugsnagUnity.UnityLogMessage BugsnagUnity.Payload.UnityLogExceptions::<UnityLogMessage>k__BackingField
	UnityLogMessage_t1582133814 * ___U3CUnityLogMessageU3Ek__BackingField_0;
	// System.Diagnostics.StackFrame[] BugsnagUnity.Payload.UnityLogExceptions::<AlternativeStackTrace>k__BackingField
	StackFrameU5BU5D_t1997726418* ___U3CAlternativeStackTraceU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of_U3CUnityLogMessageU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(UnityLogExceptions_t1191017313, ___U3CUnityLogMessageU3Ek__BackingField_0)); }
	inline UnityLogMessage_t1582133814 * get_U3CUnityLogMessageU3Ek__BackingField_0() const { return ___U3CUnityLogMessageU3Ek__BackingField_0; }
	inline UnityLogMessage_t1582133814 ** get_address_of_U3CUnityLogMessageU3Ek__BackingField_0() { return &___U3CUnityLogMessageU3Ek__BackingField_0; }
	inline void set_U3CUnityLogMessageU3Ek__BackingField_0(UnityLogMessage_t1582133814 * value)
	{
		___U3CUnityLogMessageU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CUnityLogMessageU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of_U3CAlternativeStackTraceU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(UnityLogExceptions_t1191017313, ___U3CAlternativeStackTraceU3Ek__BackingField_1)); }
	inline StackFrameU5BU5D_t1997726418* get_U3CAlternativeStackTraceU3Ek__BackingField_1() const { return ___U3CAlternativeStackTraceU3Ek__BackingField_1; }
	inline StackFrameU5BU5D_t1997726418** get_address_of_U3CAlternativeStackTraceU3Ek__BackingField_1() { return &___U3CAlternativeStackTraceU3Ek__BackingField_1; }
	inline void set_U3CAlternativeStackTraceU3Ek__BackingField_1(StackFrameU5BU5D_t1997726418* value)
	{
		___U3CAlternativeStackTraceU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CAlternativeStackTraceU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
