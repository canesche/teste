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
       0            big-arr-10x\n\
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
typedef  int /*<<< orphan*/  uint8_t ;
typedef  int uint32_t ;

/* Variables and functions */

__attribute__((used)) static inline void draw_n_color(uint8_t *out, int stride, int width,
         int height, int bpp, uint8_t cols[4], uint8_t grps[4], uint32_t col)
{
    int x, y;
    for (y = 0; y < height; y++) {
        if (grps)
            cols[0] = grps[3 * (y >> 1)];
        for (x = 0; x < width; x++) {
            if (grps)
                cols[1]= grps[(x >> 1) + 1];
            out[x + y*stride] = cols[col & ((1 << bpp) - 1)];
            col >>= bpp;
        }
    }
}


// ------------------------------------------------------------------------- //




// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr-10x
    case 0:
    {
          int stride = 10;
          int width = 10;
          int height = 10;
          int bpp = 10;
          int col = 10;
          int _len_out0 = 100;
          int * out = (int *) malloc(_len_out0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_out0; _i0++) {
            out[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cols0 = 100;
          int * cols = (int *) malloc(_len_cols0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_cols0; _i0++) {
            cols[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_grps0 = 100;
          int * grps = (int *) malloc(_len_grps0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_grps0; _i0++) {
            grps[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          draw_n_color(out,stride,width,height,bpp,cols,grps,col);
          free(out);
          free(cols);
          free(grps);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
