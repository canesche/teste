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
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int uint8_t ;
typedef  int int16_t ;
struct TYPE_3__ {int n; int* x; float* y; scalar_t__ no_repeat_mask; } ;
typedef  TYPE_1__ AMRFixed ;

/* Variables and functions */

void ff_decode_10_pulses_35bits(const int16_t *fixed_index,
                                AMRFixed *fixed_sparse,
                                const uint8_t *gray_decode,
                                int half_pulse_count, int bits)
{
    int i;
    int mask = (1 << bits) - 1;

    fixed_sparse->no_repeat_mask = 0;
    fixed_sparse->n = 2 * half_pulse_count;
    for (i = 0; i < half_pulse_count; i++) {
        const int pos1   = gray_decode[fixed_index[2*i+1] & mask] + i;
        const int pos2   = gray_decode[fixed_index[2*i  ] & mask] + i;
        const float sign = (fixed_index[2*i+1] & (1 << bits)) ? -1.0 : 1.0;
        fixed_sparse->x[2*i+1] = pos1;
        fixed_sparse->x[2*i  ] = pos2;
        fixed_sparse->y[2*i+1] = sign;
        fixed_sparse->y[2*i  ] = pos2 < pos1 ? -sign : sign;
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
          int half_pulse_count = 100;
          int bits = 100;
          int _len_fixed_index0 = 1;
          const int * fixed_index = (const int *) malloc(_len_fixed_index0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fixed_index0; _i0++) {
            fixed_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fixed_sparse0 = 1;
          struct TYPE_3__ * fixed_sparse = (struct TYPE_3__ *) malloc(_len_fixed_sparse0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fixed_sparse0; _i0++) {
            fixed_sparse[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fixed_sparse__i0__x0 = 1;
          fixed_sparse[_i0].x = (int *) malloc(_len_fixed_sparse__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fixed_sparse__i0__x0; _j0++) {
            fixed_sparse[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fixed_sparse__i0__y0 = 1;
          fixed_sparse[_i0].y = (float *) malloc(_len_fixed_sparse__i0__y0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_fixed_sparse__i0__y0; _j0++) {
            fixed_sparse[_i0].y[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        fixed_sparse[_i0].no_repeat_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gray_decode0 = 1;
          const int * gray_decode = (const int *) malloc(_len_gray_decode0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_gray_decode0; _i0++) {
            gray_decode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_decode_10_pulses_35bits(fixed_index,fixed_sparse,gray_decode,half_pulse_count,bits);
          free(fixed_index);
          for(int _aux = 0; _aux < _len_fixed_sparse0; _aux++) {
          free(fixed_sparse[_aux].x);
          }
          for(int _aux = 0; _aux < _len_fixed_sparse0; _aux++) {
          free(fixed_sparse[_aux].y);
          }
          free(fixed_sparse);
          free(gray_decode);
        
        break;
    }
    // big-arr
    case 1:
    {
          int half_pulse_count = 255;
          int bits = 255;
          int _len_fixed_index0 = 65025;
          const int * fixed_index = (const int *) malloc(_len_fixed_index0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fixed_index0; _i0++) {
            fixed_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fixed_sparse0 = 65025;
          struct TYPE_3__ * fixed_sparse = (struct TYPE_3__ *) malloc(_len_fixed_sparse0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fixed_sparse0; _i0++) {
            fixed_sparse[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fixed_sparse__i0__x0 = 1;
          fixed_sparse[_i0].x = (int *) malloc(_len_fixed_sparse__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fixed_sparse__i0__x0; _j0++) {
            fixed_sparse[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fixed_sparse__i0__y0 = 1;
          fixed_sparse[_i0].y = (float *) malloc(_len_fixed_sparse__i0__y0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_fixed_sparse__i0__y0; _j0++) {
            fixed_sparse[_i0].y[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        fixed_sparse[_i0].no_repeat_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gray_decode0 = 65025;
          const int * gray_decode = (const int *) malloc(_len_gray_decode0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_gray_decode0; _i0++) {
            gray_decode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_decode_10_pulses_35bits(fixed_index,fixed_sparse,gray_decode,half_pulse_count,bits);
          free(fixed_index);
          for(int _aux = 0; _aux < _len_fixed_sparse0; _aux++) {
          free(fixed_sparse[_aux].x);
          }
          for(int _aux = 0; _aux < _len_fixed_sparse0; _aux++) {
          free(fixed_sparse[_aux].y);
          }
          free(fixed_sparse);
          free(gray_decode);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int half_pulse_count = 10;
          int bits = 10;
          int _len_fixed_index0 = 100;
          const int * fixed_index = (const int *) malloc(_len_fixed_index0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_fixed_index0; _i0++) {
            fixed_index[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fixed_sparse0 = 100;
          struct TYPE_3__ * fixed_sparse = (struct TYPE_3__ *) malloc(_len_fixed_sparse0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fixed_sparse0; _i0++) {
            fixed_sparse[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_fixed_sparse__i0__x0 = 1;
          fixed_sparse[_i0].x = (int *) malloc(_len_fixed_sparse__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fixed_sparse__i0__x0; _j0++) {
            fixed_sparse[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fixed_sparse__i0__y0 = 1;
          fixed_sparse[_i0].y = (float *) malloc(_len_fixed_sparse__i0__y0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_fixed_sparse__i0__y0; _j0++) {
            fixed_sparse[_i0].y[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        fixed_sparse[_i0].no_repeat_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_gray_decode0 = 100;
          const int * gray_decode = (const int *) malloc(_len_gray_decode0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_gray_decode0; _i0++) {
            gray_decode[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_decode_10_pulses_35bits(fixed_index,fixed_sparse,gray_decode,half_pulse_count,bits);
          free(fixed_index);
          for(int _aux = 0; _aux < _len_fixed_sparse0; _aux++) {
          free(fixed_sparse[_aux].x);
          }
          for(int _aux = 0; _aux < _len_fixed_sparse0; _aux++) {
          free(fixed_sparse[_aux].y);
          }
          free(fixed_sparse);
          free(gray_decode);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
