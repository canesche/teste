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
typedef  int /*<<< orphan*/  picoVec_t ;
struct TYPE_3__ {int numFaceNormals; int /*<<< orphan*/ ** faceNormal; } ;
typedef  TYPE_1__ picoSurface_t ;

/* Variables and functions */

picoVec_t *PicoGetFaceNormal( picoSurface_t *surface, int num ){
	if ( surface == NULL || num < 0 || num > surface->numFaceNormals ) {
		return NULL;
	}
	return surface->faceNormal[ num ];
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
          int num = 100;
          int _len_surface0 = 1;
          struct TYPE_3__ * surface = (struct TYPE_3__ *) malloc(_len_surface0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0].numFaceNormals = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_surface__i0__faceNormal0 = 1;
          surface[_i0].faceNormal = (int **) malloc(_len_surface__i0__faceNormal0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_surface__i0__faceNormal0; _j0++) {
            int _len_surface__i0__faceNormal1 = 1;
            surface[_i0].faceNormal[_j0] = (int *) malloc(_len_surface__i0__faceNormal1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_surface__i0__faceNormal1; _j1++) {
              surface[_i0].faceNormal[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = PicoGetFaceNormal(surface,num);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(*(surface[_aux].faceNormal));
        free(surface[_aux].faceNormal);
          }
          free(surface);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num = 255;
          int _len_surface0 = 65025;
          struct TYPE_3__ * surface = (struct TYPE_3__ *) malloc(_len_surface0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0].numFaceNormals = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_surface__i0__faceNormal0 = 1;
          surface[_i0].faceNormal = (int **) malloc(_len_surface__i0__faceNormal0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_surface__i0__faceNormal0; _j0++) {
            int _len_surface__i0__faceNormal1 = 1;
            surface[_i0].faceNormal[_j0] = (int *) malloc(_len_surface__i0__faceNormal1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_surface__i0__faceNormal1; _j1++) {
              surface[_i0].faceNormal[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = PicoGetFaceNormal(surface,num);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(*(surface[_aux].faceNormal));
        free(surface[_aux].faceNormal);
          }
          free(surface);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num = 10;
          int _len_surface0 = 100;
          struct TYPE_3__ * surface = (struct TYPE_3__ *) malloc(_len_surface0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_surface0; _i0++) {
            surface[_i0].numFaceNormals = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_surface__i0__faceNormal0 = 1;
          surface[_i0].faceNormal = (int **) malloc(_len_surface__i0__faceNormal0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_surface__i0__faceNormal0; _j0++) {
            int _len_surface__i0__faceNormal1 = 1;
            surface[_i0].faceNormal[_j0] = (int *) malloc(_len_surface__i0__faceNormal1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_surface__i0__faceNormal1; _j1++) {
              surface[_i0].faceNormal[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int * benchRet = PicoGetFaceNormal(surface,num);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_surface0; _aux++) {
          free(*(surface[_aux].faceNormal));
        free(surface[_aux].faceNormal);
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
