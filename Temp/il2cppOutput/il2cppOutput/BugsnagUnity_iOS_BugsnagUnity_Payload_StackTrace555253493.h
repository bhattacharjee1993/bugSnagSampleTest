#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// BugsnagUnity.Payload.StackTraceLine[]
struct StackTraceLineU5BU5D_t3861623211;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.Payload.StackTrace
struct  StackTrace_t555253493  : public Il2CppObject
{
public:
	// BugsnagUnity.Payload.StackTraceLine[] BugsnagUnity.Payload.StackTrace::<StackTraceLines>k__BackingField
	StackTraceLineU5BU5D_t3861623211* ___U3CStackTraceLinesU3Ek__BackingField_0;

public:
	inline static int32_t get_offset_of_U3CStackTraceLinesU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(StackTrace_t555253493, ___U3CStackTraceLinesU3Ek__BackingField_0)); }
	inline StackTraceLineU5BU5D_t3861623211* get_U3CStackTraceLinesU3Ek__BackingField_0() const { return ___U3CStackTraceLinesU3Ek__BackingField_0; }
	inline StackTraceLineU5BU5D_t3861623211** get_address_of_U3CStackTraceLinesU3Ek__BackingField_0() { return &___U3CStackTraceLinesU3Ek__BackingField_0; }
	inline void set_U3CStackTraceLinesU3Ek__BackingField_0(StackTraceLineU5BU5D_t3861623211* value)
	{
		___U3CStackTraceLinesU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CStackTraceLinesU3Ek__BackingField_0, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
