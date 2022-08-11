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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {int flags; scalar_t__ failover_state; int /*<<< orphan*/ * addr; TYPE_1__* promoted_slave; } ;
typedef  TYPE_2__ sentinelRedisInstance ;
typedef  int /*<<< orphan*/  sentinelAddr ;
struct TYPE_4__ {int /*<<< orphan*/ * addr; } ;

/* Variables and functions */
 scalar_t__ SENTINEL_FAILOVER_STATE_RECONF_SLAVES ; 
 int SRI_FAILOVER_IN_PROGRESS ; 

sentinelAddr *sentinelGetCurrentMasterAddress(sentinelRedisInstance *master) {
    /* If we are failing over the master, and the state is already
     * SENTINEL_FAILOVER_STATE_RECONF_SLAVES or greater, it means that we
     * already have the new configuration epoch in the master, and the
     * slave acknowledged the configuration switch. Advertise the new
     * address. */
    if ((master->flags & SRI_FAILOVER_IN_PROGRESS) &&
        master->promoted_slave &&
        master->failover_state >= SENTINEL_FAILOVER_STATE_RECONF_SLAVES)
    {
        return master->promoted_slave->addr;
    } else {
        return master->addr;
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
          int _len_master0 = 1;
          struct TYPE_5__ * master = (struct TYPE_5__ *) malloc(_len_master0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
            master[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        master[_i0].failover_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_master__i0__addr0 = 1;
          master[_i0].addr = (int *) malloc(_len_master__i0__addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_master__i0__addr0; _j0++) {
            master[_i0].addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_master__i0__promoted_slave0 = 1;
          master[_i0].promoted_slave = (struct TYPE_4__ *) malloc(_len_master__i0__promoted_slave0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_master__i0__promoted_slave0; _j0++) {
              int _len_master__i0__promoted_slave_addr0 = 1;
          master[_i0].promoted_slave->addr = (int *) malloc(_len_master__i0__promoted_slave_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_master__i0__promoted_slave_addr0; _j0++) {
            master[_i0].promoted_slave->addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = sentinelGetCurrentMasterAddress(master);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_master0; _aux++) {
          free(master[_aux].addr);
          }
          for(int _aux = 0; _aux < _len_master0; _aux++) {
          free(master[_aux].promoted_slave);
          }
          free(master);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_master0 = 65025;
          struct TYPE_5__ * master = (struct TYPE_5__ *) malloc(_len_master0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
            master[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        master[_i0].failover_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_master__i0__addr0 = 1;
          master[_i0].addr = (int *) malloc(_len_master__i0__addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_master__i0__addr0; _j0++) {
            master[_i0].addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_master__i0__promoted_slave0 = 1;
          master[_i0].promoted_slave = (struct TYPE_4__ *) malloc(_len_master__i0__promoted_slave0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_master__i0__promoted_slave0; _j0++) {
              int _len_master__i0__promoted_slave_addr0 = 1;
          master[_i0].promoted_slave->addr = (int *) malloc(_len_master__i0__promoted_slave_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_master__i0__promoted_slave_addr0; _j0++) {
            master[_i0].promoted_slave->addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = sentinelGetCurrentMasterAddress(master);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_master0; _aux++) {
          free(master[_aux].addr);
          }
          for(int _aux = 0; _aux < _len_master0; _aux++) {
          free(master[_aux].promoted_slave);
          }
          free(master);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_master0 = 100;
          struct TYPE_5__ * master = (struct TYPE_5__ *) malloc(_len_master0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_master0; _i0++) {
            master[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        master[_i0].failover_state = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_master__i0__addr0 = 1;
          master[_i0].addr = (int *) malloc(_len_master__i0__addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_master__i0__addr0; _j0++) {
            master[_i0].addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_master__i0__promoted_slave0 = 1;
          master[_i0].promoted_slave = (struct TYPE_4__ *) malloc(_len_master__i0__promoted_slave0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_master__i0__promoted_slave0; _j0++) {
              int _len_master__i0__promoted_slave_addr0 = 1;
          master[_i0].promoted_slave->addr = (int *) malloc(_len_master__i0__promoted_slave_addr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_master__i0__promoted_slave_addr0; _j0++) {
            master[_i0].promoted_slave->addr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int * benchRet = sentinelGetCurrentMasterAddress(master);
          printf("%d\n", (*benchRet)); 
          for(int _aux = 0; _aux < _len_master0; _aux++) {
          free(master[_aux].addr);
          }
          for(int _aux = 0; _aux < _len_master0; _aux++) {
          free(master[_aux].promoted_slave);
          }
          free(master);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
