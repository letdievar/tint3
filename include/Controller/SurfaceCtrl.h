#ifndef _surface_controller_class_
#define _surface_controller_class_

#include "Model/Surface.h"

namespace Controller
{
	class SurfaceCtrl
	{
		private:
			Model::Surface * _surface;

		public:
			SurfaceCtrl();
			~SurfaceCtrl();
			
			Model::Surface * GetSurface();
	}
}

#endif
