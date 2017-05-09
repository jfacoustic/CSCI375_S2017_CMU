/*
 * Game.h
 *
 *  Created on: May 1, 2017
 *      Author: joshua
 */

#ifndef GAME_H_
#define GAME_H_
#include <iostream>
#include <gtkmm.h>

#include "Reader.h"
#include "GTKController.h"

class Game : public Gtk::Window {
public:
	Game(Reader * reader, GTKController * control);
	virtual ~Game();
	void run();
protected:
	void fill_buffer();
	
	//Signal Handlers:
	void on_button_restart();
	void on_button_quit();
	void on_button_selection1();
	void on_button_selection2();
	void on_button_selection3();
	//child widgets:
	Gtk::Box m_VBox;
	
	Gtk::ScrolledWindow m_ScrolledWindow;
	Gtk::TextView m_TextView;

	Glib::RefPtr<Gtk::TextBuffer> m_refTextBuffer;
	
	Gtk::ButtonBox m_ButtonBox;
	Gtk::Button m_Button_Restart, m_Button_Quit, m_Button_Selection1, m_Button_Selection2, m_Button_Selection3;

private:
	//std::string _textToPrint;
	bool _running;
	int _currentChoice;
	Reader * _reader;
	GTKController * _control;

	
};

#endif /* GAME_H_ */
