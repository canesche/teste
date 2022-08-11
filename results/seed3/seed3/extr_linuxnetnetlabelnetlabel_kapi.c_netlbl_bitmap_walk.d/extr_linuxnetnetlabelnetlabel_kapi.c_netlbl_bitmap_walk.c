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
typedef  scalar_t__ u8 ;
typedef  int u32 ;

/* Variables and functions */

int netlbl_bitmap_walk(const unsigned char *bitmap, u32 bitmap_len,
		       u32 offset, u8 state)
{
	u32 bit_spot;
	u32 byte_offset;
	unsigned char bitmask;
	unsigned char byte;

	byte_offset = offset / 8;
	byte = bitmap[byte_offset];
	bit_spot = offset;
	bitmask = 0x80 >> (offset % 8);

	while (bit_spot < bitmap_len) {
		if ((state && (byte & bitmask) == bitmask) ||
		    (state == 0 && (byte & bitmask) == 0))
			return bit_spot;

		if (++bit_spot >= bitmap_len)
			return -1;
		bitmask >>= 1;
		if (bitmask == 0) {
			byte = bitmap[++byte_offset];
			bitmask = 0x80;
		}
	}

	return -1;
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
          int bitmap_len = 100;
          int offset = 100;
          long state = 100;
          int _len_bitmap0 = 1;
          const unsigned char * bitmap = (const unsigned char *) malloc(_len_bitmap0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = netlbl_bitmap_walk(bitmap,bitmap_len,offset,state);
          printf("%d\n", benchRet); 
          free(bitmap);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bitmap_len = 255;
          int offset = 255;
          long state = 255;
          int _len_bitmap0 = 65025;
          const unsigned char * bitmap = (const unsigned char *) malloc(_len_bitmap0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = netlbl_bitmap_walk(bitmap,bitmap_len,offset,state);
          printf("%d\n", benchRet); 
          free(bitmap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bitmap_len = 10;
          int offset = 10;
          long state = 10;
          int _len_bitmap0 = 100;
          const unsigned char * bitmap = (const unsigned char *) malloc(_len_bitmap0*sizeof(const unsigned char));
          for(int _i0 = 0; _i0 < _len_bitmap0; _i0++) {
            bitmap[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = netlbl_bitmap_walk(bitmap,bitmap_len,offset,state);
          printf("%d\n", benchRet); 
          free(bitmap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
