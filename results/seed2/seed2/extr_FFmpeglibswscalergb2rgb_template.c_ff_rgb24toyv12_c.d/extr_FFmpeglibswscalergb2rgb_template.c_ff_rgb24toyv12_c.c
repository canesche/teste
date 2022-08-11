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
typedef  unsigned int int32_t ;

/* Variables and functions */
 size_t BU_IDX ; 
 size_t BV_IDX ; 
 size_t BY_IDX ; 
 size_t GU_IDX ; 
 size_t GV_IDX ; 
 size_t GY_IDX ; 
 unsigned int RGB2YUV_SHIFT ; 
 size_t RU_IDX ; 
 size_t RV_IDX ; 
 size_t RY_IDX ; 

void ff_rgb24toyv12_c(const uint8_t *src, uint8_t *ydst, uint8_t *udst,
                   uint8_t *vdst, int width, int height, int lumStride,
                   int chromStride, int srcStride, int32_t *rgb2yuv)
{
    int32_t ry = rgb2yuv[RY_IDX], gy = rgb2yuv[GY_IDX], by = rgb2yuv[BY_IDX];
    int32_t ru = rgb2yuv[RU_IDX], gu = rgb2yuv[GU_IDX], bu = rgb2yuv[BU_IDX];
    int32_t rv = rgb2yuv[RV_IDX], gv = rgb2yuv[GV_IDX], bv = rgb2yuv[BV_IDX];
    int y;
    const int chromWidth = width >> 1;

    for (y = 0; y < height; y += 2) {
        int i;
        for (i = 0; i < chromWidth; i++) {
            unsigned int b = src[6 * i + 0];
            unsigned int g = src[6 * i + 1];
            unsigned int r = src[6 * i + 2];

            unsigned int Y = ((ry * r + gy * g + by * b) >> RGB2YUV_SHIFT) +  16;
            unsigned int V = ((rv * r + gv * g + bv * b) >> RGB2YUV_SHIFT) + 128;
            unsigned int U = ((ru * r + gu * g + bu * b) >> RGB2YUV_SHIFT) + 128;

            udst[i]     = U;
            vdst[i]     = V;
            ydst[2 * i] = Y;

            b = src[6 * i + 3];
            g = src[6 * i + 4];
            r = src[6 * i + 5];

            Y = ((ry * r + gy * g + by * b) >> RGB2YUV_SHIFT) + 16;
            ydst[2 * i + 1] = Y;
        }
        ydst += lumStride;
        src  += srcStride;

        if (y+1 == height)
            break;

        for (i = 0; i < chromWidth; i++) {
            unsigned int b = src[6 * i + 0];
            unsigned int g = src[6 * i + 1];
            unsigned int r = src[6 * i + 2];

            unsigned int Y = ((ry * r + gy * g + by * b) >> RGB2YUV_SHIFT) + 16;

            ydst[2 * i] = Y;

            b = src[6 * i + 3];
            g = src[6 * i + 4];
            r = src[6 * i + 5];

            Y = ((ry * r + gy * g + by * b) >> RGB2YUV_SHIFT) + 16;
            ydst[2 * i + 1] = Y;
        }
        udst += chromStride;
        vdst += chromStride;
        ydst += lumStride;
        src  += srcStride;
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
          int lumStride = 100;
          int chromStride = 100;
          int srcStride = 100;
          int _len_src0 = 1;
          const unsigned int * src = (const unsigned int *) malloc(_len_src0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ydst0 = 1;
          unsigned int * ydst = (unsigned int *) malloc(_len_ydst0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_ydst0; _i0++) {
            ydst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udst0 = 1;
          unsigned int * udst = (unsigned int *) malloc(_len_udst0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_udst0; _i0++) {
            udst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vdst0 = 1;
          unsigned int * vdst = (unsigned int *) malloc(_len_vdst0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_vdst0; _i0++) {
            vdst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rgb2yuv0 = 1;
          unsigned int * rgb2yuv = (unsigned int *) malloc(_len_rgb2yuv0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_rgb2yuv0; _i0++) {
            rgb2yuv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_rgb24toyv12_c(src,ydst,udst,vdst,width,height,lumStride,chromStride,srcStride,rgb2yuv);
          free(src);
          free(ydst);
          free(udst);
          free(vdst);
          free(rgb2yuv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          int height = 255;
          int lumStride = 255;
          int chromStride = 255;
          int srcStride = 255;
          int _len_src0 = 65025;
          const unsigned int * src = (const unsigned int *) malloc(_len_src0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ydst0 = 65025;
          unsigned int * ydst = (unsigned int *) malloc(_len_ydst0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_ydst0; _i0++) {
            ydst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udst0 = 65025;
          unsigned int * udst = (unsigned int *) malloc(_len_udst0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_udst0; _i0++) {
            udst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vdst0 = 65025;
          unsigned int * vdst = (unsigned int *) malloc(_len_vdst0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_vdst0; _i0++) {
            vdst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rgb2yuv0 = 65025;
          unsigned int * rgb2yuv = (unsigned int *) malloc(_len_rgb2yuv0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_rgb2yuv0; _i0++) {
            rgb2yuv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_rgb24toyv12_c(src,ydst,udst,vdst,width,height,lumStride,chromStride,srcStride,rgb2yuv);
          free(src);
          free(ydst);
          free(udst);
          free(vdst);
          free(rgb2yuv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          int height = 10;
          int lumStride = 10;
          int chromStride = 10;
          int srcStride = 10;
          int _len_src0 = 100;
          const unsigned int * src = (const unsigned int *) malloc(_len_src0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ydst0 = 100;
          unsigned int * ydst = (unsigned int *) malloc(_len_ydst0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_ydst0; _i0++) {
            ydst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_udst0 = 100;
          unsigned int * udst = (unsigned int *) malloc(_len_udst0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_udst0; _i0++) {
            udst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vdst0 = 100;
          unsigned int * vdst = (unsigned int *) malloc(_len_vdst0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_vdst0; _i0++) {
            vdst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rgb2yuv0 = 100;
          unsigned int * rgb2yuv = (unsigned int *) malloc(_len_rgb2yuv0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_rgb2yuv0; _i0++) {
            rgb2yuv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ff_rgb24toyv12_c(src,ydst,udst,vdst,width,height,lumStride,chromStride,srcStride,rgb2yuv);
          free(src);
          free(ydst);
          free(udst);
          free(vdst);
          free(rgb2yuv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
