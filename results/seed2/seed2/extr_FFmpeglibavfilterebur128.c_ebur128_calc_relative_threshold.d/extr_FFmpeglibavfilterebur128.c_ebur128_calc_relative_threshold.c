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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {TYPE_1__* d; } ;
struct TYPE_4__ {unsigned long* block_energy_histogram; } ;
typedef  TYPE_2__ FFEBUR128State ;

/* Variables and functions */
 double RELATIVE_GATE_FACTOR ; 
 unsigned long* histogram_energies ; 

__attribute__((used)) static int ebur128_calc_relative_threshold(FFEBUR128State **sts, size_t size,
                                           double *relative_threshold)
{
    size_t i, j;
    int above_thresh_counter = 0;
    *relative_threshold = 0.0;

    for (i = 0; i < size; i++) {
        unsigned long *block_energy_histogram = sts[i]->d->block_energy_histogram;
        for (j = 0; j < 1000; ++j) {
            *relative_threshold += block_energy_histogram[j] * histogram_energies[j];
            above_thresh_counter += block_energy_histogram[j];
        }
    }

    if (above_thresh_counter != 0) {
        *relative_threshold /= (double)above_thresh_counter;
        *relative_threshold *= RELATIVE_GATE_FACTOR;
    }

    return above_thresh_counter;
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
          unsigned long size = 100;
          int _len_sts0 = 1;
          struct TYPE_5__ ** sts = (struct TYPE_5__ **) malloc(_len_sts0*sizeof(struct TYPE_5__ *));
          for(int _i0 = 0; _i0 < _len_sts0; _i0++) {
            int _len_sts1 = 1;
            sts[_i0] = (struct TYPE_5__ *) malloc(_len_sts1*sizeof(struct TYPE_5__));
            for(int _i1 = 0; _i1 < _len_sts1; _i1++) {
                int _len_sts__i0___i1__d0 = 1;
          sts[_i0][_i1].d = (struct TYPE_4__ *) malloc(_len_sts__i0___i1__d0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sts__i0___i1__d0; _j0++) {
              int _len_sts__i0___i1__d_block_energy_histogram0 = 1;
          sts[_i0][_i1].d->block_energy_histogram = (unsigned long *) malloc(_len_sts__i0___i1__d_block_energy_histogram0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_sts__i0___i1__d_block_energy_histogram0; _j0++) {
            sts[_i0][_i1].d->block_energy_histogram[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          int _len_relative_threshold0 = 1;
          double * relative_threshold = (double *) malloc(_len_relative_threshold0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_relative_threshold0; _i0++) {
            relative_threshold[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = ebur128_calc_relative_threshold(sts,size,relative_threshold);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sts0; i1++) {
            int _len_sts1 = 1;
              for(int _aux = 0; _aux < _len_sts1; _aux++) {
          free(sts[_aux].d);
          }
          free(sts[i1]);
          }
          free(sts);
          free(relative_threshold);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long size = 255;
          int _len_sts0 = 65025;
          struct TYPE_5__ ** sts = (struct TYPE_5__ **) malloc(_len_sts0*sizeof(struct TYPE_5__ *));
          for(int _i0 = 0; _i0 < _len_sts0; _i0++) {
            int _len_sts1 = 1;
            sts[_i0] = (struct TYPE_5__ *) malloc(_len_sts1*sizeof(struct TYPE_5__));
            for(int _i1 = 0; _i1 < _len_sts1; _i1++) {
                int _len_sts__i0___i1__d0 = 1;
          sts[_i0][_i1].d = (struct TYPE_4__ *) malloc(_len_sts__i0___i1__d0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sts__i0___i1__d0; _j0++) {
              int _len_sts__i0___i1__d_block_energy_histogram0 = 1;
          sts[_i0][_i1].d->block_energy_histogram = (unsigned long *) malloc(_len_sts__i0___i1__d_block_energy_histogram0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_sts__i0___i1__d_block_energy_histogram0; _j0++) {
            sts[_i0][_i1].d->block_energy_histogram[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          int _len_relative_threshold0 = 65025;
          double * relative_threshold = (double *) malloc(_len_relative_threshold0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_relative_threshold0; _i0++) {
            relative_threshold[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = ebur128_calc_relative_threshold(sts,size,relative_threshold);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sts0; i1++) {
            int _len_sts1 = 1;
              for(int _aux = 0; _aux < _len_sts1; _aux++) {
          free(sts[_aux].d);
          }
          free(sts[i1]);
          }
          free(sts);
          free(relative_threshold);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long size = 10;
          int _len_sts0 = 100;
          struct TYPE_5__ ** sts = (struct TYPE_5__ **) malloc(_len_sts0*sizeof(struct TYPE_5__ *));
          for(int _i0 = 0; _i0 < _len_sts0; _i0++) {
            int _len_sts1 = 1;
            sts[_i0] = (struct TYPE_5__ *) malloc(_len_sts1*sizeof(struct TYPE_5__));
            for(int _i1 = 0; _i1 < _len_sts1; _i1++) {
                int _len_sts__i0___i1__d0 = 1;
          sts[_i0][_i1].d = (struct TYPE_4__ *) malloc(_len_sts__i0___i1__d0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_sts__i0___i1__d0; _j0++) {
              int _len_sts__i0___i1__d_block_energy_histogram0 = 1;
          sts[_i0][_i1].d->block_energy_histogram = (unsigned long *) malloc(_len_sts__i0___i1__d_block_energy_histogram0*sizeof(unsigned long));
          for(int _j0 = 0; _j0 < _len_sts__i0___i1__d_block_energy_histogram0; _j0++) {
            sts[_i0][_i1].d->block_energy_histogram[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
            }
          }
          int _len_relative_threshold0 = 100;
          double * relative_threshold = (double *) malloc(_len_relative_threshold0*sizeof(double));
          for(int _i0 = 0; _i0 < _len_relative_threshold0; _i0++) {
            relative_threshold[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int benchRet = ebur128_calc_relative_threshold(sts,size,relative_threshold);
          printf("%d\n", benchRet); 
          for(int i1 = 0; i1 < _len_sts0; i1++) {
            int _len_sts1 = 1;
              for(int _aux = 0; _aux < _len_sts1; _aux++) {
          free(sts[_aux].d);
          }
          free(sts[i1]);
          }
          free(sts);
          free(relative_threshold);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
