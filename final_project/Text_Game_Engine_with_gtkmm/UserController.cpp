/*
 * UserController.cpp
 *
 *  Created on: May 2, 2017
 *      Author: joshua
 */

#include "UserController.h"

UserController::UserController() {
	// TODO Auto-generated constructor stub
	 _choice = NULL;
}

UserController::~UserController() {
	// TODO Auto-generated destructor stub

}

void UserController::getUserInput() {
	int temp;
	std::cin >> temp;
	_choice = temp;
}

int UserController::sendUserInput() {
	return _choice;

}
