/*
 * UserController.h
 *
 *  Created on: May 2, 2017
 *      Author: joshua
 */

#ifndef USERCONTROLLER_H_
#define USERCONTROLLER_H_
#include "Controller.h"
class UserController : public Controller{
public:
	UserController();
	virtual ~UserController();
	void getUserInput();
	int sendUserInput();
private:
	int _choice;
};

#endif /* USERCONTROLLER_H_ */
