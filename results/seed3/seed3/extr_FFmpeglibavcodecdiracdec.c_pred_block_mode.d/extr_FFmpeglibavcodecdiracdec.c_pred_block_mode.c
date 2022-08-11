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
struct TYPE_3__ {int ref; } ;
typedef  TYPE_1__ DiracBlock ;

/* Variables and functions */

__attribute__((used)) static inline int pred_block_mode(DiracBlock *block, int stride, int x, int y, int refmask)
{
    int pred;

    if (!(x|y))
        return 0;
    else if (!y)
        return block[-1].ref & refmask;
    else if (!x)
        return block[-stride].ref & refmask;

    /* return the majority */
    pred = (block[-1].ref & refmask) + (block[-stride].ref & refmask) + (block[-stride-1].ref & refmask);
    return (pred >> 1) & refmask;
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
          int stride = 100;
          int x = 100;
          int y = 100;
          int refmask = 100;
          int _len_block0 = 1;
          struct TYPE_3__ * block = (struct TYPE_3__ *) malloc(_len_block0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pred_block_mode(block,stride,x,y,refmask);
          printf("%d\n", benchRet); 
          free(block);
        
        break;
    }
    // big-arr
    case 1:
    {
          int stride = 255;
          int x = 255;
          int y = 255;
          int refmask = 255;
          int _len_block0 = 65025;
          struct TYPE_3__ * block = (struct TYPE_3__ *) malloc(_len_block0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pred_block_mode(block,stride,x,y,refmask);
          printf("%d\n", benchRet); 
          free(block);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stride = 10;
          int x = 10;
          int y = 10;
          int refmask = 10;
          int _len_block0 = 100;
          struct TYPE_3__ * block = (struct TYPE_3__ *) malloc(_len_block0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_block0; _i0++) {
            block[_i0].ref = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pred_block_mode(block,stride,x,y,refmask);
          printf("%d\n", benchRet); 
          free(block);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
