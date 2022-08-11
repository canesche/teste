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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_5__ {scalar_t__ next; TYPE_1__* local; } ;
typedef  TYPE_2__ isdn_net_dev ;
struct TYPE_6__ {TYPE_2__* netdev; } ;
struct TYPE_4__ {int pre_device; int pre_channel; } ;

/* Variables and functions */
 TYPE_3__* dev ; 

__attribute__((used)) static void
isdn_net_swapbind(int drvidx)
{
	isdn_net_dev *p;

#ifdef ISDN_DEBUG_NET_ICALL
	printk(KERN_DEBUG "n_fi: swapping ch of %d\n", drvidx);
#endif
	p = dev->netdev;
	while (p) {
		if (p->local->pre_device == drvidx)
			switch (p->local->pre_channel) {
			case 0:
				p->local->pre_channel = 1;
				break;
			case 1:
				p->local->pre_channel = 0;
				break;
			}
		p = (isdn_net_dev *) p->next;
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
          int drvidx = 100;
          isdn_net_swapbind(drvidx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int drvidx = 255;
          isdn_net_swapbind(drvidx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int drvidx = 10;
          isdn_net_swapbind(drvidx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
