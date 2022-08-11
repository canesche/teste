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
typedef  int int32_t ;

/* Variables and functions */

__attribute__((used)) static inline void yuvPlanartouyvy_c(const uint8_t *ysrc, const uint8_t *usrc,
                                     const uint8_t *vsrc, uint8_t *dst,
                                     int width, int height,
                                     int lumStride, int chromStride,
                                     int dstStride, int vertLumPerChroma)
{
    int y, i;
    const int chromWidth = width >> 1;

    for (y = 0; y < height; y++) {
#if HAVE_FAST_64BIT
        uint64_t *ldst = (uint64_t *)dst;
        const uint8_t *yc = ysrc, *uc = usrc, *vc = vsrc;
        for (i = 0; i < chromWidth; i += 2) {
            uint64_t k = uc[0] + (yc[0] << 8) +
                         (vc[0] << 16) + ((unsigned) yc[1] << 24);
            uint64_t l = uc[1] + (yc[2] << 8) +
                         (vc[1] << 16) + ((unsigned) yc[3] << 24);
            *ldst++ = k + (l << 32);
            yc     += 4;
            uc     += 2;
            vc     += 2;
        }

#else
        int *idst = (int32_t *)dst;
        const uint8_t *yc = ysrc, *uc = usrc, *vc = vsrc;

        for (i = 0; i < chromWidth; i++) {
#if HAVE_BIGENDIAN
            *idst++ = (uc[0] << 24) + (yc[0] << 16) +
                      (vc[0] <<  8) + (yc[1] <<  0);
#else
            *idst++ = uc[0] + (yc[0] << 8) +
                      (vc[0] << 16) + (yc[1] << 24);
#endif
            yc += 2;
            uc++;
            vc++;
        }
#endif
        if ((y & (vertLumPerChroma - 1)) == vertLumPerChroma - 1) {
            usrc += chromStride;
            vsrc += chromStride;
        }
        ysrc += lumStride;
        dst  += dstStride;
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
          int dstStride = 100;
          int vertLumPerChroma = 100;
          int _len_ysrc0 = 1;
          const int * ysrc = (const int *) malloc(_len_ysrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ysrc0; _i0++) {
            ysrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usrc0 = 1;
          const int * usrc = (const int *) malloc(_len_usrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_usrc0; _i0++) {
            usrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vsrc0 = 1;
          const int * vsrc = (const int *) malloc(_len_vsrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_vsrc0; _i0++) {
            vsrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          yuvPlanartouyvy_c(ysrc,usrc,vsrc,dst,width,height,lumStride,chromStride,dstStride,vertLumPerChroma);
          free(ysrc);
          free(usrc);
          free(vsrc);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          int height = 255;
          int lumStride = 255;
          int chromStride = 255;
          int dstStride = 255;
          int vertLumPerChroma = 255;
          int _len_ysrc0 = 65025;
          const int * ysrc = (const int *) malloc(_len_ysrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ysrc0; _i0++) {
            ysrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usrc0 = 65025;
          const int * usrc = (const int *) malloc(_len_usrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_usrc0; _i0++) {
            usrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vsrc0 = 65025;
          const int * vsrc = (const int *) malloc(_len_vsrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_vsrc0; _i0++) {
            vsrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          yuvPlanartouyvy_c(ysrc,usrc,vsrc,dst,width,height,lumStride,chromStride,dstStride,vertLumPerChroma);
          free(ysrc);
          free(usrc);
          free(vsrc);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          int height = 10;
          int lumStride = 10;
          int chromStride = 10;
          int dstStride = 10;
          int vertLumPerChroma = 10;
          int _len_ysrc0 = 100;
          const int * ysrc = (const int *) malloc(_len_ysrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_ysrc0; _i0++) {
            ysrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_usrc0 = 100;
          const int * usrc = (const int *) malloc(_len_usrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_usrc0; _i0++) {
            usrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_vsrc0 = 100;
          const int * vsrc = (const int *) malloc(_len_vsrc0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_vsrc0; _i0++) {
            vsrc[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          yuvPlanartouyvy_c(ysrc,usrc,vsrc,dst,width,height,lumStride,chromStride,dstStride,vertLumPerChroma);
          free(ysrc);
          free(usrc);
          free(vsrc);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
