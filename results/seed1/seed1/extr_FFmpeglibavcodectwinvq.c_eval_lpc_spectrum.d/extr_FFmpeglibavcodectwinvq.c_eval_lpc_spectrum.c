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

__attribute__((used)) static float eval_lpc_spectrum(const float *lsp, float cos_val, int order)
{
    int j;
    float p         = 0.5f;
    float q         = 0.5f;
    float two_cos_w = 2.0f * cos_val;

    for (j = 0; j + 1 < order; j += 2 * 2) {
        // Unroll the loop once since order is a multiple of four
        q *= lsp[j]     - two_cos_w;
        p *= lsp[j + 1] - two_cos_w;

        q *= lsp[j + 2] - two_cos_w;
        p *= lsp[j + 3] - two_cos_w;
    }

    p *= p * (2.0f - two_cos_w);
    q *= q * (2.0f + two_cos_w);

    return 0.5 / (p + q);
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
          float cos_val = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int order = 100;
          int _len_lsp0 = 1;
          const float * lsp = (const float *) malloc(_len_lsp0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_lsp0; _i0++) {
            lsp[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          float benchRet = eval_lpc_spectrum(lsp,cos_val,order);
          printf("%f\n", benchRet); 
          free(lsp);
        
        break;
    }
    // big-arr
    case 1:
    {
          float cos_val = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int order = 255;
          int _len_lsp0 = 65025;
          const float * lsp = (const float *) malloc(_len_lsp0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_lsp0; _i0++) {
            lsp[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          float benchRet = eval_lpc_spectrum(lsp,cos_val,order);
          printf("%f\n", benchRet); 
          free(lsp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          float cos_val = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int order = 10;
          int _len_lsp0 = 100;
          const float * lsp = (const float *) malloc(_len_lsp0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_lsp0; _i0++) {
            lsp[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          float benchRet = eval_lpc_spectrum(lsp,cos_val,order);
          printf("%f\n", benchRet); 
          free(lsp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
