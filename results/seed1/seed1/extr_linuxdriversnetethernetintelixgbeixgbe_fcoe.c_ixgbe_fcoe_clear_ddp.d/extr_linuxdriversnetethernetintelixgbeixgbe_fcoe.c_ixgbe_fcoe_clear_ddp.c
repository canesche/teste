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
struct ixgbe_fcoe_ddp {int err; unsigned long udp; scalar_t__ sgc; int /*<<< orphan*/ * sgl; int /*<<< orphan*/ * udl; scalar_t__ len; } ;

/* Variables and functions */

__attribute__((used)) static inline void ixgbe_fcoe_clear_ddp(struct ixgbe_fcoe_ddp *ddp)
{
	ddp->len = 0;
	ddp->err = 1;
	ddp->udl = NULL;
	ddp->udp = 0UL;
	ddp->sgl = NULL;
	ddp->sgc = 0;
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
          int _len_ddp0 = 1;
          struct ixgbe_fcoe_ddp * ddp = (struct ixgbe_fcoe_ddp *) malloc(_len_ddp0*sizeof(struct ixgbe_fcoe_ddp));
          for(int _i0 = 0; _i0 < _len_ddp0; _i0++) {
            ddp[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        ddp[_i0].udp = ((-2 * (next_i()%2)) + 1) * next_i();
        ddp[_i0].sgc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ddp__i0__sgl0 = 1;
          ddp[_i0].sgl = (int *) malloc(_len_ddp__i0__sgl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ddp__i0__sgl0; _j0++) {
            ddp[_i0].sgl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ddp__i0__udl0 = 1;
          ddp[_i0].udl = (int *) malloc(_len_ddp__i0__udl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ddp__i0__udl0; _j0++) {
            ddp[_i0].udl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ddp[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbe_fcoe_clear_ddp(ddp);
          for(int _aux = 0; _aux < _len_ddp0; _aux++) {
          free(ddp[_aux].sgl);
          }
          for(int _aux = 0; _aux < _len_ddp0; _aux++) {
          free(ddp[_aux].udl);
          }
          free(ddp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ddp0 = 65025;
          struct ixgbe_fcoe_ddp * ddp = (struct ixgbe_fcoe_ddp *) malloc(_len_ddp0*sizeof(struct ixgbe_fcoe_ddp));
          for(int _i0 = 0; _i0 < _len_ddp0; _i0++) {
            ddp[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        ddp[_i0].udp = ((-2 * (next_i()%2)) + 1) * next_i();
        ddp[_i0].sgc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ddp__i0__sgl0 = 1;
          ddp[_i0].sgl = (int *) malloc(_len_ddp__i0__sgl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ddp__i0__sgl0; _j0++) {
            ddp[_i0].sgl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ddp__i0__udl0 = 1;
          ddp[_i0].udl = (int *) malloc(_len_ddp__i0__udl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ddp__i0__udl0; _j0++) {
            ddp[_i0].udl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ddp[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbe_fcoe_clear_ddp(ddp);
          for(int _aux = 0; _aux < _len_ddp0; _aux++) {
          free(ddp[_aux].sgl);
          }
          for(int _aux = 0; _aux < _len_ddp0; _aux++) {
          free(ddp[_aux].udl);
          }
          free(ddp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ddp0 = 100;
          struct ixgbe_fcoe_ddp * ddp = (struct ixgbe_fcoe_ddp *) malloc(_len_ddp0*sizeof(struct ixgbe_fcoe_ddp));
          for(int _i0 = 0; _i0 < _len_ddp0; _i0++) {
            ddp[_i0].err = ((-2 * (next_i()%2)) + 1) * next_i();
        ddp[_i0].udp = ((-2 * (next_i()%2)) + 1) * next_i();
        ddp[_i0].sgc = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ddp__i0__sgl0 = 1;
          ddp[_i0].sgl = (int *) malloc(_len_ddp__i0__sgl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ddp__i0__sgl0; _j0++) {
            ddp[_i0].sgl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ddp__i0__udl0 = 1;
          ddp[_i0].udl = (int *) malloc(_len_ddp__i0__udl0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ddp__i0__udl0; _j0++) {
            ddp[_i0].udl[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ddp[_i0].len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ixgbe_fcoe_clear_ddp(ddp);
          for(int _aux = 0; _aux < _len_ddp0; _aux++) {
          free(ddp[_aux].sgl);
          }
          for(int _aux = 0; _aux < _len_ddp0; _aux++) {
          free(ddp[_aux].udl);
          }
          free(ddp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
