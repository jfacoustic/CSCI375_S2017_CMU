/* Joshua Mathews
 * Example of Interpreter Pattern from Design Patterns by GOF
 */

#include "VariableExp.h"

VariableExp::VariableExp(const char* name) {
	_name = strdup(name);
}

VariableExp::~VariableExp() {
	// TODO Auto-generated destructor stub
}

bool VariableExp::Evaluate(Context& aContext) {
	return aContext.Lookup(_name);
}

BooleanExp* VariableExp::Copy() const {
	return new VariableExp(_name);
}

BooleanExp* VariableExp::Replace(const char* name, BooleanExp& exp) {
	if (strcmp(name, _name) == 0) {
		return exp.Copy();
	}
	else {
		return new VariableExp(_name);
	}
}

char* VariableExp::getName() {
	return _name;
}
