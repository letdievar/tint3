#include "Model/Display.h"

using namespace Model;

CDisplay::CDisplay( std::string name )
{
	this->_display = XOpenDisplay( name.c_str() );
}
