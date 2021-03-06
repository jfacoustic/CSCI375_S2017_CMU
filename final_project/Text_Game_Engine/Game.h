/*
 * Game.h
 *
 *  Created on: May 1, 2017
 *      Author: joshua
 */

#ifndef GAME_H_
#define GAME_H_
#include <iostream>
#include "Reader.h"
#include "Controller.h"

class Game {
public:
	Game(Reader * reader, Controller * control);

	void run();
private:
	//std::string _textToPrint;
	bool _running;
	int _currentChoice;
	Reader * _reader;
	Controller * _control;

};

#endif /* GAME_H_ */
