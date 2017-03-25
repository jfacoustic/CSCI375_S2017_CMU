/* Joshua Mathews
 * Example of Interpreter Pattern from Design Patterns by GOF
 */

#ifndef CONSTANT_H_
#define CONSTANT_H_
#include "BooleanExp.h"

class Constant : public BooleanExp{
public:
	Constant(const bool);
	virtual ~Constant();

	virtual bool Evaluate(Context&);
	virtual BooleanExp* Replace(const char*, BooleanExp&);
	virtual BooleanExp* Copy() const;
private:
	bool _val;
};

#endif /* CONSTANT_H_ */
