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

__attribute__((used)) static inline int pred_sbsplit(uint8_t *sbsplit, int stride, int x, int y)
{
    static const uint8_t avgsplit[7] = { 0, 0, 1, 1, 1, 2, 2 };

    if (!(x|y))
        return 0;
    else if (!y)
        return sbsplit[-1];
    else if (!x)
        return sbsplit[-stride];

    return avgsplit[sbsplit[-1] + sbsplit[-stride] + sbsplit[-stride-1]];
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
          int _len_sbsplit0 = 1;
          int * sbsplit = (int *) malloc(_len_sbsplit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sbsplit0; _i0++) {
            sbsplit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pred_sbsplit(sbsplit,stride,x,y);
          printf("%d\n", benchRet); 
          free(sbsplit);
        
        break;
    }
    // big-arr
    case 1:
    {
          int stride = 255;
          int x = 255;
          int y = 255;
          int _len_sbsplit0 = 65025;
          int * sbsplit = (int *) malloc(_len_sbsplit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sbsplit0; _i0++) {
            sbsplit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pred_sbsplit(sbsplit,stride,x,y);
          printf("%d\n", benchRet); 
          free(sbsplit);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int stride = 10;
          int x = 10;
          int y = 10;
          int _len_sbsplit0 = 100;
          int * sbsplit = (int *) malloc(_len_sbsplit0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sbsplit0; _i0++) {
            sbsplit[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = pred_sbsplit(sbsplit,stride,x,y);
          printf("%d\n", benchRet); 
          free(sbsplit);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
