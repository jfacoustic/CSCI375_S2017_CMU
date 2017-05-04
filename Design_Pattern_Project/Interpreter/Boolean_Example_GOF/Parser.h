/*
 * Parser.h
 *
 *  Created on: Apr 18, 2017
 *      Author: joshua
 */

#ifndef PARSER_H_
#define PARSER_H_
#include <map>
#include "BooleanExp.h"

class Parser {
public:
	Parser(std::string _expression);
	virtual ~Parser();

private:
	std::string expression;
	std::map<std::string, BooleanExp> parserMap;
	std::string sortString();
	std::string sortedString = sortString();

};

#endif /* PARSER_H_ */
