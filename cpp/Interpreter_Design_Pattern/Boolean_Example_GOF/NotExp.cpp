/* Joshua Mathews
 * Example of Interpreter Pattern from Design Patterns by GOF
 */
#include "NotExp.h"

NotExp::NotExp(BooleanExp* op1) {
	// TODO Auto-generated constructor stub
	_operand1 = op1;
}

NotExp::~NotExp() {
	// TODO Auto-generated destructor stub
}

bool NotExp::Evaluate(Context& aContext) {
	return !(_operand1->Evaluate(aContext));

}

BooleanExp* NotExp::Replace(const char* name, BooleanExp& exp) {
	return new NotExp( _operand1->Replace(name, exp));
}

BooleanExp* NotExp::Copy() const {
	return new NotExp( _operand1->Copy() );
}


