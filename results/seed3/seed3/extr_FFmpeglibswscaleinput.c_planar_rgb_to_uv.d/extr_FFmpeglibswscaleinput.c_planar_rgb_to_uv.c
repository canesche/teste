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
typedef  int uint16_t ;
typedef  int int32_t ;

/* Variables and functions */
 size_t BU_IDX ; 
 size_t BV_IDX ; 
 size_t GU_IDX ; 
 size_t GV_IDX ; 
 int RGB2YUV_SHIFT ; 
 size_t RU_IDX ; 
 size_t RV_IDX ; 

__attribute__((used)) static void planar_rgb_to_uv(uint8_t *_dstU, uint8_t *_dstV, const uint8_t *src[4], int width, int32_t *rgb2yuv)
{
    uint16_t *dstU = (uint16_t *)_dstU;
    uint16_t *dstV = (uint16_t *)_dstV;
    int32_t ru = rgb2yuv[RU_IDX], gu = rgb2yuv[GU_IDX], bu = rgb2yuv[BU_IDX];
    int32_t rv = rgb2yuv[RV_IDX], gv = rgb2yuv[GV_IDX], bv = rgb2yuv[BV_IDX];
    int i;
    for (i = 0; i < width; i++) {
        int g = src[0][i];
        int b = src[1][i];
        int r = src[2][i];

        dstU[i] = (ru*r + gu*g + bu*b + (0x4001<<(RGB2YUV_SHIFT-7))) >> (RGB2YUV_SHIFT-6);
        dstV[i] = (rv*r + gv*g + bv*b + (0x4001<<(RGB2YUV_SHIFT-7))) >> (RGB2YUV_SHIFT-6);
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
          int _len__dstU0 = 1;
          int * _dstU = (int *) malloc(_len__dstU0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__dstU0; _i0++) {
            _dstU[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__dstV0 = 1;
          int * _dstV = (int *) malloc(_len__dstV0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__dstV0; _i0++) {
            _dstV[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 4;
          const int ** src = (const int **) malloc(_len_src0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (const int *) malloc(_len_src1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rgb2yuv0 = 1;
          int * rgb2yuv = (int *) malloc(_len_rgb2yuv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rgb2yuv0; _i0++) {
            rgb2yuv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          planar_rgb_to_uv(_dstU,_dstV,src,width,rgb2yuv);
          free(_dstU);
          free(_dstV);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          free(rgb2yuv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int width = 255;
          int _len__dstU0 = 65025;
          int * _dstU = (int *) malloc(_len__dstU0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__dstU0; _i0++) {
            _dstU[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__dstV0 = 65025;
          int * _dstV = (int *) malloc(_len__dstV0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__dstV0; _i0++) {
            _dstV[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          const int ** src = (const int **) malloc(_len_src0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (const int *) malloc(_len_src1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rgb2yuv0 = 65025;
          int * rgb2yuv = (int *) malloc(_len_rgb2yuv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rgb2yuv0; _i0++) {
            rgb2yuv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          planar_rgb_to_uv(_dstU,_dstV,src,width,rgb2yuv);
          free(_dstU);
          free(_dstV);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          free(rgb2yuv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int width = 10;
          int _len__dstU0 = 100;
          int * _dstU = (int *) malloc(_len__dstU0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__dstU0; _i0++) {
            _dstU[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len__dstV0 = 100;
          int * _dstV = (int *) malloc(_len__dstV0*sizeof(int));
          for(int _i0 = 0; _i0 < _len__dstV0; _i0++) {
            _dstV[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          const int ** src = (const int **) malloc(_len_src0*sizeof(const int *));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            int _len_src1 = 1;
            src[_i0] = (const int *) malloc(_len_src1*sizeof(const int));
            for(int _i1 = 0; _i1 < _len_src1; _i1++) {
              src[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_rgb2yuv0 = 100;
          int * rgb2yuv = (int *) malloc(_len_rgb2yuv0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rgb2yuv0; _i0++) {
            rgb2yuv[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          planar_rgb_to_uv(_dstU,_dstV,src,width,rgb2yuv);
          free(_dstU);
          free(_dstV);
          for(int i1 = 0; i1 < _len_src0; i1++) {
            int _len_src1 = 1;
              free(src[i1]);
          }
          free(src);
          free(rgb2yuv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
