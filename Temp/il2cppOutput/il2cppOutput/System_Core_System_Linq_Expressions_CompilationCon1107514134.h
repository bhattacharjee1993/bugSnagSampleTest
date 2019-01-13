#pragma once

#include "il2cpp-config.h"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif

#include <stdint.h>

#include "System_Core_System_Linq_Expressions_ExpressionVisi1561124052.h"

// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.LambdaExpression>
struct Dictionary_2_t4047723319;
// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.LambdaExpression,System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>>
struct Dictionary_2_t184348547;
// System.Linq.Expressions.LambdaExpression
struct LambdaExpression_t3131094331;




#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif

// System.Linq.Expressions.CompilationContext/HoistedVariableDetector
struct  HoistedVariableDetector_t1107514134  : public ExpressionVisitor_t1561124052
{
public:
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.ParameterExpression,System.Linq.Expressions.LambdaExpression> System.Linq.Expressions.CompilationContext/HoistedVariableDetector::parameter_to_lambda
	Dictionary_2_t4047723319 * ___parameter_to_lambda_0;
	// System.Collections.Generic.Dictionary`2<System.Linq.Expressions.LambdaExpression,System.Collections.Generic.List`1<System.Linq.Expressions.ParameterExpression>> System.Linq.Expressions.CompilationContext/HoistedVariableDetector::hoisted_map
	Dictionary_2_t184348547 * ___hoisted_map_1;
	// System.Linq.Expressions.LambdaExpression System.Linq.Expressions.CompilationContext/HoistedVariableDetector::lambda
	LambdaExpression_t3131094331 * ___lambda_2;

public:
	inline static int32_t get_offset_of_parameter_to_lambda_0() { return static_cast<int32_t>(offsetof(HoistedVariableDetector_t1107514134, ___parameter_to_lambda_0)); }
	inline Dictionary_2_t4047723319 * get_parameter_to_lambda_0() const { return ___parameter_to_lambda_0; }
	inline Dictionary_2_t4047723319 ** get_address_of_parameter_to_lambda_0() { return &___parameter_to_lambda_0; }
	inline void set_parameter_to_lambda_0(Dictionary_2_t4047723319 * value)
	{
		___parameter_to_lambda_0 = value;
		Il2CppCodeGenWriteBarrier(&___parameter_to_lambda_0, value);
	}

	inline static int32_t get_offset_of_hoisted_map_1() { return static_cast<int32_t>(offsetof(HoistedVariableDetector_t1107514134, ___hoisted_map_1)); }
	inline Dictionary_2_t184348547 * get_hoisted_map_1() const { return ___hoisted_map_1; }
	inline Dictionary_2_t184348547 ** get_address_of_hoisted_map_1() { return &___hoisted_map_1; }
	inline void set_hoisted_map_1(Dictionary_2_t184348547 * value)
	{
		___hoisted_map_1 = value;
		Il2CppCodeGenWriteBarrier(&___hoisted_map_1, value);
	}

	inline static int32_t get_offset_of_lambda_2() { return static_cast<int32_t>(offsetof(HoistedVariableDetector_t1107514134, ___lambda_2)); }
	inline LambdaExpression_t3131094331 * get_lambda_2() const { return ___lambda_2; }
	inline LambdaExpression_t3131094331 ** get_address_of_lambda_2() { return &___lambda_2; }
	inline void set_lambda_2(LambdaExpression_t3131094331 * value)
	{
		___lambda_2 = value;
		Il2CppCodeGenWriteBarrier(&___lambda_2, value);
	}
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif
