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
 int MAX_NEG_CROP ; 
 int* ff_crop_tab ; 

__attribute__((used)) static void wmv2_mspel8_v_lowpass(uint8_t *dst, const uint8_t *src,
                                  int dstStride, int srcStride, int w)
{
    const uint8_t *cm = ff_crop_tab + MAX_NEG_CROP;
    int i;

    for (i = 0; i < w; i++) {
        const int src_1 = src[-srcStride];
        const int src0  = src[0];
        const int src1  = src[srcStride];
        const int src2  = src[2 * srcStride];
        const int src3  = src[3 * srcStride];
        const int src4  = src[4 * srcStride];
        const int src5  = src[5 * srcStride];
        const int src6  = src[6 * srcStride];
        const int src7  = src[7 * srcStride];
        const int src8  = src[8 * srcStride];
        const int src9  = src[9 * srcStride];
        dst[0 * dstStride] = cm[(9 * (src0 + src1) - (src_1 + src2) + 8) >> 4];
        dst[1 * dstStride] = cm[(9 * (src1 + src2) - (src0  + src3) + 8) >> 4];
        dst[2 * dstStride] = cm[(9 * (src2 + src3) - (src1  + src4) + 8) >> 4];
        dst[3 * dstStride] = cm[(9 * (src3 + src4) - (src2  + src5) + 8) >> 4];
        dst[4 * dstStride] = cm[(9 * (src4 + src5) - (src3  + src6) + 8) >> 4];
        dst[5 * dstStride] = cm[(9 * (src5 + src6) - (src4  + src7) + 8) >> 4];
        dst[6 * dstStride] = cm[(9 * (src6 + src7) - (src5  + src8) + 8) >> 4];
        dst[7 * dstStride] = cm[(9 * (src7 + src8) - (src6  + src9) + 8) >> 4];
        src++;
        dst++;
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
          int dstStride = 100;
          int srcStride = 100;
          int w = 100;
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wmv2_mspel8_v_lowpass(dst,src,dstStride,srcStride,w);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dstStride = 255;
          int srcStride = 255;
          int w = 255;
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wmv2_mspel8_v_lowpass(dst,src,dstStride,srcStride,w);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dstStride = 10;
          int srcStride = 10;
          int w = 10;
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          wmv2_mspel8_v_lowpass(dst,src,dstStride,srcStride,w);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
