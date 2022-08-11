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
typedef  int u8 ;
typedef  int u32 ;

/* Variables and functions */

void fb_pad_unaligned_buffer(u8 *dst, u32 d_pitch, u8 *src, u32 idx, u32 height,
				u32 shift_high, u32 shift_low, u32 mod)
{
	u8 mask = (u8) (0xfff << shift_high), tmp;
	int i, j;

	for (i = height; i--; ) {
		for (j = 0; j < idx; j++) {
			tmp = dst[j];
			tmp &= mask;
			tmp |= *src >> shift_low;
			dst[j] = tmp;
			tmp = *src << shift_high;
			dst[j+1] = tmp;
			src++;
		}
		tmp = dst[idx];
		tmp &= mask;
		tmp |= *src >> shift_low;
		dst[idx] = tmp;
		if (shift_high < mod) {
			tmp = *src << shift_high;
			dst[idx+1] = tmp;
		}
		src++;
		dst += d_pitch;
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
          int d_pitch = 100;
          int idx = 100;
          int height = 100;
          int shift_high = 100;
          int shift_low = 100;
          int mod = 100;
          int _len_dst0 = 1;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 1;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fb_pad_unaligned_buffer(dst,d_pitch,src,idx,height,shift_high,shift_low,mod);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr
    case 1:
    {
          int d_pitch = 255;
          int idx = 255;
          int height = 255;
          int shift_high = 255;
          int shift_low = 255;
          int mod = 255;
          int _len_dst0 = 65025;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 65025;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fb_pad_unaligned_buffer(dst,d_pitch,src,idx,height,shift_high,shift_low,mod);
          free(dst);
          free(src);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int d_pitch = 10;
          int idx = 10;
          int height = 10;
          int shift_high = 10;
          int shift_low = 10;
          int mod = 10;
          int _len_dst0 = 100;
          int * dst = (int *) malloc(_len_dst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_src0 = 100;
          int * src = (int *) malloc(_len_src0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_src0; _i0++) {
            src[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          fb_pad_unaligned_buffer(dst,d_pitch,src,idx,height,shift_high,shift_low,mod);
          free(dst);
          free(src);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
