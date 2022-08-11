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
typedef  int /*<<< orphan*/  u8 ;
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static inline void memmove32_col(void *dst, void *src, u32 mask, u32 h, u32 bytes)
{
	u32 *s, *d, v;

        s = src;
        d = dst;
        do {
                v = (*s++ & mask) | (*d  & ~mask);
                *d++ = v;
#if BPL > 2
                v = (*s++ & mask) | (*d  & ~mask);
                *d++ = v;
#endif
#if BPL > 4
                v = (*s++ & mask) | (*d  & ~mask);
                *d++ = v;
                v = (*s++ & mask) | (*d  & ~mask);
                *d++ = v;
#endif
                d = (u32 *)((u8 *)d + bytes);
                s = (u32 *)((u8 *)s + bytes);
        } while (--h);
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
          int mask = 100;
          int h = 100;
          int bytes = 100;
          void * dst;
          void * src;
          memmove32_col(dst,src,mask,h,bytes);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mask = 255;
          int h = 255;
          int bytes = 255;
          void * dst;
          void * src;
          memmove32_col(dst,src,mask,h,bytes);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mask = 10;
          int h = 10;
          int bytes = 10;
          void * dst;
          void * src;
          memmove32_col(dst,src,mask,h,bytes);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
