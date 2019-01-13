#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Object
struct Il2CppObject;
// BugsnagUnity.Client
struct Client_t3016753001;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.Bugsnag
struct  Bugsnag_t2804097847  : public Il2CppObject
{
public:

public:
};

struct Bugsnag_t2804097847_StaticFields
{
public:
	// System.Object BugsnagUnity.Bugsnag::_clientLock
	Il2CppObject * ____clientLock_0;
	// BugsnagUnity.Client BugsnagUnity.Bugsnag::<InternalClient>k__BackingField
	Client_t3016753001 * ___U3CInternalClientU3Ek__BackingField_1;

public:
	inline static int32_t get_offset_of__clientLock_0() { return static_cast<int32_t>(offsetof(Bugsnag_t2804097847_StaticFields, ____clientLock_0)); }
	inline Il2CppObject * get__clientLock_0() const { return ____clientLock_0; }
	inline Il2CppObject ** get_address_of__clientLock_0() { return &____clientLock_0; }
	inline void set__clientLock_0(Il2CppObject * value)
	{
		____clientLock_0 = value;
		Il2CppCodeGenWriteBarrier(&____clientLock_0, value);
	}

	inline static int32_t get_offset_of_U3CInternalClientU3Ek__BackingField_1() { return static_cast<int32_t>(offsetof(Bugsnag_t2804097847_StaticFields, ___U3CInternalClientU3Ek__BackingField_1)); }
	inline Client_t3016753001 * get_U3CInternalClientU3Ek__BackingField_1() const { return ___U3CInternalClientU3Ek__BackingField_1; }
	inline Client_t3016753001 ** get_address_of_U3CInternalClientU3Ek__BackingField_1() { return &___U3CInternalClientU3Ek__BackingField_1; }
	inline void set_U3CInternalClientU3Ek__BackingField_1(Client_t3016753001 * value)
	{
		___U3CInternalClientU3Ek__BackingField_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CInternalClientU3Ek__BackingField_1, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
