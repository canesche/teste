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

__attribute__((used)) static void convert_r32g32_float(const BYTE *src, BYTE *dst, UINT src_row_pitch, UINT src_slice_pitch,
        UINT dst_row_pitch, UINT dst_slice_pitch, UINT width, UINT height, UINT depth)
{
    unsigned int x, y, z;
    const float *Source;
    float *Dest;

    for (z = 0; z < depth; z++)
    {
        for (y = 0; y < height; y++)
        {
            Source = (const float *)(src + z * src_slice_pitch + y * src_row_pitch);
            Dest = (float *) (dst + z * dst_slice_pitch + y * dst_row_pitch);
            for (x = 0; x < width; x++ )
            {
                float green = (*Source++);
                float red = (*Source++);
                Dest[0] = green;
                Dest[1] = red;
                Dest[2] = 1.0f;
                Dest += 3;
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
          convert_r32g32_float(src,dst,src_row_pitch,src_slice_pitch,dst_row_pitch,dst_slice_pitch,width,height,depth);
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
          convert_r32g32_float(src,dst,src_row_pitch,src_slice_pitch,dst_row_pitch,dst_slice_pitch,width,height,depth);
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
          convert_r32g32_float(src,dst,src_row_pitch,src_slice_pitch,dst_row_pitch,dst_slice_pitch,width,height,depth);
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
