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
struct TYPE_3__ {int pf_period_old; int pf_period; double* pf_gains; double* pf_gains_old; } ;
typedef  TYPE_1__ CeltBlock ;

/* Variables and functions */
 int CELT_OVERLAP ; 
 float* ff_celt_window2 ; 

__attribute__((used)) static void celt_postfilter_apply_transition(CeltBlock *block, float *data)
{
    const int T0 = block->pf_period_old;
    const int T1 = block->pf_period;

    float g00, g01, g02;
    float g10, g11, g12;

    float x0, x1, x2, x3, x4;

    int i;

    if (block->pf_gains[0]     == 0.0 &&
        block->pf_gains_old[0] == 0.0)
        return;

    g00 = block->pf_gains_old[0];
    g01 = block->pf_gains_old[1];
    g02 = block->pf_gains_old[2];
    g10 = block->pf_gains[0];
    g11 = block->pf_gains[1];
    g12 = block->pf_gains[2];

    x1 = data[-T1 + 1];
    x2 = data[-T1];
    x3 = data[-T1 - 1];
    x4 = data[-T1 - 2];

    for (i = 0; i < CELT_OVERLAP; i++) {
        float w = ff_celt_window2[i];
        x0 = data[i - T1 + 2];

        data[i] +=  (1.0 - w) * g00 * data[i - T0]                          +
                    (1.0 - w) * g01 * (data[i - T0 - 1] + data[i - T0 + 1]) +
                    (1.0 - w) * g02 * (data[i - T0 - 2] + data[i - T0 + 2]) +
                    w         * g10 * x2                                    +
                    w         * g11 * (x1 + x3)                             +
                    w         * g12 * (x0 + x4);
        x4 = x3;
        x3 = x2;
        x2 = x1;
        x1 = x0;
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
          int _len_block0 = 1;
          struct TYPE_3__ * block = (struct TYPE_3__ *) malloc(_len_block0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0].pf_period_old = ((-2 * (next_i()%2)) + 1) * next_i();
        block[_i0].pf_period = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_block__i0__pf_gains0 = 1;
          block[_i0].pf_gains = (double *) malloc(_len_block__i0__pf_gains0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_block__i0__pf_gains0; _j0++) {
            block[_i0].pf_gains[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_block__i0__pf_gains_old0 = 1;
          block[_i0].pf_gains_old = (double *) malloc(_len_block__i0__pf_gains_old0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_block__i0__pf_gains_old0; _j0++) {
            block[_i0].pf_gains_old[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          int _len_data0 = 1;
          float * data = (float *) malloc(_len_data0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          celt_postfilter_apply_transition(block,data);
          for(int _aux = 0; _aux < _len_block0; _aux++) {
          free(block[_aux].pf_gains);
          }
          for(int _aux = 0; _aux < _len_block0; _aux++) {
          free(block[_aux].pf_gains_old);
          }
          free(block);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_block0 = 65025;
          struct TYPE_3__ * block = (struct TYPE_3__ *) malloc(_len_block0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0].pf_period_old = ((-2 * (next_i()%2)) + 1) * next_i();
        block[_i0].pf_period = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_block__i0__pf_gains0 = 1;
          block[_i0].pf_gains = (double *) malloc(_len_block__i0__pf_gains0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_block__i0__pf_gains0; _j0++) {
            block[_i0].pf_gains[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_block__i0__pf_gains_old0 = 1;
          block[_i0].pf_gains_old = (double *) malloc(_len_block__i0__pf_gains_old0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_block__i0__pf_gains_old0; _j0++) {
            block[_i0].pf_gains_old[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          int _len_data0 = 65025;
          float * data = (float *) malloc(_len_data0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          celt_postfilter_apply_transition(block,data);
          for(int _aux = 0; _aux < _len_block0; _aux++) {
          free(block[_aux].pf_gains);
          }
          for(int _aux = 0; _aux < _len_block0; _aux++) {
          free(block[_aux].pf_gains_old);
          }
          free(block);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_block0 = 100;
          struct TYPE_3__ * block = (struct TYPE_3__ *) malloc(_len_block0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0].pf_period_old = ((-2 * (next_i()%2)) + 1) * next_i();
        block[_i0].pf_period = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_block__i0__pf_gains0 = 1;
          block[_i0].pf_gains = (double *) malloc(_len_block__i0__pf_gains0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_block__i0__pf_gains0; _j0++) {
            block[_i0].pf_gains[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          int _len_block__i0__pf_gains_old0 = 1;
          block[_i0].pf_gains_old = (double *) malloc(_len_block__i0__pf_gains_old0*sizeof(double));
          for(int _j0 = 0; _j0 < _len_block__i0__pf_gains_old0; _j0++) {
            block[_i0].pf_gains_old[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          int _len_data0 = 100;
          float * data = (float *) malloc(_len_data0*sizeof(float));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          celt_postfilter_apply_transition(block,data);
          for(int _aux = 0; _aux < _len_block0; _aux++) {
          free(block[_aux].pf_gains);
          }
          for(int _aux = 0; _aux < _len_block0; _aux++) {
          free(block[_aux].pf_gains_old);
          }
          free(block);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
