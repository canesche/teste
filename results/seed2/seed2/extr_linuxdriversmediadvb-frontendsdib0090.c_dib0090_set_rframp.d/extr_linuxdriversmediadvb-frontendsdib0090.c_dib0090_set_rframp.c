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
typedef  int /*<<< orphan*/  u16 ;
struct dib0090_state {int /*<<< orphan*/  const* rf_ramp; } ;

/* Variables and functions */

__attribute__((used)) static void dib0090_set_rframp(struct dib0090_state *state, const u16 * cfg)
{
	state->rf_ramp = cfg;
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
          int _len_state0 = 1;
          struct dib0090_state * state = (struct dib0090_state *) malloc(_len_state0*sizeof(struct dib0090_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__rf_ramp0 = 1;
          state[_i0].rf_ramp = (const int *) malloc(_len_state__i0__rf_ramp0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_state__i0__rf_ramp0; _j0++) {
            state[_i0].rf_ramp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cfg0 = 1;
          const int * cfg = (const int *) malloc(_len_cfg0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dib0090_set_rframp(state,cfg);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].rf_ramp);
          }
          free(state);
          free(cfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state0 = 65025;
          struct dib0090_state * state = (struct dib0090_state *) malloc(_len_state0*sizeof(struct dib0090_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__rf_ramp0 = 1;
          state[_i0].rf_ramp = (const int *) malloc(_len_state__i0__rf_ramp0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_state__i0__rf_ramp0; _j0++) {
            state[_i0].rf_ramp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cfg0 = 65025;
          const int * cfg = (const int *) malloc(_len_cfg0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dib0090_set_rframp(state,cfg);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].rf_ramp);
          }
          free(state);
          free(cfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state0 = 100;
          struct dib0090_state * state = (struct dib0090_state *) malloc(_len_state0*sizeof(struct dib0090_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__rf_ramp0 = 1;
          state[_i0].rf_ramp = (const int *) malloc(_len_state__i0__rf_ramp0*sizeof(const int));
          for(int _j0 = 0; _j0 < _len_state__i0__rf_ramp0; _j0++) {
            state[_i0].rf_ramp[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cfg0 = 100;
          const int * cfg = (const int *) malloc(_len_cfg0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_cfg0; _i0++) {
            cfg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dib0090_set_rframp(state,cfg);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].rf_ramp);
          }
          free(state);
          free(cfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
