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
typedef  scalar_t__ const u32 ;
struct dispc_device {TYPE_1__* feat; } ;
typedef  enum omap_plane_id { ____Placeholder_omap_plane_id } omap_plane_id ;
struct TYPE_2__ {scalar_t__** supported_color_modes; } ;

/* Variables and functions */

__attribute__((used)) static bool dispc_ovl_color_mode_supported(struct dispc_device *dispc,
					   enum omap_plane_id plane, u32 fourcc)
{
	const u32 *modes;
	unsigned int i;

	modes = dispc->feat->supported_color_modes[plane];

	for (i = 0; modes[i]; ++i) {
		if (modes[i] == fourcc)
			return true;
	}

	return false;
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
          enum omap_plane_id plane = 0;
          const long fourcc = 100;
          int _len_dispc0 = 1;
          struct dispc_device * dispc = (struct dispc_device *) malloc(_len_dispc0*sizeof(struct dispc_device));
          for(int _i0 = 0; _i0 < _len_dispc0; _i0++) {
              int _len_dispc__i0__feat0 = 1;
          dispc[_i0].feat = (struct TYPE_2__ *) malloc(_len_dispc__i0__feat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dispc__i0__feat0; _j0++) {
              int _len_dispc__i0__feat_supported_color_modes0 = 1;
          dispc[_i0].feat->supported_color_modes = (long **) malloc(_len_dispc__i0__feat_supported_color_modes0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_dispc__i0__feat_supported_color_modes0; _j0++) {
            int _len_dispc__i0__feat_supported_color_modes1 = 1;
            dispc[_i0].feat->supported_color_modes[_j0] = (long *) malloc(_len_dispc__i0__feat_supported_color_modes1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_dispc__i0__feat_supported_color_modes1; _j1++) {
              dispc[_i0].feat->supported_color_modes[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int benchRet = dispc_ovl_color_mode_supported(dispc,plane,fourcc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dispc0; _aux++) {
          free(dispc[_aux].feat);
          }
          free(dispc);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum omap_plane_id plane = 0;
          const long fourcc = 255;
          int _len_dispc0 = 65025;
          struct dispc_device * dispc = (struct dispc_device *) malloc(_len_dispc0*sizeof(struct dispc_device));
          for(int _i0 = 0; _i0 < _len_dispc0; _i0++) {
              int _len_dispc__i0__feat0 = 1;
          dispc[_i0].feat = (struct TYPE_2__ *) malloc(_len_dispc__i0__feat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dispc__i0__feat0; _j0++) {
              int _len_dispc__i0__feat_supported_color_modes0 = 1;
          dispc[_i0].feat->supported_color_modes = (long **) malloc(_len_dispc__i0__feat_supported_color_modes0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_dispc__i0__feat_supported_color_modes0; _j0++) {
            int _len_dispc__i0__feat_supported_color_modes1 = 1;
            dispc[_i0].feat->supported_color_modes[_j0] = (long *) malloc(_len_dispc__i0__feat_supported_color_modes1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_dispc__i0__feat_supported_color_modes1; _j1++) {
              dispc[_i0].feat->supported_color_modes[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int benchRet = dispc_ovl_color_mode_supported(dispc,plane,fourcc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dispc0; _aux++) {
          free(dispc[_aux].feat);
          }
          free(dispc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum omap_plane_id plane = 0;
          const long fourcc = 10;
          int _len_dispc0 = 100;
          struct dispc_device * dispc = (struct dispc_device *) malloc(_len_dispc0*sizeof(struct dispc_device));
          for(int _i0 = 0; _i0 < _len_dispc0; _i0++) {
              int _len_dispc__i0__feat0 = 1;
          dispc[_i0].feat = (struct TYPE_2__ *) malloc(_len_dispc__i0__feat0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dispc__i0__feat0; _j0++) {
              int _len_dispc__i0__feat_supported_color_modes0 = 1;
          dispc[_i0].feat->supported_color_modes = (long **) malloc(_len_dispc__i0__feat_supported_color_modes0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_dispc__i0__feat_supported_color_modes0; _j0++) {
            int _len_dispc__i0__feat_supported_color_modes1 = 1;
            dispc[_i0].feat->supported_color_modes[_j0] = (long *) malloc(_len_dispc__i0__feat_supported_color_modes1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_dispc__i0__feat_supported_color_modes1; _j1++) {
              dispc[_i0].feat->supported_color_modes[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          int benchRet = dispc_ovl_color_mode_supported(dispc,plane,fourcc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dispc0; _aux++) {
          free(dispc[_aux].feat);
          }
          free(dispc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
