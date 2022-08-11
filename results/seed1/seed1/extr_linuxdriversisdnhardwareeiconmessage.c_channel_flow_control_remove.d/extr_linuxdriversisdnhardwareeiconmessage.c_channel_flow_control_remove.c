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
typedef  int word ;
struct TYPE_5__ {scalar_t__* ch_flow_plci; scalar_t__* ch_flow_control; } ;
struct TYPE_4__ {scalar_t__ Id; TYPE_2__* adapter; } ;
typedef  TYPE_1__ PLCI ;
typedef  TYPE_2__ DIVA_CAPI_ADAPTER ;

/* Variables and functions */
 int MAX_NL_CHANNEL ; 

__attribute__((used)) static void channel_flow_control_remove(PLCI *plci) {
	DIVA_CAPI_ADAPTER *a = plci->adapter;
	word i;
	for (i = 1; i < MAX_NL_CHANNEL + 1; i++) {
		if (a->ch_flow_plci[i] == plci->Id) {
			a->ch_flow_plci[i] = 0;
			a->ch_flow_control[i] = 0;
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
          int _len_plci0 = 1;
          struct TYPE_4__ * plci = (struct TYPE_4__ *) malloc(_len_plci0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_plci0; _i0++) {
            plci[_i0].Id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plci__i0__adapter0 = 1;
          plci[_i0].adapter = (struct TYPE_5__ *) malloc(_len_plci__i0__adapter0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter0; _j0++) {
              int _len_plci__i0__adapter_ch_flow_plci0 = 1;
          plci[_i0].adapter->ch_flow_plci = (long *) malloc(_len_plci__i0__adapter_ch_flow_plci0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ch_flow_plci0; _j0++) {
            plci[_i0].adapter->ch_flow_plci[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plci__i0__adapter_ch_flow_control0 = 1;
          plci[_i0].adapter->ch_flow_control = (long *) malloc(_len_plci__i0__adapter_ch_flow_control0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ch_flow_control0; _j0++) {
            plci[_i0].adapter->ch_flow_control[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          channel_flow_control_remove(plci);
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
          struct TYPE_4__ * plci = (struct TYPE_4__ *) malloc(_len_plci0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_plci0; _i0++) {
            plci[_i0].Id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plci__i0__adapter0 = 1;
          plci[_i0].adapter = (struct TYPE_5__ *) malloc(_len_plci__i0__adapter0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter0; _j0++) {
              int _len_plci__i0__adapter_ch_flow_plci0 = 1;
          plci[_i0].adapter->ch_flow_plci = (long *) malloc(_len_plci__i0__adapter_ch_flow_plci0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ch_flow_plci0; _j0++) {
            plci[_i0].adapter->ch_flow_plci[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plci__i0__adapter_ch_flow_control0 = 1;
          plci[_i0].adapter->ch_flow_control = (long *) malloc(_len_plci__i0__adapter_ch_flow_control0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ch_flow_control0; _j0++) {
            plci[_i0].adapter->ch_flow_control[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          channel_flow_control_remove(plci);
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
          struct TYPE_4__ * plci = (struct TYPE_4__ *) malloc(_len_plci0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_plci0; _i0++) {
            plci[_i0].Id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_plci__i0__adapter0 = 1;
          plci[_i0].adapter = (struct TYPE_5__ *) malloc(_len_plci__i0__adapter0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter0; _j0++) {
              int _len_plci__i0__adapter_ch_flow_plci0 = 1;
          plci[_i0].adapter->ch_flow_plci = (long *) malloc(_len_plci__i0__adapter_ch_flow_plci0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ch_flow_plci0; _j0++) {
            plci[_i0].adapter->ch_flow_plci[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_plci__i0__adapter_ch_flow_control0 = 1;
          plci[_i0].adapter->ch_flow_control = (long *) malloc(_len_plci__i0__adapter_ch_flow_control0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_plci__i0__adapter_ch_flow_control0; _j0++) {
            plci[_i0].adapter->ch_flow_control[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          channel_flow_control_remove(plci);
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
