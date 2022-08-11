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
typedef  unsigned int uint8_t ;
typedef  int ptrdiff_t ;

/* Variables and functions */

__attribute__((used)) static void mangle_rgb_planes(uint8_t *dst[4], ptrdiff_t dst_stride,
                              uint8_t *const src[4], int planes, const int stride[4],
                              int width, int height)
{
    int i, j;
    int k = 2 * dst_stride;
    const uint8_t *sg = src[0];
    const uint8_t *sb = src[1];
    const uint8_t *sr = src[2];
    const uint8_t *sa = src[3];
    unsigned int g;

    for (j = 0; j < height; j++) {
        if (planes == 3) {
            for (i = 0; i < width; i++) {
                g         = sg[i];
                dst[0][k] = g;
                g        += 0x80;
                dst[1][k] = sb[i] - g;
                dst[2][k] = sr[i] - g;
                k++;
            }
        } else {
            for (i = 0; i < width; i++) {
                g         = sg[i];
                dst[0][k] = g;
                g        += 0x80;
                dst[1][k] = sb[i] - g;
                dst[2][k] = sr[i] - g;
                dst[3][k] = sa[i];
                k++;
            }
            sa += stride[3];
        }
        k += dst_stride - width;
        sg += stride[0];
        sb += stride[1];
        sr += stride[2];
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
          int dst_stride = 100;
          int planes = 100;
          int width = 100;
          int height = 100;
          int _len_dst0 = 4;
          unsigned int ** dst = (unsigned int **) malloc(_len_dst0*sizeof(unsigned int *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (unsigned int *) malloc(_len_dst1*sizeof(unsigned int));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src0 = 4;
          unsigned int *const* src = (unsigned int *const*) malloc(_len_src0*sizeof(unsigned int const*));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (unsigned int const*) malloc(_len_src1*sizeof(unsigned int const));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_stride0 = 4;
          int const* stride = (int const*) malloc(_len_stride0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_stride0; _i0++) {
            stride[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mangle_rgb_planes(dst,dst_stride,src,planes,stride,width,height);
          for(int i1 = 0; i1 < _len_dst0; i1++) {
            int _len_dst1 = 1;
              free(dst[i1]);
          }
          free(dst);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          free(stride);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dst_stride = 255;
          int planes = 255;
          int width = 255;
          int height = 255;
          int _len_dst0 = 65025;
          unsigned int ** dst = (unsigned int **) malloc(_len_dst0*sizeof(unsigned int *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (unsigned int *) malloc(_len_dst1*sizeof(unsigned int));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src0 = 65025;
          unsigned int *const* src = (unsigned int *const*) malloc(_len_src0*sizeof(unsigned int const*));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (unsigned int const*) malloc(_len_src1*sizeof(unsigned int const));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_stride0 = 65025;
          int const* stride = (int const*) malloc(_len_stride0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_stride0; _i0++) {
            stride[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mangle_rgb_planes(dst,dst_stride,src,planes,stride,width,height);
          for(int i1 = 0; i1 < _len_dst0; i1++) {
            int _len_dst1 = 1;
              free(dst[i1]);
          }
          free(dst);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          free(stride);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dst_stride = 10;
          int planes = 10;
          int width = 10;
          int height = 10;
          int _len_dst0 = 100;
          unsigned int ** dst = (unsigned int **) malloc(_len_dst0*sizeof(unsigned int *));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            int _len_dst1 = 1;
            dst[_i0] = (unsigned int *) malloc(_len_dst1*sizeof(unsigned int));
            for(int _i1 = 0; _i1 < _len_dst1; _i1++) {
              dst[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_src0 = 100;
          unsigned int *const* src = (unsigned int *const*) malloc(_len_src0*sizeof(unsigned int const*));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (unsigned int const*) malloc(_len_src1*sizeof(unsigned int const));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_stride0 = 100;
          int const* stride = (int const*) malloc(_len_stride0*sizeof(int const));
          for(int _i0 = 0; _i0 < _len_stride0; _i0++) {
            stride[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mangle_rgb_planes(dst,dst_stride,src,planes,stride,width,height);
          for(int i1 = 0; i1 < _len_dst0; i1++) {
            int _len_dst1 = 1;
              free(dst[i1]);
          }
          free(dst);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          free(stride);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
