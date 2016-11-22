#include <string>

#include <X11/Xlib.h>

#include <cairo.h>
#include <cairo-lib.h>

#include "Model/Surface.h"

using namespace Model;

Surface::Surface( std::string name ) : CDisplay(name)
{
	Drawable da;
	da = XCreateSimpleWindow(
			this->_display,
			DefaultRootWindow(this->_display),
			0,0,0,0,0,0,0);
}
