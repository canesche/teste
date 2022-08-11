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
typedef  scalar_t__ uint8_t ;

/* Variables and functions */
 int AVERROR_INVALIDDATA ; 
 scalar_t__ const MAX_ELEMENT ; 
 scalar_t__ const MIN_ELEMENT ; 
 int NB_ELEMENTS ; 

__attribute__((used)) static int ascii2index(const uint8_t *cpixel, int cpp)
{
    const uint8_t *p = cpixel;
    int n = 0, m = 1, i;

    for (i = 0; i < cpp; i++) {
        if (*p < MIN_ELEMENT || *p > MAX_ELEMENT)
            return AVERROR_INVALIDDATA;
        n += (*p++ - MIN_ELEMENT) * m;
        m *= NB_ELEMENTS;
    }
    return n;
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
          int cpp = 100;
          int _len_cpixel0 = 1;
          const long * cpixel = (const long *) malloc(_len_cpixel0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_cpixel0; _i0++) {
            cpixel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ascii2index(cpixel,cpp);
          printf("%d\n", benchRet); 
          free(cpixel);
        
        break;
    }
    // big-arr
    case 1:
    {
          int cpp = 255;
          int _len_cpixel0 = 65025;
          const long * cpixel = (const long *) malloc(_len_cpixel0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_cpixel0; _i0++) {
            cpixel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ascii2index(cpixel,cpp);
          printf("%d\n", benchRet); 
          free(cpixel);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int cpp = 10;
          int _len_cpixel0 = 100;
          const long * cpixel = (const long *) malloc(_len_cpixel0*sizeof(const long));
          for(int _i0 = 0; _i0 < _len_cpixel0; _i0++) {
            cpixel[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ascii2index(cpixel,cpp);
          printf("%d\n", benchRet); 
          free(cpixel);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
