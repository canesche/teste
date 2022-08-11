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
typedef  scalar_t__ int32_t ;
struct TYPE_3__ {scalar_t__* eff_masking_curve_cb; scalar_t__* band_masking_cb; } ;
typedef  TYPE_1__ DCAEncContext ;

/* Variables and functions */

__attribute__((used)) static void update_band_masking(DCAEncContext *c, int band1, int band2,
                                int f, int32_t spectrum1, int32_t spectrum2,
                                int channel, int32_t * arg)
{
    int32_t value = c->eff_masking_curve_cb[f] - spectrum1;

    if (value < c->band_masking_cb[band1])
        c->band_masking_cb[band1] = value;
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
          int band1 = 100;
          int band2 = 100;
          int f = 100;
          long spectrum1 = 100;
          long spectrum2 = 100;
          int channel = 100;
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__eff_masking_curve_cb0 = 1;
          c[_i0].eff_masking_curve_cb = (long *) malloc(_len_c__i0__eff_masking_curve_cb0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_c__i0__eff_masking_curve_cb0; _j0++) {
            c[_i0].eff_masking_curve_cb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__band_masking_cb0 = 1;
          c[_i0].band_masking_cb = (long *) malloc(_len_c__i0__band_masking_cb0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_c__i0__band_masking_cb0; _j0++) {
            c[_i0].band_masking_cb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_arg0 = 1;
          long * arg = (long *) malloc(_len_arg0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_band_masking(c,band1,band2,f,spectrum1,spectrum2,channel,arg);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].eff_masking_curve_cb);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].band_masking_cb);
          }
          free(c);
          free(arg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int band1 = 255;
          int band2 = 255;
          int f = 255;
          long spectrum1 = 255;
          long spectrum2 = 255;
          int channel = 255;
          int _len_c0 = 65025;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__eff_masking_curve_cb0 = 1;
          c[_i0].eff_masking_curve_cb = (long *) malloc(_len_c__i0__eff_masking_curve_cb0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_c__i0__eff_masking_curve_cb0; _j0++) {
            c[_i0].eff_masking_curve_cb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__band_masking_cb0 = 1;
          c[_i0].band_masking_cb = (long *) malloc(_len_c__i0__band_masking_cb0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_c__i0__band_masking_cb0; _j0++) {
            c[_i0].band_masking_cb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_arg0 = 65025;
          long * arg = (long *) malloc(_len_arg0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_band_masking(c,band1,band2,f,spectrum1,spectrum2,channel,arg);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].eff_masking_curve_cb);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].band_masking_cb);
          }
          free(c);
          free(arg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int band1 = 10;
          int band2 = 10;
          int f = 10;
          long spectrum1 = 10;
          long spectrum2 = 10;
          int channel = 10;
          int _len_c0 = 100;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__eff_masking_curve_cb0 = 1;
          c[_i0].eff_masking_curve_cb = (long *) malloc(_len_c__i0__eff_masking_curve_cb0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_c__i0__eff_masking_curve_cb0; _j0++) {
            c[_i0].eff_masking_curve_cb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__band_masking_cb0 = 1;
          c[_i0].band_masking_cb = (long *) malloc(_len_c__i0__band_masking_cb0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_c__i0__band_masking_cb0; _j0++) {
            c[_i0].band_masking_cb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_arg0 = 100;
          long * arg = (long *) malloc(_len_arg0*sizeof(long));
          for(int _i0 = 0; _i0 < _len_arg0; _i0++) {
            arg[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          update_band_masking(c,band1,band2,f,spectrum1,spectrum2,channel,arg);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].eff_masking_curve_cb);
          }
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].band_masking_cb);
          }
          free(c);
          free(arg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
