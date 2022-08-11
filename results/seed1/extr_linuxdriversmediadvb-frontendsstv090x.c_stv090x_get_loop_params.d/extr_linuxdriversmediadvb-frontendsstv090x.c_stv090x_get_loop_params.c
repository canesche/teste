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
struct stv090x_state {int srate; int search_range; int search_mode; TYPE_1__* internal; } ;
typedef  int s32 ;
struct TYPE_2__ {int mclk; } ;

/* Variables and functions */
#define  STV090x_SEARCH_AUTO 131 
#define  STV090x_SEARCH_DSS 130 
#define  STV090x_SEARCH_DVBS1 129 
#define  STV090x_SEARCH_DVBS2 128 

__attribute__((used)) static int stv090x_get_loop_params(struct stv090x_state *state, s32 *freq_inc, s32 *timeout_sw, s32 *steps)
{
	s32 timeout, inc, steps_max, srate, car_max;

	srate = state->srate;
	car_max = state->search_range / 1000;
	car_max += car_max / 10;
	car_max  = 65536 * (car_max / 2);
	car_max /= (state->internal->mclk / 1000);

	if (car_max > 0x4000)
		car_max = 0x4000 ; /* maxcarrier should be<= +-1/4 Mclk */

	inc  = srate;
	inc /= state->internal->mclk / 1000;
	inc *= 256;
	inc *= 256;
	inc /= 1000;

	switch (state->search_mode) {
	case STV090x_SEARCH_DVBS1:
	case STV090x_SEARCH_DSS:
		inc *= 3; /* freq step = 3% of srate */
		timeout = 20;
		break;

	case STV090x_SEARCH_DVBS2:
		inc *= 4;
		timeout = 25;
		break;

	case STV090x_SEARCH_AUTO:
	default:
		inc *= 3;
		timeout = 25;
		break;
	}
	inc /= 100;
	if ((inc > car_max) || (inc < 0))
		inc = car_max / 2; /* increment <= 1/8 Mclk */

	timeout *= 27500; /* 27.5 Msps reference */
	if (srate > 0)
		timeout /= (srate / 1000);

	if ((timeout > 100) || (timeout < 0))
		timeout = 100;

	steps_max = (car_max / inc) + 1; /* min steps = 3 */
	if ((steps_max > 100) || (steps_max < 0)) {
		steps_max = 100; /* max steps <= 100 */
		inc = car_max / steps_max;
	}
	*freq_inc = inc;
	*timeout_sw = timeout;
	*steps = steps_max;

	return 0;
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
          struct stv090x_state * state = (struct stv090x_state *) malloc(_len_state0*sizeof(struct stv090x_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].srate = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].search_range = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].search_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__internal0 = 1;
          state[_i0].internal = (struct TYPE_2__ *) malloc(_len_state__i0__internal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__internal0; _j0++) {
            state[_i0].internal->mclk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_freq_inc0 = 1;
          int * freq_inc = (int *) malloc(_len_freq_inc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_freq_inc0; _i0++) {
            freq_inc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_timeout_sw0 = 1;
          int * timeout_sw = (int *) malloc(_len_timeout_sw0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_timeout_sw0; _i0++) {
            timeout_sw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_steps0 = 1;
          int * steps = (int *) malloc(_len_steps0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_steps0; _i0++) {
            steps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stv090x_get_loop_params(state,freq_inc,timeout_sw,steps);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].internal);
          }
          free(state);
          free(freq_inc);
          free(timeout_sw);
          free(steps);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state0 = 65025;
          struct stv090x_state * state = (struct stv090x_state *) malloc(_len_state0*sizeof(struct stv090x_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].srate = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].search_range = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].search_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__internal0 = 1;
          state[_i0].internal = (struct TYPE_2__ *) malloc(_len_state__i0__internal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__internal0; _j0++) {
            state[_i0].internal->mclk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_freq_inc0 = 65025;
          int * freq_inc = (int *) malloc(_len_freq_inc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_freq_inc0; _i0++) {
            freq_inc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_timeout_sw0 = 65025;
          int * timeout_sw = (int *) malloc(_len_timeout_sw0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_timeout_sw0; _i0++) {
            timeout_sw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_steps0 = 65025;
          int * steps = (int *) malloc(_len_steps0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_steps0; _i0++) {
            steps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stv090x_get_loop_params(state,freq_inc,timeout_sw,steps);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].internal);
          }
          free(state);
          free(freq_inc);
          free(timeout_sw);
          free(steps);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state0 = 100;
          struct stv090x_state * state = (struct stv090x_state *) malloc(_len_state0*sizeof(struct stv090x_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].srate = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].search_range = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].search_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__internal0 = 1;
          state[_i0].internal = (struct TYPE_2__ *) malloc(_len_state__i0__internal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__internal0; _j0++) {
            state[_i0].internal->mclk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_freq_inc0 = 100;
          int * freq_inc = (int *) malloc(_len_freq_inc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_freq_inc0; _i0++) {
            freq_inc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_timeout_sw0 = 100;
          int * timeout_sw = (int *) malloc(_len_timeout_sw0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_timeout_sw0; _i0++) {
            timeout_sw[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_steps0 = 100;
          int * steps = (int *) malloc(_len_steps0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_steps0; _i0++) {
            steps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = stv090x_get_loop_params(state,freq_inc,timeout_sw,steps);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].internal);
          }
          free(state);
          free(freq_inc);
          free(timeout_sw);
          free(steps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
