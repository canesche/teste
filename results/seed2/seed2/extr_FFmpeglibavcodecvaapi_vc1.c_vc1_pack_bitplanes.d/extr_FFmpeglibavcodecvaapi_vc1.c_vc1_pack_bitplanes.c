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
typedef  int uint8_t ;

/* Variables and functions */

__attribute__((used)) static inline void vc1_pack_bitplanes(uint8_t *bitplane, int n, const uint8_t *ff_bp[3], int x, int y, int stride)
{
    const int bitplane_index = n / 2;
    const int ff_bp_index = y * stride + x;
    uint8_t v = 0;
    if (ff_bp[0])
        v = ff_bp[0][ff_bp_index];
    if (ff_bp[1])
        v |= ff_bp[1][ff_bp_index] << 1;
    if (ff_bp[2])
        v |= ff_bp[2][ff_bp_index] << 2;
    bitplane[bitplane_index] = (bitplane[bitplane_index] << 4) | v;
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
          int n = 100;
          int x = 100;
          int y = 100;
          int stride = 100;
          int _len_bitplane0 = 1;
          int * bitplane = (int *) malloc(_len_bitplane0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bitplane0; _i0++) {
            bitplane[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ff_bp0 = 3;
          const int ** ff_bp = (const int **) malloc(_len_ff_bp0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_ff_bp0; _i0++) {
            int _len_ff_bp1 = 1;
            ff_bp[_i0] = (const int *) malloc(_len_ff_bp1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_ff_bp1; _i1++) {
              ff_bp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          vc1_pack_bitplanes(bitplane,n,ff_bp,x,y,stride);
          free(bitplane);
          for(int i1 = 0; i1 < _len_ff_bp0; i1++) {
            int _len_ff_bp1 = 1;
              free(ff_bp[i1]);
          }
          free(ff_bp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int x = 255;
          int y = 255;
          int stride = 255;
          int _len_bitplane0 = 65025;
          int * bitplane = (int *) malloc(_len_bitplane0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bitplane0; _i0++) {
            bitplane[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ff_bp0 = 65025;
          const int ** ff_bp = (const int **) malloc(_len_ff_bp0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_ff_bp0; _i0++) {
            int _len_ff_bp1 = 1;
            ff_bp[_i0] = (const int *) malloc(_len_ff_bp1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_ff_bp1; _i1++) {
              ff_bp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          vc1_pack_bitplanes(bitplane,n,ff_bp,x,y,stride);
          free(bitplane);
          for(int i1 = 0; i1 < _len_ff_bp0; i1++) {
            int _len_ff_bp1 = 1;
              free(ff_bp[i1]);
          }
          free(ff_bp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int x = 10;
          int y = 10;
          int stride = 10;
          int _len_bitplane0 = 100;
          int * bitplane = (int *) malloc(_len_bitplane0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_bitplane0; _i0++) {
            bitplane[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ff_bp0 = 100;
          const int ** ff_bp = (const int **) malloc(_len_ff_bp0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_ff_bp0; _i0++) {
            int _len_ff_bp1 = 1;
            ff_bp[_i0] = (const int *) malloc(_len_ff_bp1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_ff_bp1; _i1++) {
              ff_bp[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          vc1_pack_bitplanes(bitplane,n,ff_bp,x,y,stride);
          free(bitplane);
          for(int i1 = 0; i1 < _len_ff_bp0; i1++) {
            int _len_ff_bp1 = 1;
              free(ff_bp[i1]);
          }
          free(ff_bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
