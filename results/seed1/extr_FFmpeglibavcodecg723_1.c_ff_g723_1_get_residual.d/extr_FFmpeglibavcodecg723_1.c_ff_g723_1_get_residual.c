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
typedef  int /*<<< orphan*/  int16_t ;

/* Variables and functions */
 int PITCH_MAX ; 
 int PITCH_ORDER ; 
 int SUBFRAME_LEN ; 

void ff_g723_1_get_residual(int16_t *residual, int16_t *prev_excitation,
                            int lag)
{
    int offset = PITCH_MAX - PITCH_ORDER / 2 - lag;
    int i;

    residual[0] = prev_excitation[offset];
    residual[1] = prev_excitation[offset + 1];

    offset += 2;
    for (i = 2; i < SUBFRAME_LEN + PITCH_ORDER - 1; i++)
        residual[i] = prev_excitation[offset + (i - 2) % lag];
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
          int lag = 100;
          int _len_residual0 = 1;
          int * residual = (int *) malloc(_len_residual0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_residual0; _i0++) {
            residual[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev_excitation0 = 1;
          int * prev_excitation = (int *) malloc(_len_prev_excitation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prev_excitation0; _i0++) {
            prev_excitation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_g723_1_get_residual(residual,prev_excitation,lag);
          free(residual);
          free(prev_excitation);
        
        break;
    }
    // big-arr
    case 1:
    {
          int lag = 255;
          int _len_residual0 = 65025;
          int * residual = (int *) malloc(_len_residual0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_residual0; _i0++) {
            residual[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev_excitation0 = 65025;
          int * prev_excitation = (int *) malloc(_len_prev_excitation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prev_excitation0; _i0++) {
            prev_excitation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_g723_1_get_residual(residual,prev_excitation,lag);
          free(residual);
          free(prev_excitation);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int lag = 10;
          int _len_residual0 = 100;
          int * residual = (int *) malloc(_len_residual0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_residual0; _i0++) {
            residual[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_prev_excitation0 = 100;
          int * prev_excitation = (int *) malloc(_len_prev_excitation0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_prev_excitation0; _i0++) {
            prev_excitation[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_g723_1_get_residual(residual,prev_excitation,lag);
          free(residual);
          free(prev_excitation);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
