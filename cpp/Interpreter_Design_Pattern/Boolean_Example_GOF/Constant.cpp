/* Joshua Mathews
 * Example of Interpreter Pattern from Design Patterns by GOF
 */

#include "Constant.h"

Constant::Constant(const bool val) {
	_val = val;
}

Constant::~Constant() {
	// TODO Auto-generated destructor stub
}

bool Constant::Evaluate(Context& aContext) {
	return _val;
}

BooleanExp* Constant::Copy() const {
	return new Constant(_val);
}

BooleanExp* Constant::Replace(const char* name, BooleanExp& exp) {
	return new Constant(_val); //always going to be the same because constant
}

