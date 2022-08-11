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
struct send_context_info {scalar_t__ type; struct send_context* sc; } ;
struct send_context {int dummy; } ;
struct hfi1_devdata {TYPE_1__* vld; struct send_context_info* send_contexts; } ;
struct TYPE_2__ {struct send_context* sc; } ;

/* Variables and functions */
 scalar_t__ SC_KERNEL ; 
 scalar_t__ SC_VL15 ; 
 int num_vls ; 

__attribute__((used)) static int sc_to_vl(struct hfi1_devdata *dd, int sw_index)
{
	struct send_context_info *sci;
	struct send_context *sc;
	int i;

	sci = &dd->send_contexts[sw_index];

	/* there is no information for user (PSM) and ack contexts */
	if ((sci->type != SC_KERNEL) && (sci->type != SC_VL15))
		return -1;

	sc = sci->sc;
	if (!sc)
		return -1;
	if (dd->vld[15].sc == sc)
		return 15;
	for (i = 0; i < num_vls; i++)
		if (dd->vld[i].sc == sc)
			return i;

	return -1;
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
          int sw_index = 100;
          int _len_dd0 = 1;
          struct hfi1_devdata * dd = (struct hfi1_devdata *) malloc(_len_dd0*sizeof(struct hfi1_devdata));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
              int _len_dd__i0__vld0 = 1;
          dd[_i0].vld = (struct TYPE_2__ *) malloc(_len_dd__i0__vld0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dd__i0__vld0; _j0++) {
              int _len_dd__i0__vld_sc0 = 1;
          dd[_i0].vld->sc = (struct send_context *) malloc(_len_dd__i0__vld_sc0*sizeof(struct send_context));
          for(int _j0 = 0; _j0 < _len_dd__i0__vld_sc0; _j0++) {
            dd[_i0].vld->sc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dd__i0__send_contexts0 = 1;
          dd[_i0].send_contexts = (struct send_context_info *) malloc(_len_dd__i0__send_contexts0*sizeof(struct send_context_info));
          for(int _j0 = 0; _j0 < _len_dd__i0__send_contexts0; _j0++) {
            dd[_i0].send_contexts->type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dd__i0__send_contexts_sc0 = 1;
          dd[_i0].send_contexts->sc = (struct send_context *) malloc(_len_dd__i0__send_contexts_sc0*sizeof(struct send_context));
          for(int _j0 = 0; _j0 < _len_dd__i0__send_contexts_sc0; _j0++) {
            dd[_i0].send_contexts->sc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sc_to_vl(dd,sw_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dd0; _aux++) {
          free(dd[_aux].vld);
          }
          for(int _aux = 0; _aux < _len_dd0; _aux++) {
          free(dd[_aux].send_contexts);
          }
          free(dd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int sw_index = 255;
          int _len_dd0 = 65025;
          struct hfi1_devdata * dd = (struct hfi1_devdata *) malloc(_len_dd0*sizeof(struct hfi1_devdata));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
              int _len_dd__i0__vld0 = 1;
          dd[_i0].vld = (struct TYPE_2__ *) malloc(_len_dd__i0__vld0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dd__i0__vld0; _j0++) {
              int _len_dd__i0__vld_sc0 = 1;
          dd[_i0].vld->sc = (struct send_context *) malloc(_len_dd__i0__vld_sc0*sizeof(struct send_context));
          for(int _j0 = 0; _j0 < _len_dd__i0__vld_sc0; _j0++) {
            dd[_i0].vld->sc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dd__i0__send_contexts0 = 1;
          dd[_i0].send_contexts = (struct send_context_info *) malloc(_len_dd__i0__send_contexts0*sizeof(struct send_context_info));
          for(int _j0 = 0; _j0 < _len_dd__i0__send_contexts0; _j0++) {
            dd[_i0].send_contexts->type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dd__i0__send_contexts_sc0 = 1;
          dd[_i0].send_contexts->sc = (struct send_context *) malloc(_len_dd__i0__send_contexts_sc0*sizeof(struct send_context));
          for(int _j0 = 0; _j0 < _len_dd__i0__send_contexts_sc0; _j0++) {
            dd[_i0].send_contexts->sc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sc_to_vl(dd,sw_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dd0; _aux++) {
          free(dd[_aux].vld);
          }
          for(int _aux = 0; _aux < _len_dd0; _aux++) {
          free(dd[_aux].send_contexts);
          }
          free(dd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int sw_index = 10;
          int _len_dd0 = 100;
          struct hfi1_devdata * dd = (struct hfi1_devdata *) malloc(_len_dd0*sizeof(struct hfi1_devdata));
          for(int _i0 = 0; _i0 < _len_dd0; _i0++) {
              int _len_dd__i0__vld0 = 1;
          dd[_i0].vld = (struct TYPE_2__ *) malloc(_len_dd__i0__vld0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_dd__i0__vld0; _j0++) {
              int _len_dd__i0__vld_sc0 = 1;
          dd[_i0].vld->sc = (struct send_context *) malloc(_len_dd__i0__vld_sc0*sizeof(struct send_context));
          for(int _j0 = 0; _j0 < _len_dd__i0__vld_sc0; _j0++) {
            dd[_i0].vld->sc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dd__i0__send_contexts0 = 1;
          dd[_i0].send_contexts = (struct send_context_info *) malloc(_len_dd__i0__send_contexts0*sizeof(struct send_context_info));
          for(int _j0 = 0; _j0 < _len_dd__i0__send_contexts0; _j0++) {
            dd[_i0].send_contexts->type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dd__i0__send_contexts_sc0 = 1;
          dd[_i0].send_contexts->sc = (struct send_context *) malloc(_len_dd__i0__send_contexts_sc0*sizeof(struct send_context));
          for(int _j0 = 0; _j0 < _len_dd__i0__send_contexts_sc0; _j0++) {
            dd[_i0].send_contexts->sc->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = sc_to_vl(dd,sw_index);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dd0; _aux++) {
          free(dd[_aux].vld);
          }
          for(int _aux = 0; _aux < _len_dd0; _aux++) {
          free(dd[_aux].send_contexts);
          }
          free(dd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
