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
struct TYPE_4__ {TYPE_1__* rsphdlr; } ;
struct bfa_msgq {TYPE_2__ rspq; } ;
typedef  enum bfi_mclass { ____Placeholder_bfi_mclass } bfi_mclass ;
typedef  int /*<<< orphan*/  bfa_msgq_mcfunc_t ;
struct TYPE_3__ {void* cbarg; int /*<<< orphan*/  cbfn; } ;

/* Variables and functions */

void
bfa_msgq_regisr(struct bfa_msgq *msgq, enum bfi_mclass mc,
		bfa_msgq_mcfunc_t cbfn, void *cbarg)
{
	msgq->rspq.rsphdlr[mc].cbfn	= cbfn;
	msgq->rspq.rsphdlr[mc].cbarg	= cbarg;
}


// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // big-arr
    case 1:
    {
          enum bfi_mclass mc = 0;
          int cbfn = 255;
          int _len_msgq0 = 65025;
          struct bfa_msgq * msgq = (struct bfa_msgq *) malloc(_len_msgq0*sizeof(struct bfa_msgq));
          for(int _i0 = 0; _i0 < _len_msgq0; _i0++) {
              int _len_msgq__i0__rspq_rsphdlr0 = 1;
          msgq[_i0].rspq.rsphdlr = (struct TYPE_3__ *) malloc(_len_msgq__i0__rspq_rsphdlr0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_msgq__i0__rspq_rsphdlr0; _j0++) {
            msgq[_i0].rspq.rsphdlr->cbfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * cbarg;
          bfa_msgq_regisr(msgq,mc,cbfn,cbarg);
          free(msgq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum bfi_mclass mc = 0;
          int cbfn = 10;
          int _len_msgq0 = 100;
          struct bfa_msgq * msgq = (struct bfa_msgq *) malloc(_len_msgq0*sizeof(struct bfa_msgq));
          for(int _i0 = 0; _i0 < _len_msgq0; _i0++) {
              int _len_msgq__i0__rspq_rsphdlr0 = 1;
          msgq[_i0].rspq.rsphdlr = (struct TYPE_3__ *) malloc(_len_msgq__i0__rspq_rsphdlr0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_msgq__i0__rspq_rsphdlr0; _j0++) {
            msgq[_i0].rspq.rsphdlr->cbfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * cbarg;
          bfa_msgq_regisr(msgq,mc,cbfn,cbarg);
          free(msgq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
