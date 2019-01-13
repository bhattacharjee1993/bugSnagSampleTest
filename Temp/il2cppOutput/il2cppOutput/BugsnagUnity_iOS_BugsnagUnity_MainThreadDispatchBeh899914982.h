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
// System.Action
struct Action_t1264377477;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// BugsnagUnity.MainThreadDispatchBehaviour/<ActionWrapper>d__4
struct  U3CActionWrapperU3Ed__4_t899914982  : public Il2CppObject
{
public:
	// System.Int32 BugsnagUnity.MainThreadDispatchBehaviour/<ActionWrapper>d__4::<>1__state
	int32_t ___U3CU3E1__state_0;
	// System.Object BugsnagUnity.MainThreadDispatchBehaviour/<ActionWrapper>d__4::<>2__current
	Il2CppObject * ___U3CU3E2__current_1;
	// System.Action BugsnagUnity.MainThreadDispatchBehaviour/<ActionWrapper>d__4::a
	Action_t1264377477 * ___a_2;

public:
	inline static int32_t get_offset_of_U3CU3E1__state_0() { return static_cast<int32_t>(offsetof(U3CActionWrapperU3Ed__4_t899914982, ___U3CU3E1__state_0)); }
	inline int32_t get_U3CU3E1__state_0() const { return ___U3CU3E1__state_0; }
	inline int32_t* get_address_of_U3CU3E1__state_0() { return &___U3CU3E1__state_0; }
	inline void set_U3CU3E1__state_0(int32_t value)
	{
		___U3CU3E1__state_0 = value;
	}

	inline static int32_t get_offset_of_U3CU3E2__current_1() { return static_cast<int32_t>(offsetof(U3CActionWrapperU3Ed__4_t899914982, ___U3CU3E2__current_1)); }
	inline Il2CppObject * get_U3CU3E2__current_1() const { return ___U3CU3E2__current_1; }
	inline Il2CppObject ** get_address_of_U3CU3E2__current_1() { return &___U3CU3E2__current_1; }
	inline void set_U3CU3E2__current_1(Il2CppObject * value)
	{
		___U3CU3E2__current_1 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3E2__current_1, value);
	}

	inline static int32_t get_offset_of_a_2() { return static_cast<int32_t>(offsetof(U3CActionWrapperU3Ed__4_t899914982, ___a_2)); }
	inline Action_t1264377477 * get_a_2() const { return ___a_2; }
	inline Action_t1264377477 ** get_address_of_a_2() { return &___a_2; }
	inline void set_a_2(Action_t1264377477 * value)
	{
		___a_2 = value;
		Il2CppCodeGenWriteBarrier(&___a_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
