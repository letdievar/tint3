#include <iostream>
#include "Controller/DisplayCtrl.h"

using namespace Controller;

/**
 * DisplayCtrl Constructor
 */
DisplayCtrl::DisplayCtrl()
{
	std::string empty_string ("");

	// Create the CDisplay
	_cdisplay = new Model::CDisplay(empty_string);
}

/**
 * DisplayCtrl Destructor
 */
DisplayCtrl::~DisplayCtrl() 
{
	if (this->_cdisplay) {
		this->_cdisplay->~CDisplay();
		this->_cdisplay = 0;
	}
}

/**
 * DisplayCtrl::GetCDisplay()
 * Returns Model::CDisplay *
 */
Model::CDisplay * DisplayCtrl::GetCDisplay()
{
	return _cdisplay;
}
