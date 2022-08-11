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
typedef  unsigned int UINT ;
typedef  int /*<<< orphan*/  BYTE ;

/* Variables and functions */

__attribute__((used)) static void convert_r5g5_snorm_l6_unorm(const BYTE *src, BYTE *dst, UINT src_row_pitch, UINT src_slice_pitch,
        UINT dst_row_pitch, UINT dst_slice_pitch, UINT width, UINT height, UINT depth)
{
    unsigned int x, y, z;
    unsigned char r_in, g_in, l_in;
    const unsigned short *texel_in;
    unsigned short *texel_out;

    /* Emulating signed 5 bit values with unsigned 5 bit values has some precision problems by design:
     * E.g. the signed input value 0 becomes 16. GL normalizes it to 16 / 31 = 0.516. We convert it
     * back to a signed value by subtracting 0.5 and multiplying by 2.0. The resulting value is
     * ((16 / 31) - 0.5) * 2.0 = 0.032, which is quite different from the intended result 0.000. */
    for (z = 0; z < depth; z++)
    {
        for (y = 0; y < height; y++)
        {
            texel_out = (unsigned short *) (dst + z * dst_slice_pitch + y * dst_row_pitch);
            texel_in = (const unsigned short *)(src + z * src_slice_pitch + y * src_row_pitch);
            for (x = 0; x < width; x++ )
            {
                l_in = (*texel_in & 0xfc00u) >> 10;
                g_in = (*texel_in & 0x03e0u) >> 5;
                r_in = *texel_in & 0x001fu;

                *texel_out = ((r_in + 16) << 11) | (l_in << 5) | (g_in + 16);
                texel_out++;
                texel_in++;
            }
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
          unsigned int src_row_pitch = 100;
          unsigned int src_slice_pitch = 100;
          unsigned int dst_row_pitch = 100;
          unsigned int dst_slice_pitch = 100;
          unsigned int width = 100;
          unsigned int height = 100;
          unsigned int depth = 100;
          int _len_src0 = 1;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_r5g5_snorm_l6_unorm(src,dst,src_row_pitch,src_slice_pitch,dst_row_pitch,dst_slice_pitch,width,height,depth);
          free(src);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int src_row_pitch = 255;
          unsigned int src_slice_pitch = 255;
          unsigned int dst_row_pitch = 255;
          unsigned int dst_slice_pitch = 255;
          unsigned int width = 255;
          unsigned int height = 255;
          unsigned int depth = 255;
          int _len_src0 = 65025;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_r5g5_snorm_l6_unorm(src,dst,src_row_pitch,src_slice_pitch,dst_row_pitch,dst_slice_pitch,width,height,depth);
          free(src);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int src_row_pitch = 10;
          unsigned int src_slice_pitch = 10;
          unsigned int dst_row_pitch = 10;
          unsigned int dst_slice_pitch = 10;
          unsigned int width = 10;
          unsigned int height = 10;
          unsigned int depth = 10;
          int _len_src0 = 100;
          const int * src = (const int *) malloc(_len_src0*sizeof(const int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_r5g5_snorm_l6_unorm(src,dst,src_row_pitch,src_slice_pitch,dst_row_pitch,dst_slice_pitch,width,height,depth);
          free(src);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
