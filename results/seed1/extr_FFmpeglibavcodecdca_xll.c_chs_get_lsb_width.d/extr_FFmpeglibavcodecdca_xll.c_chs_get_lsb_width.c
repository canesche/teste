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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_8__ {TYPE_1__* bands; } ;
struct TYPE_7__ {int fixed_lsb_width; } ;
struct TYPE_6__ {int* bit_width_adjust; int* nscalablelsbs; } ;
typedef  TYPE_2__ DCAXllDecoder ;
typedef  TYPE_3__ DCAXllChSet ;

/* Variables and functions */

__attribute__((used)) static int chs_get_lsb_width(DCAXllDecoder *s, DCAXllChSet *c, int band, int ch)
{
    int adj = c->bands[band].bit_width_adjust[ch];
    int shift = c->bands[band].nscalablelsbs[ch];

    if (s->fixed_lsb_width)
        shift = s->fixed_lsb_width;
    else if (shift && adj)
        shift += adj - 1;
    else
        shift += adj;

    return shift;
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
          int band = 100;
          int ch = 100;
          int _len_s0 = 1;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].fixed_lsb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 1;
          struct TYPE_8__ * c = (struct TYPE_8__ *) malloc(_len_c0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__bands0 = 1;
          c[_i0].bands = (struct TYPE_6__ *) malloc(_len_c__i0__bands0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_c__i0__bands0; _j0++) {
              int _len_c__i0__bands_bit_width_adjust0 = 1;
          c[_i0].bands->bit_width_adjust = (int *) malloc(_len_c__i0__bands_bit_width_adjust0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__bands_bit_width_adjust0; _j0++) {
            c[_i0].bands->bit_width_adjust[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__bands_nscalablelsbs0 = 1;
          c[_i0].bands->nscalablelsbs = (int *) malloc(_len_c__i0__bands_nscalablelsbs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__bands_nscalablelsbs0; _j0++) {
            c[_i0].bands->nscalablelsbs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = chs_get_lsb_width(s,c,band,ch);
          printf("%d\n", benchRet); 
          free(s);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].bands);
          }
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int band = 255;
          int ch = 255;
          int _len_s0 = 65025;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].fixed_lsb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 65025;
          struct TYPE_8__ * c = (struct TYPE_8__ *) malloc(_len_c0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__bands0 = 1;
          c[_i0].bands = (struct TYPE_6__ *) malloc(_len_c__i0__bands0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_c__i0__bands0; _j0++) {
              int _len_c__i0__bands_bit_width_adjust0 = 1;
          c[_i0].bands->bit_width_adjust = (int *) malloc(_len_c__i0__bands_bit_width_adjust0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__bands_bit_width_adjust0; _j0++) {
            c[_i0].bands->bit_width_adjust[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__bands_nscalablelsbs0 = 1;
          c[_i0].bands->nscalablelsbs = (int *) malloc(_len_c__i0__bands_nscalablelsbs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__bands_nscalablelsbs0; _j0++) {
            c[_i0].bands->nscalablelsbs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = chs_get_lsb_width(s,c,band,ch);
          printf("%d\n", benchRet); 
          free(s);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].bands);
          }
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int band = 10;
          int ch = 10;
          int _len_s0 = 100;
          struct TYPE_7__ * s = (struct TYPE_7__ *) malloc(_len_s0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].fixed_lsb_width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c0 = 100;
          struct TYPE_8__ * c = (struct TYPE_8__ *) malloc(_len_c0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
              int _len_c__i0__bands0 = 1;
          c[_i0].bands = (struct TYPE_6__ *) malloc(_len_c__i0__bands0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_c__i0__bands0; _j0++) {
              int _len_c__i0__bands_bit_width_adjust0 = 1;
          c[_i0].bands->bit_width_adjust = (int *) malloc(_len_c__i0__bands_bit_width_adjust0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__bands_bit_width_adjust0; _j0++) {
            c[_i0].bands->bit_width_adjust[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_c__i0__bands_nscalablelsbs0 = 1;
          c[_i0].bands->nscalablelsbs = (int *) malloc(_len_c__i0__bands_nscalablelsbs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_c__i0__bands_nscalablelsbs0; _j0++) {
            c[_i0].bands->nscalablelsbs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = chs_get_lsb_width(s,c,band,ch);
          printf("%d\n", benchRet); 
          free(s);
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].bands);
          }
          free(c);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
