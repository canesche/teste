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
typedef  int int16_t ;
struct TYPE_3__ {int* x; int* y; int n; } ;
typedef  int SiprMode ;
typedef  TYPE_1__ AMRFixed ;

/* Variables and functions */
#define  MODE_5k0 130 
#define  MODE_6k5 129 
#define  MODE_8k5 128 

__attribute__((used)) static void decode_fixed_sparse(AMRFixed *fixed_sparse, const int16_t *pulses,
                                SiprMode mode, int low_gain)
{
    int i;

    switch (mode) {
    case MODE_6k5:
        for (i = 0; i < 3; i++) {
            fixed_sparse->x[i] = 3 * (pulses[i] & 0xf) + i;
            fixed_sparse->y[i] = pulses[i] & 0x10 ? -1 : 1;
        }
        fixed_sparse->n = 3;
        break;
    case MODE_8k5:
        for (i = 0; i < 3; i++) {
            fixed_sparse->x[2*i    ] = 3 * ((pulses[i] >> 4) & 0xf) + i;
            fixed_sparse->x[2*i + 1] = 3 * ( pulses[i]       & 0xf) + i;

            fixed_sparse->y[2*i    ] = (pulses[i] & 0x100) ? -1.0: 1.0;

            fixed_sparse->y[2*i + 1] =
                (fixed_sparse->x[2*i + 1] < fixed_sparse->x[2*i]) ?
                -fixed_sparse->y[2*i    ] : fixed_sparse->y[2*i];
        }

        fixed_sparse->n = 6;
        break;
    case MODE_5k0:
    default:
        if (low_gain) {
            int offset = (pulses[0] & 0x200) ? 2 : 0;
            int val = pulses[0];

            for (i = 0; i < 3; i++) {
                int index = (val & 0x7) * 6 + 4 - i*2;

                fixed_sparse->y[i] = (offset + index) & 0x3 ? -1 : 1;
                fixed_sparse->x[i] = index;

                val >>= 3;
            }
            fixed_sparse->n = 3;
        } else {
            int pulse_subset = (pulses[0] >> 8) & 1;

            fixed_sparse->x[0] = ((pulses[0] >> 4) & 15) * 3 + pulse_subset;
            fixed_sparse->x[1] = ( pulses[0]       & 15) * 3 + pulse_subset + 1;

            fixed_sparse->y[0] = pulses[0] & 0x200 ? -1 : 1;
            fixed_sparse->y[1] = -fixed_sparse->y[0];
            fixed_sparse->n = 2;
        }
        break;
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
          int mode = 100;
          int low_gain = 100;
          int _len_fixed_sparse0 = 1;
          struct TYPE_3__ * fixed_sparse = (struct TYPE_3__ *) malloc(_len_fixed_sparse0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fixed_sparse0; _i0++) {
              int _len_fixed_sparse__i0__x0 = 1;
          fixed_sparse[_i0].x = (int *) malloc(_len_fixed_sparse__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fixed_sparse__i0__x0; _j0++) {
            fixed_sparse[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fixed_sparse__i0__y0 = 1;
          fixed_sparse[_i0].y = (int *) malloc(_len_fixed_sparse__i0__y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fixed_sparse__i0__y0; _j0++) {
            fixed_sparse[_i0].y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fixed_sparse[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pulses0 = 1;
          const int * pulses = (const int *) malloc(_len_pulses0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pulses0; _i0++) {
            pulses[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          decode_fixed_sparse(fixed_sparse,pulses,mode,low_gain);
          for(int _aux = 0; _aux < _len_fixed_sparse0; _aux++) {
          free(fixed_sparse[_aux].x);
          }
          for(int _aux = 0; _aux < _len_fixed_sparse0; _aux++) {
          free(fixed_sparse[_aux].y);
          }
          free(fixed_sparse);
          free(pulses);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mode = 255;
          int low_gain = 255;
          int _len_fixed_sparse0 = 65025;
          struct TYPE_3__ * fixed_sparse = (struct TYPE_3__ *) malloc(_len_fixed_sparse0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fixed_sparse0; _i0++) {
              int _len_fixed_sparse__i0__x0 = 1;
          fixed_sparse[_i0].x = (int *) malloc(_len_fixed_sparse__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fixed_sparse__i0__x0; _j0++) {
            fixed_sparse[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fixed_sparse__i0__y0 = 1;
          fixed_sparse[_i0].y = (int *) malloc(_len_fixed_sparse__i0__y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fixed_sparse__i0__y0; _j0++) {
            fixed_sparse[_i0].y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fixed_sparse[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pulses0 = 65025;
          const int * pulses = (const int *) malloc(_len_pulses0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pulses0; _i0++) {
            pulses[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          decode_fixed_sparse(fixed_sparse,pulses,mode,low_gain);
          for(int _aux = 0; _aux < _len_fixed_sparse0; _aux++) {
          free(fixed_sparse[_aux].x);
          }
          for(int _aux = 0; _aux < _len_fixed_sparse0; _aux++) {
          free(fixed_sparse[_aux].y);
          }
          free(fixed_sparse);
          free(pulses);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mode = 10;
          int low_gain = 10;
          int _len_fixed_sparse0 = 100;
          struct TYPE_3__ * fixed_sparse = (struct TYPE_3__ *) malloc(_len_fixed_sparse0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_fixed_sparse0; _i0++) {
              int _len_fixed_sparse__i0__x0 = 1;
          fixed_sparse[_i0].x = (int *) malloc(_len_fixed_sparse__i0__x0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fixed_sparse__i0__x0; _j0++) {
            fixed_sparse[_i0].x[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_fixed_sparse__i0__y0 = 1;
          fixed_sparse[_i0].y = (int *) malloc(_len_fixed_sparse__i0__y0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_fixed_sparse__i0__y0; _j0++) {
            fixed_sparse[_i0].y[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        fixed_sparse[_i0].n = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pulses0 = 100;
          const int * pulses = (const int *) malloc(_len_pulses0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_pulses0; _i0++) {
            pulses[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          decode_fixed_sparse(fixed_sparse,pulses,mode,low_gain);
          for(int _aux = 0; _aux < _len_fixed_sparse0; _aux++) {
          free(fixed_sparse[_aux].x);
          }
          for(int _aux = 0; _aux < _len_fixed_sparse0; _aux++) {
          free(fixed_sparse[_aux].y);
          }
          free(fixed_sparse);
          free(pulses);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
