#include <iostream>
#include "xlibCtrl.h"

xlibCtrl::DisplayCtrl::DisplayCtrl( std::string name ) {
	m_display = XOpenDisplay( name.c_str() );

	if ( !m_display )
	{
		std::ostringstream ost;
		ost << "Could not open display '" << name << "'.";
		// throw exception
	} else {
		std::cout << "Opened display\n";
	}
}

xlibCtrl::DisplayCtrl::~DisplayCtrl() {
	if ( m_display ) {
		XCloseDisplay( m_display );
		m_display = 0;
	}
}

Display * xlibCtrl::DisplayCtrl::getDisplay() {
	return m_display;
}
