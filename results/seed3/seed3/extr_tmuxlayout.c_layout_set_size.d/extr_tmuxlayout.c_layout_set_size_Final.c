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

/* Type definitions */
typedef  void* u_int ;
struct layout_cell {void* yoff; void* xoff; void* sy; void* sx; } ;

/* Variables and functions */

void
layout_set_size(struct layout_cell *lc, u_int sx, u_int sy, u_int xoff,
    u_int yoff)
{
	lc->sx = sx;
	lc->sy = sy;

	lc->xoff = xoff;
	lc->yoff = yoff;
}


// ------------------------------------------------------------------------- //




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
          int _len_lc0 = 1;
          struct layout_cell * lc = (struct layout_cell *) malloc(_len_lc0*sizeof(struct layout_cell));
          for(int _i0 = 0; _i0 < _len_lc0; _i0++) {
              }
          void * sx;
          void * sy;
          void * xoff;
          void * yoff;
          layout_set_size(lc,sx,sy,xoff,yoff);
          free(lc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_lc0 = 65025;
          struct layout_cell * lc = (struct layout_cell *) malloc(_len_lc0*sizeof(struct layout_cell));
          for(int _i0 = 0; _i0 < _len_lc0; _i0++) {
              }
          void * sx;
          void * sy;
          void * xoff;
          void * yoff;
          layout_set_size(lc,sx,sy,xoff,yoff);
          free(lc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_lc0 = 100;
          struct layout_cell * lc = (struct layout_cell *) malloc(_len_lc0*sizeof(struct layout_cell));
          for(int _i0 = 0; _i0 < _len_lc0; _i0++) {
              }
          void * sx;
          void * sy;
          void * xoff;
          void * yoff;
          layout_set_size(lc,sx,sy,xoff,yoff);
          free(lc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
