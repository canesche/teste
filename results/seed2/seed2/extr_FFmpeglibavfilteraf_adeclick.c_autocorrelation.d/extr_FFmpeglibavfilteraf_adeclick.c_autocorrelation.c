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

__attribute__((used)) static void autocorrelation(const double *input, int order, int size,
                            double *output, double scale)
{
    int i, j;

    for (i = 0; i <= order; i++) {
        double value = 0.;

        for (j = i; j < size; j++)
            value += input[j] * input[j - i];

        output[i] = value * scale;
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
          int order = 100;
          int size = 100;
          double scale = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_input0 = 1;
          const double * input = (const double *) malloc(_len_input0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_output0 = 1;
          double * output = (double *) malloc(_len_output0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          autocorrelation(input,order,size,output,scale);
          free(input);
          free(output);
        
        break;
    }
    // big-arr
    case 1:
    {
          int order = 255;
          int size = 255;
          double scale = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_input0 = 65025;
          const double * input = (const double *) malloc(_len_input0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_output0 = 65025;
          double * output = (double *) malloc(_len_output0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          autocorrelation(input,order,size,output,scale);
          free(input);
          free(output);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int order = 10;
          int size = 10;
          double scale = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int _len_input0 = 100;
          const double * input = (const double *) malloc(_len_input0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_input0; _i0++) {
            input[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_output0 = 100;
          double * output = (double *) malloc(_len_output0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_output0; _i0++) {
            output[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          autocorrelation(input,order,size,output,scale);
          free(input);
          free(output);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
