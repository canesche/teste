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

/* Variables and functions */

__attribute__((used)) static void blend_pixel(uint8_t *dst, unsigned src, unsigned alpha,
                        const uint8_t *mask, int mask_linesize, int l2depth,
                        unsigned w, unsigned h, unsigned shift, unsigned xm0)
{
    unsigned xm, x, y, t = 0;
    unsigned xmshf = 3 - l2depth;
    unsigned xmmod = 7 >> l2depth;
    unsigned mbits = (1 << (1 << l2depth)) - 1;
    unsigned mmult = 255 / mbits;

    for (y = 0; y < h; y++) {
        xm = xm0;
        for (x = 0; x < w; x++) {
            t += ((mask[xm >> xmshf] >> ((~xm & xmmod) << l2depth)) & mbits)
                 * mmult;
            xm++;
        }
        mask += mask_linesize;
    }
    alpha = (t >> shift) * alpha;
    *dst = ((0x1010101 - alpha) * *dst + alpha * src) >> 24;
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
          unsigned int src = 100;
          unsigned int alpha = 100;
          int mask_linesize = 100;
          int l2depth = 100;
          unsigned int w = 100;
          unsigned int h = 100;
          unsigned int shift = 100;
          unsigned int xm0 = 100;
          int _len_dst0 = 1;
          unsigned int * dst = (unsigned int *) malloc(_len_dst0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 1;
          const unsigned int * mask = (const unsigned int *) malloc(_len_mask0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blend_pixel(dst,src,alpha,mask,mask_linesize,l2depth,w,h,shift,xm0);
          free(dst);
          free(mask);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int src = 255;
          unsigned int alpha = 255;
          int mask_linesize = 255;
          int l2depth = 255;
          unsigned int w = 255;
          unsigned int h = 255;
          unsigned int shift = 255;
          unsigned int xm0 = 255;
          int _len_dst0 = 65025;
          unsigned int * dst = (unsigned int *) malloc(_len_dst0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 65025;
          const unsigned int * mask = (const unsigned int *) malloc(_len_mask0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blend_pixel(dst,src,alpha,mask,mask_linesize,l2depth,w,h,shift,xm0);
          free(dst);
          free(mask);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int src = 10;
          unsigned int alpha = 10;
          int mask_linesize = 10;
          int l2depth = 10;
          unsigned int w = 10;
          unsigned int h = 10;
          unsigned int shift = 10;
          unsigned int xm0 = 10;
          int _len_dst0 = 100;
          unsigned int * dst = (unsigned int *) malloc(_len_dst0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mask0 = 100;
          const unsigned int * mask = (const unsigned int *) malloc(_len_mask0*sizeof(const unsigned int));
          for(int _i0 = 0; _i0 < _len_mask0; _i0++) {
            mask[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          blend_pixel(dst,src,alpha,mask,mask_linesize,l2depth,w,h,shift,xm0);
          free(dst);
          free(mask);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
