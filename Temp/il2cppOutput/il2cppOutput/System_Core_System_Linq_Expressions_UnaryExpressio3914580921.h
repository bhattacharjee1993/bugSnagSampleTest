#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Core_System_Linq_Expressions_Expression1588164026.h"

// System.Linq.Expressions.Expression
struct Expression_t1588164026;
// System.Reflection.MethodInfo
struct MethodInfo_t;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.UnaryExpression
struct  UnaryExpression_t3914580921  : public Expression_t1588164026
{
public:
	// System.Linq.Expressions.Expression System.Linq.Expressions.UnaryExpression::operand
	Expression_t1588164026 * ___operand_2;
	// System.Reflection.MethodInfo System.Linq.Expressions.UnaryExpression::method
	MethodInfo_t * ___method_3;
	// System.Boolean System.Linq.Expressions.UnaryExpression::is_lifted
	bool ___is_lifted_4;

public:
	inline static int32_t get_offset_of_operand_2() { return static_cast<int32_t>(offsetof(UnaryExpression_t3914580921, ___operand_2)); }
	inline Expression_t1588164026 * get_operand_2() const { return ___operand_2; }
	inline Expression_t1588164026 ** get_address_of_operand_2() { return &___operand_2; }
	inline void set_operand_2(Expression_t1588164026 * value)
	{
		___operand_2 = value;
		Il2CppCodeGenWriteBarrier(&___operand_2, value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(UnaryExpression_t3914580921, ___method_3)); }
	inline MethodInfo_t * get_method_3() const { return ___method_3; }
	inline MethodInfo_t ** get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(MethodInfo_t * value)
	{
		___method_3 = value;
		Il2CppCodeGenWriteBarrier(&___method_3, value);
	}

	inline static int32_t get_offset_of_is_lifted_4() { return static_cast<int32_t>(offsetof(UnaryExpression_t3914580921, ___is_lifted_4)); }
	inline bool get_is_lifted_4() const { return ___is_lifted_4; }
	inline bool* get_address_of_is_lifted_4() { return &___is_lifted_4; }
	inline void set_is_lifted_4(bool value)
	{
		___is_lifted_4 = value;
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
