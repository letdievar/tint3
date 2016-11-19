#include <iostream>
#include "Controller/DisplayCtrl.h"

using namespace Controller;

DisplayCtrl::DisplayCtrl( std::string name ) {
	this->_display = XOpenDisplay( name.c_str() );
	this->_display_width = XDisplayWidth(this->_display, 0);

	std::cout << "The display width is: " << this->_display_width << std::endl;

	if ( this->_display )
	{
		std::ostringstream ost;
		ost << "Could not open display '" << name << "'.";
		// throw exception
	} else {
		std::cout << "Opened display\n";
	}
}

DisplayCtrl::~DisplayCtrl() {
	if ( _display ) {
		XCloseDisplay( _display );
		_display = 0;
	}
}

Display * DisplayCtrl::getDisplay() {
	return _display;
}

int DisplayCtrl::getDisplayWidth() {
	return this->_display_width;
}
