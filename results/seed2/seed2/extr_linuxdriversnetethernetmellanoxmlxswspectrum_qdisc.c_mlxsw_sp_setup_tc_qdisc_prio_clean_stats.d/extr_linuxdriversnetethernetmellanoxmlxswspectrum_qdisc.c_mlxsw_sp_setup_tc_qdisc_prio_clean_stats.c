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
struct rtnl_link_stats64 {int /*<<< orphan*/  tx_bytes; int /*<<< orphan*/  tx_packets; } ;
struct mlxsw_sp_qdisc_stats {scalar_t__ backlog; scalar_t__ drops; int /*<<< orphan*/  tx_bytes; int /*<<< orphan*/  tx_packets; } ;
struct mlxsw_sp_qdisc {struct mlxsw_sp_qdisc_stats stats_base; } ;
struct mlxsw_sp_port_xstats {scalar_t__* wred_drop; scalar_t__* tail_drop; } ;
struct TYPE_2__ {struct rtnl_link_stats64 stats; struct mlxsw_sp_port_xstats xstats; } ;
struct mlxsw_sp_port {TYPE_1__ periodic_hw_stats; } ;

/* Variables and functions */
 int IEEE_8021QAZ_MAX_TCS ; 

__attribute__((used)) static void
mlxsw_sp_setup_tc_qdisc_prio_clean_stats(struct mlxsw_sp_port *mlxsw_sp_port,
					 struct mlxsw_sp_qdisc *mlxsw_sp_qdisc)
{
	struct mlxsw_sp_qdisc_stats *stats_base;
	struct mlxsw_sp_port_xstats *xstats;
	struct rtnl_link_stats64 *stats;
	int i;

	xstats = &mlxsw_sp_port->periodic_hw_stats.xstats;
	stats = &mlxsw_sp_port->periodic_hw_stats.stats;
	stats_base = &mlxsw_sp_qdisc->stats_base;

	stats_base->tx_packets = stats->tx_packets;
	stats_base->tx_bytes = stats->tx_bytes;

	stats_base->drops = 0;
	for (i = 0; i < IEEE_8021QAZ_MAX_TCS; i++) {
		stats_base->drops += xstats->tail_drop[i];
		stats_base->drops += xstats->wred_drop[i];
	}

	mlxsw_sp_qdisc->stats_base.backlog = 0;
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
          int _len_mlxsw_sp_port0 = 1;
          struct mlxsw_sp_port * mlxsw_sp_port = (struct mlxsw_sp_port *) malloc(_len_mlxsw_sp_port0*sizeof(struct mlxsw_sp_port));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_port0; _i0++) {
            mlxsw_sp_port[_i0].periodic_hw_stats.stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_port[_i0].periodic_hw_stats.stats.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_wred_drop0 = 1;
          mlxsw_sp_port[_i0].periodic_hw_stats.xstats.wred_drop = (long *) malloc(_len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_wred_drop0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_wred_drop0; _j0++) {
            mlxsw_sp_port[_i0].periodic_hw_stats.xstats.wred_drop[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_tail_drop0 = 1;
          mlxsw_sp_port[_i0].periodic_hw_stats.xstats.tail_drop = (long *) malloc(_len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_tail_drop0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_tail_drop0; _j0++) {
            mlxsw_sp_port[_i0].periodic_hw_stats.xstats.tail_drop[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mlxsw_sp_qdisc0 = 1;
          struct mlxsw_sp_qdisc * mlxsw_sp_qdisc = (struct mlxsw_sp_qdisc *) malloc(_len_mlxsw_sp_qdisc0*sizeof(struct mlxsw_sp_qdisc));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_qdisc0; _i0++) {
            mlxsw_sp_qdisc[_i0].stats_base.backlog = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_qdisc[_i0].stats_base.drops = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_qdisc[_i0].stats_base.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_qdisc[_i0].stats_base.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxsw_sp_setup_tc_qdisc_prio_clean_stats(mlxsw_sp_port,mlxsw_sp_qdisc);
          free(mlxsw_sp_port);
          free(mlxsw_sp_qdisc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_mlxsw_sp_port0 = 65025;
          struct mlxsw_sp_port * mlxsw_sp_port = (struct mlxsw_sp_port *) malloc(_len_mlxsw_sp_port0*sizeof(struct mlxsw_sp_port));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_port0; _i0++) {
            mlxsw_sp_port[_i0].periodic_hw_stats.stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_port[_i0].periodic_hw_stats.stats.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_wred_drop0 = 1;
          mlxsw_sp_port[_i0].periodic_hw_stats.xstats.wred_drop = (long *) malloc(_len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_wred_drop0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_wred_drop0; _j0++) {
            mlxsw_sp_port[_i0].periodic_hw_stats.xstats.wred_drop[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_tail_drop0 = 1;
          mlxsw_sp_port[_i0].periodic_hw_stats.xstats.tail_drop = (long *) malloc(_len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_tail_drop0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_tail_drop0; _j0++) {
            mlxsw_sp_port[_i0].periodic_hw_stats.xstats.tail_drop[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mlxsw_sp_qdisc0 = 65025;
          struct mlxsw_sp_qdisc * mlxsw_sp_qdisc = (struct mlxsw_sp_qdisc *) malloc(_len_mlxsw_sp_qdisc0*sizeof(struct mlxsw_sp_qdisc));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_qdisc0; _i0++) {
            mlxsw_sp_qdisc[_i0].stats_base.backlog = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_qdisc[_i0].stats_base.drops = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_qdisc[_i0].stats_base.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_qdisc[_i0].stats_base.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxsw_sp_setup_tc_qdisc_prio_clean_stats(mlxsw_sp_port,mlxsw_sp_qdisc);
          free(mlxsw_sp_port);
          free(mlxsw_sp_qdisc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_mlxsw_sp_port0 = 100;
          struct mlxsw_sp_port * mlxsw_sp_port = (struct mlxsw_sp_port *) malloc(_len_mlxsw_sp_port0*sizeof(struct mlxsw_sp_port));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_port0; _i0++) {
            mlxsw_sp_port[_i0].periodic_hw_stats.stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_port[_i0].periodic_hw_stats.stats.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_wred_drop0 = 1;
          mlxsw_sp_port[_i0].periodic_hw_stats.xstats.wred_drop = (long *) malloc(_len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_wred_drop0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_wred_drop0; _j0++) {
            mlxsw_sp_port[_i0].periodic_hw_stats.xstats.wred_drop[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_tail_drop0 = 1;
          mlxsw_sp_port[_i0].periodic_hw_stats.xstats.tail_drop = (long *) malloc(_len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_tail_drop0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_mlxsw_sp_port__i0__periodic_hw_stats_xstats_tail_drop0; _j0++) {
            mlxsw_sp_port[_i0].periodic_hw_stats.xstats.tail_drop[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_mlxsw_sp_qdisc0 = 100;
          struct mlxsw_sp_qdisc * mlxsw_sp_qdisc = (struct mlxsw_sp_qdisc *) malloc(_len_mlxsw_sp_qdisc0*sizeof(struct mlxsw_sp_qdisc));
          for(int _i0 = 0; _i0 < _len_mlxsw_sp_qdisc0; _i0++) {
            mlxsw_sp_qdisc[_i0].stats_base.backlog = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_qdisc[_i0].stats_base.drops = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_qdisc[_i0].stats_base.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        mlxsw_sp_qdisc[_i0].stats_base.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mlxsw_sp_setup_tc_qdisc_prio_clean_stats(mlxsw_sp_port,mlxsw_sp_qdisc);
          free(mlxsw_sp_port);
          free(mlxsw_sp_qdisc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
