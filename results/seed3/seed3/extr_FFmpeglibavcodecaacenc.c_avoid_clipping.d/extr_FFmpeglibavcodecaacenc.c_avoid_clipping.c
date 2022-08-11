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
struct TYPE_4__ {float clip_avoidance_factor; int num_windows; int max_sfb; int* swb_sizes; } ;
struct TYPE_5__ {float* coeffs; TYPE_1__ ics; } ;
typedef  TYPE_2__ SingleChannelElement ;
typedef  int /*<<< orphan*/  AACEncContext ;

/* Variables and functions */

__attribute__((used)) static void avoid_clipping(AACEncContext *s, SingleChannelElement *sce)
{
    int start, i, j, w;

    if (sce->ics.clip_avoidance_factor < 1.0f) {
        for (w = 0; w < sce->ics.num_windows; w++) {
            start = 0;
            for (i = 0; i < sce->ics.max_sfb; i++) {
                float *swb_coeffs = &sce->coeffs[start + w*128];
                for (j = 0; j < sce->ics.swb_sizes[i]; j++)
                    swb_coeffs[j] *= sce->ics.clip_avoidance_factor;
                start += sce->ics.swb_sizes[i];
            }
        }
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
          int _len_s0 = 1;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sce0 = 1;
          struct TYPE_5__ * sce = (struct TYPE_5__ *) malloc(_len_sce0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sce0; _i0++) {
              int _len_sce__i0__coeffs0 = 1;
          sce[_i0].coeffs = (float *) malloc(_len_sce__i0__coeffs0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_sce__i0__coeffs0; _j0++) {
            sce[_i0].coeffs[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        sce[_i0].ics.clip_avoidance_factor = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        sce[_i0].ics.num_windows = ((-2 * (next_i()%2)) + 1) * next_i();
        sce[_i0].ics.max_sfb = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sce__i0__ics_swb_sizes0 = 1;
          sce[_i0].ics.swb_sizes = (int *) malloc(_len_sce__i0__ics_swb_sizes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sce__i0__ics_swb_sizes0; _j0++) {
            sce[_i0].ics.swb_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          avoid_clipping(s,sce);
          free(s);
          for(int _aux = 0; _aux < _len_sce0; _aux++) {
          free(sce[_aux].coeffs);
          }
          free(sce);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sce0 = 65025;
          struct TYPE_5__ * sce = (struct TYPE_5__ *) malloc(_len_sce0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sce0; _i0++) {
              int _len_sce__i0__coeffs0 = 1;
          sce[_i0].coeffs = (float *) malloc(_len_sce__i0__coeffs0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_sce__i0__coeffs0; _j0++) {
            sce[_i0].coeffs[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        sce[_i0].ics.clip_avoidance_factor = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        sce[_i0].ics.num_windows = ((-2 * (next_i()%2)) + 1) * next_i();
        sce[_i0].ics.max_sfb = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sce__i0__ics_swb_sizes0 = 1;
          sce[_i0].ics.swb_sizes = (int *) malloc(_len_sce__i0__ics_swb_sizes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sce__i0__ics_swb_sizes0; _j0++) {
            sce[_i0].ics.swb_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          avoid_clipping(s,sce);
          free(s);
          for(int _aux = 0; _aux < _len_sce0; _aux++) {
          free(sce[_aux].coeffs);
          }
          free(sce);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          int * s = (int *) malloc(_len_s0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sce0 = 100;
          struct TYPE_5__ * sce = (struct TYPE_5__ *) malloc(_len_sce0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_sce0; _i0++) {
              int _len_sce__i0__coeffs0 = 1;
          sce[_i0].coeffs = (float *) malloc(_len_sce__i0__coeffs0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_sce__i0__coeffs0; _j0++) {
            sce[_i0].coeffs[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
        sce[_i0].ics.clip_avoidance_factor = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
        sce[_i0].ics.num_windows = ((-2 * (next_i()%2)) + 1) * next_i();
        sce[_i0].ics.max_sfb = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sce__i0__ics_swb_sizes0 = 1;
          sce[_i0].ics.swb_sizes = (int *) malloc(_len_sce__i0__ics_swb_sizes0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_sce__i0__ics_swb_sizes0; _j0++) {
            sce[_i0].ics.swb_sizes[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          avoid_clipping(s,sce);
          free(s);
          for(int _aux = 0; _aux < _len_sce0; _aux++) {
          free(sce[_aux].coeffs);
          }
          free(sce);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
