#ifndef _display_controller_class_
#define _display_controller_class_

#include <string>
#include <sstream>
#include <X11/Xlib.h>

// Including the Model
#include "Model/Display.h"

namespace Controller
{
	class DisplayCtrl
	{
		private:
			Model::CDisplay * _cdisplay;

		public:
			DisplayCtrl();
			~DisplayCtrl();

			Model::CDisplay * GetCDisplay();
	};
}

#endif
