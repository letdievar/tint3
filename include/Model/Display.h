#ifndef _display_class_
#define _display_class_

#include <string>
#include <sstream>
#include <X11/Xlib.h>

namespace Model
{
	class CDisplay
	{
		private:
			Display * _display;
			int _display_width;
			int _display_height;

		public:
			CDisplay( std::string name );
			~CDisplay( );

			Display * getDisplay();
			int getDisplayWidth();
	};
}

#endif
