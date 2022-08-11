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
struct stv0900_internal {int* symbol_rate; int* srch_range; int* srch_standard; int mclk; } ;
typedef  int s32 ;
typedef  enum fe_stv0900_search_standard { ____Placeholder_fe_stv0900_search_standard } fe_stv0900_search_standard ;
typedef  enum fe_stv0900_demod_num { ____Placeholder_fe_stv0900_demod_num } fe_stv0900_demod_num ;

/* Variables and functions */
#define  STV0900_AUTO_SEARCH 131 
#define  STV0900_SEARCH_DSS 130 
#define  STV0900_SEARCH_DVBS1 129 
#define  STV0900_SEARCH_DVBS2 128 

__attribute__((used)) static void stv0900_get_sw_loop_params(struct stv0900_internal *intp,
				s32 *frequency_inc, s32 *sw_timeout,
				s32 *steps,
				enum fe_stv0900_demod_num demod)
{
	s32 timeout, freq_inc, max_steps, srate, max_carrier;

	enum fe_stv0900_search_standard	standard;

	srate = intp->symbol_rate[demod];
	max_carrier = intp->srch_range[demod] / 1000;
	max_carrier += max_carrier / 10;
	standard = intp->srch_standard[demod];

	max_carrier = 65536 * (max_carrier / 2);
	max_carrier /= intp->mclk / 1000;

	if (max_carrier > 0x4000)
		max_carrier = 0x4000;

	freq_inc = srate;
	freq_inc /= intp->mclk >> 10;
	freq_inc = freq_inc << 6;

	switch (standard) {
	case STV0900_SEARCH_DVBS1:
	case STV0900_SEARCH_DSS:
		freq_inc *= 3;
		timeout = 20;
		break;
	case STV0900_SEARCH_DVBS2:
		freq_inc *= 4;
		timeout = 25;
		break;
	case STV0900_AUTO_SEARCH:
	default:
		freq_inc *= 3;
		timeout = 25;
		break;
	}

	freq_inc /= 100;

	if ((freq_inc > max_carrier) || (freq_inc < 0))
		freq_inc = max_carrier / 2;

	timeout *= 27500;

	if (srate > 0)
		timeout /= srate / 1000;

	if ((timeout > 100) || (timeout < 0))
		timeout = 100;

	max_steps = (max_carrier / freq_inc) + 1;

	if ((max_steps > 100) || (max_steps < 0)) {
		max_steps =  100;
		freq_inc = max_carrier / max_steps;
	}

