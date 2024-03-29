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
typedef  int /*<<< orphan*/  uint16_t ;
typedef  int ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void fill_block(uint16_t *pdest, uint16_t color, int block_size, ptrdiff_t pitch)
{
    int x, y;

    pitch -= block_size;
    for (y = 0; y < block_size; y++, pdest += pitch)
        for (x = 0; x < block_size; x++)
            *pdest++ = color;
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
          int color = 100;
          int block_size = 100;
          int pitch = 100;
          int _len_pdest0 = 1;
          int * pdest = (int *) malloc(_len_pdest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdest0; _i0++) {
            pdest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_block(pdest,color,block_size,pitch);
          free(pdest);
        
        break;
    }
    // big-arr
    case 1:
    {
          int color = 255;
          int block_size = 255;
          int pitch = 255;
          int _len_pdest0 = 65025;
          int * pdest = (int *) malloc(_len_pdest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdest0; _i0++) {
            pdest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_block(pdest,color,block_size,pitch);
          free(pdest);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int color = 10;
          int block_size = 10;
          int pitch = 10;
          int _len_pdest0 = 100;
          int * pdest = (int *) malloc(_len_pdest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_pdest0; _i0++) {
            pdest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fill_block(pdest,color,block_size,pitch);
          free(pdest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
