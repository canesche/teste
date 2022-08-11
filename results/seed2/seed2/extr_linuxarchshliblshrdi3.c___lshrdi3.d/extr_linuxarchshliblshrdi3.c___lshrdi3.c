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
typedef  struct TYPE_4__   TYPE_2__ ;
typedef  struct TYPE_3__   TYPE_1__ ;

/* Type definitions */
typedef  int word_type ;
struct TYPE_3__ {unsigned int high; unsigned int low; } ;
struct TYPE_4__ {long long ll; TYPE_1__ s; } ;
typedef  TYPE_2__ DWunion ;

/* Variables and functions */

long long __lshrdi3(long long u, word_type b)
{
	DWunion uu, w;
	word_type bm;

	if (b == 0)
		return u;

	uu.ll = u;
	bm = 32 - b;

	if (bm <= 0) {
		w.s.high = 0;
		w.s.low = (unsigned int) uu.s.high >> -bm;
	} else {
		const unsigned int carries = (unsigned int) uu.s.high << bm;

		w.s.high = (unsigned int) uu.s.high >> b;
		w.s.low = ((unsigned int) uu.s.low >> b) | carries;
	}

	return w.ll;
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
          long long u = 100;
          int b = 100;
          long long benchRet = __lshrdi3(u,b);
          printf("%lld\n", benchRet); 
        
        break;
    }
    // big-arr
    case 1:
    {
          long long u = 255;
          int b = 255;
          long long benchRet = __lshrdi3(u,b);
          printf("%lld\n", benchRet); 
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long long u = 10;
          int b = 10;
          long long benchRet = __lshrdi3(u,b);
          printf("%lld\n", benchRet); 
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
