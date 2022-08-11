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
typedef  size_t u32 ;
struct isci_host {size_t remote_node_entries; TYPE_2__** device_table; } ;
struct TYPE_3__ {scalar_t__ current_state_id; } ;
struct TYPE_4__ {TYPE_1__ sm; } ;

/* Variables and functions */
 scalar_t__ SCI_DEV_STOPPING ; 

bool sci_controller_has_remote_devices_stopping(struct isci_host *ihost)
{
	u32 index;

	for (index = 0; index < ihost->remote_node_entries; index++) {
		if ((ihost->device_table[index] != NULL) &&
		   (ihost->device_table[index]->sm.current_state_id == SCI_DEV_STOPPING))
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
          int _len_ihost0 = 1;
          struct isci_host * ihost = (struct isci_host *) malloc(_len_ihost0*sizeof(struct isci_host));
          for(int _i0 = 0; _i0 < _len_ihost0; _i0++) {
            ihost[_i0].remote_node_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ihost__i0__device_table0 = 1;
          ihost[_i0].device_table = (struct TYPE_4__ **) malloc(_len_ihost__i0__device_table0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_ihost__i0__device_table0; _j0++) {
            int _len_ihost__i0__device_table1 = 1;
            ihost[_i0].device_table[_j0] = (struct TYPE_4__ *) malloc(_len_ihost__i0__device_table1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_ihost__i0__device_table1; _j1++) {
              ihost[_i0].device_table[_j0]->sm.current_state_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = sci_controller_has_remote_devices_stopping(ihost);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ihost0; _aux++) {
          free(*(ihost[_aux].device_table));
        free(ihost[_aux].device_table);
          }
          free(ihost);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ihost0 = 65025;
          struct isci_host * ihost = (struct isci_host *) malloc(_len_ihost0*sizeof(struct isci_host));
          for(int _i0 = 0; _i0 < _len_ihost0; _i0++) {
            ihost[_i0].remote_node_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ihost__i0__device_table0 = 1;
          ihost[_i0].device_table = (struct TYPE_4__ **) malloc(_len_ihost__i0__device_table0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_ihost__i0__device_table0; _j0++) {
            int _len_ihost__i0__device_table1 = 1;
            ihost[_i0].device_table[_j0] = (struct TYPE_4__ *) malloc(_len_ihost__i0__device_table1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_ihost__i0__device_table1; _j1++) {
              ihost[_i0].device_table[_j0]->sm.current_state_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = sci_controller_has_remote_devices_stopping(ihost);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ihost0; _aux++) {
          free(*(ihost[_aux].device_table));
        free(ihost[_aux].device_table);
          }
          free(ihost);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ihost0 = 100;
          struct isci_host * ihost = (struct isci_host *) malloc(_len_ihost0*sizeof(struct isci_host));
          for(int _i0 = 0; _i0 < _len_ihost0; _i0++) {
            ihost[_i0].remote_node_entries = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ihost__i0__device_table0 = 1;
          ihost[_i0].device_table = (struct TYPE_4__ **) malloc(_len_ihost__i0__device_table0*sizeof(struct TYPE_4__ *));
          for(int _j0 = 0; _j0 < _len_ihost__i0__device_table0; _j0++) {
            int _len_ihost__i0__device_table1 = 1;
            ihost[_i0].device_table[_j0] = (struct TYPE_4__ *) malloc(_len_ihost__i0__device_table1*sizeof(struct TYPE_4__));
            for(int _j1 = 0; _j1 < _len_ihost__i0__device_table1; _j1++) {
              ihost[_i0].device_table[_j0]->sm.current_state_id = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = sci_controller_has_remote_devices_stopping(ihost);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ihost0; _aux++) {
          free(*(ihost[_aux].device_table));
        free(ihost[_aux].device_table);
          }
          free(ihost);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
