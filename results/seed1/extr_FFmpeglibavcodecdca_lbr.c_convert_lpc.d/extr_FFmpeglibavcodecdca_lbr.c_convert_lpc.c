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
 float* lpc_tab ; 

__attribute__((used)) static void convert_lpc(float *coeff, const int *codes)
{
    int i, j;

    for (i = 0; i < 8; i++) {
        float rc = lpc_tab[codes[i]];
        for (j = 0; j < (i + 1) / 2; j++) {
            float tmp1 = coeff[    j    ];
            float tmp2 = coeff[i - j - 1];
            coeff[    j    ] = tmp1 + rc * tmp2;
            coeff[i - j - 1] = tmp2 + rc * tmp1;
        }
        coeff[i] = rc;
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
          int _len_coeff0 = 1;
          float * coeff = (float *) malloc(_len_coeff0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_coeff0; _i0++) {
            coeff[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_codes0 = 1;
          const int * codes = (const int *) malloc(_len_codes0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_codes0; _i0++) {
            codes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_lpc(coeff,codes);
          free(coeff);
          free(codes);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_coeff0 = 65025;
          float * coeff = (float *) malloc(_len_coeff0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_coeff0; _i0++) {
            coeff[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_codes0 = 65025;
          const int * codes = (const int *) malloc(_len_codes0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_codes0; _i0++) {
            codes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_lpc(coeff,codes);
          free(coeff);
          free(codes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_coeff0 = 100;
          float * coeff = (float *) malloc(_len_coeff0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_coeff0; _i0++) {
            coeff[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_codes0 = 100;
          const int * codes = (const int *) malloc(_len_codes0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_codes0; _i0++) {
            codes[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_lpc(coeff,codes);
          free(coeff);
          free(codes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
