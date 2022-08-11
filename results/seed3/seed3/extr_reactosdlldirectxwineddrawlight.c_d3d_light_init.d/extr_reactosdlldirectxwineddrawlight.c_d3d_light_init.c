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
struct ddraw {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/ * lpVtbl; } ;
struct d3d_light {int ref; struct ddraw* ddraw; TYPE_1__ IDirect3DLight_iface; } ;

/* Variables and functions */
 int /*<<< orphan*/  d3d_light_vtbl ; 

void d3d_light_init(struct d3d_light *light, struct ddraw *ddraw)
{
    light->IDirect3DLight_iface.lpVtbl = &d3d_light_vtbl;
    light->ref = 1;
    light->ddraw = ddraw;
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
          int _len_light0 = 1;
          struct d3d_light * light = (struct d3d_light *) malloc(_len_light0*sizeof(struct d3d_light));
          for(int _i0 = 0; _i0 < _len_light0; _i0++) {
            light[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_light__i0__ddraw0 = 1;
          light[_i0].ddraw = (struct ddraw *) malloc(_len_light__i0__ddraw0*sizeof(struct ddraw));
          for(int _j0 = 0; _j0 < _len_light__i0__ddraw0; _j0++) {
            light[_i0].ddraw->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_light__i0__IDirect3DLight_iface_lpVtbl0 = 1;
          light[_i0].IDirect3DLight_iface.lpVtbl = (int *) malloc(_len_light__i0__IDirect3DLight_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_light__i0__IDirect3DLight_iface_lpVtbl0; _j0++) {
            light[_i0].IDirect3DLight_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ddraw0 = 1;
          struct ddraw * ddraw = (struct ddraw *) malloc(_len_ddraw0*sizeof(struct ddraw));
          for(int _i0 = 0; _i0 < _len_ddraw0; _i0++) {
            ddraw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          d3d_light_init(light,ddraw);
          for(int _aux = 0; _aux < _len_light0; _aux++) {
          free(light[_aux].ddraw);
          }
          free(light);
          free(ddraw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_light0 = 65025;
          struct d3d_light * light = (struct d3d_light *) malloc(_len_light0*sizeof(struct d3d_light));
          for(int _i0 = 0; _i0 < _len_light0; _i0++) {
            light[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_light__i0__ddraw0 = 1;
          light[_i0].ddraw = (struct ddraw *) malloc(_len_light__i0__ddraw0*sizeof(struct ddraw));
          for(int _j0 = 0; _j0 < _len_light__i0__ddraw0; _j0++) {
            light[_i0].ddraw->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_light__i0__IDirect3DLight_iface_lpVtbl0 = 1;
          light[_i0].IDirect3DLight_iface.lpVtbl = (int *) malloc(_len_light__i0__IDirect3DLight_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_light__i0__IDirect3DLight_iface_lpVtbl0; _j0++) {
            light[_i0].IDirect3DLight_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ddraw0 = 65025;
          struct ddraw * ddraw = (struct ddraw *) malloc(_len_ddraw0*sizeof(struct ddraw));
          for(int _i0 = 0; _i0 < _len_ddraw0; _i0++) {
            ddraw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          d3d_light_init(light,ddraw);
          for(int _aux = 0; _aux < _len_light0; _aux++) {
          free(light[_aux].ddraw);
          }
          free(light);
          free(ddraw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_light0 = 100;
          struct d3d_light * light = (struct d3d_light *) malloc(_len_light0*sizeof(struct d3d_light));
          for(int _i0 = 0; _i0 < _len_light0; _i0++) {
            light[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_light__i0__ddraw0 = 1;
          light[_i0].ddraw = (struct ddraw *) malloc(_len_light__i0__ddraw0*sizeof(struct ddraw));
          for(int _j0 = 0; _j0 < _len_light__i0__ddraw0; _j0++) {
            light[_i0].ddraw->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_light__i0__IDirect3DLight_iface_lpVtbl0 = 1;
          light[_i0].IDirect3DLight_iface.lpVtbl = (int *) malloc(_len_light__i0__IDirect3DLight_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_light__i0__IDirect3DLight_iface_lpVtbl0; _j0++) {
            light[_i0].IDirect3DLight_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ddraw0 = 100;
          struct ddraw * ddraw = (struct ddraw *) malloc(_len_ddraw0*sizeof(struct ddraw));
          for(int _i0 = 0; _i0 < _len_ddraw0; _i0++) {
            ddraw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          d3d_light_init(light,ddraw);
          for(int _aux = 0; _aux < _len_light0; _aux++) {
          free(light[_aux].ddraw);
          }
          free(light);
          free(ddraw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
