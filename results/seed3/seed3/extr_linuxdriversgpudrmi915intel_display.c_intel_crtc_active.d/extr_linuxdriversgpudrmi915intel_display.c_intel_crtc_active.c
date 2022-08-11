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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_9__ {TYPE_2__* primary; } ;
struct intel_crtc {TYPE_6__* config; TYPE_3__ base; scalar_t__ active; } ;
struct TYPE_10__ {scalar_t__ crtc_clock; } ;
struct TYPE_11__ {TYPE_4__ adjusted_mode; } ;
struct TYPE_12__ {TYPE_5__ base; } ;
struct TYPE_8__ {TYPE_1__* state; } ;
struct TYPE_7__ {scalar_t__ fb; } ;

/* Variables and functions */

bool intel_crtc_active(struct intel_crtc *crtc)
{
	/* Be paranoid as we can arrive here with only partial
	 * state retrieved from the hardware during setup.
	 *
	 * We can ditch the adjusted_mode.crtc_clock check as soon
	 * as Haswell has gained clock readout/fastboot support.
	 *
	 * We can ditch the crtc->primary->state->fb check as soon as we can
	 * properly reconstruct framebuffers.
	 *
	 * FIXME: The intel_crtc->active here should be switched to
	 * crtc->state->active once we have proper CRTC states wired up
	 * for atomic.
	 */
	return crtc->active && crtc->base.primary->state->fb &&
		crtc->config->base.adjusted_mode.crtc_clock;
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
          int _len_crtc0 = 1;
          struct intel_crtc * crtc = (struct intel_crtc *) malloc(_len_crtc0*sizeof(struct intel_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
              int _len_crtc__i0__config0 = 1;
          crtc[_i0].config = (struct TYPE_12__ *) malloc(_len_crtc__i0__config0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__config0; _j0++) {
            crtc[_i0].config->base.adjusted_mode.crtc_clock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crtc__i0__base_primary0 = 1;
          crtc[_i0].base.primary = (struct TYPE_8__ *) malloc(_len_crtc__i0__base_primary0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__base_primary0; _j0++) {
              int _len_crtc__i0__base_primary_state0 = 1;
          crtc[_i0].base.primary->state = (struct TYPE_7__ *) malloc(_len_crtc__i0__base_primary_state0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__base_primary_state0; _j0++) {
            crtc[_i0].base.primary->state->fb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        crtc[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_crtc_active(crtc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].config);
          }
          free(crtc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_crtc0 = 65025;
          struct intel_crtc * crtc = (struct intel_crtc *) malloc(_len_crtc0*sizeof(struct intel_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
              int _len_crtc__i0__config0 = 1;
          crtc[_i0].config = (struct TYPE_12__ *) malloc(_len_crtc__i0__config0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__config0; _j0++) {
            crtc[_i0].config->base.adjusted_mode.crtc_clock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crtc__i0__base_primary0 = 1;
          crtc[_i0].base.primary = (struct TYPE_8__ *) malloc(_len_crtc__i0__base_primary0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__base_primary0; _j0++) {
              int _len_crtc__i0__base_primary_state0 = 1;
          crtc[_i0].base.primary->state = (struct TYPE_7__ *) malloc(_len_crtc__i0__base_primary_state0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__base_primary_state0; _j0++) {
            crtc[_i0].base.primary->state->fb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        crtc[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_crtc_active(crtc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].config);
          }
          free(crtc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_crtc0 = 100;
          struct intel_crtc * crtc = (struct intel_crtc *) malloc(_len_crtc0*sizeof(struct intel_crtc));
          for(int _i0 = 0; _i0 < _len_crtc0; _i0++) {
              int _len_crtc__i0__config0 = 1;
          crtc[_i0].config = (struct TYPE_12__ *) malloc(_len_crtc__i0__config0*sizeof(struct TYPE_12__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__config0; _j0++) {
            crtc[_i0].config->base.adjusted_mode.crtc_clock = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_crtc__i0__base_primary0 = 1;
          crtc[_i0].base.primary = (struct TYPE_8__ *) malloc(_len_crtc__i0__base_primary0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__base_primary0; _j0++) {
              int _len_crtc__i0__base_primary_state0 = 1;
          crtc[_i0].base.primary->state = (struct TYPE_7__ *) malloc(_len_crtc__i0__base_primary_state0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_crtc__i0__base_primary_state0; _j0++) {
            crtc[_i0].base.primary->state->fb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        crtc[_i0].active = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = intel_crtc_active(crtc);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_crtc0; _aux++) {
          free(crtc[_aux].config);
          }
          free(crtc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
