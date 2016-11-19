#ifndef _xlib_display_class_
#define _xlib_display_class_

#include <string>
#include <sstream>
#include <X11/Xlib.h>

namespace xlibCtrl
{
	class DisplayCtrl
	{
		private:
			Display* m_display;

		public:
			DisplayCtrl( std::string name );
			~DisplayCtrl( );
			Display * getDisplay( );
	};
}

#endif
