#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "UnityEngine_UnityEngine_MonoBehaviour3962482529.h"

// System.Collections.Generic.Queue`1<System.Action>
struct Queue_1_t1110636971;
// BugsnagUnity.MainThreadDispatchBehaviour
struct MainThreadDispatchBehaviour_t1789683220;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.MainThreadDispatchBehaviour
struct  MainThreadDispatchBehaviour_t1789683220  : public MonoBehaviour_t3962482529
{
public:

public:
};

struct MainThreadDispatchBehaviour_t1789683220_StaticFields
{
public:
	// System.Collections.Generic.Queue`1<System.Action> BugsnagUnity.MainThreadDispatchBehaviour::_executionQueue
	Queue_1_t1110636971 * ____executionQueue_2;
	// BugsnagUnity.MainThreadDispatchBehaviour BugsnagUnity.MainThreadDispatchBehaviour::_instance
	MainThreadDispatchBehaviour_t1789683220 * ____instance_3;

public:
	inline static int32_t get_offset_of__executionQueue_2() { return static_cast<int32_t>(offsetof(MainThreadDispatchBehaviour_t1789683220_StaticFields, ____executionQueue_2)); }
	inline Queue_1_t1110636971 * get__executionQueue_2() const { return ____executionQueue_2; }
	inline Queue_1_t1110636971 ** get_address_of__executionQueue_2() { return &____executionQueue_2; }
	inline void set__executionQueue_2(Queue_1_t1110636971 * value)
	{
		____executionQueue_2 = value;
		Il2CppCodeGenWriteBarrier(&____executionQueue_2, value);
	}

	inline static int32_t get_offset_of__instance_3() { return static_cast<int32_t>(offsetof(MainThreadDispatchBehaviour_t1789683220_StaticFields, ____instance_3)); }
	inline MainThreadDispatchBehaviour_t1789683220 * get__instance_3() const { return ____instance_3; }
	inline MainThreadDispatchBehaviour_t1789683220 ** get_address_of__instance_3() { return &____instance_3; }
	inline void set__instance_3(MainThreadDispatchBehaviour_t1789683220 * value)
	{
		____instance_3 = value;
		Il2CppCodeGenWriteBarrier(&____instance_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
