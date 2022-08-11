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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
struct sdw_cdns_dma_data {int nr_ports; TYPE_2__** port; } ;
struct TYPE_4__ {int assigned; TYPE_1__* pdi; } ;
struct TYPE_3__ {int assigned; } ;

/* Variables and functions */

__attribute__((used)) static void intel_port_cleanup(struct sdw_cdns_dma_data *dma)
{
	int i;

	for (i = 0; i < dma->nr_ports; i++) {
		if (dma->port[i]) {
			dma->port[i]->pdi->assigned = false;
			dma->port[i]->pdi = NULL;
			dma->port[i]->assigned = false;
			dma->port[i] = NULL;
		}
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
          int _len_dma0 = 1;
          struct sdw_cdns_dma_data * dma = (struct sdw_cdns_dma_data *) malloc(_len_dma0*sizeof(struct sdw_cdns_dma_data));
          for(int _i0 = 0; _i0 < _len_dma0; _i0++) {
            dma[_i0].nr_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dma__i0__port0 = 1;
          dma[_i0].port = (struct TYPE_4__ **) malloc(_len_dma__i0__port0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_dma__i0__port0; _j0++) {
            int _len_dma__i0__port1 = 1;
            dma[_i0].port[_j0] = (struct TYPE_4__ *) malloc(_len_dma__i0__port1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_dma__i0__port1; _j1++) {
              dma[_i0].port[_j0]->assigned = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dma__i0__port__j0__pdi0 = 1;
          dma[_i0].port[_j0]->pdi = (struct TYPE_3__ *) malloc(_len_dma__i0__port__j0__pdi0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dma__i0__port__j0__pdi0; _j0++) {
            dma[_i0].port[_j0]->pdi->assigned = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          intel_port_cleanup(dma);
          for(int _aux = 0; _aux < _len_dma0; _aux++) {
          free(*(dma[_aux].port));
        free(dma[_aux].port);
          }
          free(dma);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dma0 = 65025;
          struct sdw_cdns_dma_data * dma = (struct sdw_cdns_dma_data *) malloc(_len_dma0*sizeof(struct sdw_cdns_dma_data));
          for(int _i0 = 0; _i0 < _len_dma0; _i0++) {
            dma[_i0].nr_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dma__i0__port0 = 1;
          dma[_i0].port = (struct TYPE_4__ **) malloc(_len_dma__i0__port0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_dma__i0__port0; _j0++) {
            int _len_dma__i0__port1 = 1;
            dma[_i0].port[_j0] = (struct TYPE_4__ *) malloc(_len_dma__i0__port1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_dma__i0__port1; _j1++) {
              dma[_i0].port[_j0]->assigned = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dma__i0__port__j0__pdi0 = 1;
          dma[_i0].port[_j0]->pdi = (struct TYPE_3__ *) malloc(_len_dma__i0__port__j0__pdi0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dma__i0__port__j0__pdi0; _j0++) {
            dma[_i0].port[_j0]->pdi->assigned = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          intel_port_cleanup(dma);
          for(int _aux = 0; _aux < _len_dma0; _aux++) {
          free(*(dma[_aux].port));
        free(dma[_aux].port);
          }
          free(dma);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dma0 = 100;
          struct sdw_cdns_dma_data * dma = (struct sdw_cdns_dma_data *) malloc(_len_dma0*sizeof(struct sdw_cdns_dma_data));
          for(int _i0 = 0; _i0 < _len_dma0; _i0++) {
            dma[_i0].nr_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dma__i0__port0 = 1;
          dma[_i0].port = (struct TYPE_4__ **) malloc(_len_dma__i0__port0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_dma__i0__port0; _j0++) {
            int _len_dma__i0__port1 = 1;
            dma[_i0].port[_j0] = (struct TYPE_4__ *) malloc(_len_dma__i0__port1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_dma__i0__port1; _j1++) {
              dma[_i0].port[_j0]->assigned = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dma__i0__port__j0__pdi0 = 1;
          dma[_i0].port[_j0]->pdi = (struct TYPE_3__ *) malloc(_len_dma__i0__port__j0__pdi0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_dma__i0__port__j0__pdi0; _j0++) {
            dma[_i0].port[_j0]->pdi->assigned = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          intel_port_cleanup(dma);
          for(int _aux = 0; _aux < _len_dma0; _aux++) {
          free(*(dma[_aux].port));
        free(dma[_aux].port);
          }
          free(dma);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
