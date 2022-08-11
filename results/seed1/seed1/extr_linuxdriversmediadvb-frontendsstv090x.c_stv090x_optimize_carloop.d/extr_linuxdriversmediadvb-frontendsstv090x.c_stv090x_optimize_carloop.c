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
typedef  int u8 ;
struct stv090x_state {int srate; TYPE_1__* internal; } ;
struct stv090x_long_frame_crloop {int modcod; int crl_pilots_on_2; int crl_pilots_on_5; int crl_pilots_on_10; int crl_pilots_on_20; int crl_pilots_on_30; int crl_pilots_off_2; int crl_pilots_off_5; int crl_pilots_off_10; int crl_pilots_off_20; int crl_pilots_off_30; } ;
typedef  int s32 ;
typedef  enum stv090x_modcod { ____Placeholder_stv090x_modcod } stv090x_modcod ;
struct TYPE_2__ {int dev_ver; } ;

/* Variables and functions */
 int STV090x_8PSK_910 ; 
 int STV090x_QPSK_12 ; 
 int STV090x_QPSK_25 ; 
 struct stv090x_long_frame_crloop* stv090x_s2_apsk_crl_cut20 ; 
 struct stv090x_long_frame_crloop* stv090x_s2_apsk_crl_cut30 ; 
 struct stv090x_long_frame_crloop* stv090x_s2_crl_cut20 ; 
 struct stv090x_long_frame_crloop* stv090x_s2_crl_cut30 ; 
 struct stv090x_long_frame_crloop* stv090x_s2_lowqpsk_crl_cut20 ; 
 struct stv090x_long_frame_crloop* stv090x_s2_lowqpsk_crl_cut30 ; 

__attribute__((used)) static u8 stv090x_optimize_carloop(struct stv090x_state *state, enum stv090x_modcod modcod, s32 pilots)
{
	u8 aclc = 0x29;
	s32 i;
	struct stv090x_long_frame_crloop *car_loop, *car_loop_qpsk_low, *car_loop_apsk_low;

	if (state->internal->dev_ver == 0x20) {
		car_loop		= stv090x_s2_crl_cut20;
		car_loop_qpsk_low	= stv090x_s2_lowqpsk_crl_cut20;
		car_loop_apsk_low	= stv090x_s2_apsk_crl_cut20;
	} else {
		/* >= Cut 3 */
		car_loop		= stv090x_s2_crl_cut30;
		car_loop_qpsk_low	= stv090x_s2_lowqpsk_crl_cut30;
		car_loop_apsk_low	= stv090x_s2_apsk_crl_cut30;
	}

	if (modcod < STV090x_QPSK_12) {
		i = 0;
		while ((i < 3) && (modcod != car_loop_qpsk_low[i].modcod))
			i++;

		if (i >= 3)
			i = 2;

	} else {
		i = 0;
		while ((i < 14) && (modcod != car_loop[i].modcod))
			i++;

		if (i >= 14) {
			i = 0;
			while ((i < 11) && (modcod != car_loop_apsk_low[i].modcod))
				i++;

			if (i >= 11)
				i = 10;
		}
	}

	if (modcod <= STV090x_QPSK_25) {
		if (pilots) {
			if (state->srate <= 3000000)
				aclc = car_loop_qpsk_low[i].crl_pilots_on_2;
			else if (state->srate <= 7000000)
				aclc = car_loop_qpsk_low[i].crl_pilots_on_5;
			else if (state->srate <= 15000000)
				aclc = car_loop_qpsk_low[i].crl_pilots_on_10;
			else if (state->srate <= 25000000)
				aclc = car_loop_qpsk_low[i].crl_pilots_on_20;
			else
				aclc = car_loop_qpsk_low[i].crl_pilots_on_30;
		} else {
			if (state->srate <= 3000000)
				aclc = car_loop_qpsk_low[i].crl_pilots_off_2;
			else if (state->srate <= 7000000)
				aclc = car_loop_qpsk_low[i].crl_pilots_off_5;
			else if (state->srate <= 15000000)
				aclc = car_loop_qpsk_low[i].crl_pilots_off_10;
			else if (state->srate <= 25000000)
				aclc = car_loop_qpsk_low[i].crl_pilots_off_20;
			else
				aclc = car_loop_qpsk_low[i].crl_pilots_off_30;
		}

	} else if (modcod <= STV090x_8PSK_910) {
		if (pilots) {
			if (state->srate <= 3000000)
				aclc = car_loop[i].crl_pilots_on_2;
			else if (state->srate <= 7000000)
				aclc = car_loop[i].crl_pilots_on_5;
			else if (state->srate <= 15000000)
				aclc = car_loop[i].crl_pilots_on_10;
			else if (state->srate <= 25000000)
				aclc = car_loop[i].crl_pilots_on_20;
			else
				aclc = car_loop[i].crl_pilots_on_30;
		} else {
			if (state->srate <= 3000000)
				aclc = car_loop[i].crl_pilots_off_2;
			else if (state->srate <= 7000000)
				aclc = car_loop[i].crl_pilots_off_5;
			else if (state->srate <= 15000000)
				aclc = car_loop[i].crl_pilots_off_10;
			else if (state->srate <= 25000000)
				aclc = car_loop[i].crl_pilots_off_20;
			else
				aclc = car_loop[i].crl_pilots_off_30;
		}
	} else { /* 16APSK and 32APSK */
		/*
		 * This should never happen in practice, except if
		 * something is really wrong at the car_loop table.
		 */
		if (i >= 11)
			i = 10;
		if (state->srate <= 3000000)
			aclc = car_loop_apsk_low[i].crl_pilots_on_2;
		else if (state->srate <= 7000000)
			aclc = car_loop_apsk_low[i].crl_pilots_on_5;
		else if (state->srate <= 15000000)
			aclc = car_loop_apsk_low[i].crl_pilots_on_10;
		else if (state->srate <= 25000000)
			aclc = car_loop_apsk_low[i].crl_pilots_on_20;
		else
			aclc = car_loop_apsk_low[i].crl_pilots_on_30;
	}

	return aclc;
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
          enum stv090x_modcod modcod = 0;
          int pilots = 100;
          int _len_state0 = 1;
          struct stv090x_state * state = (struct stv090x_state *) malloc(_len_state0*sizeof(struct stv090x_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].srate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__internal0 = 1;
          state[_i0].internal = (struct TYPE_2__ *) malloc(_len_state__i0__internal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__internal0; _j0++) {
            state[_i0].internal->dev_ver = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stv090x_optimize_carloop(state,modcod,pilots);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].internal);
          }
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum stv090x_modcod modcod = 0;
          int pilots = 255;
          int _len_state0 = 65025;
          struct stv090x_state * state = (struct stv090x_state *) malloc(_len_state0*sizeof(struct stv090x_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].srate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__internal0 = 1;
          state[_i0].internal = (struct TYPE_2__ *) malloc(_len_state__i0__internal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__internal0; _j0++) {
            state[_i0].internal->dev_ver = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stv090x_optimize_carloop(state,modcod,pilots);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].internal);
          }
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum stv090x_modcod modcod = 0;
          int pilots = 10;
          int _len_state0 = 100;
          struct stv090x_state * state = (struct stv090x_state *) malloc(_len_state0*sizeof(struct stv090x_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].srate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__internal0 = 1;
          state[_i0].internal = (struct TYPE_2__ *) malloc(_len_state__i0__internal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__internal0; _j0++) {
            state[_i0].internal->dev_ver = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stv090x_optimize_carloop(state,modcod,pilots);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].internal);
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
