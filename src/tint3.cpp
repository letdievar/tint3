#include <unistd.h>

#include "xlibCtrl.h"

using namespace xlibCtrl;

int main()
{
	std::string empty_string ("");

	// Open display
	DisplayCtrl * d  = new DisplayCtrl(empty_string);
	
	// Create the window
	Window w = XCreateWindow(
			d->getDisplay(), 
			DefaultRootWindow(d->getDisplay()),
			0, 0, 200, 100, 0,
			CopyFromParent, CopyFromParent, CopyFromParent,
			0, 0);

	// Show the window
	XMapWindow(d->getDisplay(), w);
	XFlush(d->getDisplay());

	// Sleep enough
	sleep(10);
	
	return 0;
}
