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

inline void SetSR(int n, int val) {
    switch( n ) {
    case 0:
	__asm__("mtsr 0,%0" : : "r" (val));
	break;
    case 1:
	__asm__("mtsr 1,%0" : : "r" (val));
	break;
    case 2:
	__asm__("mtsr 2,%0" : : "r" (val));
	break;
    case 3:
	__asm__("mtsr 3,%0" : : "r" (val));
	break;
    case 4:
	__asm__("mtsr 4,%0" : : "r" (val));
	break;
    case 5:
	__asm__("mtsr 5,%0" : : "r" (val));
	break;
    case 6:
	__asm__("mtsr 6,%0" : : "r" (val));
	break;
    case 7:
	__asm__("mtsr 7,%0" : : "r" (val));
	break;
    case 8:
	__asm__("mtsr 8,%0" : : "r" (val));
	break;
    case 9:
	__asm__("mtsr 9,%0" : : "r" (val));
	break;
    case 10:
	__asm__("mtsr 10,%0" : : "r" (val));
	break;
    case 11:
	__asm__("mtsr 11,%0" : : "r" (val));
	break;
    case 12:
	__asm__("mtsr 12,%0" : : "r" (val));
	break;
    case 13:
	__asm__("mtsr 13,%0" : : "r" (val));
	break;
    case 14:
	__asm__("mtsr 14,%0" : : "r" (val));
	break;
    case 15:
	__asm__("mtsr 15,%0" : : "r" (val));
	break;
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
          int n = 100;
          int val = 100;
          SetSR(n,val);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int val = 255;
          SetSR(n,val);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int val = 10;
          SetSR(n,val);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
