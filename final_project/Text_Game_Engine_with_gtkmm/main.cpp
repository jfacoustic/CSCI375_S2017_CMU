/*
 * main.cpp
 *
 *  Created on: May 1, 2017
 *      Author: joshua
 */
#include <iostream>
#include <cstdlib>
#include <time.h>
#include <gtkmm.h>
#include "Reader.h"
#include "Game.h"
#include "Controller.h"
#include "UserController.h"
#include "RobotController.h"
#include "GTKController.h"


using namespace std;

int main(int argc, char *argv[]) {
	bool Robot = 0; //0 for user 1 for robot
	cin >> Robot;
	Reader * reader = new Reader("/home/joshua/Documents/00_School/01_Spring2017/04_OOP/Assignments/git_repo_for_oop/CSCI375_S2017_CMU/final_project/test_game");
	srand(time(NULL));
	UserController * userControl = new UserController();
	RobotController * robotControl = new RobotController();
	//Game * userGame = new Game(reader, userControl);
	//Game * robotGame = new Game(reader, robotControl);
	//if(Robot) robotGame->run();
	//else userGame->run();
	GTKController * gameControl = new GTKController();
	auto app = Gtk::Application::create(argc, argv, "org.gtkmm.test");
	Game thisGame(reader, gameControl);
	
	return app->run(thisGame);
}
