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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  unsigned int uint64_t ;
struct TYPE_3__ {int readahead; unsigned int sustain_reset; int count_sustain_expired; unsigned int rate; scalar_t__ _ana_snb; scalar_t__ max_gain; scalar_t__* gain_counts; scalar_t__ count_transient_filter; scalar_t__ count_peak_extend; scalar_t__ code_counterC_unmatched; scalar_t__ code_counterC; scalar_t__ code_counterB_checkfails; scalar_t__ code_counterB; scalar_t__ code_counterA_almost; scalar_t__ code_counterA; scalar_t__ sustain; scalar_t__ running_gain; scalar_t__ control; scalar_t__ arg; scalar_t__ window; } ;
typedef  TYPE_1__ hdcd_state ;

/* Variables and functions */

__attribute__((used)) static void hdcd_reset(hdcd_state *state, unsigned rate, unsigned cdt_ms)
{
    int i;
    uint64_t sustain_reset = (uint64_t)cdt_ms * rate / 1000;

    state->window = 0;
    state->readahead = 32;
    state->arg = 0;
    state->control = 0;
    state->running_gain = 0;
    state->sustain_reset = sustain_reset;
    state->sustain = 0;

    state->code_counterA = 0;
    state->code_counterA_almost = 0;
    state->code_counterB = 0;
    state->code_counterB_checkfails = 0;
    state->code_counterC = 0;
    state->code_counterC_unmatched = 0;
    state->count_peak_extend = 0;
    state->count_transient_filter = 0;
    for(i = 0; i < 16; i++) state->gain_counts[i] = 0;
    state->max_gain = 0;
    state->count_sustain_expired = -1;

    state->rate = rate;
    state->_ana_snb = 0;
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
          unsigned int rate = 100;
          unsigned int cdt_ms = 100;
          int _len_state0 = 1;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].readahead = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].sustain_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].count_sustain_expired = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rate = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0]._ana_snb = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].max_gain = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__gain_counts0 = 1;
          state[_i0].gain_counts = (long *) malloc(_len_state__i0__gain_counts0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__gain_counts0; _j0++) {
            state[_i0].gain_counts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].count_transient_filter = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].count_peak_extend = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterC_unmatched = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterC = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterB_checkfails = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterB = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterA_almost = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterA = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].sustain = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].running_gain = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].control = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].arg = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hdcd_reset(state,rate,cdt_ms);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].gain_counts);
          }
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int rate = 255;
          unsigned int cdt_ms = 255;
          int _len_state0 = 65025;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].readahead = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].sustain_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].count_sustain_expired = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rate = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0]._ana_snb = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].max_gain = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__gain_counts0 = 1;
          state[_i0].gain_counts = (long *) malloc(_len_state__i0__gain_counts0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__gain_counts0; _j0++) {
            state[_i0].gain_counts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].count_transient_filter = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].count_peak_extend = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterC_unmatched = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterC = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterB_checkfails = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterB = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterA_almost = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterA = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].sustain = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].running_gain = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].control = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].arg = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hdcd_reset(state,rate,cdt_ms);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].gain_counts);
          }
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int rate = 10;
          unsigned int cdt_ms = 10;
          int _len_state0 = 100;
          struct TYPE_3__ * state = (struct TYPE_3__ *) malloc(_len_state0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].readahead = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].sustain_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].count_sustain_expired = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].rate = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0]._ana_snb = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].max_gain = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__gain_counts0 = 1;
          state[_i0].gain_counts = (long *) malloc(_len_state__i0__gain_counts0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__gain_counts0; _j0++) {
            state[_i0].gain_counts[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].count_transient_filter = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].count_peak_extend = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterC_unmatched = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterC = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterB_checkfails = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterB = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterA_almost = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].code_counterA = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].sustain = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].running_gain = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].control = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].arg = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].window = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          hdcd_reset(state,rate,cdt_ms);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].gain_counts);
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
