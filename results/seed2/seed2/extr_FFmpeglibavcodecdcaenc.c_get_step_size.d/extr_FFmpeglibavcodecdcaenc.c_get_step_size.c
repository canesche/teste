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
typedef  int /*<<< orphan*/  int32_t ;
struct TYPE_3__ {int bitrate_index; size_t** abits; } ;
typedef  TYPE_1__ DCAEncContext ;

/* Variables and functions */
 int /*<<< orphan*/ * ff_dca_lossless_quant ; 
 int /*<<< orphan*/ * ff_dca_lossy_quant ; 

__attribute__((used)) static inline int32_t get_step_size(DCAEncContext *c, int ch, int band)
{
    int32_t step_size;

    if (c->bitrate_index == 3)
        step_size = ff_dca_lossless_quant[c->abits[ch][band]];
    else
        step_size = ff_dca_lossy_quant[c->abits[ch][band]];

    return step_size;
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
          int ch = 100;
          int band = 100;
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].bitrate_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__abits0 = 1;
          c[_i0].abits = (unsigned long **) malloc(_len_c__i0__abits0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_c__i0__abits0; _j0++) {
            int _len_c__i0__abits1 = 1;
            c[_i0].abits[_j0] = (unsigned long *) malloc(_len_c__i0__abits1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_c__i0__abits1; _j1++) {
              c[_i0].abits[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = get_step_size(c,ch,band);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].abits));
        free(c[_aux].abits);
          }
          free(c);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ch = 255;
          int band = 255;
          int _len_c0 = 65025;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].bitrate_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__abits0 = 1;
          c[_i0].abits = (unsigned long **) malloc(_len_c__i0__abits0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_c__i0__abits0; _j0++) {
            int _len_c__i0__abits1 = 1;
            c[_i0].abits[_j0] = (unsigned long *) malloc(_len_c__i0__abits1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_c__i0__abits1; _j1++) {
              c[_i0].abits[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = get_step_size(c,ch,band);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].abits));
        free(c[_aux].abits);
          }
          free(c);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ch = 10;
          int band = 10;
          int _len_c0 = 100;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].bitrate_index = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__abits0 = 1;
          c[_i0].abits = (unsigned long **) malloc(_len_c__i0__abits0*sizeof(unsigned long *));
          for(int _j0 = 0; _j0 < _len_c__i0__abits0; _j0++) {
            int _len_c__i0__abits1 = 1;
            c[_i0].abits[_j0] = (unsigned long *) malloc(_len_c__i0__abits1*sizeof(unsigned long));
            for(int _j1 = 0; _j1 < _len_c__i0__abits1; _j1++) {
              c[_i0].abits[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int benchRet = get_step_size(c,ch,band);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(*(c[_aux].abits));
        free(c[_aux].abits);
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
