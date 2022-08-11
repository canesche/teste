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
typedef  void* u32 ;
struct phy_dm_struct {scalar_t__ last_tx_ok_cnt; scalar_t__* num_tx_bytes_unicast; scalar_t__ last_rx_ok_cnt; scalar_t__* num_rx_bytes_unicast; int cur_tx_ok_cnt; int cur_rx_ok_cnt; int tx_tp; int rx_tp; int total_tp; int /*<<< orphan*/  traffic_load; int /*<<< orphan*/  pre_traffic_load; } ;

/* Variables and functions */
 int /*<<< orphan*/  TRAFFIC_HIGH ; 
 int /*<<< orphan*/  TRAFFIC_LOW ; 
 int /*<<< orphan*/  TRAFFIC_MID ; 
 int /*<<< orphan*/  TRAFFIC_ULTRA_LOW ; 

__attribute__((used)) static void phydm_traffic_load_decision(void *dm_void)
{
	struct phy_dm_struct *dm = (struct phy_dm_struct *)dm_void;

	/*---TP & Traffic-load calculation---*/

	if (dm->last_tx_ok_cnt > *dm->num_tx_bytes_unicast)
		dm->last_tx_ok_cnt = *dm->num_tx_bytes_unicast;

	if (dm->last_rx_ok_cnt > *dm->num_rx_bytes_unicast)
		dm->last_rx_ok_cnt = *dm->num_rx_bytes_unicast;

	dm->cur_tx_ok_cnt = *dm->num_tx_bytes_unicast - dm->last_tx_ok_cnt;
	dm->cur_rx_ok_cnt = *dm->num_rx_bytes_unicast - dm->last_rx_ok_cnt;
	dm->last_tx_ok_cnt = *dm->num_tx_bytes_unicast;
	dm->last_rx_ok_cnt = *dm->num_rx_bytes_unicast;

	dm->tx_tp = ((dm->tx_tp) >> 1) +
		    (u32)(((dm->cur_tx_ok_cnt) >> 18) >>
			  1); /* <<3(8bit), >>20(10^6,M), >>1(2sec)*/
	dm->rx_tp = ((dm->rx_tp) >> 1) +
		    (u32)(((dm->cur_rx_ok_cnt) >> 18) >>
			  1); /* <<3(8bit), >>20(10^6,M), >>1(2sec)*/
	dm->total_tp = dm->tx_tp + dm->rx_tp;

	dm->pre_traffic_load = dm->traffic_load;

	if (dm->cur_tx_ok_cnt > 1875000 ||
	    dm->cur_rx_ok_cnt >
		    1875000) { /* ( 1.875M * 8bit ) / 2sec= 7.5M bits /sec )*/

		dm->traffic_load = TRAFFIC_HIGH;
		/**/
	} else if (
		dm->cur_tx_ok_cnt > 500000 ||
		dm->cur_rx_ok_cnt >
			500000) { /*( 0.5M * 8bit ) / 2sec =  2M bits /sec )*/

		dm->traffic_load = TRAFFIC_MID;
		/**/
	} else if (
		dm->cur_tx_ok_cnt > 100000 ||
		dm->cur_rx_ok_cnt >
			100000) { /*( 0.1M * 8bit ) / 2sec =  0.4M bits /sec )*/

		dm->traffic_load = TRAFFIC_LOW;
		/**/
	} else {
		dm->traffic_load = TRAFFIC_ULTRA_LOW;
		/**/
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
          void * dm_void;
          phydm_traffic_load_decision(dm_void);
        
        break;
    }
    // big-arr
    case 1:
    {
          void * dm_void;
          phydm_traffic_load_decision(dm_void);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          void * dm_void;
          phydm_traffic_load_decision(dm_void);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
