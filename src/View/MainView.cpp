#include <unistd.h>
#include <X11/Xlib.h>

#include "View/MainView.h"

using namespace View;

/**
 * MainView Constructor
 */
MainView::MainView()
{
	_displayCtrl = new Controller::DisplayCtrl();
}

/**
 * MainView Destructor
 */
MainView::~MainView()
{
}

/**
 * MainView::CreateWindow()
 * Creates the main window
 */
void MainView::CreateWindow() 
{

	Model::CDisplay * cd = _displayCtrl->GetCDisplay();
	Display * d = cd->GetDisplay();
	int display_width = cd->GetDisplayWidth();

	// Create the window borders
	int blackColor = XBlackPixel(d, XDefaultScreen(d));
	int whiteColor = XWhitePixel(d, XDefaultScreen(d));

	/*
	_mainWindow = XCreateWindow(
			d, DefaultRootWindow(d), 0, 0, display_width, 20,
			0,
			CopyFromParent, CopyFromParent, CopyFromParent,
			0, 0);
	*/
	_mainWindow = XCreateSimpleWindow(
			d, DefaultRootWindow(d), 
			0, 0, 
			display_width, 24, 
			0, blackColor, blackColor);
			
}

/**
 * MainView::ShowWindow()
 * Shows the main window
 * TODO: Not use sleep, but repaint(?) in a thread
 */
void MainView::ShowWindow()
{
	Display * d = _displayCtrl->GetCDisplay()->GetDisplay();

	// Show the window
	XMapWindow(d, _mainWindow);
	XFlush(d);

	// Sleep enough
	sleep(10);
}
