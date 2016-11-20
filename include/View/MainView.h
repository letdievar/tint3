#ifndef _main_view_class_
#define _main_view_class_

#include <X11/Xlib.h>

// Include the Controller
#include "Controller/DisplayCtrl.h"

namespace View
{
	class MainView
	{
		private:
			Controller::DisplayCtrl * _displayCtrl;
			Window _mainWindow;

		public:
			MainView();
			~MainView();

			void CreateWindow();
			void ShowWindow();
	};
}

#endif
