#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Core_System_Linq_Expressions_Expression1588164026.h"

// System.Reflection.ConstructorInfo
struct ConstructorInfo_t5769829;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression>
struct ReadOnlyCollection_1_t2800740313;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo>
struct ReadOnlyCollection_1_t297610732;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.NewExpression
struct  NewExpression_t1271006003  : public Expression_t1588164026
{
public:
	// System.Reflection.ConstructorInfo System.Linq.Expressions.NewExpression::constructor
	ConstructorInfo_t5769829 * ___constructor_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.Expression> System.Linq.Expressions.NewExpression::arguments
	ReadOnlyCollection_1_t2800740313 * ___arguments_3;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Reflection.MemberInfo> System.Linq.Expressions.NewExpression::members
	ReadOnlyCollection_1_t297610732 * ___members_4;

public:
	inline static int32_t get_offset_of_constructor_2() { return static_cast<int32_t>(offsetof(NewExpression_t1271006003, ___constructor_2)); }
	inline ConstructorInfo_t5769829 * get_constructor_2() const { return ___constructor_2; }
	inline ConstructorInfo_t5769829 ** get_address_of_constructor_2() { return &___constructor_2; }
	inline void set_constructor_2(ConstructorInfo_t5769829 * value)
	{
		___constructor_2 = value;
		Il2CppCodeGenWriteBarrier(&___constructor_2, value);
	}

	inline static int32_t get_offset_of_arguments_3() { return static_cast<int32_t>(offsetof(NewExpression_t1271006003, ___arguments_3)); }
	inline ReadOnlyCollection_1_t2800740313 * get_arguments_3() const { return ___arguments_3; }
	inline ReadOnlyCollection_1_t2800740313 ** get_address_of_arguments_3() { return &___arguments_3; }
	inline void set_arguments_3(ReadOnlyCollection_1_t2800740313 * value)
	{
		___arguments_3 = value;
		Il2CppCodeGenWriteBarrier(&___arguments_3, value);
	}

	inline static int32_t get_offset_of_members_4() { return static_cast<int32_t>(offsetof(NewExpression_t1271006003, ___members_4)); }
	inline ReadOnlyCollection_1_t297610732 * get_members_4() const { return ___members_4; }
	inline ReadOnlyCollection_1_t297610732 ** get_address_of_members_4() { return &___members_4; }
	inline void set_members_4(ReadOnlyCollection_1_t297610732 * value)
	{
		___members_4 = value;
		Il2CppCodeGenWriteBarrier(&___members_4, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
