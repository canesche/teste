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
struct TYPE_3__ {TYPE_2__* dyn; scalar_t__ dyncnt; } ;
struct pf_addr_wrap {scalar_t__ type; TYPE_1__ p; } ;
struct TYPE_4__ {scalar_t__ pfid_acnt6; scalar_t__ pfid_acnt4; int /*<<< orphan*/ * pfid_kif; } ;

/* Variables and functions */
 scalar_t__ PF_ADDR_DYNIFTL ; 

void
pfi_dynaddr_copyout(struct pf_addr_wrap *aw)
{
	if (aw->type != PF_ADDR_DYNIFTL || aw->p.dyn == NULL ||
	    aw->p.dyn->pfid_kif == NULL)
		return;
	aw->p.dyncnt = aw->p.dyn->pfid_acnt4 + aw->p.dyn->pfid_acnt6;
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
          int _len_aw0 = 1;
          struct pf_addr_wrap * aw = (struct pf_addr_wrap *) malloc(_len_aw0*sizeof(struct pf_addr_wrap));
          for(int _i0 = 0; _i0 < _len_aw0; _i0++) {
            aw[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aw__i0__p_dyn0 = 1;
          aw[_i0].p.dyn = (struct TYPE_4__ *) malloc(_len_aw__i0__p_dyn0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_aw__i0__p_dyn0; _j0++) {
            aw[_i0].p.dyn->pfid_acnt6 = ((-2 * (next_i()%2)) + 1) * next_i();
        aw[_i0].p.dyn->pfid_acnt4 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aw__i0__p_dyn_pfid_kif0 = 1;
          aw[_i0].p.dyn->pfid_kif = (int *) malloc(_len_aw__i0__p_dyn_pfid_kif0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aw__i0__p_dyn_pfid_kif0; _j0++) {
            aw[_i0].p.dyn->pfid_kif[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        aw[_i0].p.dyncnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pfi_dynaddr_copyout(aw);
          free(aw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_aw0 = 65025;
          struct pf_addr_wrap * aw = (struct pf_addr_wrap *) malloc(_len_aw0*sizeof(struct pf_addr_wrap));
          for(int _i0 = 0; _i0 < _len_aw0; _i0++) {
            aw[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aw__i0__p_dyn0 = 1;
          aw[_i0].p.dyn = (struct TYPE_4__ *) malloc(_len_aw__i0__p_dyn0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_aw__i0__p_dyn0; _j0++) {
            aw[_i0].p.dyn->pfid_acnt6 = ((-2 * (next_i()%2)) + 1) * next_i();
        aw[_i0].p.dyn->pfid_acnt4 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aw__i0__p_dyn_pfid_kif0 = 1;
          aw[_i0].p.dyn->pfid_kif = (int *) malloc(_len_aw__i0__p_dyn_pfid_kif0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aw__i0__p_dyn_pfid_kif0; _j0++) {
            aw[_i0].p.dyn->pfid_kif[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        aw[_i0].p.dyncnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pfi_dynaddr_copyout(aw);
          free(aw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_aw0 = 100;
          struct pf_addr_wrap * aw = (struct pf_addr_wrap *) malloc(_len_aw0*sizeof(struct pf_addr_wrap));
          for(int _i0 = 0; _i0 < _len_aw0; _i0++) {
            aw[_i0].type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aw__i0__p_dyn0 = 1;
          aw[_i0].p.dyn = (struct TYPE_4__ *) malloc(_len_aw__i0__p_dyn0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_aw__i0__p_dyn0; _j0++) {
            aw[_i0].p.dyn->pfid_acnt6 = ((-2 * (next_i()%2)) + 1) * next_i();
        aw[_i0].p.dyn->pfid_acnt4 = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_aw__i0__p_dyn_pfid_kif0 = 1;
          aw[_i0].p.dyn->pfid_kif = (int *) malloc(_len_aw__i0__p_dyn_pfid_kif0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_aw__i0__p_dyn_pfid_kif0; _j0++) {
            aw[_i0].p.dyn->pfid_kif[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
        aw[_i0].p.dyncnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pfi_dynaddr_copyout(aw);
          free(aw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
