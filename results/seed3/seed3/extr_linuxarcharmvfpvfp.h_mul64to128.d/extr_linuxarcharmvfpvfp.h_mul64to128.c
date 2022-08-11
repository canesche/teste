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
typedef  int u64 ;
typedef  int u32 ;

/* Variables and functions */

__attribute__((used)) static inline void mul64to128(u64 *resh, u64 *resl, u64 n, u64 m)
{
	u32 nh, nl, mh, ml;
	u64 rh, rma, rmb, rl;

	nl = n;
	ml = m;
	rl = (u64)nl * ml;

	nh = n >> 32;
	rma = (u64)nh * ml;

	mh = m >> 32;
	rmb = (u64)nl * mh;
	rma += rmb;

	rh = (u64)nh * mh;
	rh += ((u64)(rma < rmb) << 32) + (rma >> 32);

	rma <<= 32;
	rl += rma;
	rh += (rl < rma);

	*resl = rl;
	*resh = rh;
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
          int m = 100;
          int _len_resh0 = 1;
          int * resh = (int *) malloc(_len_resh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_resh0; _i0++) {
            resh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resl0 = 1;
          int * resl = (int *) malloc(_len_resl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_resl0; _i0++) {
            resl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mul64to128(resh,resl,n,m);
          free(resh);
          free(resl);
        
        break;
    }
    // big-arr
    case 1:
    {
          int n = 255;
          int m = 255;
          int _len_resh0 = 65025;
          int * resh = (int *) malloc(_len_resh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_resh0; _i0++) {
            resh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resl0 = 65025;
          int * resl = (int *) malloc(_len_resl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_resl0; _i0++) {
            resl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mul64to128(resh,resl,n,m);
          free(resh);
          free(resl);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int n = 10;
          int m = 10;
          int _len_resh0 = 100;
          int * resh = (int *) malloc(_len_resh0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_resh0; _i0++) {
            resh[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_resl0 = 100;
          int * resl = (int *) malloc(_len_resl0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_resl0; _i0++) {
            resl[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mul64to128(resh,resl,n,m);
          free(resh);
          free(resl);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
