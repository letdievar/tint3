#include <unistd.h>

#include "Model/Display.h"

int main()
{
	std::string empty_string ("");

	// Open display
	Model::CDisplay * d = new Model::CDisplay(empty_string);
	
	// Create the window
	Window w = XCreateWindow(
			d->getDisplay(), 
			DefaultRootWindow(d->getDisplay()),
			0, 0, d->getDisplayWidth(), 20, 0,
			CopyFromParent, CopyFromParent, CopyFromParent,
			0, 0);

	// Show the window
	XMapWindow(d->getDisplay(), w);
	XFlush(d->getDisplay());

	// Sleep enough
	sleep(10);
	
	return 0;
}
