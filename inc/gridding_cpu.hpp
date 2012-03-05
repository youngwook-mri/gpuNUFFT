#ifndef GRIDDING_CPU_H_
#define GRIDDING_CPU_H_

#include "griddingFunctions.hpp"

void gridding3D_cpu(float* data, 
				float* crds, 
				float* gdata,
				float* kernel, 
				int* sectors, 
				int sector_count, 
				int* sector_centers,
				int sector_width,
				int kernel_width, 
				int kernel_count, 
				int width);

#endif  // GRIDDING_CPU_H_
