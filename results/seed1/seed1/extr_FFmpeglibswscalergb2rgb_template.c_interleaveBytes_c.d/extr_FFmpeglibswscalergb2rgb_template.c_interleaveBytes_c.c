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
typedef  int /*<<< orphan*/  uint8_t ;

/* Variables and functions */

__attribute__((used)) static void interleaveBytes_c(const uint8_t *src1, const uint8_t *src2,
                              uint8_t *dest, int width, int height,
                              int src1Stride, int src2Stride, int dstStride)
{
    int h;

    for (h = 0; h < height; h++) {
        int w;
        for (w = 0; w < width; w++) {
            dest[2 * w + 0] = src1[w];
            dest[2 * w + 1] = src2[w];
        }
        dest += dstStride;
        src1 += src1Stride;
        src2 += src2Stride;
    }
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
          int width = 100;
          int height = 100;
          int src1Stride = 100;
          int src2Stride = 100;
          int dstStride = 100;
          int _len_src10 = 1;
          const int * src1 = (const int *) malloc(_len_src10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src20 = 1;
          const int * src2 = (const int *) malloc(_len_src20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src20; _i0++) {
            src2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 1;
          int * dest = (int *) malloc(_len_dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          interleaveBytes_c(src1,src2,dest,width,height,src1Stride,src2Stride,dstStride);
          free(src1);
          free(src2);
          free(dest);
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          int height = 255;
          int src1Stride = 255;
          int src2Stride = 255;
          int dstStride = 255;
          int _len_src10 = 65025;
          const int * src1 = (const int *) malloc(_len_src10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src20 = 65025;
          const int * src2 = (const int *) malloc(_len_src20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src20; _i0++) {
            src2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 65025;
          int * dest = (int *) malloc(_len_dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          interleaveBytes_c(src1,src2,dest,width,height,src1Stride,src2Stride,dstStride);
          free(src1);
          free(src2);
          free(dest);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          int height = 10;
          int src1Stride = 10;
          int src2Stride = 10;
          int dstStride = 10;
          int _len_src10 = 100;
          const int * src1 = (const int *) malloc(_len_src10*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src10; _i0++) {
            src1[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src20 = 100;
          const int * src2 = (const int *) malloc(_len_src20*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src20; _i0++) {
            src2[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dest0 = 100;
          int * dest = (int *) malloc(_len_dest0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dest0; _i0++) {
            dest[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          interleaveBytes_c(src1,src2,dest,width,height,src1Stride,src2Stride,dstStride);
          free(src1);
          free(src2);
          free(dest);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
