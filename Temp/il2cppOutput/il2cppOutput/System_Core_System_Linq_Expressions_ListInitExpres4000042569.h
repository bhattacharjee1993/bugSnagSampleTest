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
// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit>
struct ReadOnlyCollection_1_t3895063248;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.ListInitExpression
struct  ListInitExpression_t4000042569  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.NewExpression System.Linq.Expressions.ListInitExpression::new_expression
	NewExpression_t1271006003 * ___new_expression_2;
	// System.Collections.ObjectModel.ReadOnlyCollection`1<System.Linq.Expressions.ElementInit> System.Linq.Expressions.ListInitExpression::initializers
	ReadOnlyCollection_1_t3895063248 * ___initializers_3;

public:
	inline static int32_t get_offset_of_new_expression_2() { return static_cast<int32_t>(offsetof(ListInitExpression_t4000042569, ___new_expression_2)); }
	inline NewExpression_t1271006003 * get_new_expression_2() const { return ___new_expression_2; }
	inline NewExpression_t1271006003 ** get_address_of_new_expression_2() { return &___new_expression_2; }
	inline void set_new_expression_2(NewExpression_t1271006003 * value)
	{
		___new_expression_2 = value;
		Il2CppCodeGenWriteBarrier(&___new_expression_2, value);
	}

	inline static int32_t get_offset_of_initializers_3() { return static_cast<int32_t>(offsetof(ListInitExpression_t4000042569, ___initializers_3)); }
	inline ReadOnlyCollection_1_t3895063248 * get_initializers_3() const { return ___initializers_3; }
	inline ReadOnlyCollection_1_t3895063248 ** get_address_of_initializers_3() { return &___initializers_3; }
	inline void set_initializers_3(ReadOnlyCollection_1_t3895063248 * value)
	{
		___initializers_3 = value;
		Il2CppCodeGenWriteBarrier(&___initializers_3, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
