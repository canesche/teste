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
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
typedef  TYPE_2__* kauth_scope_t ;
typedef  TYPE_3__* kauth_listener_t ;
struct TYPE_8__ {int /*<<< orphan*/  kl_idata; int /*<<< orphan*/  kl_callback; } ;
struct TYPE_7__ {int /*<<< orphan*/  ks_flags; TYPE_1__* ks_listeners; } ;
struct TYPE_6__ {TYPE_3__* kll_listenerp; int /*<<< orphan*/  kll_idata; int /*<<< orphan*/  kll_callback; } ;

/* Variables and functions */
 int ENOSPC ; 
 int KAUTH_SCOPE_MAX_LISTENERS ; 
 int /*<<< orphan*/  KS_F_HAS_LISTENERS ; 

__attribute__((used)) static int kauth_add_callback_to_scope(kauth_scope_t sp, kauth_listener_t klp)
{
	int		i;

	for (i = 0; i < KAUTH_SCOPE_MAX_LISTENERS; i++) {
		if (sp->ks_listeners[i].kll_listenerp == NULL) {
			sp->ks_listeners[i].kll_callback = klp->kl_callback;
			sp->ks_listeners[i].kll_idata = klp->kl_idata;
			sp->ks_listeners[i].kll_listenerp = klp;
			sp->ks_flags |= KS_F_HAS_LISTENERS;
			return(0);
		}
	}
	return(ENOSPC);
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
          int _len_sp0 = 1;
          struct TYPE_7__ * sp = (struct TYPE_7__ *) malloc(_len_sp0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].ks_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp__i0__ks_listeners0 = 1;
          sp[_i0].ks_listeners = (struct TYPE_6__ *) malloc(_len_sp__i0__ks_listeners0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_sp__i0__ks_listeners0; _j0++) {
              int _len_sp__i0__ks_listeners_kll_listenerp0 = 1;
          sp[_i0].ks_listeners->kll_listenerp = (struct TYPE_8__ *) malloc(_len_sp__i0__ks_listeners_kll_listenerp0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_sp__i0__ks_listeners_kll_listenerp0; _j0++) {
            sp[_i0].ks_listeners->kll_listenerp->kl_idata = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].ks_listeners->kll_listenerp->kl_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sp[_i0].ks_listeners->kll_idata = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].ks_listeners->kll_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_klp0 = 1;
          struct TYPE_8__ * klp = (struct TYPE_8__ *) malloc(_len_klp0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_klp0; _i0++) {
            klp[_i0].kl_idata = ((-2 * (next_i()%2)) + 1) * next_i();
        klp[_i0].kl_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kauth_add_callback_to_scope(sp,klp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].ks_listeners);
          }
          free(sp);
          free(klp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_sp0 = 65025;
          struct TYPE_7__ * sp = (struct TYPE_7__ *) malloc(_len_sp0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].ks_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp__i0__ks_listeners0 = 1;
          sp[_i0].ks_listeners = (struct TYPE_6__ *) malloc(_len_sp__i0__ks_listeners0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_sp__i0__ks_listeners0; _j0++) {
              int _len_sp__i0__ks_listeners_kll_listenerp0 = 1;
          sp[_i0].ks_listeners->kll_listenerp = (struct TYPE_8__ *) malloc(_len_sp__i0__ks_listeners_kll_listenerp0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_sp__i0__ks_listeners_kll_listenerp0; _j0++) {
            sp[_i0].ks_listeners->kll_listenerp->kl_idata = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].ks_listeners->kll_listenerp->kl_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sp[_i0].ks_listeners->kll_idata = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].ks_listeners->kll_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_klp0 = 65025;
          struct TYPE_8__ * klp = (struct TYPE_8__ *) malloc(_len_klp0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_klp0; _i0++) {
            klp[_i0].kl_idata = ((-2 * (next_i()%2)) + 1) * next_i();
        klp[_i0].kl_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kauth_add_callback_to_scope(sp,klp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].ks_listeners);
          }
          free(sp);
          free(klp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_sp0 = 100;
          struct TYPE_7__ * sp = (struct TYPE_7__ *) malloc(_len_sp0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_sp0; _i0++) {
            sp[_i0].ks_flags = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_sp__i0__ks_listeners0 = 1;
          sp[_i0].ks_listeners = (struct TYPE_6__ *) malloc(_len_sp__i0__ks_listeners0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_sp__i0__ks_listeners0; _j0++) {
              int _len_sp__i0__ks_listeners_kll_listenerp0 = 1;
          sp[_i0].ks_listeners->kll_listenerp = (struct TYPE_8__ *) malloc(_len_sp__i0__ks_listeners_kll_listenerp0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_sp__i0__ks_listeners_kll_listenerp0; _j0++) {
            sp[_i0].ks_listeners->kll_listenerp->kl_idata = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].ks_listeners->kll_listenerp->kl_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        sp[_i0].ks_listeners->kll_idata = ((-2 * (next_i()%2)) + 1) * next_i();
        sp[_i0].ks_listeners->kll_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_klp0 = 100;
          struct TYPE_8__ * klp = (struct TYPE_8__ *) malloc(_len_klp0*sizeof(struct TYPE_8__));
          for(int _i0 = 0; _i0 < _len_klp0; _i0++) {
            klp[_i0].kl_idata = ((-2 * (next_i()%2)) + 1) * next_i();
        klp[_i0].kl_callback = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = kauth_add_callback_to_scope(sp,klp);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_sp0; _aux++) {
          free(sp[_aux].ks_listeners);
          }
          free(sp);
          free(klp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
