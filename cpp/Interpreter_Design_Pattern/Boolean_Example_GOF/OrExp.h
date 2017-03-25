/* Joshua Mathews
 * Example of Interpreter Pattern from Design Patterns by GOF
 */

#ifndef OREXP_H_
#define OREXP_H_
#include "BooleanExp.h"
class OrExp : public BooleanExp {
public:
	OrExp(BooleanExp*, BooleanExp*);
	virtual ~OrExp();
	virtual bool Evaluate(Context&);
	virtual BooleanExp* Replace(const char*, BooleanExp&);
	virtual BooleanExp* Copy() const;

private:
	BooleanExp* _operand1;
	BooleanExp* _operand2;
};

#endif /* OREXP_H_ */
