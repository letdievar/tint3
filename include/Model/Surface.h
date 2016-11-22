#ifndef _surface_class_
#define _surface_class_

#include <X11/Xlib.h>

#include <cairo.h>
#include <cairo-lib.h>

#include "Model/Display.h"

namespace Model
{
	class Surface : public CDisplay
	{
		private:
			cairo_surface * _surface;
			cairo_t * _context;

		public:
			Surface();
			~Surface();

			cairo_surface * GetCairoSurface();
			cairo_t * GetCairoContext();
	}
}

#endif
