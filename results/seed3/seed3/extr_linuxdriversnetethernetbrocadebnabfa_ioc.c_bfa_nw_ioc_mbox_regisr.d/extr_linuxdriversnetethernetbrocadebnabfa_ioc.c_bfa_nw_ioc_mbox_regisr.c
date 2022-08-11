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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct bfa_ioc_mbox_mod {TYPE_1__* mbhdlr; } ;
struct bfa_ioc {struct bfa_ioc_mbox_mod mbox_mod; } ;
typedef  enum bfi_mclass { ____Placeholder_bfi_mclass } bfi_mclass ;
typedef  int /*<<< orphan*/  bfa_ioc_mbox_mcfunc_t ;
struct TYPE_2__ {void* cbarg; int /*<<< orphan*/  cbfn; } ;

/* Variables and functions */

void
bfa_nw_ioc_mbox_regisr(struct bfa_ioc *ioc, enum bfi_mclass mc,
		    bfa_ioc_mbox_mcfunc_t cbfn, void *cbarg)
{
	struct bfa_ioc_mbox_mod *mod = &ioc->mbox_mod;

	mod->mbhdlr[mc].cbfn	= cbfn;
	mod->mbhdlr[mc].cbarg = cbarg;
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
          enum bfi_mclass mc = 0;
          int cbfn = 100;
          int _len_ioc0 = 1;
          struct bfa_ioc * ioc = (struct bfa_ioc *) malloc(_len_ioc0*sizeof(struct bfa_ioc));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              int _len_ioc__i0__mbox_mod_mbhdlr0 = 1;
          ioc[_i0].mbox_mod.mbhdlr = (struct TYPE_2__ *) malloc(_len_ioc__i0__mbox_mod_mbhdlr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ioc__i0__mbox_mod_mbhdlr0; _j0++) {
            ioc[_i0].mbox_mod.mbhdlr->cbfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * cbarg;
          bfa_nw_ioc_mbox_regisr(ioc,mc,cbfn,cbarg);
          free(ioc);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum bfi_mclass mc = 0;
          int cbfn = 255;
          int _len_ioc0 = 65025;
          struct bfa_ioc * ioc = (struct bfa_ioc *) malloc(_len_ioc0*sizeof(struct bfa_ioc));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              int _len_ioc__i0__mbox_mod_mbhdlr0 = 1;
          ioc[_i0].mbox_mod.mbhdlr = (struct TYPE_2__ *) malloc(_len_ioc__i0__mbox_mod_mbhdlr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ioc__i0__mbox_mod_mbhdlr0; _j0++) {
            ioc[_i0].mbox_mod.mbhdlr->cbfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * cbarg;
          bfa_nw_ioc_mbox_regisr(ioc,mc,cbfn,cbarg);
          free(ioc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum bfi_mclass mc = 0;
          int cbfn = 10;
          int _len_ioc0 = 100;
          struct bfa_ioc * ioc = (struct bfa_ioc *) malloc(_len_ioc0*sizeof(struct bfa_ioc));
          for(int _i0 = 0; _i0 < _len_ioc0; _i0++) {
              int _len_ioc__i0__mbox_mod_mbhdlr0 = 1;
          ioc[_i0].mbox_mod.mbhdlr = (struct TYPE_2__ *) malloc(_len_ioc__i0__mbox_mod_mbhdlr0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ioc__i0__mbox_mod_mbhdlr0; _j0++) {
            ioc[_i0].mbox_mod.mbhdlr->cbfn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          void * cbarg;
          bfa_nw_ioc_mbox_regisr(ioc,mc,cbfn,cbarg);
          free(ioc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
