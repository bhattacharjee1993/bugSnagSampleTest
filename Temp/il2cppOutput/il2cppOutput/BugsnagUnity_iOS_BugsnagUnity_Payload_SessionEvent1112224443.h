#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Collections_Generic_Dictionary_2_g2736202052.h"

// System.Object
struct Il2CppObject;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.Payload.SessionEvents
struct  SessionEvents_t1112224443  : public Dictionary_2_t2736202052
{
public:
	// System.Object BugsnagUnity.Payload.SessionEvents::_handledLock
	Il2CppObject * ____handledLock_16;
	// System.Object BugsnagUnity.Payload.SessionEvents::_unhandledLock
	Il2CppObject * ____unhandledLock_17;

public:
	inline static int32_t get_offset_of__handledLock_16() { return static_cast<int32_t>(offsetof(SessionEvents_t1112224443, ____handledLock_16)); }
	inline Il2CppObject * get__handledLock_16() const { return ____handledLock_16; }
	inline Il2CppObject ** get_address_of__handledLock_16() { return &____handledLock_16; }
	inline void set__handledLock_16(Il2CppObject * value)
	{
		____handledLock_16 = value;
		Il2CppCodeGenWriteBarrier(&____handledLock_16, value);
	}

	inline static int32_t get_offset_of__unhandledLock_17() { return static_cast<int32_t>(offsetof(SessionEvents_t1112224443, ____unhandledLock_17)); }
	inline Il2CppObject * get__unhandledLock_17() const { return ____unhandledLock_17; }
	inline Il2CppObject ** get_address_of__unhandledLock_17() { return &____unhandledLock_17; }
	inline void set__unhandledLock_17(Il2CppObject * value)
	{
		____unhandledLock_17 = value;
		Il2CppCodeGenWriteBarrier(&____unhandledLock_17, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
