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

__attribute__((used)) static void dmlab_action_continuous_bounds(
    void* context,
    int continuous_idx, double* min_value_out, double* max_value_out) {}


// ------------------------------------------------------------------------- //




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
          int continuous_idx = 100;
          void * context;
          int _len_min_value_out0 = 1;
          double * min_value_out = (double *) malloc(_len_min_value_out0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_min_value_out0; _i0++) {
            min_value_out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_max_value_out0 = 1;
          double * max_value_out = (double *) malloc(_len_max_value_out0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_max_value_out0; _i0++) {
            max_value_out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          dmlab_action_continuous_bounds(context,continuous_idx,min_value_out,max_value_out);
          free(min_value_out);
          free(max_value_out);
        
        break;
    }
    // big-arr
    case 1:
    {
          int continuous_idx = 255;
          void * context;
          int _len_min_value_out0 = 65025;
          double * min_value_out = (double *) malloc(_len_min_value_out0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_min_value_out0; _i0++) {
            min_value_out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_max_value_out0 = 65025;
          double * max_value_out = (double *) malloc(_len_max_value_out0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_max_value_out0; _i0++) {
            max_value_out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          dmlab_action_continuous_bounds(context,continuous_idx,min_value_out,max_value_out);
          free(min_value_out);
          free(max_value_out);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int continuous_idx = 10;
          void * context;
          int _len_min_value_out0 = 100;
          double * min_value_out = (double *) malloc(_len_min_value_out0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_min_value_out0; _i0++) {
            min_value_out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_max_value_out0 = 100;
          double * max_value_out = (double *) malloc(_len_max_value_out0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_max_value_out0; _i0++) {
            max_value_out[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          dmlab_action_continuous_bounds(context,continuous_idx,min_value_out,max_value_out);
          free(min_value_out);
          free(max_value_out);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
