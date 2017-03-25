/* Joshua Mathews
 * Example of Interpreter Pattern from Design Patterns by GOF
 */

#include "AndExp.h"

AndExp::AndExp(BooleanExp* op1, BooleanExp* op2) {
	_operand1 = op1;
	_operand2 = op2;
}

AndExp::~AndExp() {
	// TODO Auto-generated destructor stub
}

bool AndExp::Evaluate(Context& aContext) {
	return _operand1->Evaluate(aContext) && _operand2->Evaluate(aContext);
}

BooleanExp* AndExp::Copy() const {
	return new AndExp(_operand1->Copy(), _operand2->Copy());
}

BooleanExp* AndExp::Replace (const char * name, BooleanExp& exp) {
	return new AndExp(_operand1->Replace(name, exp), _operand2->Replace(name, exp));
}

