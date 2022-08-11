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
typedef  int ut8 ;
typedef  int ut16 ;
struct rc2_state {scalar_t__* ekey; } ;

/* Variables and functions */

__attribute__((used)) static void rc2_crypt8(struct rc2_state *state, const ut8 *inbuf, ut8 *outbuf) {
	int i;
	ut16 x76, x54, x32, x10;

	x76 = (inbuf[7] << 8) | inbuf[6];
	x54 = (inbuf[5] << 8) | inbuf[4];
	x32 = (inbuf[3] << 8) | inbuf[2];
	x10 = (inbuf[1] << 8) | inbuf[0];

	for (i = 0; i < 16; i++) {
		x10 += ((x32 & ~x76) + (x54 & x76)) + state->ekey[4 * i + 0];
		x10 = (x10 << 1) + (x10 >> 15 & 1);

		x32 += ((x54 & ~x10) + (x76 & x10)) + state->ekey[4 * i + 1];
		x32 = (x32 << 2) + (x32 >> 14 & 3);

		x54 += ((x76 & ~x32) + (x10 & x32)) + state->ekey[4 * i + 2];
		x54 = (x54 << 3) + (x54 >> 13 & 7);

		x76 += ((x10 & ~x54) + (x32 & x54)) + state->ekey[4 * i + 3];
		x76 = (x76 << 5) + (x76 >> 11 & 31);

		if (i == 4 || i == 10) {
			x10 += state->ekey[x76 & 63];
			x32 += state->ekey[x10 & 63];
			x54 += state->ekey[x32 & 63];
			x76 += state->ekey[x54 & 63];
		}
	}

	outbuf[0] = (ut8) x10;
	outbuf[1] = (ut8) (x10 >> 8);
	outbuf[2] = (ut8) x32;
	outbuf[3] = (ut8) (x32 >> 8);
	outbuf[4] = (ut8) x54;
	outbuf[5] = (ut8) (x54 >> 8);
	outbuf[6] = (ut8) x76;
	outbuf[7] = (ut8) (x76 >> 8);
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
          struct rc2_state * state = (struct rc2_state *) malloc(_len_state0*sizeof(struct rc2_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__ekey0 = 1;
          state[_i0].ekey = (long *) malloc(_len_state__i0__ekey0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__ekey0; _j0++) {
            state[_i0].ekey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inbuf0 = 1;
          const int * inbuf = (const int *) malloc(_len_inbuf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_inbuf0; _i0++) {
            inbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outbuf0 = 1;
          int * outbuf = (int *) malloc(_len_outbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outbuf0; _i0++) {
            outbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rc2_crypt8(state,inbuf,outbuf);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].ekey);
          }
          free(state);
          free(inbuf);
          free(outbuf);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_state0 = 65025;
          struct rc2_state * state = (struct rc2_state *) malloc(_len_state0*sizeof(struct rc2_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__ekey0 = 1;
          state[_i0].ekey = (long *) malloc(_len_state__i0__ekey0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__ekey0; _j0++) {
            state[_i0].ekey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inbuf0 = 65025;
          const int * inbuf = (const int *) malloc(_len_inbuf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_inbuf0; _i0++) {
            inbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outbuf0 = 65025;
          int * outbuf = (int *) malloc(_len_outbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outbuf0; _i0++) {
            outbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rc2_crypt8(state,inbuf,outbuf);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].ekey);
          }
          free(state);
          free(inbuf);
          free(outbuf);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_state0 = 100;
          struct rc2_state * state = (struct rc2_state *) malloc(_len_state0*sizeof(struct rc2_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
              int _len_state__i0__ekey0 = 1;
          state[_i0].ekey = (long *) malloc(_len_state__i0__ekey0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_state__i0__ekey0; _j0++) {
            state[_i0].ekey[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_inbuf0 = 100;
          const int * inbuf = (const int *) malloc(_len_inbuf0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_inbuf0; _i0++) {
            inbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_outbuf0 = 100;
          int * outbuf = (int *) malloc(_len_outbuf0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_outbuf0; _i0++) {
            outbuf[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rc2_crypt8(state,inbuf,outbuf);
          for(int _aux = 0; _aux < _len_state0; _aux++) {
          free(state[_aux].ekey);
          }
          free(state);
          free(inbuf);
          free(outbuf);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
