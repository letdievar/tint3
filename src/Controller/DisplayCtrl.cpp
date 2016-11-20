#include <iostream>
#include "Controller/DisplayCtrl.h"

using namespace Controller;

DisplayCtrl::DisplayCtrl()
{
	std::string empty_string ("");

	// Create the CDisplay
	_cdisplay = new Model::CDisplay(empty_string);
}

DisplayCtrl::~DisplayCtrl() 
{
	if (this->_cdisplay) {
		this->_cdisplay->~CDisplay();
		this->_cdisplay = 0;
	}
}

Model::CDisplay * DisplayCtrl::GetCDisplay()
{
	return _cdisplay;
}
