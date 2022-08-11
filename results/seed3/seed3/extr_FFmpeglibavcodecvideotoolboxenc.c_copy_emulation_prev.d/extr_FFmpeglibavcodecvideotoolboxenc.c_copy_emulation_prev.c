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
typedef  int ssize_t ;

/* Variables and functions */

__attribute__((used)) static int copy_emulation_prev(const uint8_t *src,
                               size_t         src_size,
                               uint8_t       *dst,
                               ssize_t        dst_offset,
                               size_t         dst_size)
{
    int zeros = 0;
    int wrote_bytes;
    uint8_t* dst_start;
    uint8_t* dst_end = dst + dst_size;
    const uint8_t* src_end = src + src_size;
    int start_at = dst_offset > 2 ? dst_offset - 2 : 0;
    int i;
    for (i = start_at; i < dst_offset && i < dst_size; i++) {
        if (!dst[i])
            zeros++;
        else
            zeros = 0;
    }

    dst += dst_offset;
    dst_start = dst;
    for (; src < src_end; src++, dst++) {
        if (zeros == 2) {
            int insert_ep3_byte = *src <= 3;
            if (insert_ep3_byte) {
                if (dst < dst_end)
                    *dst = 3;
                dst++;
            }

            zeros = 0;
        }

        if (dst < dst_end)
            *dst = *src;

        if (!*src)
            zeros++;
        else
            zeros = 0;
    }

    wrote_bytes = dst - dst_start;

    if (dst > dst_end)
        return -wrote_bytes;

    return wrote_bytes;
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
          unsigned long src_size = 100;
          int dst_offset = 100;
          unsigned long dst_size = 100;
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
          int benchRet = copy_emulation_prev(src,src_size,dst,dst_offset,dst_size);
          printf("%d\n", benchRet); 
          free(src);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long src_size = 255;
          int dst_offset = 255;
          unsigned long dst_size = 255;
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
          int benchRet = copy_emulation_prev(src,src_size,dst,dst_offset,dst_size);
          printf("%d\n", benchRet); 
          free(src);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long src_size = 10;
          int dst_offset = 10;
          unsigned long dst_size = 10;
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
          int benchRet = copy_emulation_prev(src,src_size,dst,dst_offset,dst_size);
          printf("%d\n", benchRet); 
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
