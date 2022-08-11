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
typedef  size_t uint8_t ;
typedef  int ptrdiff_t ;
struct TYPE_3__ {int srcW; float* uint2float_lut; } ;
typedef  TYPE_1__ SwsContext ;

/* Variables and functions */

__attribute__((used)) static int uint_y_to_float_y_wrapper(SwsContext *c, const uint8_t *src[],
                                     int srcStride[], int srcSliceY,
                                     int srcSliceH, uint8_t *dst[], int dstStride[])
{
    int y, x;
    ptrdiff_t dstStrideFloat = dstStride[0] >> 2;
    const uint8_t *srcPtr = src[0];
    float *dstPtr = (float *)(dst[0] + dstStride[0] * srcSliceY);

    for (y = 0; y < srcSliceH; ++y){
        for (x = 0; x < c->srcW; ++x){
            dstPtr[x] = c->uint2float_lut[srcPtr[x]];
        }
        srcPtr += srcStride[0];
        dstPtr += dstStrideFloat;
    }

    return srcSliceH;
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
          int srcSliceY = 100;
          int srcSliceH = 100;
          int _len_c0 = 1;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].srcW = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__uint2float_lut0 = 1;
          c[_i0].uint2float_lut = (float *) malloc(_len_c__i0__uint2float_lut0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_c__i0__uint2float_lut0; _j0++) {
            c[_i0].uint2float_lut[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          int _len_src0 = 1;
          const unsigned long ** src = (const unsigned long **) malloc(_len_src0*sizeof(const unsigned long *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (const unsigned long *) malloc(_len_src1*sizeof(const unsigned long));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_srcStride0 = 1;
          int * srcStride = (int *) malloc(_len_srcStride0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcStride0; _i0++) {
            srcStride[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          unsigned long ** dst = (unsigned long **) malloc(_len_dst0*sizeof(unsigned long *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (unsigned long *) malloc(_len_dst1*sizeof(unsigned long));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dstStride0 = 1;
          int * dstStride = (int *) malloc(_len_dstStride0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstStride0; _i0++) {
            dstStride[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uint_y_to_float_y_wrapper(c,src,srcStride,srcSliceY,srcSliceH,dst,dstStride);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].uint2float_lut);
          }
          free(c);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          free(srcStride);
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
          int srcSliceY = 255;
          int srcSliceH = 255;
          int _len_c0 = 65025;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].srcW = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__uint2float_lut0 = 1;
          c[_i0].uint2float_lut = (float *) malloc(_len_c__i0__uint2float_lut0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_c__i0__uint2float_lut0; _j0++) {
            c[_i0].uint2float_lut[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          int _len_src0 = 65025;
          const unsigned long ** src = (const unsigned long **) malloc(_len_src0*sizeof(const unsigned long *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (const unsigned long *) malloc(_len_src1*sizeof(const unsigned long));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_srcStride0 = 65025;
          int * srcStride = (int *) malloc(_len_srcStride0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcStride0; _i0++) {
            srcStride[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          unsigned long ** dst = (unsigned long **) malloc(_len_dst0*sizeof(unsigned long *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (unsigned long *) malloc(_len_dst1*sizeof(unsigned long));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dstStride0 = 65025;
          int * dstStride = (int *) malloc(_len_dstStride0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstStride0; _i0++) {
            dstStride[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uint_y_to_float_y_wrapper(c,src,srcStride,srcSliceY,srcSliceH,dst,dstStride);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].uint2float_lut);
          }
          free(c);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          free(srcStride);
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
          int srcSliceY = 10;
          int srcSliceH = 10;
          int _len_c0 = 100;
          struct TYPE_3__ * c = (struct TYPE_3__ *) malloc(_len_c0*sizeof(struct TYPE_3__));
          for(int _i0 = 0; _i0 < _len_c0; _i0++) {
            c[_i0].srcW = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_c__i0__uint2float_lut0 = 1;
          c[_i0].uint2float_lut = (float *) malloc(_len_c__i0__uint2float_lut0*sizeof(float));
          for(int _j0 = 0; _j0 < _len_c__i0__uint2float_lut0; _j0++) {
            c[_i0].uint2float_lut[_j0] = ((-2.0 * (next_i()%2)) + 1.0) * (-16777216.000000 + (float) next_f() / (((float) 16777215.000000/(16777215.000000 - -16777216.000000))));
          }
          }
          int _len_src0 = 100;
          const unsigned long ** src = (const unsigned long **) malloc(_len_src0*sizeof(const unsigned long *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (const unsigned long *) malloc(_len_src1*sizeof(const unsigned long));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_srcStride0 = 100;
          int * srcStride = (int *) malloc(_len_srcStride0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_srcStride0; _i0++) {
            srcStride[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          unsigned long ** dst = (unsigned long **) malloc(_len_dst0*sizeof(unsigned long *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (unsigned long *) malloc(_len_dst1*sizeof(unsigned long));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_dstStride0 = 100;
          int * dstStride = (int *) malloc(_len_dstStride0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dstStride0; _i0++) {
            dstStride[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = uint_y_to_float_y_wrapper(c,src,srcStride,srcSliceY,srcSliceH,dst,dstStride);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_c0; _aux++) {
          free(c[_aux].uint2float_lut);
          }
          free(c);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          free(srcStride);
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
