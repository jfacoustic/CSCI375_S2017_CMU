#ifndef GTKVIEWCONTROLLER_H
#define GTKVIEWCONTROLLER_H
#include "Controller.h"

class GTKController : Controller {
public:
	GTKController();
	virtual ~GTKController();
	void getUserInput(int choice);
	int sendUserInput();
private:
	int _choice;
};
#endif
