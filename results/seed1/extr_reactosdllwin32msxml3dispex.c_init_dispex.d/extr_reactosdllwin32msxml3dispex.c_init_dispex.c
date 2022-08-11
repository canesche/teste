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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int /*<<< orphan*/  dispex_static_data_t ;
struct TYPE_4__ {int /*<<< orphan*/ * lpVtbl; } ;
struct TYPE_5__ {int /*<<< orphan*/ * data; int /*<<< orphan*/ * outer; TYPE_1__ IDispatchEx_iface; } ;
typedef  int /*<<< orphan*/  IUnknown ;
typedef  TYPE_2__ DispatchEx ;

/* Variables and functions */
 int /*<<< orphan*/  DispatchExVtbl ; 

void init_dispex(DispatchEx *dispex, IUnknown *outer, dispex_static_data_t *data)
{
    dispex->IDispatchEx_iface.lpVtbl = &DispatchExVtbl;
    dispex->outer = outer;
    dispex->data = data;
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
          int _len_dispex0 = 1;
          struct TYPE_5__ * dispex = (struct TYPE_5__ *) malloc(_len_dispex0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dispex0; _i0++) {
              int _len_dispex__i0__data0 = 1;
          dispex[_i0].data = (int *) malloc(_len_dispex__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dispex__i0__data0; _j0++) {
            dispex[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dispex__i0__outer0 = 1;
          dispex[_i0].outer = (int *) malloc(_len_dispex__i0__outer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dispex__i0__outer0; _j0++) {
            dispex[_i0].outer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dispex__i0__IDispatchEx_iface_lpVtbl0 = 1;
          dispex[_i0].IDispatchEx_iface.lpVtbl = (int *) malloc(_len_dispex__i0__IDispatchEx_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dispex__i0__IDispatchEx_iface_lpVtbl0; _j0++) {
            dispex[_i0].IDispatchEx_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_outer0 = 1;
          int * outer = (int *) malloc(_len_outer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outer0; _i0++) {
            outer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_dispex(dispex,outer,data);
          for(int _aux = 0; _aux < _len_dispex0; _aux++) {
          free(dispex[_aux].data);
          }
          for(int _aux = 0; _aux < _len_dispex0; _aux++) {
          free(dispex[_aux].outer);
          }
          free(dispex);
          free(outer);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dispex0 = 65025;
          struct TYPE_5__ * dispex = (struct TYPE_5__ *) malloc(_len_dispex0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dispex0; _i0++) {
              int _len_dispex__i0__data0 = 1;
          dispex[_i0].data = (int *) malloc(_len_dispex__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dispex__i0__data0; _j0++) {
            dispex[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dispex__i0__outer0 = 1;
          dispex[_i0].outer = (int *) malloc(_len_dispex__i0__outer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dispex__i0__outer0; _j0++) {
            dispex[_i0].outer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dispex__i0__IDispatchEx_iface_lpVtbl0 = 1;
          dispex[_i0].IDispatchEx_iface.lpVtbl = (int *) malloc(_len_dispex__i0__IDispatchEx_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dispex__i0__IDispatchEx_iface_lpVtbl0; _j0++) {
            dispex[_i0].IDispatchEx_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_outer0 = 65025;
          int * outer = (int *) malloc(_len_outer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outer0; _i0++) {
            outer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_dispex(dispex,outer,data);
          for(int _aux = 0; _aux < _len_dispex0; _aux++) {
          free(dispex[_aux].data);
          }
          for(int _aux = 0; _aux < _len_dispex0; _aux++) {
          free(dispex[_aux].outer);
          }
          free(dispex);
          free(outer);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dispex0 = 100;
          struct TYPE_5__ * dispex = (struct TYPE_5__ *) malloc(_len_dispex0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_dispex0; _i0++) {
              int _len_dispex__i0__data0 = 1;
          dispex[_i0].data = (int *) malloc(_len_dispex__i0__data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dispex__i0__data0; _j0++) {
            dispex[_i0].data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dispex__i0__outer0 = 1;
          dispex[_i0].outer = (int *) malloc(_len_dispex__i0__outer0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dispex__i0__outer0; _j0++) {
            dispex[_i0].outer[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dispex__i0__IDispatchEx_iface_lpVtbl0 = 1;
          dispex[_i0].IDispatchEx_iface.lpVtbl = (int *) malloc(_len_dispex__i0__IDispatchEx_iface_lpVtbl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dispex__i0__IDispatchEx_iface_lpVtbl0; _j0++) {
            dispex[_i0].IDispatchEx_iface.lpVtbl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_outer0 = 100;
          int * outer = (int *) malloc(_len_outer0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outer0; _i0++) {
            outer[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          int * data = (int *) malloc(_len_data0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_dispex(dispex,outer,data);
          for(int _aux = 0; _aux < _len_dispex0; _aux++) {
          free(dispex[_aux].data);
          }
          for(int _aux = 0; _aux < _len_dispex0; _aux++) {
          free(dispex[_aux].outer);
          }
          free(dispex);
          free(outer);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
