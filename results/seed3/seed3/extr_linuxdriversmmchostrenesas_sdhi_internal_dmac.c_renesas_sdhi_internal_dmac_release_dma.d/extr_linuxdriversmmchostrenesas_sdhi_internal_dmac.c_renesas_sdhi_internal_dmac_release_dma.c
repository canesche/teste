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
struct tmio_mmc_host {int /*<<< orphan*/ * chan_tx; int /*<<< orphan*/  chan_rx; } ;

/* Variables and functions */

__attribute__((used)) static void
renesas_sdhi_internal_dmac_release_dma(struct tmio_mmc_host *host)
{
	/* Each value is set to zero to assume "disabling" each DMA */
	host->chan_rx = host->chan_tx = NULL;
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
          int _len_host0 = 1;
          struct tmio_mmc_host * host = (struct tmio_mmc_host *) malloc(_len_host0*sizeof(struct tmio_mmc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__chan_tx0 = 1;
          host[_i0].chan_tx = (int *) malloc(_len_host__i0__chan_tx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__chan_tx0; _j0++) {
            host[_i0].chan_tx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        host[_i0].chan_rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          renesas_sdhi_internal_dmac_release_dma(host);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].chan_tx);
          }
          free(host);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          struct tmio_mmc_host * host = (struct tmio_mmc_host *) malloc(_len_host0*sizeof(struct tmio_mmc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__chan_tx0 = 1;
          host[_i0].chan_tx = (int *) malloc(_len_host__i0__chan_tx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__chan_tx0; _j0++) {
            host[_i0].chan_tx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        host[_i0].chan_rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          renesas_sdhi_internal_dmac_release_dma(host);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].chan_tx);
          }
          free(host);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          struct tmio_mmc_host * host = (struct tmio_mmc_host *) malloc(_len_host0*sizeof(struct tmio_mmc_host));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
              int _len_host__i0__chan_tx0 = 1;
          host[_i0].chan_tx = (int *) malloc(_len_host__i0__chan_tx0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__chan_tx0; _j0++) {
            host[_i0].chan_tx[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        host[_i0].chan_rx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          renesas_sdhi_internal_dmac_release_dma(host);
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].chan_tx);
          }
          free(host);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
