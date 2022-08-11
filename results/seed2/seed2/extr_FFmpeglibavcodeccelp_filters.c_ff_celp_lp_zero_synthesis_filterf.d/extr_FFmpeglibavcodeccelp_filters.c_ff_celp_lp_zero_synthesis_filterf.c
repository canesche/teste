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

void ff_celp_lp_zero_synthesis_filterf(float *out, const float *filter_coeffs,
                                       const float *in, int buffer_length,
                                       int filter_length)
{
    int i,n;

    for (n = 0; n < buffer_length; n++) {
        out[n] = in[n];
        for (i = 1; i <= filter_length; i++)
            out[n] += filter_coeffs[i-1] * in[n-i];
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
          int buffer_length = 100;
          int filter_length = 100;
          int _len_out0 = 1;
          float * out = (float *) malloc(_len_out0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_filter_coeffs0 = 1;
          const float * filter_coeffs = (const float *) malloc(_len_filter_coeffs0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_filter_coeffs0; _i0++) {
            filter_coeffs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_in0 = 1;
          const float * in = (const float *) malloc(_len_in0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          ff_celp_lp_zero_synthesis_filterf(out,filter_coeffs,in,buffer_length,filter_length);
          free(out);
          free(filter_coeffs);
          free(in);
        
        break;
    }
    // big-arr
    case 1:
    {
          int buffer_length = 255;
          int filter_length = 255;
          int _len_out0 = 65025;
          float * out = (float *) malloc(_len_out0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_filter_coeffs0 = 65025;
          const float * filter_coeffs = (const float *) malloc(_len_filter_coeffs0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_filter_coeffs0; _i0++) {
            filter_coeffs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_in0 = 65025;
          const float * in = (const float *) malloc(_len_in0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          ff_celp_lp_zero_synthesis_filterf(out,filter_coeffs,in,buffer_length,filter_length);
          free(out);
          free(filter_coeffs);
          free(in);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int buffer_length = 10;
          int filter_length = 10;
          int _len_out0 = 100;
          float * out = (float *) malloc(_len_out0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_filter_coeffs0 = 100;
          const float * filter_coeffs = (const float *) malloc(_len_filter_coeffs0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_filter_coeffs0; _i0++) {
            filter_coeffs[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_in0 = 100;
          const float * in = (const float *) malloc(_len_in0*sizeof(const float));
          for(int _i0 = 0; _i0 < _len_in0; _i0++) {
            in[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          ff_celp_lp_zero_synthesis_filterf(out,filter_coeffs,in,buffer_length,filter_length);
          free(out);
          free(filter_coeffs);
          free(in);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
