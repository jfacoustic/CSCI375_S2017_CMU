/*
 * RobotController.cpp
 *
 *  Created on: May 2, 2017
 *      Author: joshua
 */

#include "RobotController.h"

RobotController::RobotController() {
	// TODO Auto-generated constructor stub
	_choice = NULL;
}

RobotController::~RobotController() {
	// TODO Auto-generated destructor stub
}

void RobotController::getUserInput() {
	int choice = rand()%3 ;
	_choice = choice;
}

int RobotController::sendUserInput() {
	return _choice;
}
