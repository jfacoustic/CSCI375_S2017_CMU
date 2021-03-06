/*
 * Game.cpp
 *
 *  Created on: May 1, 2017
 *      Author: joshua
 */

#include "Game.h"

Game::Game(Reader * reader, Controller * control) {
	// TODO Auto-generated constructor stub
	_running = true;
	_currentChoice = NULL;
	_reader = reader;
	_control = control;
}



void Game::run() {
	while(_running) {
		_reader->read();
		std::cout << _reader->getText();
		_control->getUserInput();
		_currentChoice = _control->sendUserInput();
		if(_currentChoice == 0) {
			_running = false;
			break;
		}
		_reader->setDirectory(_currentChoice);
	}

}
