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
struct sha1_mb_mgr {int unused_lanes; int* lens; TYPE_1__* ldata; } ;
struct TYPE_2__ {int /*<<< orphan*/ * job_in_lane; } ;

/* Variables and functions */

void sha1_mb_mgr_init_avx2(struct sha1_mb_mgr *state)
{
	unsigned int j;
	state->unused_lanes = 0xF76543210ULL;
	for (j = 0; j < 8; j++) {
		state->lens[j] = 0xFFFFFFFF;
		state->ldata[j].job_in_lane = NULL;
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
          int _len_state0 = 1;
          struct sha1_mb_mgr * state = (struct sha1_mb_mgr *) malloc(_len_state0*sizeof(struct sha1_mb_mgr));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].unused_lanes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__lens0 = 1;
          state[_i0].lens = (int *) malloc(_len_state__i0__lens0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__lens0; _j0++) {
            state[_i0].lens[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0__ldata0 = 1;
          state[_i0].ldata = (struct TYPE_2__ *) malloc(_len_state__i0__ldata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__ldata0; _j0++) {
              int _len_state__i0__ldata_job_in_lane0 = 1;
          state[_i0].ldata->job_in_lane = (int *) malloc(_len_state__i0__ldata_job_in_lane0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__ldata_job_in_lane0; _j0++) {
            state[_i0].ldata->job_in_lane[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          sha1_mb_mgr_init_avx2(state);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].lens);
          }
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].ldata);
          }
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state0 = 65025;
          struct sha1_mb_mgr * state = (struct sha1_mb_mgr *) malloc(_len_state0*sizeof(struct sha1_mb_mgr));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].unused_lanes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__lens0 = 1;
          state[_i0].lens = (int *) malloc(_len_state__i0__lens0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__lens0; _j0++) {
            state[_i0].lens[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0__ldata0 = 1;
          state[_i0].ldata = (struct TYPE_2__ *) malloc(_len_state__i0__ldata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__ldata0; _j0++) {
              int _len_state__i0__ldata_job_in_lane0 = 1;
          state[_i0].ldata->job_in_lane = (int *) malloc(_len_state__i0__ldata_job_in_lane0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__ldata_job_in_lane0; _j0++) {
            state[_i0].ldata->job_in_lane[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          sha1_mb_mgr_init_avx2(state);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].lens);
          }
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].ldata);
          }
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state0 = 100;
          struct sha1_mb_mgr * state = (struct sha1_mb_mgr *) malloc(_len_state0*sizeof(struct sha1_mb_mgr));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].unused_lanes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__lens0 = 1;
          state[_i0].lens = (int *) malloc(_len_state__i0__lens0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__lens0; _j0++) {
            state[_i0].lens[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_state__i0__ldata0 = 1;
          state[_i0].ldata = (struct TYPE_2__ *) malloc(_len_state__i0__ldata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__ldata0; _j0++) {
              int _len_state__i0__ldata_job_in_lane0 = 1;
          state[_i0].ldata->job_in_lane = (int *) malloc(_len_state__i0__ldata_job_in_lane0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__ldata_job_in_lane0; _j0++) {
            state[_i0].ldata->job_in_lane[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          sha1_mb_mgr_init_avx2(state);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].lens);
          }
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].ldata);
          }
          free(state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
