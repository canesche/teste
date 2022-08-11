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
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/ ** coeff; TYPE_1__* filter_params; } ;
struct TYPE_5__ {int order; int /*<<< orphan*/  coeff_bits; int /*<<< orphan*/  coeff_shift; int /*<<< orphan*/  shift; } ;
typedef  TYPE_1__ FilterParams ;
typedef  TYPE_2__ ChannelParams ;

/* Variables and functions */

__attribute__((used)) static void copy_filter_params(ChannelParams *dst_cp, ChannelParams *src_cp, int filter)
{
    FilterParams *dst = &dst_cp->filter_params[filter];
    FilterParams *src = &src_cp->filter_params[filter];
    unsigned int order;

    dst->order = src->order;

    if (dst->order) {
        dst->shift = src->shift;

        dst->coeff_shift = src->coeff_shift;
        dst->coeff_bits = src->coeff_bits;
    }

    for (order = 0; order < dst->order; order++)
        dst_cp->coeff[filter][order] = src_cp->coeff[filter][order];
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
          int filter = 100;
          int _len_dst_cp0 = 1;
          struct TYPE_6__ * dst_cp = (struct TYPE_6__ *) malloc(_len_dst_cp0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_dst_cp0; _i0++) {
              int _len_dst_cp__i0__coeff0 = 1;
          dst_cp[_i0].coeff = (int **) malloc(_len_dst_cp__i0__coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dst_cp__i0__coeff0; _j0++) {
            int _len_dst_cp__i0__coeff1 = 1;
            dst_cp[_i0].coeff[_j0] = (int *) malloc(_len_dst_cp__i0__coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dst_cp__i0__coeff1; _j1++) {
              dst_cp[_i0].coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dst_cp__i0__filter_params0 = 1;
          dst_cp[_i0].filter_params = (struct TYPE_5__ *) malloc(_len_dst_cp__i0__filter_params0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dst_cp__i0__filter_params0; _j0++) {
            dst_cp[_i0].filter_params->order = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_cp[_i0].filter_params->coeff_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_cp[_i0].filter_params->coeff_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_cp[_i0].filter_params->shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src_cp0 = 1;
          struct TYPE_6__ * src_cp = (struct TYPE_6__ *) malloc(_len_src_cp0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_src_cp0; _i0++) {
              int _len_src_cp__i0__coeff0 = 1;
          src_cp[_i0].coeff = (int **) malloc(_len_src_cp__i0__coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_src_cp__i0__coeff0; _j0++) {
            int _len_src_cp__i0__coeff1 = 1;
            src_cp[_i0].coeff[_j0] = (int *) malloc(_len_src_cp__i0__coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_src_cp__i0__coeff1; _j1++) {
              src_cp[_i0].coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src_cp__i0__filter_params0 = 1;
          src_cp[_i0].filter_params = (struct TYPE_5__ *) malloc(_len_src_cp__i0__filter_params0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_src_cp__i0__filter_params0; _j0++) {
            src_cp[_i0].filter_params->order = ((-2 * (next_i()%2)) + 1) * next_i();
        src_cp[_i0].filter_params->coeff_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        src_cp[_i0].filter_params->coeff_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        src_cp[_i0].filter_params->shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          copy_filter_params(dst_cp,src_cp,filter);
          for(int _aux = 0; _aux < _len_dst_cp0; _aux++) {
          free(*(dst_cp[_aux].coeff));
        free(dst_cp[_aux].coeff);
          }
          for(int _aux = 0; _aux < _len_dst_cp0; _aux++) {
          free(dst_cp[_aux].filter_params);
          }
          free(dst_cp);
          for(int _aux = 0; _aux < _len_src_cp0; _aux++) {
          free(*(src_cp[_aux].coeff));
        free(src_cp[_aux].coeff);
          }
          for(int _aux = 0; _aux < _len_src_cp0; _aux++) {
          free(src_cp[_aux].filter_params);
          }
          free(src_cp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int filter = 255;
          int _len_dst_cp0 = 65025;
          struct TYPE_6__ * dst_cp = (struct TYPE_6__ *) malloc(_len_dst_cp0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_dst_cp0; _i0++) {
              int _len_dst_cp__i0__coeff0 = 1;
          dst_cp[_i0].coeff = (int **) malloc(_len_dst_cp__i0__coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dst_cp__i0__coeff0; _j0++) {
            int _len_dst_cp__i0__coeff1 = 1;
            dst_cp[_i0].coeff[_j0] = (int *) malloc(_len_dst_cp__i0__coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dst_cp__i0__coeff1; _j1++) {
              dst_cp[_i0].coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dst_cp__i0__filter_params0 = 1;
          dst_cp[_i0].filter_params = (struct TYPE_5__ *) malloc(_len_dst_cp__i0__filter_params0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dst_cp__i0__filter_params0; _j0++) {
            dst_cp[_i0].filter_params->order = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_cp[_i0].filter_params->coeff_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_cp[_i0].filter_params->coeff_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_cp[_i0].filter_params->shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src_cp0 = 65025;
          struct TYPE_6__ * src_cp = (struct TYPE_6__ *) malloc(_len_src_cp0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_src_cp0; _i0++) {
              int _len_src_cp__i0__coeff0 = 1;
          src_cp[_i0].coeff = (int **) malloc(_len_src_cp__i0__coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_src_cp__i0__coeff0; _j0++) {
            int _len_src_cp__i0__coeff1 = 1;
            src_cp[_i0].coeff[_j0] = (int *) malloc(_len_src_cp__i0__coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_src_cp__i0__coeff1; _j1++) {
              src_cp[_i0].coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src_cp__i0__filter_params0 = 1;
          src_cp[_i0].filter_params = (struct TYPE_5__ *) malloc(_len_src_cp__i0__filter_params0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_src_cp__i0__filter_params0; _j0++) {
            src_cp[_i0].filter_params->order = ((-2 * (next_i()%2)) + 1) * next_i();
        src_cp[_i0].filter_params->coeff_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        src_cp[_i0].filter_params->coeff_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        src_cp[_i0].filter_params->shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          copy_filter_params(dst_cp,src_cp,filter);
          for(int _aux = 0; _aux < _len_dst_cp0; _aux++) {
          free(*(dst_cp[_aux].coeff));
        free(dst_cp[_aux].coeff);
          }
          for(int _aux = 0; _aux < _len_dst_cp0; _aux++) {
          free(dst_cp[_aux].filter_params);
          }
          free(dst_cp);
          for(int _aux = 0; _aux < _len_src_cp0; _aux++) {
          free(*(src_cp[_aux].coeff));
        free(src_cp[_aux].coeff);
          }
          for(int _aux = 0; _aux < _len_src_cp0; _aux++) {
          free(src_cp[_aux].filter_params);
          }
          free(src_cp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int filter = 10;
          int _len_dst_cp0 = 100;
          struct TYPE_6__ * dst_cp = (struct TYPE_6__ *) malloc(_len_dst_cp0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_dst_cp0; _i0++) {
              int _len_dst_cp__i0__coeff0 = 1;
          dst_cp[_i0].coeff = (int **) malloc(_len_dst_cp__i0__coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_dst_cp__i0__coeff0; _j0++) {
            int _len_dst_cp__i0__coeff1 = 1;
            dst_cp[_i0].coeff[_j0] = (int *) malloc(_len_dst_cp__i0__coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_dst_cp__i0__coeff1; _j1++) {
              dst_cp[_i0].coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dst_cp__i0__filter_params0 = 1;
          dst_cp[_i0].filter_params = (struct TYPE_5__ *) malloc(_len_dst_cp__i0__filter_params0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dst_cp__i0__filter_params0; _j0++) {
            dst_cp[_i0].filter_params->order = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_cp[_i0].filter_params->coeff_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_cp[_i0].filter_params->coeff_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        dst_cp[_i0].filter_params->shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_src_cp0 = 100;
          struct TYPE_6__ * src_cp = (struct TYPE_6__ *) malloc(_len_src_cp0*sizeof(struct TYPE_6__));
          for(int _i0 = 0; _i0 < _len_src_cp0; _i0++) {
              int _len_src_cp__i0__coeff0 = 1;
          src_cp[_i0].coeff = (int **) malloc(_len_src_cp__i0__coeff0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_src_cp__i0__coeff0; _j0++) {
            int _len_src_cp__i0__coeff1 = 1;
            src_cp[_i0].coeff[_j0] = (int *) malloc(_len_src_cp__i0__coeff1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_src_cp__i0__coeff1; _j1++) {
              src_cp[_i0].coeff[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src_cp__i0__filter_params0 = 1;
          src_cp[_i0].filter_params = (struct TYPE_5__ *) malloc(_len_src_cp__i0__filter_params0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_src_cp__i0__filter_params0; _j0++) {
            src_cp[_i0].filter_params->order = ((-2 * (next_i()%2)) + 1) * next_i();
        src_cp[_i0].filter_params->coeff_bits = ((-2 * (next_i()%2)) + 1) * next_i();
        src_cp[_i0].filter_params->coeff_shift = ((-2 * (next_i()%2)) + 1) * next_i();
        src_cp[_i0].filter_params->shift = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          copy_filter_params(dst_cp,src_cp,filter);
          for(int _aux = 0; _aux < _len_dst_cp0; _aux++) {
          free(*(dst_cp[_aux].coeff));
        free(dst_cp[_aux].coeff);
          }
          for(int _aux = 0; _aux < _len_dst_cp0; _aux++) {
          free(dst_cp[_aux].filter_params);
          }
          free(dst_cp);
          for(int _aux = 0; _aux < _len_src_cp0; _aux++) {
          free(*(src_cp[_aux].coeff));
        free(src_cp[_aux].coeff);
          }
          for(int _aux = 0; _aux < _len_src_cp0; _aux++) {
          free(src_cp[_aux].filter_params);
          }
          free(src_cp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
