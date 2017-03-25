/* Joshua Mathews
 * Example of Interpreter Pattern from Design Patterns by GOF
 */

#ifndef VARIABLEEXP_H_
#define VARIABLEEXP_H_
#include <string.h>
#include "BooleanExp.h"

class VariableExp : public BooleanExp {
public:
	VariableExp(const char*);
	virtual ~VariableExp();

	virtual bool Evaluate(Context&);

	virtual BooleanExp* Replace(const char*, BooleanExp&);
	virtual BooleanExp* Copy() const;
	char* getName();
private:
	char* _name;
};

#endif /* VARIABLEEXP_H_ */
