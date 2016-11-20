#include <unistd.h>
#include <X11/Xlib.h>

#include "View/MainView.h"

using namespace View;

MainView::MainView()
{
	_displayCtrl = new Controller::DisplayCtrl();
}

MainView::~MainView()
{
}

void MainView::CreateWindow() 
{

	Model::CDisplay * cd = _displayCtrl->GetCDisplay();
	Display * d = cd->GetDisplay();
	int display_width = cd->GetDisplayWidth();

	_mainWindow = XCreateWindow(
			d, 
			DefaultRootWindow(d),
			0, 0, display_width, 20, 0,
			CopyFromParent, CopyFromParent, CopyFromParent,
			0, 0);
}

void MainView::ShowWindow()
{
	Display * d = _displayCtrl->GetCDisplay()->GetDisplay();

	// Show the window
	XMapWindow(d, _mainWindow);
	XFlush(d);

	// Sleep enough
	sleep(10);
}
