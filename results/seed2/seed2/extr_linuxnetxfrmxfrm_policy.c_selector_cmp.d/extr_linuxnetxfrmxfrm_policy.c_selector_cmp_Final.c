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
typedef  scalar_t__ u32 ;
struct xfrm_selector {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline int selector_cmp(struct xfrm_selector *s1, struct xfrm_selector *s2)
{
	u32 *p1 = (u32 *) s1;
	u32 *p2 = (u32 *) s2;
	int len = sizeof(struct xfrm_selector) / sizeof(u32);
	int i;

	for (i = 0; i < len; i++) {
		if (p1[i] != p2[i])
			return 1;
	}

	return 0;
}


// ------------------------------------------------------------------------- //




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
          int _len_s10 = 1;
          struct xfrm_selector * s1 = (struct xfrm_selector *) malloc(_len_s10*sizeof(struct xfrm_selector));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 1;
          struct xfrm_selector * s2 = (struct xfrm_selector *) malloc(_len_s20*sizeof(struct xfrm_selector));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = selector_cmp(s1,s2);
          printf("%d\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s10 = 65025;
          struct xfrm_selector * s1 = (struct xfrm_selector *) malloc(_len_s10*sizeof(struct xfrm_selector));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 65025;
          struct xfrm_selector * s2 = (struct xfrm_selector *) malloc(_len_s20*sizeof(struct xfrm_selector));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = selector_cmp(s1,s2);
          printf("%d\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s10 = 100;
          struct xfrm_selector * s1 = (struct xfrm_selector *) malloc(_len_s10*sizeof(struct xfrm_selector));
          for(int _i0 = 0; _i0 < _len_s10; _i0++) {
            s1[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_s20 = 100;
          struct xfrm_selector * s2 = (struct xfrm_selector *) malloc(_len_s20*sizeof(struct xfrm_selector));
          for(int _i0 = 0; _i0 < _len_s20; _i0++) {
            s2[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = selector_cmp(s1,s2);
          printf("%d\n", benchRet); 
          free(s1);
          free(s2);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
