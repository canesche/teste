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
typedef  int int32_t ;

/* Variables and functions */

__attribute__((used)) static void rct_int(void *_src0, void *_src1, void *_src2, int csize)
{
    int32_t *src0 = _src0, *src1 = _src1, *src2 = _src2;
    int32_t i0, i1, i2;
    int i;

    for (i = 0; i < csize; i++) {
        i1 = *src0 - (*src2 + *src1 >> 2);
        i0 = i1 + *src2;
        i2 = i1 + *src1;
        *src0++ = i0;
        *src1++ = i1;
        *src2++ = i2;
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
          int csize = 100;
          void * _src0;
          void * _src1;
          void * _src2;
          rct_int(_src0,_src1,_src2,csize);
        
        break;
    }
    // big-arr
    case 1:
    {
          int csize = 255;
          void * _src0;
          void * _src1;
          void * _src2;
          rct_int(_src0,_src1,_src2,csize);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int csize = 10;
          void * _src0;
          void * _src1;
          void * _src2;
          rct_int(_src0,_src1,_src2,csize);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
