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
typedef  size_t u_int ;
struct grid {TYPE_1__* linedata; } ;
struct TYPE_2__ {int flags; size_t cellused; } ;

/* Variables and functions */
 int GRID_LINE_WRAPPED ; 
 size_t UINT_MAX ; 

void
grid_wrap_position(struct grid *gd, u_int px, u_int py, u_int *wx, u_int *wy)
{
	u_int	ax = 0, ay = 0, yy;

	for (yy = 0; yy < py; yy++) {
		if (gd->linedata[yy].flags & GRID_LINE_WRAPPED)
			ax += gd->linedata[yy].cellused;
		else {
			ax = 0;
			ay++;
		}
	}
	if (px >= gd->linedata[yy].cellused)
		ax = UINT_MAX;
	else
		ax += px;
	*wx = ax;
	*wy = ay;
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
          unsigned long px = 100;
          unsigned long py = 100;
          int _len_gd0 = 1;
          struct grid * gd = (struct grid *) malloc(_len_gd0*sizeof(struct grid));
          for(int _i0 = 0; _i0 < _len_gd0; _i0++) {
              int _len_gd__i0__linedata0 = 1;
          gd[_i0].linedata = (struct TYPE_2__ *) malloc(_len_gd__i0__linedata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gd__i0__linedata0; _j0++) {
            gd[_i0].linedata->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        gd[_i0].linedata->cellused = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wx0 = 1;
          unsigned long * wx = (unsigned long *) malloc(_len_wx0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_wx0; _i0++) {
            wx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wy0 = 1;
          unsigned long * wy = (unsigned long *) malloc(_len_wy0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_wy0; _i0++) {
            wy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          grid_wrap_position(gd,px,py,wx,wy);
          for(int _aux = 0; _aux < _len_gd0; _aux++) {
          free(gd[_aux].linedata);
          }
          free(gd);
          free(wx);
          free(wy);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long px = 255;
          unsigned long py = 255;
          int _len_gd0 = 65025;
          struct grid * gd = (struct grid *) malloc(_len_gd0*sizeof(struct grid));
          for(int _i0 = 0; _i0 < _len_gd0; _i0++) {
              int _len_gd__i0__linedata0 = 1;
          gd[_i0].linedata = (struct TYPE_2__ *) malloc(_len_gd__i0__linedata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gd__i0__linedata0; _j0++) {
            gd[_i0].linedata->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        gd[_i0].linedata->cellused = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wx0 = 65025;
          unsigned long * wx = (unsigned long *) malloc(_len_wx0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_wx0; _i0++) {
            wx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wy0 = 65025;
          unsigned long * wy = (unsigned long *) malloc(_len_wy0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_wy0; _i0++) {
            wy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          grid_wrap_position(gd,px,py,wx,wy);
          for(int _aux = 0; _aux < _len_gd0; _aux++) {
          free(gd[_aux].linedata);
          }
          free(gd);
          free(wx);
          free(wy);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long px = 10;
          unsigned long py = 10;
          int _len_gd0 = 100;
          struct grid * gd = (struct grid *) malloc(_len_gd0*sizeof(struct grid));
          for(int _i0 = 0; _i0 < _len_gd0; _i0++) {
              int _len_gd__i0__linedata0 = 1;
          gd[_i0].linedata = (struct TYPE_2__ *) malloc(_len_gd__i0__linedata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_gd__i0__linedata0; _j0++) {
            gd[_i0].linedata->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        gd[_i0].linedata->cellused = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_wx0 = 100;
          unsigned long * wx = (unsigned long *) malloc(_len_wx0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_wx0; _i0++) {
            wx[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_wy0 = 100;
          unsigned long * wy = (unsigned long *) malloc(_len_wy0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_wy0; _i0++) {
            wy[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          grid_wrap_position(gd,px,py,wx,wy);
          for(int _aux = 0; _aux < _len_gd0; _aux++) {
          free(gd[_aux].linedata);
          }
          free(gd);
          free(wx);
          free(wy);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
