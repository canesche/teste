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
typedef  int u32 ;
struct stv {int* reg; int ref_freq; } ;

/* Variables and functions */

__attribute__((used)) static void init_state(struct stv *state)
{
	u32 clkdiv = 0;
	u32 agcmode = 0;
	u32 agcref = 2;
	u32 agcset = 0xffffffff;
	u32 bbmode = 0xffffffff;

	state->reg[0] = 0x08;
	state->reg[1] = 0x41;
	state->reg[2] = 0x8f;
	state->reg[3] = 0x00;
	state->reg[4] = 0xce;
	state->reg[5] = 0x54;
	state->reg[6] = 0x55;
	state->reg[7] = 0x45;
	state->reg[8] = 0x46;
	state->reg[9] = 0xbd;
	state->reg[10] = 0x11;

	state->ref_freq = 16000;

	if (clkdiv <= 3)
		state->reg[0x00] |= (clkdiv & 0x03);
	if (agcmode <= 3) {
		state->reg[0x03] |= (agcmode << 5);
		if (agcmode == 0x01)
			state->reg[0x01] |= 0x30;
	}
	if (bbmode <= 3)
		state->reg[0x01] = (state->reg[0x01] & ~0x30) | (bbmode << 4);
	if (agcref <= 7)
		state->reg[0x03] |= agcref;
	if (agcset <= 31)
		state->reg[0x02] = (state->reg[0x02] & ~0x1F) | agcset | 0x40;
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
          struct stv * state = (struct stv *) malloc(_len_state0*sizeof(struct stv));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__reg0 = 1;
          state[_i0].reg = (int *) malloc(_len_state__i0__reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__reg0; _j0++) {
            state[_i0].reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].ref_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_state(state);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].reg);
          }
          free(state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state0 = 65025;
          struct stv * state = (struct stv *) malloc(_len_state0*sizeof(struct stv));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__reg0 = 1;
          state[_i0].reg = (int *) malloc(_len_state__i0__reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__reg0; _j0++) {
            state[_i0].reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].ref_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_state(state);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].reg);
          }
          free(state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state0 = 100;
          struct stv * state = (struct stv *) malloc(_len_state0*sizeof(struct stv));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__reg0 = 1;
          state[_i0].reg = (int *) malloc(_len_state__i0__reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_state__i0__reg0; _j0++) {
            state[_i0].reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        state[_i0].ref_freq = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          init_state(state);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].reg);
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
