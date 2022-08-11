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
typedef  int /*<<< orphan*/  u32 ;
struct mmc_data {int blocks; int blksz; int flags; int /*<<< orphan*/  sg_len; int /*<<< orphan*/  sg; int /*<<< orphan*/  error; } ;
struct atmel_mci {int need_reset; scalar_t__ pio_offset; int /*<<< orphan*/ * data_chan; struct mmc_data* data; int /*<<< orphan*/  sg_len; int /*<<< orphan*/  sg; } ;

/* Variables and functions */
 int /*<<< orphan*/  ATMCI_DATA_ERROR_FLAGS ; 
 int /*<<< orphan*/  ATMCI_RXRDY ; 
 int /*<<< orphan*/  ATMCI_TXRDY ; 
 int /*<<< orphan*/  EINPROGRESS ; 
 int MMC_DATA_READ ; 

__attribute__((used)) static u32 atmci_prepare_data(struct atmel_mci *host, struct mmc_data *data)
{
	u32 iflags;

	data->error = -EINPROGRESS;

	host->sg = data->sg;
	host->sg_len = data->sg_len;
	host->data = data;
	host->data_chan = NULL;

	iflags = ATMCI_DATA_ERROR_FLAGS;

	/*
	 * Errata: MMC data write operation with less than 12
	 * bytes is impossible.
	 *
	 * Errata: MCI Transmit Data Register (TDR) FIFO
	 * corruption when length is not multiple of 4.
	 */
	if (data->blocks * data->blksz < 12
			|| (data->blocks * data->blksz) & 3)
		host->need_reset = true;

	host->pio_offset = 0;
	if (data->flags & MMC_DATA_READ)
		iflags |= ATMCI_RXRDY;
	else
		iflags |= ATMCI_TXRDY;

	return iflags;
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
          struct atmel_mci * host = (struct atmel_mci *) malloc(_len_host0*sizeof(struct atmel_mci));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].need_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].pio_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__data_chan0 = 1;
          host[_i0].data_chan = (int *) malloc(_len_host__i0__data_chan0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__data_chan0; _j0++) {
            host[_i0].data_chan[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__data0 = 1;
          host[_i0].data = (struct mmc_data *) malloc(_len_host__i0__data0*sizeof(struct mmc_data));
          for(int _j0 = 0; _j0 < _len_host__i0__data0; _j0++) {
            host[_i0].data->blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->blksz = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->sg = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        host[_i0].sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 1;
          struct mmc_data * data = (struct mmc_data *) malloc(_len_data0*sizeof(struct mmc_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].blksz = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = atmci_prepare_data(host,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].data_chan);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].data);
          }
          free(host);
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_host0 = 65025;
          struct atmel_mci * host = (struct atmel_mci *) malloc(_len_host0*sizeof(struct atmel_mci));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].need_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].pio_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__data_chan0 = 1;
          host[_i0].data_chan = (int *) malloc(_len_host__i0__data_chan0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__data_chan0; _j0++) {
            host[_i0].data_chan[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__data0 = 1;
          host[_i0].data = (struct mmc_data *) malloc(_len_host__i0__data0*sizeof(struct mmc_data));
          for(int _j0 = 0; _j0 < _len_host__i0__data0; _j0++) {
            host[_i0].data->blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->blksz = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->sg = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        host[_i0].sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 65025;
          struct mmc_data * data = (struct mmc_data *) malloc(_len_data0*sizeof(struct mmc_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].blksz = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = atmci_prepare_data(host,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].data_chan);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].data);
          }
          free(host);
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_host0 = 100;
          struct atmel_mci * host = (struct atmel_mci *) malloc(_len_host0*sizeof(struct atmel_mci));
          for(int _i0 = 0; _i0 < _len_host0; _i0++) {
            host[_i0].need_reset = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].pio_offset = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_host__i0__data_chan0 = 1;
          host[_i0].data_chan = (int *) malloc(_len_host__i0__data_chan0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_host__i0__data_chan0; _j0++) {
            host[_i0].data_chan[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_host__i0__data0 = 1;
          host[_i0].data = (struct mmc_data *) malloc(_len_host__i0__data0*sizeof(struct mmc_data));
          for(int _j0 = 0; _j0 < _len_host__i0__data0; _j0++) {
            host[_i0].data->blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->blksz = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->sg = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].data->error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        host[_i0].sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        host[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_data0 = 100;
          struct mmc_data * data = (struct mmc_data *) malloc(_len_data0*sizeof(struct mmc_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].blocks = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].blksz = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].sg_len = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].sg = ((-2 * (next_i()%2)) + 1) * next_i();
        data[_i0].error = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = atmci_prepare_data(host,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].data_chan);
          }
          for(int _aux = 0; _aux < _len_host0; _aux++) {
          free(host[_aux].data);
          }
          free(host);
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
