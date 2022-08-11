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
struct ef4_nic {int irq_rx_adaptive; unsigned int irq_rx_moderation_us; size_t tx_channel_offset; struct ef4_channel** channel; } ;
struct ef4_channel {unsigned int irq_moderation_us; } ;

/* Variables and functions */

void ef4_get_irq_moderation(struct ef4_nic *efx, unsigned int *tx_usecs,
			    unsigned int *rx_usecs, bool *rx_adaptive)
{
	*rx_adaptive = efx->irq_rx_adaptive;
	*rx_usecs = efx->irq_rx_moderation_us;

	/* If channels are shared between RX and TX, so is IRQ
	 * moderation.  Otherwise, IRQ moderation is the same for all
	 * TX channels and is not adaptive.
	 */
	if (efx->tx_channel_offset == 0) {
		*tx_usecs = *rx_usecs;
	} else {
		struct ef4_channel *tx_channel;

		tx_channel = efx->channel[efx->tx_channel_offset];
		*tx_usecs = tx_channel->irq_moderation_us;
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
          int _len_efx0 = 1;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
            efx[_i0].irq_rx_adaptive = ((-2 * (next_i()%2)) + 1) * next_i();
        efx[_i0].irq_rx_moderation_us = ((-2 * (next_i()%2)) + 1) * next_i();
        efx[_i0].tx_channel_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_efx__i0__channel0 = 1;
          efx[_i0].channel = (struct ef4_channel **) malloc(_len_efx__i0__channel0*sizeof(struct ef4_channel *));
          for(int _j0 = 0; _j0 < _len_efx__i0__channel0; _j0++) {
            int _len_efx__i0__channel1 = 1;
            efx[_i0].channel[_j0] = (struct ef4_channel *) malloc(_len_efx__i0__channel1*sizeof(struct ef4_channel));
            for(int _j1 = 0; _j1 < _len_efx__i0__channel1; _j1++) {
              efx[_i0].channel[_j0]->irq_moderation_us = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_tx_usecs0 = 1;
          unsigned int * tx_usecs = (unsigned int *) malloc(_len_tx_usecs0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_tx_usecs0; _i0++) {
            tx_usecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_usecs0 = 1;
          unsigned int * rx_usecs = (unsigned int *) malloc(_len_rx_usecs0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_rx_usecs0; _i0++) {
            rx_usecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_adaptive0 = 1;
          int * rx_adaptive = (int *) malloc(_len_rx_adaptive0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx_adaptive0; _i0++) {
            rx_adaptive[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ef4_get_irq_moderation(efx,tx_usecs,rx_usecs,rx_adaptive);
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(*(efx[_aux].channel));
        free(efx[_aux].channel);
          }
          free(efx);
          free(tx_usecs);
          free(rx_usecs);
          free(rx_adaptive);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_efx0 = 65025;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
            efx[_i0].irq_rx_adaptive = ((-2 * (next_i()%2)) + 1) * next_i();
        efx[_i0].irq_rx_moderation_us = ((-2 * (next_i()%2)) + 1) * next_i();
        efx[_i0].tx_channel_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_efx__i0__channel0 = 1;
          efx[_i0].channel = (struct ef4_channel **) malloc(_len_efx__i0__channel0*sizeof(struct ef4_channel *));
          for(int _j0 = 0; _j0 < _len_efx__i0__channel0; _j0++) {
            int _len_efx__i0__channel1 = 1;
            efx[_i0].channel[_j0] = (struct ef4_channel *) malloc(_len_efx__i0__channel1*sizeof(struct ef4_channel));
            for(int _j1 = 0; _j1 < _len_efx__i0__channel1; _j1++) {
              efx[_i0].channel[_j0]->irq_moderation_us = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_tx_usecs0 = 65025;
          unsigned int * tx_usecs = (unsigned int *) malloc(_len_tx_usecs0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_tx_usecs0; _i0++) {
            tx_usecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_usecs0 = 65025;
          unsigned int * rx_usecs = (unsigned int *) malloc(_len_rx_usecs0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_rx_usecs0; _i0++) {
            rx_usecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_adaptive0 = 65025;
          int * rx_adaptive = (int *) malloc(_len_rx_adaptive0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx_adaptive0; _i0++) {
            rx_adaptive[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ef4_get_irq_moderation(efx,tx_usecs,rx_usecs,rx_adaptive);
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(*(efx[_aux].channel));
        free(efx[_aux].channel);
          }
          free(efx);
          free(tx_usecs);
          free(rx_usecs);
          free(rx_adaptive);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_efx0 = 100;
          struct ef4_nic * efx = (struct ef4_nic *) malloc(_len_efx0*sizeof(struct ef4_nic));
          for(int _i0 = 0; _i0 < _len_efx0; _i0++) {
            efx[_i0].irq_rx_adaptive = ((-2 * (next_i()%2)) + 1) * next_i();
        efx[_i0].irq_rx_moderation_us = ((-2 * (next_i()%2)) + 1) * next_i();
        efx[_i0].tx_channel_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_efx__i0__channel0 = 1;
          efx[_i0].channel = (struct ef4_channel **) malloc(_len_efx__i0__channel0*sizeof(struct ef4_channel *));
          for(int _j0 = 0; _j0 < _len_efx__i0__channel0; _j0++) {
            int _len_efx__i0__channel1 = 1;
            efx[_i0].channel[_j0] = (struct ef4_channel *) malloc(_len_efx__i0__channel1*sizeof(struct ef4_channel));
            for(int _j1 = 0; _j1 < _len_efx__i0__channel1; _j1++) {
              efx[_i0].channel[_j0]->irq_moderation_us = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_tx_usecs0 = 100;
          unsigned int * tx_usecs = (unsigned int *) malloc(_len_tx_usecs0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_tx_usecs0; _i0++) {
            tx_usecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_usecs0 = 100;
          unsigned int * rx_usecs = (unsigned int *) malloc(_len_rx_usecs0*sizeof(unsigned int));
          for(int _i0 = 0; _i0 < _len_rx_usecs0; _i0++) {
            rx_usecs[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_rx_adaptive0 = 100;
          int * rx_adaptive = (int *) malloc(_len_rx_adaptive0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_rx_adaptive0; _i0++) {
            rx_adaptive[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ef4_get_irq_moderation(efx,tx_usecs,rx_usecs,rx_adaptive);
          for(int _aux = 0; _aux < _len_efx0; _aux++) {
          free(*(efx[_aux].channel));
        free(efx[_aux].channel);
          }
          free(efx);
          free(tx_usecs);
          free(rx_usecs);
          free(rx_adaptive);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
