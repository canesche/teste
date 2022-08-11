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
typedef  size_t uint16_t ;

/* Variables and functions */

__attribute__((used)) static void apply_lut(const uint16_t *lut, uint16_t *dst, int dsize)
{
    int i;

    for (i = 0; i < dsize; ++i)
        dst[i] = lut[dst[i]];
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
          int dsize = 100;
          int _len_lut0 = 1;
          const unsigned long * lut = (const unsigned long *) malloc(_len_lut0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 1;
          unsigned long * dst = (unsigned long *) malloc(_len_dst0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_lut(lut,dst,dsize);
          free(lut);
          free(dst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int dsize = 255;
          int _len_lut0 = 65025;
          const unsigned long * lut = (const unsigned long *) malloc(_len_lut0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 65025;
          unsigned long * dst = (unsigned long *) malloc(_len_dst0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_lut(lut,dst,dsize);
          free(lut);
          free(dst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int dsize = 10;
          int _len_lut0 = 100;
          const unsigned long * lut = (const unsigned long *) malloc(_len_lut0*sizeof(const unsigned long));
          for(int _i0 = 0; _i0 < _len_lut0; _i0++) {
            lut[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dst0 = 100;
          unsigned long * dst = (unsigned long *) malloc(_len_dst0*sizeof(unsigned long));
          for(int _i0 = 0; _i0 < _len_dst0; _i0++) {
            dst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          apply_lut(lut,dst,dsize);
          free(lut);
          free(dst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
