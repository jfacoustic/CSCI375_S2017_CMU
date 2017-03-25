/* Joshua Mathews
 * Example of Interpreter Pattern from Design Patterns by GOF
 */

#include <iostream>
#include "Context.h"
#include "VariableExp.h"

bool Context::Lookup( char* name) {
	return lookupMap[name];
}

bool Context::Assign(VariableExp * exp, bool b) {
	lookupMap[exp->getName()] = b;
	return b;
}
