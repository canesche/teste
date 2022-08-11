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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int numpoints; scalar_t__** p; } ;
typedef  TYPE_1__ winding_t ;
typedef  scalar_t__* vec3_t ;
struct TYPE_6__ {TYPE_1__* winding; } ;
typedef  TYPE_2__ side_t ;
struct TYPE_7__ {int numsides; TYPE_2__* sides; } ;
typedef  TYPE_3__ bspbrush_t ;

/* Variables and functions */

int BrushOutOfBounds(bspbrush_t *brush, vec3_t mins, vec3_t maxs, float epsilon)
{
	int i, j, n;
	winding_t *w;
	side_t *side;

	for (i = 0; i < brush->numsides; i++)
	{
		side = &brush->sides[i];
		w = side->winding;
		for (j = 0; j < w->numpoints; j++)
		{
			for (n = 0; n < 3; n++)
			{
				if (w->p[j][n] < (mins[n] + epsilon) || w->p[j][n] > (maxs[n] - epsilon)) return true;
			} //end for
		} //end for
	} //end for
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
          float epsilon = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_brush0 = 1;
          struct TYPE_7__ * brush = (struct TYPE_7__ *) malloc(_len_brush0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_brush0; _i0++) {
            brush[_i0].numsides = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_brush__i0__sides0 = 1;
          brush[_i0].sides = (struct TYPE_6__ *) malloc(_len_brush__i0__sides0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_brush__i0__sides0; _j0++) {
              int _len_brush__i0__sides_winding0 = 1;
          brush[_i0].sides->winding = (struct TYPE_5__ *) malloc(_len_brush__i0__sides_winding0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_brush__i0__sides_winding0; _j0++) {
            brush[_i0].sides->winding->numpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_brush__i0__sides_winding_p0 = 1;
          brush[_i0].sides->winding->p = (long **) malloc(_len_brush__i0__sides_winding_p0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_brush__i0__sides_winding_p0; _j0++) {
            int _len_brush__i0__sides_winding_p1 = 1;
            brush[_i0].sides->winding->p[_j0] = (long *) malloc(_len_brush__i0__sides_winding_p1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_brush__i0__sides_winding_p1; _j1++) {
              brush[_i0].sides->winding->p[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          int _len_mins0 = 1;
          long * mins = (long *) malloc(_len_mins0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_mins0; _i0++) {
            mins[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maxs0 = 1;
          long * maxs = (long *) malloc(_len_maxs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_maxs0; _i0++) {
            maxs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = BrushOutOfBounds(brush,mins,maxs,epsilon);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_brush0; _aux++) {
          free(brush[_aux].sides);
          }
          free(brush);
          free(mins);
          free(maxs);
        
        break;
    }
    // big-arr
    case 1:
    {
          float epsilon = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_brush0 = 65025;
          struct TYPE_7__ * brush = (struct TYPE_7__ *) malloc(_len_brush0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_brush0; _i0++) {
            brush[_i0].numsides = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_brush__i0__sides0 = 1;
          brush[_i0].sides = (struct TYPE_6__ *) malloc(_len_brush__i0__sides0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_brush__i0__sides0; _j0++) {
              int _len_brush__i0__sides_winding0 = 1;
          brush[_i0].sides->winding = (struct TYPE_5__ *) malloc(_len_brush__i0__sides_winding0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_brush__i0__sides_winding0; _j0++) {
            brush[_i0].sides->winding->numpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_brush__i0__sides_winding_p0 = 1;
          brush[_i0].sides->winding->p = (long **) malloc(_len_brush__i0__sides_winding_p0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_brush__i0__sides_winding_p0; _j0++) {
            int _len_brush__i0__sides_winding_p1 = 1;
            brush[_i0].sides->winding->p[_j0] = (long *) malloc(_len_brush__i0__sides_winding_p1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_brush__i0__sides_winding_p1; _j1++) {
              brush[_i0].sides->winding->p[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          int _len_mins0 = 65025;
          long * mins = (long *) malloc(_len_mins0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_mins0; _i0++) {
            mins[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maxs0 = 65025;
          long * maxs = (long *) malloc(_len_maxs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_maxs0; _i0++) {
            maxs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = BrushOutOfBounds(brush,mins,maxs,epsilon);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_brush0; _aux++) {
          free(brush[_aux].sides);
          }
          free(brush);
          free(mins);
          free(maxs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          float epsilon = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_brush0 = 100;
          struct TYPE_7__ * brush = (struct TYPE_7__ *) malloc(_len_brush0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_brush0; _i0++) {
            brush[_i0].numsides = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_brush__i0__sides0 = 1;
          brush[_i0].sides = (struct TYPE_6__ *) malloc(_len_brush__i0__sides0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_brush__i0__sides0; _j0++) {
              int _len_brush__i0__sides_winding0 = 1;
          brush[_i0].sides->winding = (struct TYPE_5__ *) malloc(_len_brush__i0__sides_winding0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_brush__i0__sides_winding0; _j0++) {
            brush[_i0].sides->winding->numpoints = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_brush__i0__sides_winding_p0 = 1;
          brush[_i0].sides->winding->p = (long **) malloc(_len_brush__i0__sides_winding_p0*sizeof(long *));
          for(int _j0 = 0; _j0 < _len_brush__i0__sides_winding_p0; _j0++) {
            int _len_brush__i0__sides_winding_p1 = 1;
            brush[_i0].sides->winding->p[_j0] = (long *) malloc(_len_brush__i0__sides_winding_p1*sizeof(long));
            for(int _j1 = 0; _j1 < _len_brush__i0__sides_winding_p1; _j1++) {
              brush[_i0].sides->winding->p[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          }
          int _len_mins0 = 100;
          long * mins = (long *) malloc(_len_mins0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_mins0; _i0++) {
            mins[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_maxs0 = 100;
          long * maxs = (long *) malloc(_len_maxs0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_maxs0; _i0++) {
            maxs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = BrushOutOfBounds(brush,mins,maxs,epsilon);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_brush0; _aux++) {
          free(brush[_aux].sides);
          }
          free(brush);
          free(mins);
          free(maxs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
