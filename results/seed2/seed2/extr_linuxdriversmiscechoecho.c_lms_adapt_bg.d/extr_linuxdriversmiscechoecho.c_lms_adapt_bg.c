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
struct TYPE_2__ {int* history; } ;
struct oslec_state {int curr_pos; int taps; int /*<<< orphan*/ ** fir_taps16; TYPE_1__ fir_state_bg; } ;
typedef  scalar_t__ int16_t ;

/* Variables and functions */

__attribute__((used)) static inline void lms_adapt_bg(struct oslec_state *ec, int clean, int shift)
{
	int i;

	int offset1;
	int offset2;
	int factor;
	int exp;

	if (shift > 0)
		factor = clean << shift;
	else
		factor = clean >> -shift;

	/* Update the FIR taps */

	offset2 = ec->curr_pos;
	offset1 = ec->taps - offset2;

	for (i = ec->taps - 1; i >= offset1; i--) {
		exp = (ec->fir_state_bg.history[i - offset1] * factor);
		ec->fir_taps16[1][i] += (int16_t) ((exp + (1 << 14)) >> 15);
	}
	for (; i >= 0; i--) {
		exp = (ec->fir_state_bg.history[i + offset2] * factor);
		ec->fir_taps16[1][i] += (int16_t) ((exp + (1 << 14)) >> 15);
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
          int clean = 100;
          int shift = 100;
          int _len_ec0 = 1;
          struct oslec_state * ec = (struct oslec_state *) malloc(_len_ec0*sizeof(struct oslec_state));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
            ec[_i0].curr_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].taps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ec__i0__fir_taps160 = 1;
          ec[_i0].fir_taps16 = (int **) malloc(_len_ec__i0__fir_taps160*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ec__i0__fir_taps160; _j0++) {
            int _len_ec__i0__fir_taps161 = 1;
            ec[_i0].fir_taps16[_j0] = (int *) malloc(_len_ec__i0__fir_taps161*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ec__i0__fir_taps161; _j1++) {
              ec[_i0].fir_taps16[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ec__i0__fir_state_bg_history0 = 1;
          ec[_i0].fir_state_bg.history = (int *) malloc(_len_ec__i0__fir_state_bg_history0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ec__i0__fir_state_bg_history0; _j0++) {
            ec[_i0].fir_state_bg.history[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          lms_adapt_bg(ec,clean,shift);
          for(int _aux = 0; _aux < _len_ec0; _aux++) {
          free(*(ec[_aux].fir_taps16));
        free(ec[_aux].fir_taps16);
          }
          free(ec);
        
        break;
    }
    // big-arr
    case 1:
    {
          int clean = 255;
          int shift = 255;
          int _len_ec0 = 65025;
          struct oslec_state * ec = (struct oslec_state *) malloc(_len_ec0*sizeof(struct oslec_state));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
            ec[_i0].curr_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].taps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ec__i0__fir_taps160 = 1;
          ec[_i0].fir_taps16 = (int **) malloc(_len_ec__i0__fir_taps160*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ec__i0__fir_taps160; _j0++) {
            int _len_ec__i0__fir_taps161 = 1;
            ec[_i0].fir_taps16[_j0] = (int *) malloc(_len_ec__i0__fir_taps161*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ec__i0__fir_taps161; _j1++) {
              ec[_i0].fir_taps16[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ec__i0__fir_state_bg_history0 = 1;
          ec[_i0].fir_state_bg.history = (int *) malloc(_len_ec__i0__fir_state_bg_history0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ec__i0__fir_state_bg_history0; _j0++) {
            ec[_i0].fir_state_bg.history[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          lms_adapt_bg(ec,clean,shift);
          for(int _aux = 0; _aux < _len_ec0; _aux++) {
          free(*(ec[_aux].fir_taps16));
        free(ec[_aux].fir_taps16);
          }
          free(ec);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int clean = 10;
          int shift = 10;
          int _len_ec0 = 100;
          struct oslec_state * ec = (struct oslec_state *) malloc(_len_ec0*sizeof(struct oslec_state));
          for(int _i0 = 0; _i0 < _len_ec0; _i0++) {
            ec[_i0].curr_pos = ((-2 * (next_i()%2)) + 1) * next_i();
        ec[_i0].taps = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ec__i0__fir_taps160 = 1;
          ec[_i0].fir_taps16 = (int **) malloc(_len_ec__i0__fir_taps160*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_ec__i0__fir_taps160; _j0++) {
            int _len_ec__i0__fir_taps161 = 1;
            ec[_i0].fir_taps16[_j0] = (int *) malloc(_len_ec__i0__fir_taps161*sizeof(int));
            for(int _j1 = 0; _j1 < _len_ec__i0__fir_taps161; _j1++) {
              ec[_i0].fir_taps16[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ec__i0__fir_state_bg_history0 = 1;
          ec[_i0].fir_state_bg.history = (int *) malloc(_len_ec__i0__fir_state_bg_history0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ec__i0__fir_state_bg_history0; _j0++) {
            ec[_i0].fir_state_bg.history[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          lms_adapt_bg(ec,clean,shift);
          for(int _aux = 0; _aux < _len_ec0; _aux++) {
          free(*(ec[_aux].fir_taps16));
        free(ec[_aux].fir_taps16);
          }
          free(ec);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
