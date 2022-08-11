// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct TYPE_2__ {int array_mode; } ;
union dc_tiling_info {TYPE_1__ gfx8; } ;
typedef  enum surface_pixel_format { ____Placeholder_surface_pixel_format } surface_pixel_format ;

/* Variables and functions */
#define  DC_ARRAY_1D_TILED_THICK 137 
#define  DC_ARRAY_1D_TILED_THIN1 136 
#define  DC_ARRAY_2D_TILED_THICK 135 
#define  DC_ARRAY_2D_TILED_THIN1 134 
#define  DC_ARRAY_2D_TILED_X_THICK 133 
#define  DC_ARRAY_LINEAR_ALLIGNED 132 
#define  DC_ARRAY_LINEAR_GENERAL 131 
#define  DC_ARRAY_PRT_2D_TILED_THICK 130 
#define  DC_ARRAY_PRT_2D_TILED_THIN1 129 
#define  DC_ARRAY_PRT_TILED_THIN1 128 
 int SURFACE_PIXEL_FORMAT_INVALID ; 
 int SURFACE_PIXEL_FORMAT_VIDEO_BEGIN ; 
 unsigned int const** dvmm_Hw_Setting_1DTiling ; 
 unsigned int const** dvmm_Hw_Setting_2DTiling ; 
 unsigned int const** dvmm_Hw_Setting_Linear ; 

__attribute__((used)) static const unsigned int *get_dvmm_hw_setting(
		union dc_tiling_info *tiling_info,
		enum surface_pixel_format format,
		bool chroma)
{
	enum bits_per_pixel {
		bpp_8 = 0,
		bpp_16,
		bpp_32,
		bpp_64
	} bpp;

	if (format >= SURFACE_PIXEL_FORMAT_INVALID)
		bpp = bpp_32;
	else if (format >= SURFACE_PIXEL_FORMAT_VIDEO_BEGIN)
		bpp = chroma ? bpp_16 : bpp_8;
	else
		bpp = bpp_8;

	switch (tiling_info->gfx8.array_mode) {
	case DC_ARRAY_1D_TILED_THIN1:
	case DC_ARRAY_1D_TILED_THICK:
	case DC_ARRAY_PRT_TILED_THIN1:
		return dvmm_Hw_Setting_1DTiling[bpp];
	case DC_ARRAY_2D_TILED_THIN1:
	case DC_ARRAY_2D_TILED_THICK:
	case DC_ARRAY_2D_TILED_X_THICK:
	case DC_ARRAY_PRT_2D_TILED_THIN1:
	case DC_ARRAY_PRT_2D_TILED_THICK:
		return dvmm_Hw_Setting_2DTiling[bpp];
	case DC_ARRAY_LINEAR_GENERAL:
	case DC_ARRAY_LINEAR_ALLIGNED:
		return dvmm_Hw_Setting_Linear[bpp];
	default:
		return dvmm_Hw_Setting_2DTiling[bpp];
	}
}


// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          enum surface_pixel_format format = 0;
          int chroma = 100;
          int _len_tiling_info0 = 1;
          union dc_tiling_info * tiling_info = (union dc_tiling_info *) malloc(_len_tiling_info0*sizeof(union dc_tiling_info));
          for(int _i0 = 0; _i0 < _len_tiling_info0; _i0++) {
            tiling_info[_i0] = 0;
          }
          const unsigned int * benchRet = get_dvmm_hw_setting(tiling_info,format,chroma);
          printf("%u\n", (*benchRet)); 
          free(tiling_info);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum surface_pixel_format format = 0;
          int chroma = 255;
          int _len_tiling_info0 = 65025;
          union dc_tiling_info * tiling_info = (union dc_tiling_info *) malloc(_len_tiling_info0*sizeof(union dc_tiling_info));
          for(int _i0 = 0; _i0 < _len_tiling_info0; _i0++) {
            tiling_info[_i0] = 0;
          }
          const unsigned int * benchRet = get_dvmm_hw_setting(tiling_info,format,chroma);
          printf("%u\n", (*benchRet)); 
          free(tiling_info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum surface_pixel_format format = 0;
          int chroma = 10;
          int _len_tiling_info0 = 100;
          union dc_tiling_info * tiling_info = (union dc_tiling_info *) malloc(_len_tiling_info0*sizeof(union dc_tiling_info));
          for(int _i0 = 0; _i0 < _len_tiling_info0; _i0++) {
            tiling_info[_i0] = 0;
          }
          const unsigned int * benchRet = get_dvmm_hw_setting(tiling_info,format,chroma);
          printf("%u\n", (*benchRet)); 
          free(tiling_info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
