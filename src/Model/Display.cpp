#include "Model/Display.h"

using namespace Model;

/**
 * CDisplay constructor
 */
CDisplay::CDisplay( std::string name )
{
	this->_display = XOpenDisplay( name.c_str() );

	// There should be a way to get the actual screen_number
	this->_display_width = XDisplayWidth(this->_display, 0);
	this->_display_height = XDisplayHeight(this->_display, 0);

	std::ostringstream ost;
	if ( ! this->_display ) {
		ost << "Could not open display '" << name.c_str() << "' with id 0";
		// throw exception
	} else {
		ost << "Opened display\n";
	}
}

/**
 * CDisplay destructor
 */
CDisplay::~CDisplay()
{
	if (_display) {
		XCloseDisplay(_display);
		_display = 0;
	}
}

/**
 * CDisplay::getDisplay()
 * Returns the pointer to the opened display
 */
Display * CDisplay::GetDisplay()
{
	return _display;
}

/**
 * CDisplay::getDisplayWidth()
 * Returns the width of the opened display
 */
int CDisplay::GetDisplayWidth()
{
	return _display_width;
}
