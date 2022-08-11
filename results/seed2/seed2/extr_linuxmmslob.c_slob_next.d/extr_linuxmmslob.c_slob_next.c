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
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int slobidx_t ;
struct TYPE_4__ {int units; } ;
typedef  TYPE_1__ slob_t ;

/* Variables and functions */
 unsigned long PAGE_MASK ; 

__attribute__((used)) static slob_t *slob_next(slob_t *s)
{
	slob_t *base = (slob_t *)((unsigned long)s & PAGE_MASK);
	slobidx_t next;

	if (s[0].units < 0)
		next = -s[0].units;
	else
		next = s[1].units;
	return base+next;
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
          int _len_s0 = 1;
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].units = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = slob_next(s);
          printf("%d\n", (*benchRet).units);
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].units = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = slob_next(s);
          printf("%d\n", (*benchRet).units);
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct TYPE_4__ * s = (struct TYPE_4__ *) malloc(_len_s0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
            s[_i0].units = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct TYPE_4__ * benchRet = slob_next(s);
          printf("%d\n", (*benchRet).units);
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
