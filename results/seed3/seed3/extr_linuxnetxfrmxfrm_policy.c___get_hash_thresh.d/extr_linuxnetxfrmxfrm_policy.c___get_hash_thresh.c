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
typedef  int /*<<< orphan*/  u8 ;
struct TYPE_4__ {TYPE_1__* policy_bydst; } ;
struct net {TYPE_2__ xfrm; } ;
struct TYPE_3__ {int /*<<< orphan*/  sbits6; int /*<<< orphan*/  dbits6; int /*<<< orphan*/  sbits4; int /*<<< orphan*/  dbits4; } ;

/* Variables and functions */
#define  AF_INET 129 
#define  AF_INET6 128 

__attribute__((used)) static void __get_hash_thresh(struct net *net,
			      unsigned short family, int dir,
			      u8 *dbits, u8 *sbits)
{
	switch (family) {
	case AF_INET:
		*dbits = net->xfrm.policy_bydst[dir].dbits4;
		*sbits = net->xfrm.policy_bydst[dir].sbits4;
		break;

	case AF_INET6:
		*dbits = net->xfrm.policy_bydst[dir].dbits6;
		*sbits = net->xfrm.policy_bydst[dir].sbits6;
		break;

	default:
		*dbits = 0;
		*sbits = 0;
	}
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
          unsigned short family = 100;
          int dir = 100;
          int _len_net0 = 1;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
              int _len_net__i0__xfrm_policy_bydst0 = 1;
          net[_i0].xfrm.policy_bydst = (struct TYPE_3__ *) malloc(_len_net__i0__xfrm_policy_bydst0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_net__i0__xfrm_policy_bydst0; _j0++) {
            net[_i0].xfrm.policy_bydst->sbits6 = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].xfrm.policy_bydst->dbits6 = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].xfrm.policy_bydst->sbits4 = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].xfrm.policy_bydst->dbits4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dbits0 = 1;
          int * dbits = (int *) malloc(_len_dbits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbits0; _i0++) {
            dbits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sbits0 = 1;
          int * sbits = (int *) malloc(_len_sbits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sbits0; _i0++) {
            sbits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __get_hash_thresh(net,family,dir,dbits,sbits);
          free(net);
          free(dbits);
          free(sbits);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned short family = 255;
          int dir = 255;
          int _len_net0 = 65025;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
              int _len_net__i0__xfrm_policy_bydst0 = 1;
          net[_i0].xfrm.policy_bydst = (struct TYPE_3__ *) malloc(_len_net__i0__xfrm_policy_bydst0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_net__i0__xfrm_policy_bydst0; _j0++) {
            net[_i0].xfrm.policy_bydst->sbits6 = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].xfrm.policy_bydst->dbits6 = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].xfrm.policy_bydst->sbits4 = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].xfrm.policy_bydst->dbits4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dbits0 = 65025;
          int * dbits = (int *) malloc(_len_dbits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbits0; _i0++) {
            dbits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sbits0 = 65025;
          int * sbits = (int *) malloc(_len_sbits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sbits0; _i0++) {
            sbits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __get_hash_thresh(net,family,dir,dbits,sbits);
          free(net);
          free(dbits);
          free(sbits);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned short family = 10;
          int dir = 10;
          int _len_net0 = 100;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
              int _len_net__i0__xfrm_policy_bydst0 = 1;
          net[_i0].xfrm.policy_bydst = (struct TYPE_3__ *) malloc(_len_net__i0__xfrm_policy_bydst0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_net__i0__xfrm_policy_bydst0; _j0++) {
            net[_i0].xfrm.policy_bydst->sbits6 = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].xfrm.policy_bydst->dbits6 = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].xfrm.policy_bydst->sbits4 = ((-2 * (next_i()%2)) + 1) * next_i();
        net[_i0].xfrm.policy_bydst->dbits4 = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_dbits0 = 100;
          int * dbits = (int *) malloc(_len_dbits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_dbits0; _i0++) {
            dbits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_sbits0 = 100;
          int * sbits = (int *) malloc(_len_sbits0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_sbits0; _i0++) {
            sbits[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          __get_hash_thresh(net,family,dir,dbits,sbits);
          free(net);
          free(dbits);
          free(sbits);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
