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

__attribute__((used)) static void packedtogbr24p(const uint8_t *src, int srcStride,
                           uint8_t *dst[], int dstStride[], int srcSliceH,
                           int alpha_first, int inc_size, int width)
{
    uint8_t *dest[3];
    int x, h;

    dest[0] = dst[0];
    dest[1] = dst[1];
    dest[2] = dst[2];

    if (alpha_first)
        src++;

    for (h = 0; h < srcSliceH; h++) {
        for (x = 0; x < width; x++) {
            dest[0][x] = src[0];
            dest[1][x] = src[1];
            dest[2][x] = src[2];

            src += inc_size;
        }
        src     += srcStride - width * inc_size;
        dest[0] += dstStride[0];
        dest[1] += dstStride[1];
        dest[2] += dstStride[2];
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
          int srcStride = 100;
          int srcSliceH = 100;
          int alpha_first = 100;
          int inc_size = 100;
          int width = 100;
          int _len_src0 = 1;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          int ** dst = (int **) malloc(_len_dst0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (int *) malloc(_len_dst1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dstStride0 = 1;
          int * dstStride = (int *) malloc(_len_dstStride0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstStride0; _i0++) {
            dstStride[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          packedtogbr24p(src,srcStride,dst,dstStride,srcSliceH,alpha_first,inc_size,width);
          free(src);
          for(int i1 = 0; i1 < _len_dst0; i1++) {
            int _len_dst1 = 1;
              free(dst[i1]);
          }
          free(dst);
          free(dstStride);
        
        break;
    }
    // big-arr
    case 1:
    {
          int srcStride = 255;
          int srcSliceH = 255;
          int alpha_first = 255;
          int inc_size = 255;
          int width = 255;
          int _len_src0 = 65025;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          int ** dst = (int **) malloc(_len_dst0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (int *) malloc(_len_dst1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dstStride0 = 65025;
          int * dstStride = (int *) malloc(_len_dstStride0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstStride0; _i0++) {
            dstStride[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          packedtogbr24p(src,srcStride,dst,dstStride,srcSliceH,alpha_first,inc_size,width);
          free(src);
          for(int i1 = 0; i1 < _len_dst0; i1++) {
            int _len_dst1 = 1;
              free(dst[i1]);
          }
          free(dst);
          free(dstStride);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int srcStride = 10;
          int srcSliceH = 10;
          int alpha_first = 10;
          int inc_size = 10;
          int width = 10;
          int _len_src0 = 100;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          int ** dst = (int **) malloc(_len_dst0*sizeof(int *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (int *) malloc(_len_dst1*sizeof(int));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dstStride0 = 100;
          int * dstStride = (int *) malloc(_len_dstStride0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstStride0; _i0++) {
            dstStride[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          packedtogbr24p(src,srcStride,dst,dstStride,srcSliceH,alpha_first,inc_size,width);
          free(src);
          for(int i1 = 0; i1 < _len_dst0; i1++) {
            int _len_dst1 = 1;
              free(dst[i1]);
          }
          free(dst);
          free(dstStride);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
