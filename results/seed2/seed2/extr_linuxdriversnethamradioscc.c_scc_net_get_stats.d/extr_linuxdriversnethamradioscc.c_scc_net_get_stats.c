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
struct net_device_stats {scalar_t__ tx_fifo_errors; scalar_t__ rx_fifo_errors; scalar_t__ tx_errors; scalar_t__ rx_errors; } ;
struct TYPE_2__ {scalar_t__ tx_under; scalar_t__ rx_over; scalar_t__ txerrs; scalar_t__ rxerrs; } ;
struct scc_channel {struct net_device_stats dev_stat; TYPE_1__ stat; } ;
struct net_device {scalar_t__ ml_priv; } ;

/* Variables and functions */

__attribute__((used)) static struct net_device_stats *scc_net_get_stats(struct net_device *dev)
{
	struct scc_channel *scc = (struct scc_channel *) dev->ml_priv;
	
	scc->dev_stat.rx_errors = scc->stat.rxerrs + scc->stat.rx_over;
	scc->dev_stat.tx_errors = scc->stat.txerrs + scc->stat.tx_under;
	scc->dev_stat.rx_fifo_errors = scc->stat.rx_over;
	scc->dev_stat.tx_fifo_errors = scc->stat.tx_under;

	return &scc->dev_stat;
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
          int _len_dev0 = 1;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].ml_priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct net_device_stats * benchRet = scc_net_get_stats(dev);
          printf("%ld\n", (*benchRet).tx_fifo_errors);
          printf("%ld\n", (*benchRet).rx_fifo_errors);
          printf("%ld\n", (*benchRet).tx_errors);
          printf("%ld\n", (*benchRet).rx_errors);
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].ml_priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct net_device_stats * benchRet = scc_net_get_stats(dev);
          printf("%ld\n", (*benchRet).tx_fifo_errors);
          printf("%ld\n", (*benchRet).rx_fifo_errors);
          printf("%ld\n", (*benchRet).tx_errors);
          printf("%ld\n", (*benchRet).rx_errors);
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct net_device * dev = (struct net_device *) malloc(_len_dev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].ml_priv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct net_device_stats * benchRet = scc_net_get_stats(dev);
          printf("%ld\n", (*benchRet).tx_fifo_errors);
          printf("%ld\n", (*benchRet).rx_fifo_errors);
          printf("%ld\n", (*benchRet).tx_errors);
          printf("%ld\n", (*benchRet).rx_errors);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
