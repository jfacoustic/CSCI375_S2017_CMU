/*
 * RobotController.h
 *
 *  Created on: May 2, 2017
 *      Author: joshua
 */

#ifndef ROBOTCONTROLLER_H_
#define ROBOTCONTROLLER_H_
#include "Controller.h"
#include <cstdlib>
class RobotController : public Controller{
public:
	RobotController();
	virtual ~RobotController();
	void getUserInput();
	int sendUserInput();
private:
	int _choice;
};

#endif /* ROBOTCONTROLLER_H_ */
