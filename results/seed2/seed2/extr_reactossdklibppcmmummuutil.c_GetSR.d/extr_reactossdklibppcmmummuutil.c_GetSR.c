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

/* Variables and functions */

inline int GetSR(int n) {
    register int res = 0;
    switch( n ) {
    case 0:
	__asm__("mfsr %0,0" : "=r" (res));
	break;
    case 1:
	__asm__("mfsr %0,1" : "=r" (res));
	break;
    case 2:
	__asm__("mfsr %0,2" : "=r" (res));
	break;
    case 3:
	__asm__("mfsr %0,3" : "=r" (res));
	break;
    case 4:
	__asm__("mfsr %0,4" : "=r" (res));
	break;
    case 5:
	__asm__("mfsr %0,5" : "=r" (res));
	break;
    case 6:
	__asm__("mfsr %0,6" : "=r" (res));
	break;
    case 7:
	__asm__("mfsr %0,7" : "=r" (res));
	break;
    case 8:
	__asm__("mfsr %0,8" : "=r" (res));
	break;
    case 9:
	__asm__("mfsr %0,9" : "=r" (res));
	break;
    case 10:
	__asm__("mfsr %0,10" : "=r" (res));
	break;
    case 11:
	__asm__("mfsr %0,11" : "=r" (res));
	break;
    case 12:
	__asm__("mfsr %0,12" : "=r" (res));
	break;
    case 13:
	__asm__("mfsr %0,13" : "=r" (res));
	break;
    case 14:
	__asm__("mfsr %0,14" : "=r" (res));
	break;
    case 15:
	__asm__("mfsr %0,15" : "=r" (res));
	break;
    }
    return res;
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
          int n = 100;
          int benchRet = GetSR(n);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int benchRet = GetSR(n);
          printf("%d\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int benchRet = GetSR(n);
          printf("%d\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
