#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// BugsnagUnity.Client
struct Client_t3016753001;
// BugsnagUnity.Payload.Session
struct Session_t99682926;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.SessionTracker
struct  SessionTracker_t491274433  : public Il2CppObject
{
public:
	// BugsnagUnity.Client BugsnagUnity.SessionTracker::<Client>k__BackingField
	Client_t3016753001 * ___U3CClientU3Ek__BackingField_0;
	// BugsnagUnity.Payload.Session BugsnagUnity.SessionTracker::_currentSession
	Session_t99682926 * ____currentSession_1;

public:
	inline static int32_t get_offset_of_U3CClientU3Ek__BackingField_0() { return static_cast<int32_t>(offsetof(SessionTracker_t491274433, ___U3CClientU3Ek__BackingField_0)); }
	inline Client_t3016753001 * get_U3CClientU3Ek__BackingField_0() const { return ___U3CClientU3Ek__BackingField_0; }
	inline Client_t3016753001 ** get_address_of_U3CClientU3Ek__BackingField_0() { return &___U3CClientU3Ek__BackingField_0; }
	inline void set_U3CClientU3Ek__BackingField_0(Client_t3016753001 * value)
	{
		___U3CClientU3Ek__BackingField_0 = value;
		Il2CppCodeGenWriteBarrier(&___U3CClientU3Ek__BackingField_0, value);
	}

	inline static int32_t get_offset_of__currentSession_1() { return static_cast<int32_t>(offsetof(SessionTracker_t491274433, ____currentSession_1)); }
	inline Session_t99682926 * get__currentSession_1() const { return ____currentSession_1; }
	inline Session_t99682926 ** get_address_of__currentSession_1() { return &____currentSession_1; }
	inline void set__currentSession_1(Session_t99682926 * value)
	{
		____currentSession_1 = value;
		Il2CppCodeGenWriteBarrier(&____currentSession_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
