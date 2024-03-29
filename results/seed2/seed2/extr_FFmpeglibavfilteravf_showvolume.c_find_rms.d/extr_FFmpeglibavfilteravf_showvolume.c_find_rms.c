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

__attribute__((used)) static void find_rms(float *src, int nb_samples, float *rms, float factor)
{
    int i;

    for (i = 0; i < nb_samples; i++)
        *rms += factor * (src[i] * src[i] - *rms);
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
          int nb_samples = 100;
          float factor = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_src0 = 1;
          float * src = (float *) malloc(_len_src0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_rms0 = 1;
          float * rms = (float *) malloc(_len_rms0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_rms0; _i0++) {
            rms[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          find_rms(src,nb_samples,rms,factor);
          free(src);
          free(rms);
        
        break;
    }
    // big-arr
    case 1:
    {
          int nb_samples = 255;
          float factor = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_src0 = 65025;
          float * src = (float *) malloc(_len_src0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_rms0 = 65025;
          float * rms = (float *) malloc(_len_rms0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_rms0; _i0++) {
            rms[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          find_rms(src,nb_samples,rms,factor);
          free(src);
          free(rms);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int nb_samples = 10;
          float factor = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_src0 = 100;
          float * src = (float *) malloc(_len_src0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_rms0 = 100;
          float * rms = (float *) malloc(_len_rms0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_rms0; _i0++) {
            rms[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          find_rms(src,nb_samples,rms,factor);
          free(src);
          free(rms);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
