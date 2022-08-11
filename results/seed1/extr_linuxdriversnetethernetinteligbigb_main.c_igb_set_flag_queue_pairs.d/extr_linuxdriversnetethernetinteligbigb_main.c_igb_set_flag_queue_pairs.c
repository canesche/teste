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
typedef  int u32 ;
struct TYPE_2__ {int type; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int const rss_queues; int /*<<< orphan*/  flags; struct e1000_hw hw; } ;

/* Variables and functions */
 int /*<<< orphan*/  IGB_FLAG_QUEUE_PAIRS ; 
#define  e1000_82575 134 
#define  e1000_82576 133 
#define  e1000_82580 132 
#define  e1000_i210 131 
#define  e1000_i211 130 
#define  e1000_i350 129 
#define  e1000_i354 128 

void igb_set_flag_queue_pairs(struct igb_adapter *adapter,
			      const u32 max_rss_queues)
{
	struct e1000_hw *hw = &adapter->hw;

	/* Determine if we need to pair queues. */
	switch (hw->mac.type) {
	case e1000_82575:
	case e1000_i211:
		/* Device supports enough interrupts without queue pairing. */
		break;
	case e1000_82576:
	case e1000_82580:
	case e1000_i350:
	case e1000_i354:
	case e1000_i210:
	default:
		/* If rss_queues > half of max_rss_queues, pair the queues in
		 * order to conserve interrupts due to limited supply.
		 */
		if (adapter->rss_queues > (max_rss_queues / 2))
			adapter->flags |= IGB_FLAG_QUEUE_PAIRS;
		else
			adapter->flags &= ~IGB_FLAG_QUEUE_PAIRS;
		break;
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
          const int max_rss_queues = 100;
          int _len_adapter0 = 1;
          struct igb_adapter * adapter = (struct igb_adapter *) malloc(_len_adapter0*sizeof(struct igb_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].rss_queues = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].hw.mac.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          igb_set_flag_queue_pairs(adapter,max_rss_queues);
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          const int max_rss_queues = 255;
          int _len_adapter0 = 65025;
          struct igb_adapter * adapter = (struct igb_adapter *) malloc(_len_adapter0*sizeof(struct igb_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].rss_queues = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].hw.mac.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          igb_set_flag_queue_pairs(adapter,max_rss_queues);
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          const int max_rss_queues = 10;
          int _len_adapter0 = 100;
          struct igb_adapter * adapter = (struct igb_adapter *) malloc(_len_adapter0*sizeof(struct igb_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].rss_queues = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].hw.mac.type = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          igb_set_flag_queue_pairs(adapter,max_rss_queues);
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
