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
typedef  int byte ;
struct TYPE_5__ {size_t ncci_ring_list; TYPE_1__* adapter; scalar_t__ nl_req; } ;
struct TYPE_4__ {size_t* ncci_ch; int* ch_flow_control; } ;
typedef  TYPE_2__ PLCI ;

/* Variables and functions */
 int N_OK_FC_PENDING ; 

__attribute__((used)) static byte plci_nl_busy(PLCI *plci)
{
	/* only applicable for non-multiplexed protocols */
	return (plci->nl_req
		|| (plci->ncci_ring_list
		    && plci->adapter->ncci_ch[plci->ncci_ring_list]
		    && (plci->adapter->ch_flow_control[plci->adapter->ncci_ch[plci->ncci_ring_list]] & N_OK_FC_PENDING)));
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
          int _len_plci0 = 1;
          struct TYPE_5__ * plci = (struct TYPE_5__ *) malloc(_len_plci0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_plci0; _i0++) {
            plci[_i0].ncci_ring_list = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plci__i0__adapter0 = 1;
          plci[_i0].adapter = (struct TYPE_4__ *) malloc(_len_plci__i0__adapter0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter0; _j0++) {
              int _len_plci__i0__adapter_ncci_ch0 = 1;
          plci[_i0].adapter->ncci_ch = (unsigned long *) malloc(_len_plci__i0__adapter_ncci_ch0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ncci_ch0; _j0++) {
            plci[_i0].adapter->ncci_ch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plci__i0__adapter_ch_flow_control0 = 1;
          plci[_i0].adapter->ch_flow_control = (int *) malloc(_len_plci__i0__adapter_ch_flow_control0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ch_flow_control0; _j0++) {
            plci[_i0].adapter->ch_flow_control[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        plci[_i0].nl_req = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = plci_nl_busy(plci);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].adapter);
          }
          free(plci);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_plci0 = 65025;
          struct TYPE_5__ * plci = (struct TYPE_5__ *) malloc(_len_plci0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_plci0; _i0++) {
            plci[_i0].ncci_ring_list = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plci__i0__adapter0 = 1;
          plci[_i0].adapter = (struct TYPE_4__ *) malloc(_len_plci__i0__adapter0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter0; _j0++) {
              int _len_plci__i0__adapter_ncci_ch0 = 1;
          plci[_i0].adapter->ncci_ch = (unsigned long *) malloc(_len_plci__i0__adapter_ncci_ch0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ncci_ch0; _j0++) {
            plci[_i0].adapter->ncci_ch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plci__i0__adapter_ch_flow_control0 = 1;
          plci[_i0].adapter->ch_flow_control = (int *) malloc(_len_plci__i0__adapter_ch_flow_control0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ch_flow_control0; _j0++) {
            plci[_i0].adapter->ch_flow_control[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        plci[_i0].nl_req = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = plci_nl_busy(plci);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].adapter);
          }
          free(plci);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_plci0 = 100;
          struct TYPE_5__ * plci = (struct TYPE_5__ *) malloc(_len_plci0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_plci0; _i0++) {
            plci[_i0].ncci_ring_list = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plci__i0__adapter0 = 1;
          plci[_i0].adapter = (struct TYPE_4__ *) malloc(_len_plci__i0__adapter0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter0; _j0++) {
              int _len_plci__i0__adapter_ncci_ch0 = 1;
          plci[_i0].adapter->ncci_ch = (unsigned long *) malloc(_len_plci__i0__adapter_ncci_ch0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ncci_ch0; _j0++) {
            plci[_i0].adapter->ncci_ch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plci__i0__adapter_ch_flow_control0 = 1;
          plci[_i0].adapter->ch_flow_control = (int *) malloc(_len_plci__i0__adapter_ch_flow_control0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ch_flow_control0; _j0++) {
            plci[_i0].adapter->ch_flow_control[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        plci[_i0].nl_req = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = plci_nl_busy(plci);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_plci0; _aux++) {
          free(plci[_aux].adapter);
          }
          free(plci);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
