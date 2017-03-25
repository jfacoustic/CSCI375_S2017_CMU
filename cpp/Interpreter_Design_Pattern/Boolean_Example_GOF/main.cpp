/* Joshua Mathews
 * Example of Interpreter Pattern from Design Patterns by GOF
 */
#include <iostream>
#include "BooleanExp.h"
#include "Context.h"
#include "VariableExp.h"
#include "AndExp.h"
#include "Constant.h"
#include "OrExp.h"
#include "NotExp.h"

using namespace std;

int main() {
	BooleanExp* expression;
	Context context;

	VariableExp* x = new VariableExp("X");
	VariableExp* y = new VariableExp("Y");

	expression = new OrExp(new AndExp(new Constant(true), x), new AndExp(y, new NotExp(x))) ;

	context.Assign(x, true);
	context.Assign(y, false);
	bool result = expression->Evaluate(context);
	cout << result << endl;
	return 0;
}
