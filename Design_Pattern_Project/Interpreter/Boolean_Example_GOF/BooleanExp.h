/* Joshua Mathews
 * Example of Interpreter Pattern from Design Patterns by GOF
 */

#ifndef BOOLEANEXP_H_
#define BOOLEANEXP_H_

#include "Context.h"

class BooleanExp {
public:
	BooleanExp();
	virtual ~BooleanExp();

	virtual bool Evaluate(Context&) = 0;
	virtual BooleanExp* Replace(const char*, BooleanExp&) = 0;
	virtual BooleanExp* Copy() const = 0;
};

#endif /* BOOLEANEXP_H_ */
