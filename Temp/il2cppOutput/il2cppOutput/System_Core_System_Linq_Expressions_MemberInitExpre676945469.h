#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Core_System_Linq_Expressions_Expression1588164026.h"

// System.Linq.Expressions.NewExpression
struct NewExpression_t1271006003;
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding>
struct ReadOnlyCollection_1_t1478067987;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.MemberInitExpression
struct  MemberInitExpression_t676945469  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.MemberInitExpression::new_expression
	NewExpression_t1271006003 * ___new_expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.MemberBinding> System.Linq.Expressions.MemberInitExpression::bindings
	ReadOnlyCollection_1_t1478067987 * ___bindings_3;

public:
	inline static int32_t get_offset_of_new_expression_2() { return static_cast<int32_t>(offsetof(MemberInitExpression_t676945469, ___new_expression_2)); }
	inline NewExpression_t1271006003 * get_new_expression_2() const { return ___new_expression_2; }
	inline NewExpression_t1271006003 ** get_address_of_new_expression_2() { return &___new_expression_2; }
	inline void set_new_expression_2(NewExpression_t1271006003 * value)
	{
		___new_expression_2 = value;
		Il2CppCodeGenWriteBarrier(&___new_expression_2, value);
	}

	inline static int32_t get_offset_of_bindings_3() { return static_cast<int32_t>(offsetof(MemberInitExpression_t676945469, ___bindings_3)); }
	inline ReadOnlyCollection_1_t1478067987 * get_bindings_3() const { return ___bindings_3; }
	inline ReadOnlyCollection_1_t1478067987 ** get_address_of_bindings_3() { return &___bindings_3; }
	inline void set_bindings_3(ReadOnlyCollection_1_t1478067987 * value)
	{
		___bindings_3 = value;
		Il2CppCodeGenWriteBarrier(&___bindings_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
