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

__attribute__((used)) static int block_contrast(uint8_t *src, int x, int y, int stride, int blocksize)
{
    int highest = 0;
    int lowest = 255;
    int i, j, pos;

    for (i = 0; i <= blocksize * 2; i++) {
        // We use a width of 16 here to match the sad function
        for (j = 0; j <= 15; j++) {
            pos = (y + i) * stride + (x + j);
            if (src[pos] < lowest)
                lowest = src[pos];
            else if (src[pos] > highest) {
                highest = src[pos];
            }
        }
    }

    return highest - lowest;
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
          int x = 100;
          int y = 100;
          int stride = 100;
          int blocksize = 100;
          int _len_src0 = 1;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = block_contrast(src,x,y,stride,blocksize);
          printf("%d\n", benchRet); 
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int x = 255;
          int y = 255;
          int stride = 255;
          int blocksize = 255;
          int _len_src0 = 65025;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = block_contrast(src,x,y,stride,blocksize);
          printf("%d\n", benchRet); 
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int x = 10;
          int y = 10;
          int stride = 10;
          int blocksize = 10;
          int _len_src0 = 100;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = block_contrast(src,x,y,stride,blocksize);
          printf("%d\n", benchRet); 
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
