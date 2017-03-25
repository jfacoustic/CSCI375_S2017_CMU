/* Joshua Mathews
 * Example of Interpreter Pattern from Design Patterns by GOF
 */

#ifndef CONTEXT_H_
#define CONTEXT_H_
#include <map>
class VariableExp;

class Context {
public:
	bool Lookup(char*);
	bool Assign(VariableExp * , bool);

private:
	std::map < char *, bool > lookupMap;
};

#endif /* CONTEXT_H_ */
