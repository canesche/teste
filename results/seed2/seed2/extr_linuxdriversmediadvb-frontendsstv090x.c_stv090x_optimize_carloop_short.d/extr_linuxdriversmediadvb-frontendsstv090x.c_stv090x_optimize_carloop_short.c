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
struct stv090x_state {int modulation; int srate; TYPE_1__* internal; } ;
struct stv090x_short_frame_crloop {int crl_2; int crl_5; int crl_10; int crl_20; int crl_30; } ;
typedef  size_t s32 ;
struct TYPE_2__ {int dev_ver; } ;

/* Variables and functions */
#define  STV090x_16APSK 131 
#define  STV090x_32APSK 130 
#define  STV090x_8PSK 129 
#define  STV090x_QPSK 128 
 struct stv090x_short_frame_crloop* stv090x_s2_short_crl_cut20 ; 
 struct stv090x_short_frame_crloop* stv090x_s2_short_crl_cut30 ; 

__attribute__((used)) static u8 stv090x_optimize_carloop_short(struct stv090x_state *state)
{
	struct stv090x_short_frame_crloop *short_crl = NULL;
	s32 index = 0;
	u8 aclc = 0x0b;

	switch (state->modulation) {
	case STV090x_QPSK:
	default:
		index = 0;
		break;
	case STV090x_8PSK:
		index = 1;
		break;
	case STV090x_16APSK:
		index = 2;
		break;
	case STV090x_32APSK:
		index = 3;
		break;
	}

	if (state->internal->dev_ver >= 0x30) {
		/* Cut 3.0 and up */
		short_crl = stv090x_s2_short_crl_cut30;
	} else {
		/* Cut 2.0 and up: we don't support cuts older than 2.0 */
		short_crl = stv090x_s2_short_crl_cut20;
	}

	if (state->srate <= 3000000)
		aclc = short_crl[index].crl_2;
	else if (state->srate <= 7000000)
		aclc = short_crl[index].crl_5;
	else if (state->srate <= 15000000)
		aclc = short_crl[index].crl_10;
	else if (state->srate <= 25000000)
		aclc = short_crl[index].crl_20;
	else
		aclc = short_crl[index].crl_30;

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
          int _len_state0 = 1;
          struct stv090x_state * state = (struct stv090x_state *) malloc(_len_state0*sizeof(struct stv090x_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].modulation = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].srate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__internal0 = 1;
          state[_i0].internal = (struct TYPE_2__ *) malloc(_len_state__i0__internal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__internal0; _j0++) {
            state[_i0].internal->dev_ver = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stv090x_optimize_carloop_short(state);
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
          int _len_state0 = 65025;
          struct stv090x_state * state = (struct stv090x_state *) malloc(_len_state0*sizeof(struct stv090x_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].modulation = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].srate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__internal0 = 1;
          state[_i0].internal = (struct TYPE_2__ *) malloc(_len_state__i0__internal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__internal0; _j0++) {
            state[_i0].internal->dev_ver = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stv090x_optimize_carloop_short(state);
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
          int _len_state0 = 100;
          struct stv090x_state * state = (struct stv090x_state *) malloc(_len_state0*sizeof(struct stv090x_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].modulation = ((-2 * (next_i()%2)) + 1) * next_i();
        state[_i0].srate = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_state__i0__internal0 = 1;
          state[_i0].internal = (struct TYPE_2__ *) malloc(_len_state__i0__internal0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_state__i0__internal0; _j0++) {
            state[_i0].internal->dev_ver = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = stv090x_optimize_carloop_short(state);
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
