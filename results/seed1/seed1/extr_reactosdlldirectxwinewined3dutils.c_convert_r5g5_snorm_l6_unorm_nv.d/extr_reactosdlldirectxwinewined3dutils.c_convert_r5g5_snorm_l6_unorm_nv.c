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
typedef  unsigned char BYTE ;

/* Variables and functions */

__attribute__((used)) static void convert_r5g5_snorm_l6_unorm_nv(const BYTE *src, BYTE *dst, UINT src_row_pitch, UINT src_slice_pitch,
        UINT dst_row_pitch, UINT dst_slice_pitch, UINT width, UINT height, UINT depth)
{
    unsigned int x, y, z;
    unsigned char *texel_out, ds_out, dt_out, r_in, g_in, l_in;
    const unsigned short *texel_in;

    /* This makes the gl surface bigger(24 bit instead of 16), but it works with
     * fixed function and shaders without further conversion once the surface is
     * loaded.
     *
     * The difference between this function and convert_r5g5_snorm_l6_unorm_ext
     * is that convert_r5g5_snorm_l6_unorm_ext creates a 32 bit XRGB texture and
     * this function creates a 24 bit DSDT_MAG texture. Trying to load a DSDT_MAG
     * internal with a 32 bit DSDT_MAG_INTENSITY or DSDT_MAG_VIB format fails. */
    for (z = 0; z < depth; z++)
    {
        for (y = 0; y < height; y++)
        {
            texel_in = (const unsigned short *)(src + z * src_slice_pitch + y * src_row_pitch);
            texel_out = dst + z * dst_slice_pitch + y * dst_row_pitch;
            for (x = 0; x < width; x++ )
            {
                l_in = (*texel_in & 0xfc00u) >> 10;
                g_in = (*texel_in & 0x03e0u) >> 5;
                r_in = *texel_in & 0x001fu;

                ds_out = r_in << 3;
                if (!(r_in & 0x10)) /* r > 0 */
                    ds_out |= r_in >> 1;

                dt_out = g_in << 3;
                if (!(g_in & 0x10)) /* g > 0 */
                    dt_out |= g_in >> 1;

                texel_out[0] = ds_out;
                texel_out[1] = dt_out;
                texel_out[2] = l_in << 1 | l_in >> 5;

                texel_out += 3;
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
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          unsigned char * dst = (unsigned char *) malloc(_len_dst0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_r5g5_snorm_l6_unorm_nv(src,dst,src_row_pitch,src_slice_pitch,dst_row_pitch,dst_slice_pitch,width,height,depth);
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
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          unsigned char * dst = (unsigned char *) malloc(_len_dst0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_r5g5_snorm_l6_unorm_nv(src,dst,src_row_pitch,src_slice_pitch,dst_row_pitch,dst_slice_pitch,width,height,depth);
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
          const unsigned char * src = (const unsigned char *) malloc(_len_src0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          unsigned char * dst = (unsigned char *) malloc(_len_dst0*sizeof(unsigned char));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          convert_r5g5_snorm_l6_unorm_nv(src,dst,src_row_pitch,src_slice_pitch,dst_row_pitch,dst_slice_pitch,width,height,depth);
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
