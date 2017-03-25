/* Joshua Mathews
 * Example of Interpreter Pattern from Design Patterns by GOF
 */

#ifndef NOTEXP_H_
#define NOTEXP_H_
#include "BooleanExp.h"

class NotExp : public BooleanExp {
public:
	NotExp(BooleanExp*);
	virtual ~NotExp();
	virtual bool Evaluate(Context&);
	virtual BooleanExp* Replace(const char*, BooleanExp&);
	virtual BooleanExp* Copy() const;

private:
	BooleanExp* _operand1;
};

#endif /* NOTEXP_H_ */
