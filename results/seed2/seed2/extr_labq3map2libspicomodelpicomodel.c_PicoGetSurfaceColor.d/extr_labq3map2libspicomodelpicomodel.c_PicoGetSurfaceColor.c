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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct TYPE_3__ {int numColorArrays; int numVertexes; int /*<<< orphan*/ *** color; } ;
typedef  TYPE_1__ picoSurface_t ;
typedef  int /*<<< orphan*/  picoByte_t ;

/* Variables and functions */

picoByte_t *PicoGetSurfaceColor( picoSurface_t *surface, int array, int num ){
	if ( surface == NULL || array < 0 || array > surface->numColorArrays || num < 0 || num > surface->numVertexes ) {
		return NULL;
	}
	return surface->color[ array ][ num ];
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
          int array = 100;
          int num = 100;
          int _len_surface0 = 1;
          struct TYPE_3__ * surface = (struct TYPE_3__ *) malloc(_len_surface0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0].numColorArrays = ((-2 * (next_i()%2)) + 1) * next_i();
        surface[_i0].numVertexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_surface__i0__color0 = 1;
          surface[_i0].color = (int ***) malloc(_len_surface__i0__color0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_surface__i0__color0; _j0++) {
            int _len_surface__i0__color1 = 1;
            surface[_i0].color[_j0] = (int **) malloc(_len_surface__i0__color1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_surface__i0__color1; _j1++) {
              int _len_surface__i0__color2 = 1;
              surface[_i0].color[_j0][_j1] = (int *) malloc(_len_surface__i0__color2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_surface__i0__color2; _j2++) {
                surface[_i0].color[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          int * benchRet = PicoGetSurfaceColor(surface,array,num);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          }
          free(surface);
        
        break;
    }
    // big-arr
    case 1:
    {
          int array = 255;
          int num = 255;
          int _len_surface0 = 65025;
          struct TYPE_3__ * surface = (struct TYPE_3__ *) malloc(_len_surface0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0].numColorArrays = ((-2 * (next_i()%2)) + 1) * next_i();
        surface[_i0].numVertexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_surface__i0__color0 = 1;
          surface[_i0].color = (int ***) malloc(_len_surface__i0__color0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_surface__i0__color0; _j0++) {
            int _len_surface__i0__color1 = 1;
            surface[_i0].color[_j0] = (int **) malloc(_len_surface__i0__color1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_surface__i0__color1; _j1++) {
              int _len_surface__i0__color2 = 1;
              surface[_i0].color[_j0][_j1] = (int *) malloc(_len_surface__i0__color2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_surface__i0__color2; _j2++) {
                surface[_i0].color[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          int * benchRet = PicoGetSurfaceColor(surface,array,num);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          }
          free(surface);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int array = 10;
          int num = 10;
          int _len_surface0 = 100;
          struct TYPE_3__ * surface = (struct TYPE_3__ *) malloc(_len_surface0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0].numColorArrays = ((-2 * (next_i()%2)) + 1) * next_i();
        surface[_i0].numVertexes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_surface__i0__color0 = 1;
          surface[_i0].color = (int ***) malloc(_len_surface__i0__color0*sizeof(int **));
          for(int _j0 = 0; _j0 < _len_surface__i0__color0; _j0++) {
            int _len_surface__i0__color1 = 1;
            surface[_i0].color[_j0] = (int **) malloc(_len_surface__i0__color1*sizeof(int *));
            for(int _j1 = 0; _j1 < _len_surface__i0__color1; _j1++) {
              int _len_surface__i0__color2 = 1;
              surface[_i0].color[_j0][_j1] = (int *) malloc(_len_surface__i0__color2*sizeof(int));
              for(int _j2 = 0; _j2 < _len_surface__i0__color2; _j2++) {
                surface[_i0].color[_j0][_j1][_j2] = ((-2 * (next_i()%2)) + 1) * next_i();
              }
            }
          }
          }
          int * benchRet = PicoGetSurfaceColor(surface,array,num);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          }
          free(surface);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
