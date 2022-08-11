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

__attribute__((used)) static void weighted_vector_sumd(double *out, const double *in_a,
                                 const double *in_b, double weight_coeff_a,
                                 double weight_coeff_b, int length)
{
    int i;

    for (i = 0; i < length; i++)
        out[i] = weight_coeff_a * in_a[i]
               + weight_coeff_b * in_b[i];
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
          double weight_coeff_a = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double weight_coeff_b = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int length = 100;
          int _len_out0 = 1;
          double * out = (double *) malloc(_len_out0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_in_a0 = 1;
          const double * in_a = (const double *) malloc(_len_in_a0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_in_a0; _i0++) {
            in_a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_in_b0 = 1;
          const double * in_b = (const double *) malloc(_len_in_b0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_in_b0; _i0++) {
            in_b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          weighted_vector_sumd(out,in_a,in_b,weight_coeff_a,weight_coeff_b,length);
          free(out);
          free(in_a);
          free(in_b);
        
        break;
    }
    // big-arr
    case 1:
    {
          double weight_coeff_a = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double weight_coeff_b = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int length = 255;
          int _len_out0 = 65025;
          double * out = (double *) malloc(_len_out0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_in_a0 = 65025;
          const double * in_a = (const double *) malloc(_len_in_a0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_in_a0; _i0++) {
            in_a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_in_b0 = 65025;
          const double * in_b = (const double *) malloc(_len_in_b0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_in_b0; _i0++) {
            in_b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          weighted_vector_sumd(out,in_a,in_b,weight_coeff_a,weight_coeff_b,length);
          free(out);
          free(in_a);
          free(in_b);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          double weight_coeff_a = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          double weight_coeff_b = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          int length = 10;
          int _len_out0 = 100;
          double * out = (double *) malloc(_len_out0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_in_a0 = 100;
          const double * in_a = (const double *) malloc(_len_in_a0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_in_a0; _i0++) {
            in_a[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_in_b0 = 100;
          const double * in_b = (const double *) malloc(_len_in_b0*sizeof(const double));
          for(int _i0 = 0; _i0 < _len_in_b0; _i0++) {
            in_b[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          weighted_vector_sumd(out,in_a,in_b,weight_coeff_a,weight_coeff_b,length);
          free(out);
          free(in_a);
          free(in_b);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
