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
struct G722Band {int* diff_mem; int* zero_mem; int s_zero; } ;

/* Variables and functions */

__attribute__((used)) static inline void s_zero(int cur_diff, struct G722Band *band)
{
    int s_zero = 0;

    #define ACCUM(k, x, d) do { \
            int tmp = x; \
            band->zero_mem[k] = ((band->zero_mem[k] * 255) >> 8) + \
               d*((band->diff_mem[k]^cur_diff) < 0 ? -128 : 128); \
            band->diff_mem[k] = tmp; \
            s_zero += (tmp * band->zero_mem[k]) >> 15; \
        } while (0)
    if (cur_diff) {
        ACCUM(5, band->diff_mem[4], 1);
        ACCUM(4, band->diff_mem[3], 1);
        ACCUM(3, band->diff_mem[2], 1);
        ACCUM(2, band->diff_mem[1], 1);
        ACCUM(1, band->diff_mem[0], 1);
        ACCUM(0, cur_diff * 2, 1);
    } else {
        ACCUM(5, band->diff_mem[4], 0);
        ACCUM(4, band->diff_mem[3], 0);
        ACCUM(3, band->diff_mem[2], 0);
        ACCUM(2, band->diff_mem[1], 0);
        ACCUM(1, band->diff_mem[0], 0);
        ACCUM(0, cur_diff * 2, 0);
    }
    #undef ACCUM
    band->s_zero = s_zero;
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
          int cur_diff = 100;
          int _len_band0 = 1;
          struct G722Band * band = (struct G722Band *) malloc(_len_band0*sizeof(struct G722Band));
          for(int _i0 = 0; _i0 < _len_band0; _i0++) {
              int _len_band__i0__diff_mem0 = 1;
          band[_i0].diff_mem = (int *) malloc(_len_band__i0__diff_mem0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_band__i0__diff_mem0; _j0++) {
            band[_i0].diff_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_band__i0__zero_mem0 = 1;
          band[_i0].zero_mem = (int *) malloc(_len_band__i0__zero_mem0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_band__i0__zero_mem0; _j0++) {
            band[_i0].zero_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        band[_i0].s_zero = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s_zero(cur_diff,band);
          for(int _aux = 0; _aux < _len_band0; _aux++) {
          free(band[_aux].diff_mem);
          }
          for(int _aux = 0; _aux < _len_band0; _aux++) {
          free(band[_aux].zero_mem);
          }
          free(band);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cur_diff = 255;
          int _len_band0 = 65025;
          struct G722Band * band = (struct G722Band *) malloc(_len_band0*sizeof(struct G722Band));
          for(int _i0 = 0; _i0 < _len_band0; _i0++) {
              int _len_band__i0__diff_mem0 = 1;
          band[_i0].diff_mem = (int *) malloc(_len_band__i0__diff_mem0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_band__i0__diff_mem0; _j0++) {
            band[_i0].diff_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_band__i0__zero_mem0 = 1;
          band[_i0].zero_mem = (int *) malloc(_len_band__i0__zero_mem0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_band__i0__zero_mem0; _j0++) {
            band[_i0].zero_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        band[_i0].s_zero = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s_zero(cur_diff,band);
          for(int _aux = 0; _aux < _len_band0; _aux++) {
          free(band[_aux].diff_mem);
          }
          for(int _aux = 0; _aux < _len_band0; _aux++) {
          free(band[_aux].zero_mem);
          }
          free(band);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cur_diff = 10;
          int _len_band0 = 100;
          struct G722Band * band = (struct G722Band *) malloc(_len_band0*sizeof(struct G722Band));
          for(int _i0 = 0; _i0 < _len_band0; _i0++) {
              int _len_band__i0__diff_mem0 = 1;
          band[_i0].diff_mem = (int *) malloc(_len_band__i0__diff_mem0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_band__i0__diff_mem0; _j0++) {
            band[_i0].diff_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_band__i0__zero_mem0 = 1;
          band[_i0].zero_mem = (int *) malloc(_len_band__i0__zero_mem0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_band__i0__zero_mem0; _j0++) {
            band[_i0].zero_mem[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        band[_i0].s_zero = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          s_zero(cur_diff,band);
          for(int _aux = 0; _aux < _len_band0; _aux++) {
          free(band[_aux].diff_mem);
          }
          for(int _aux = 0; _aux < _len_band0; _aux++) {
          free(band[_aux].zero_mem);
          }
          free(band);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
