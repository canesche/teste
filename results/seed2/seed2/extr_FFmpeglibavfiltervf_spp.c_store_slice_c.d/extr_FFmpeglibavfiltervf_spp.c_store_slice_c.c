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
typedef  int int16_t ;

/* Variables and functions */

__attribute__((used)) static void store_slice_c(uint8_t *dst, const int16_t *src,
                          int dst_linesize, int src_linesize,
                          int width, int height, int log2_scale,
                          const uint8_t dither[8][8])
{
    int y, x;

#define STORE(pos) do {                                                     \
    temp = ((src[x + y*src_linesize + pos] << log2_scale) + d[pos]) >> 6;   \
    if (temp & 0x100)                                                       \
        temp = ~(temp >> 31);                                               \
    dst[x + y*dst_linesize + pos] = temp;                                   \
} while (0)

    for (y = 0; y < height; y++) {
        const uint8_t *d = dither[y];
        for (x = 0; x < width; x += 8) {
            int temp;
            STORE(0);
            STORE(1);
            STORE(2);
            STORE(3);
            STORE(4);
            STORE(5);
            STORE(6);
            STORE(7);
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
          int dst_linesize = 100;
          int src_linesize = 100;
          int width = 100;
          int height = 100;
          int log2_scale = 100;
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
          int _len_dither0 = 8;
          int const** dither = (int const**) malloc(_len_dither0*sizeof(int const*));
          for(int _i0 = 0; _i0 < _len_dither0; _i0++) {
            int _len_dither1 = 8;
            dither[_i0] = (int const*) malloc(_len_dither1*sizeof(int const));
            for(int _i1 = 0; _i1 < _len_dither1; _i1++) {
              dither[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          store_slice_c(dst,src,dst_linesize,src_linesize,width,height,log2_scale,dither);
          free(dst);
          free(src);
          for(int i1 = 0; i1 < _len_dither0; i1++) {
            int _len_dither1 = 8;
              free(dither[i1]);
          }
          free(dither);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dst_linesize = 255;
          int src_linesize = 255;
          int width = 255;
          int height = 255;
          int log2_scale = 255;
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
          int _len_dither0 = 65025;
          int const** dither = (int const**) malloc(_len_dither0*sizeof(int const*));
          for(int _i0 = 0; _i0 < _len_dither0; _i0++) {
            int _len_dither1 = 8;
            dither[_i0] = (int const*) malloc(_len_dither1*sizeof(int const));
            for(int _i1 = 0; _i1 < _len_dither1; _i1++) {
              dither[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          store_slice_c(dst,src,dst_linesize,src_linesize,width,height,log2_scale,dither);
          free(dst);
          free(src);
          for(int i1 = 0; i1 < _len_dither0; i1++) {
            int _len_dither1 = 8;
              free(dither[i1]);
          }
          free(dither);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dst_linesize = 10;
          int src_linesize = 10;
          int width = 10;
          int height = 10;
          int log2_scale = 10;
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
          int _len_dither0 = 100;
          int const** dither = (int const**) malloc(_len_dither0*sizeof(int const*));
          for(int _i0 = 0; _i0 < _len_dither0; _i0++) {
            int _len_dither1 = 8;
            dither[_i0] = (int const*) malloc(_len_dither1*sizeof(int const));
            for(int _i1 = 0; _i1 < _len_dither1; _i1++) {
              dither[_i0][_i1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          store_slice_c(dst,src,dst_linesize,src_linesize,width,height,log2_scale,dither);
          free(dst);
          free(src);
          for(int i1 = 0; i1 < _len_dither0; i1++) {
            int _len_dither1 = 8;
              free(dither[i1]);
          }
          free(dither);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
