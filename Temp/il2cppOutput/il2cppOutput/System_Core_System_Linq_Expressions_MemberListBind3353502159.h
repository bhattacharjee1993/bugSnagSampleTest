#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Core_System_Linq_Expressions_MemberBinding265491700.h"

// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3895063248;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberListBinding
struct  MemberListBinding_t3353502159  : public MemberBinding_t265491700
{
public:
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.MemberListBinding::initializers
	ReadOnlyCollection_1_t3895063248 * ___initializers_2;

public:
	inline static int32_t get_offset_of_initializers_2() { return static_cast<int32_t>(offsetof(MemberListBinding_t3353502159, ___initializers_2)); }
	inline ReadOnlyCollection_1_t3895063248 * get_initializers_2() const { return ___initializers_2; }
	inline ReadOnlyCollection_1_t3895063248 ** get_address_of_initializers_2() { return &___initializers_2; }
	inline void set_initializers_2(ReadOnlyCollection_1_t3895063248 * value)
	{
		___initializers_2 = value;
		Il2CppCodeGenWriteBarrier(&___initializers_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
