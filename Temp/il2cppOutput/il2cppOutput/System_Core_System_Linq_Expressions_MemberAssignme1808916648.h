#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "mscorlib_System_Object3080106164.h"

// System.Linq.Expressions.EmitContext
struct EmitContext_t1557413219;
// System.Reflection.Emit.LocalBuilder
struct LocalBuilder_t3562264111;
// System.Linq.Expressions.MemberAssignment
struct MemberAssignment_t1201848431;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberAssignment/<Emit>c__AnonStorey26
struct  U3CEmitU3Ec__AnonStorey26_t1808916648  : public Il2CppObject
{
public:
	// System.Linq.Expressions.EmitContext System.Linq.Expressions.MemberAssignment/<Emit>c__AnonStorey26::ec
	EmitContext_t1557413219 * ___ec_0;
	// System.Reflection.Emit.LocalBuilder System.Linq.Expressions.MemberAssignment/<Emit>c__AnonStorey26::local
	LocalBuilder_t3562264111 * ___local_1;
	// System.Linq.Expressions.MemberAssignment System.Linq.Expressions.MemberAssignment/<Emit>c__AnonStorey26::<>f__this
	MemberAssignment_t1201848431 * ___U3CU3Ef__this_2;

public:
	inline static int32_t get_offset_of_ec_0() { return static_cast<int32_t>(offsetof(U3CEmitU3Ec__AnonStorey26_t1808916648, ___ec_0)); }
	inline EmitContext_t1557413219 * get_ec_0() const { return ___ec_0; }
	inline EmitContext_t1557413219 ** get_address_of_ec_0() { return &___ec_0; }
	inline void set_ec_0(EmitContext_t1557413219 * value)
	{
		___ec_0 = value;
		Il2CppCodeGenWriteBarrier(&___ec_0, value);
	}

	inline static int32_t get_offset_of_local_1() { return static_cast<int32_t>(offsetof(U3CEmitU3Ec__AnonStorey26_t1808916648, ___local_1)); }
	inline LocalBuilder_t3562264111 * get_local_1() const { return ___local_1; }
	inline LocalBuilder_t3562264111 ** get_address_of_local_1() { return &___local_1; }
	inline void set_local_1(LocalBuilder_t3562264111 * value)
	{
		___local_1 = value;
		Il2CppCodeGenWriteBarrier(&___local_1, value);
	}

	inline static int32_t get_offset_of_U3CU3Ef__this_2() { return static_cast<int32_t>(offsetof(U3CEmitU3Ec__AnonStorey26_t1808916648, ___U3CU3Ef__this_2)); }
	inline MemberAssignment_t1201848431 * get_U3CU3Ef__this_2() const { return ___U3CU3Ef__this_2; }
	inline MemberAssignment_t1201848431 ** get_address_of_U3CU3Ef__this_2() { return &___U3CU3Ef__this_2; }
	inline void set_U3CU3Ef__this_2(MemberAssignment_t1201848431 * value)
	{
		___U3CU3Ef__this_2 = value;
		Il2CppCodeGenWriteBarrier(&___U3CU3Ef__this_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
