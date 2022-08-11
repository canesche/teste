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

/* Variables and functions */

__attribute__((used)) static inline double fade(double prev, double next, int pos,
                          double *fade_factors[2])
{
    return fade_factors[0][pos] * prev + fade_factors[1][pos] * next;
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
          double prev = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double next = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int pos = 100;
          int _len_fade_factors0 = 2;
          double ** fade_factors = (double **) malloc(_len_fade_factors0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_fade_factors0; _i0++) {
            int _len_fade_factors1 = 1;
            fade_factors[_i0] = (double *) malloc(_len_fade_factors1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_fade_factors1; _i1++) {
              fade_factors[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          double benchRet = fade(prev,next,pos,fade_factors);
          printf("%lf\n", benchRet); 
          for(int i1 = 0; i1 < _len_fade_factors0; i1++) {
            int _len_fade_factors1 = 1;
              free(fade_factors[i1]);
          }
          free(fade_factors);
        
        break;
    }
    // big-arr
    case 1:
    {
          double prev = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double next = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int pos = 255;
          int _len_fade_factors0 = 65025;
          double ** fade_factors = (double **) malloc(_len_fade_factors0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_fade_factors0; _i0++) {
            int _len_fade_factors1 = 1;
            fade_factors[_i0] = (double *) malloc(_len_fade_factors1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_fade_factors1; _i1++) {
              fade_factors[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          double benchRet = fade(prev,next,pos,fade_factors);
          printf("%lf\n", benchRet); 
          for(int i1 = 0; i1 < _len_fade_factors0; i1++) {
            int _len_fade_factors1 = 1;
              free(fade_factors[i1]);
          }
          free(fade_factors);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double prev = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double next = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int pos = 10;
          int _len_fade_factors0 = 100;
          double ** fade_factors = (double **) malloc(_len_fade_factors0*sizeof(double *));
          for(int _i0 = 0; _i0 < _len_fade_factors0; _i0++) {
            int _len_fade_factors1 = 1;
            fade_factors[_i0] = (double *) malloc(_len_fade_factors1*sizeof(double));
            for(int _i1 = 0; _i1 < _len_fade_factors1; _i1++) {
              fade_factors[_i0][_i1] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
            }
          }
          double benchRet = fade(prev,next,pos,fade_factors);
          printf("%lf\n", benchRet); 
          for(int i1 = 0; i1 < _len_fade_factors0; i1++) {
            int _len_fade_factors1 = 1;
              free(fade_factors[i1]);
          }
          free(fade_factors);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
