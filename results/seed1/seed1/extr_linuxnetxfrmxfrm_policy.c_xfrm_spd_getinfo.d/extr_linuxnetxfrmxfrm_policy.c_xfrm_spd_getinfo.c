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
struct xfrmk_spdinfo {int /*<<< orphan*/  spdhmcnt; int /*<<< orphan*/  spdhcnt; int /*<<< orphan*/  fwdscnt; int /*<<< orphan*/  outscnt; int /*<<< orphan*/  inscnt; int /*<<< orphan*/  fwdcnt; int /*<<< orphan*/  outcnt; int /*<<< orphan*/  incnt; } ;
struct TYPE_2__ {int /*<<< orphan*/  policy_idx_hmask; int /*<<< orphan*/ * policy_count; } ;
struct net {TYPE_1__ xfrm; } ;

/* Variables and functions */
 size_t XFRM_POLICY_FWD ; 
 size_t XFRM_POLICY_IN ; 
 size_t XFRM_POLICY_MAX ; 
 size_t XFRM_POLICY_OUT ; 
 int /*<<< orphan*/  xfrm_policy_hashmax ; 

void xfrm_spd_getinfo(struct net *net, struct xfrmk_spdinfo *si)
{
	si->incnt = net->xfrm.policy_count[XFRM_POLICY_IN];
	si->outcnt = net->xfrm.policy_count[XFRM_POLICY_OUT];
	si->fwdcnt = net->xfrm.policy_count[XFRM_POLICY_FWD];
	si->inscnt = net->xfrm.policy_count[XFRM_POLICY_IN+XFRM_POLICY_MAX];
	si->outscnt = net->xfrm.policy_count[XFRM_POLICY_OUT+XFRM_POLICY_MAX];
	si->fwdscnt = net->xfrm.policy_count[XFRM_POLICY_FWD+XFRM_POLICY_MAX];
	si->spdhcnt = net->xfrm.policy_idx_hmask;
	si->spdhmcnt = xfrm_policy_hashmax;
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
          int _len_net0 = 1;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].xfrm.policy_idx_hmask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_net__i0__xfrm_policy_count0 = 1;
          net[_i0].xfrm.policy_count = (int *) malloc(_len_net__i0__xfrm_policy_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_net__i0__xfrm_policy_count0; _j0++) {
            net[_i0].xfrm.policy_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_si0 = 1;
          struct xfrmk_spdinfo * si = (struct xfrmk_spdinfo *) malloc(_len_si0*sizeof(struct xfrmk_spdinfo));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0].spdhmcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].spdhcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].fwdscnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].outscnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].inscnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].fwdcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].outcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].incnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xfrm_spd_getinfo(net,si);
          free(net);
          free(si);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_net0 = 65025;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].xfrm.policy_idx_hmask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_net__i0__xfrm_policy_count0 = 1;
          net[_i0].xfrm.policy_count = (int *) malloc(_len_net__i0__xfrm_policy_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_net__i0__xfrm_policy_count0; _j0++) {
            net[_i0].xfrm.policy_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_si0 = 65025;
          struct xfrmk_spdinfo * si = (struct xfrmk_spdinfo *) malloc(_len_si0*sizeof(struct xfrmk_spdinfo));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0].spdhmcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].spdhcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].fwdscnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].outscnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].inscnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].fwdcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].outcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].incnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xfrm_spd_getinfo(net,si);
          free(net);
          free(si);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_net0 = 100;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
            net[_i0].xfrm.policy_idx_hmask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_net__i0__xfrm_policy_count0 = 1;
          net[_i0].xfrm.policy_count = (int *) malloc(_len_net__i0__xfrm_policy_count0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_net__i0__xfrm_policy_count0; _j0++) {
            net[_i0].xfrm.policy_count[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_si0 = 100;
          struct xfrmk_spdinfo * si = (struct xfrmk_spdinfo *) malloc(_len_si0*sizeof(struct xfrmk_spdinfo));
          for(int _i0 = 0; _i0 < _len_si0; _i0++) {
            si[_i0].spdhmcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].spdhcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].fwdscnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].outscnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].inscnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].fwdcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].outcnt = ((-2 * (next_i()%2)) + 1) * next_i();
        si[_i0].incnt = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          xfrm_spd_getinfo(net,si);
          free(net);
          free(si);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