	*frequency_inc = freq_inc;
	*sw_timeout = timeout;
	*steps = max_steps;

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
          enum fe_stv0900_demod_num demod = 0;
          int _len_intp0 = 1;
          struct stv0900_internal * intp = (struct stv0900_internal *) malloc(_len_intp0*sizeof(struct stv0900_internal));
          for(int _i0 = 0; _i0 < _len_intp0; _i0++) {
              int _len_intp__i0__symbol_rate0 = 1;
          intp[_i0].symbol_rate = (int *) malloc(_len_intp__i0__symbol_rate0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intp__i0__symbol_rate0; _j0++) {
            intp[_i0].symbol_rate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intp__i0__srch_range0 = 1;
          intp[_i0].srch_range = (int *) malloc(_len_intp__i0__srch_range0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intp__i0__srch_range0; _j0++) {
            intp[_i0].srch_range[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intp__i0__srch_standard0 = 1;
          intp[_i0].srch_standard = (int *) malloc(_len_intp__i0__srch_standard0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intp__i0__srch_standard0; _j0++) {
            intp[_i0].srch_standard[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        intp[_i0].mclk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frequency_inc0 = 1;
          int * frequency_inc = (int *) malloc(_len_frequency_inc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frequency_inc0; _i0++) {
            frequency_inc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sw_timeout0 = 1;
          int * sw_timeout = (int *) malloc(_len_sw_timeout0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sw_timeout0; _i0++) {
            sw_timeout[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_steps0 = 1;
          int * steps = (int *) malloc(_len_steps0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_steps0; _i0++) {
            steps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stv0900_get_sw_loop_params(intp,frequency_inc,sw_timeout,steps,demod);
          for(int _aux = 0; _aux < _len_intp0; _aux++) {
          free(intp[_aux].symbol_rate);
          }
          for(int _aux = 0; _aux < _len_intp0; _aux++) {
          free(intp[_aux].srch_range);
          }
          for(int _aux = 0; _aux < _len_intp0; _aux++) {
          free(intp[_aux].srch_standard);
          }
          free(intp);
          free(frequency_inc);
          free(sw_timeout);
          free(steps);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum fe_stv0900_demod_num demod = 0;
          int _len_intp0 = 65025;
          struct stv0900_internal * intp = (struct stv0900_internal *) malloc(_len_intp0*sizeof(struct stv0900_internal));
          for(int _i0 = 0; _i0 < _len_intp0; _i0++) {
              int _len_intp__i0__symbol_rate0 = 1;
          intp[_i0].symbol_rate = (int *) malloc(_len_intp__i0__symbol_rate0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intp__i0__symbol_rate0; _j0++) {
            intp[_i0].symbol_rate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intp__i0__srch_range0 = 1;
          intp[_i0].srch_range = (int *) malloc(_len_intp__i0__srch_range0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intp__i0__srch_range0; _j0++) {
            intp[_i0].srch_range[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intp__i0__srch_standard0 = 1;
          intp[_i0].srch_standard = (int *) malloc(_len_intp__i0__srch_standard0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intp__i0__srch_standard0; _j0++) {
            intp[_i0].srch_standard[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        intp[_i0].mclk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frequency_inc0 = 65025;
          int * frequency_inc = (int *) malloc(_len_frequency_inc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frequency_inc0; _i0++) {
            frequency_inc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sw_timeout0 = 65025;
          int * sw_timeout = (int *) malloc(_len_sw_timeout0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sw_timeout0; _i0++) {
            sw_timeout[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_steps0 = 65025;
          int * steps = (int *) malloc(_len_steps0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_steps0; _i0++) {
            steps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stv0900_get_sw_loop_params(intp,frequency_inc,sw_timeout,steps,demod);
          for(int _aux = 0; _aux < _len_intp0; _aux++) {
          free(intp[_aux].symbol_rate);
          }
          for(int _aux = 0; _aux < _len_intp0; _aux++) {
          free(intp[_aux].srch_range);
          }
          for(int _aux = 0; _aux < _len_intp0; _aux++) {
          free(intp[_aux].srch_standard);
          }
          free(intp);
          free(frequency_inc);
          free(sw_timeout);
          free(steps);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum fe_stv0900_demod_num demod = 0;
          int _len_intp0 = 100;
          struct stv0900_internal * intp = (struct stv0900_internal *) malloc(_len_intp0*sizeof(struct stv0900_internal));
          for(int _i0 = 0; _i0 < _len_intp0; _i0++) {
              int _len_intp__i0__symbol_rate0 = 1;
          intp[_i0].symbol_rate = (int *) malloc(_len_intp__i0__symbol_rate0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intp__i0__symbol_rate0; _j0++) {
            intp[_i0].symbol_rate[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intp__i0__srch_range0 = 1;
          intp[_i0].srch_range = (int *) malloc(_len_intp__i0__srch_range0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intp__i0__srch_range0; _j0++) {
            intp[_i0].srch_range[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_intp__i0__srch_standard0 = 1;
          intp[_i0].srch_standard = (int *) malloc(_len_intp__i0__srch_standard0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_intp__i0__srch_standard0; _j0++) {
            intp[_i0].srch_standard[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        intp[_i0].mclk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_frequency_inc0 = 100;
          int * frequency_inc = (int *) malloc(_len_frequency_inc0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_frequency_inc0; _i0++) {
            frequency_inc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sw_timeout0 = 100;
          int * sw_timeout = (int *) malloc(_len_sw_timeout0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sw_timeout0; _i0++) {
            sw_timeout[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_steps0 = 100;
          int * steps = (int *) malloc(_len_steps0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_steps0; _i0++) {
            steps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          stv0900_get_sw_loop_params(intp,frequency_inc,sw_timeout,steps,demod);
          for(int _aux = 0; _aux < _len_intp0; _aux++) {
          free(intp[_aux].symbol_rate);
          }
          for(int _aux = 0; _aux < _len_intp0; _aux++) {
          free(intp[_aux].srch_range);
          }
          for(int _aux = 0; _aux < _len_intp0; _aux++) {
          free(intp[_aux].srch_standard);
          }
          free(intp);
          free(frequency_inc);
          free(sw_timeout);
          free(steps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
