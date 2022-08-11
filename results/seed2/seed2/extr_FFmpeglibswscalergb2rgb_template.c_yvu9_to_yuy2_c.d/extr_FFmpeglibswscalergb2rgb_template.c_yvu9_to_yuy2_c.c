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

__attribute__((used)) static inline void yvu9_to_yuy2_c(const uint8_t *src1, const uint8_t *src2,
                                  const uint8_t *src3, uint8_t *dst,
                                  int width, int height,
                                  int srcStride1, int srcStride2,
                                  int srcStride3, int dstStride)
{
    int x, y;
    int w = width / 2;
    int h = height;

    for (y = 0; y < h; y++) {
        const uint8_t *yp = src1 + srcStride1 *  y;
        const uint8_t *up = src2 + srcStride2 * (y >> 2);
        const uint8_t *vp = src3 + srcStride3 * (y >> 2);
        uint8_t *d        = dst  + dstStride  *  y;
        for (x = 0; x < w; x++) {
            const int x2 = x << 2;
            d[8 * x + 0] = yp[x2];
            d[8 * x + 1] = up[x];
            d[8 * x + 2] = yp[x2 + 1];
            d[8 * x + 3] = vp[x];
            d[8 * x + 4] = yp[x2 + 2];
            d[8 * x + 5] = up[x];
            d[8 * x + 6] = yp[x2 + 3];
            d[8 * x + 7] = vp[x];
        }
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
          int srcStride1 = 100;
          int srcStride2 = 100;
          int srcStride3 = 100;
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
          int _len_src30 = 1;
          const int * src3 = (const int *) malloc(_len_src30*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src30; _i0++) {
            src3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          yvu9_to_yuy2_c(src1,src2,src3,dst,width,height,srcStride1,srcStride2,srcStride3,dstStride);
          free(src1);
          free(src2);
          free(src3);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          int height = 255;
          int srcStride1 = 255;
          int srcStride2 = 255;
          int srcStride3 = 255;
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
          int _len_src30 = 65025;
          const int * src3 = (const int *) malloc(_len_src30*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src30; _i0++) {
            src3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          yvu9_to_yuy2_c(src1,src2,src3,dst,width,height,srcStride1,srcStride2,srcStride3,dstStride);
          free(src1);
          free(src2);
          free(src3);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          int height = 10;
          int srcStride1 = 10;
          int srcStride2 = 10;
          int srcStride3 = 10;
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
          int _len_src30 = 100;
          const int * src3 = (const int *) malloc(_len_src30*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src30; _i0++) {
            src3[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          yvu9_to_yuy2_c(src1,src2,src3,dst,width,height,srcStride1,srcStride2,srcStride3,dstStride);
          free(src1);
          free(src2);
          free(src3);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
