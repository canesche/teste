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
struct mb86a16_state {int master_clk; } ;

/* Variables and functions */

__attribute__((used)) static void swp_info_get(struct mb86a16_state *state,
			 int fOSC_start,
			 int smrt,
			 int v, int R,
			 int swp_ofs,
			 int *fOSC,
			 int *afcex_freq,
			 unsigned char *AFCEX_L,
			 unsigned char *AFCEX_H)
{
	int AFCEX ;
	int crnt_swp_freq ;

	crnt_swp_freq = fOSC_start * 1000 + v * swp_ofs;

	if (R == 0)
		*fOSC = (crnt_swp_freq + 1000) / 2000 * 2;
	else
		*fOSC = (crnt_swp_freq + 500) / 1000;

	if (*fOSC >= crnt_swp_freq)
		*afcex_freq = *fOSC * 1000 - crnt_swp_freq;
	else
		*afcex_freq = crnt_swp_freq - *fOSC * 1000;

	AFCEX = *afcex_freq * 8192 / state->master_clk;
	*AFCEX_L =  AFCEX & 0x00ff;
	*AFCEX_H = (AFCEX & 0x0f00) >> 8;
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
          int fOSC_start = 100;
          int smrt = 100;
          int v = 100;
          int R = 100;
          int swp_ofs = 100;
          int _len_state0 = 1;
          struct mb86a16_state * state = (struct mb86a16_state *) malloc(_len_state0*sizeof(struct mb86a16_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].master_clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fOSC0 = 1;
          int * fOSC = (int *) malloc(_len_fOSC0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fOSC0; _i0++) {
            fOSC[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_afcex_freq0 = 1;
          int * afcex_freq = (int *) malloc(_len_afcex_freq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_afcex_freq0; _i0++) {
            afcex_freq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_AFCEX_L0 = 1;
          unsigned char * AFCEX_L = (unsigned char *) malloc(_len_AFCEX_L0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_AFCEX_L0; _i0++) {
            AFCEX_L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_AFCEX_H0 = 1;
          unsigned char * AFCEX_H = (unsigned char *) malloc(_len_AFCEX_H0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_AFCEX_H0; _i0++) {
            AFCEX_H[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          swp_info_get(state,fOSC_start,smrt,v,R,swp_ofs,fOSC,afcex_freq,AFCEX_L,AFCEX_H);
          free(state);
          free(fOSC);
          free(afcex_freq);
          free(AFCEX_L);
          free(AFCEX_H);
        
        break;
    }
    // big-arr
    case 1:
    {
          int fOSC_start = 255;
          int smrt = 255;
          int v = 255;
          int R = 255;
          int swp_ofs = 255;
          int _len_state0 = 65025;
          struct mb86a16_state * state = (struct mb86a16_state *) malloc(_len_state0*sizeof(struct mb86a16_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].master_clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fOSC0 = 65025;
          int * fOSC = (int *) malloc(_len_fOSC0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fOSC0; _i0++) {
            fOSC[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_afcex_freq0 = 65025;
          int * afcex_freq = (int *) malloc(_len_afcex_freq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_afcex_freq0; _i0++) {
            afcex_freq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_AFCEX_L0 = 65025;
          unsigned char * AFCEX_L = (unsigned char *) malloc(_len_AFCEX_L0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_AFCEX_L0; _i0++) {
            AFCEX_L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_AFCEX_H0 = 65025;
          unsigned char * AFCEX_H = (unsigned char *) malloc(_len_AFCEX_H0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_AFCEX_H0; _i0++) {
            AFCEX_H[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          swp_info_get(state,fOSC_start,smrt,v,R,swp_ofs,fOSC,afcex_freq,AFCEX_L,AFCEX_H);
          free(state);
          free(fOSC);
          free(afcex_freq);
          free(AFCEX_L);
          free(AFCEX_H);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int fOSC_start = 10;
          int smrt = 10;
          int v = 10;
          int R = 10;
          int swp_ofs = 10;
          int _len_state0 = 100;
          struct mb86a16_state * state = (struct mb86a16_state *) malloc(_len_state0*sizeof(struct mb86a16_state));
          for(int _i0 = 0; _i0 < _len_state0; _i0++) {
            state[_i0].master_clk = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fOSC0 = 100;
          int * fOSC = (int *) malloc(_len_fOSC0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_fOSC0; _i0++) {
            fOSC[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_afcex_freq0 = 100;
          int * afcex_freq = (int *) malloc(_len_afcex_freq0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_afcex_freq0; _i0++) {
            afcex_freq[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_AFCEX_L0 = 100;
          unsigned char * AFCEX_L = (unsigned char *) malloc(_len_AFCEX_L0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_AFCEX_L0; _i0++) {
            AFCEX_L[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_AFCEX_H0 = 100;
          unsigned char * AFCEX_H = (unsigned char *) malloc(_len_AFCEX_H0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_AFCEX_H0; _i0++) {
            AFCEX_H[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          swp_info_get(state,fOSC_start,smrt,v,R,swp_ofs,fOSC,afcex_freq,AFCEX_L,AFCEX_H);
          free(state);
          free(fOSC);
          free(afcex_freq);
          free(AFCEX_L);
          free(AFCEX_H);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
