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
typedef  int /*<<< orphan*/  u16 ;
struct TYPE_3__ {int /*<<< orphan*/ * rx_buf_virt; } ;
struct pch_spi_data {int bpw_len; TYPE_2__* cur_trans; TYPE_1__ dma; } ;
struct TYPE_4__ {int /*<<< orphan*/ * rx_buf; } ;

/* Variables and functions */

__attribute__((used)) static void pch_spi_copy_rx_data_for_dma(struct pch_spi_data *data, int bpw)
{
	int j;
	u8 *rx_buf;
	u16 *rx_sbuf;
	const u8 *rx_dma_buf;
	const u16 *rx_dma_sbuf;

	/* copy Rx Data */
	if (!data->cur_trans->rx_buf)
		return;

	if (bpw == 8) {
		rx_buf = data->cur_trans->rx_buf;
		rx_dma_buf = data->dma.rx_buf_virt;
		for (j = 0; j < data->bpw_len; j++)
			*rx_buf++ = *rx_dma_buf++ & 0xFF;
		data->cur_trans->rx_buf = rx_buf;
	} else {
		rx_sbuf = data->cur_trans->rx_buf;
		rx_dma_sbuf = data->dma.rx_buf_virt;
		for (j = 0; j < data->bpw_len; j++)
			*rx_sbuf++ = *rx_dma_sbuf++;
		data->cur_trans->rx_buf = rx_sbuf;
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
          int bpw = 100;
          int _len_data0 = 1;
          struct pch_spi_data * data = (struct pch_spi_data *) malloc(_len_data0*sizeof(struct pch_spi_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].bpw_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__cur_trans0 = 1;
          data[_i0].cur_trans = (struct TYPE_4__ *) malloc(_len_data__i0__cur_trans0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__cur_trans0; _j0++) {
              int _len_data__i0__cur_trans_rx_buf0 = 1;
          data[_i0].cur_trans->rx_buf = (int *) malloc(_len_data__i0__cur_trans_rx_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__cur_trans_rx_buf0; _j0++) {
            data[_i0].cur_trans->rx_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data__i0__dma_rx_buf_virt0 = 1;
          data[_i0].dma.rx_buf_virt = (int *) malloc(_len_data__i0__dma_rx_buf_virt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__dma_rx_buf_virt0; _j0++) {
            data[_i0].dma.rx_buf_virt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pch_spi_copy_rx_data_for_dma(data,bpw);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].cur_trans);
          }
          free(data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bpw = 255;
          int _len_data0 = 65025;
          struct pch_spi_data * data = (struct pch_spi_data *) malloc(_len_data0*sizeof(struct pch_spi_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].bpw_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__cur_trans0 = 1;
          data[_i0].cur_trans = (struct TYPE_4__ *) malloc(_len_data__i0__cur_trans0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__cur_trans0; _j0++) {
              int _len_data__i0__cur_trans_rx_buf0 = 1;
          data[_i0].cur_trans->rx_buf = (int *) malloc(_len_data__i0__cur_trans_rx_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__cur_trans_rx_buf0; _j0++) {
            data[_i0].cur_trans->rx_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data__i0__dma_rx_buf_virt0 = 1;
          data[_i0].dma.rx_buf_virt = (int *) malloc(_len_data__i0__dma_rx_buf_virt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__dma_rx_buf_virt0; _j0++) {
            data[_i0].dma.rx_buf_virt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pch_spi_copy_rx_data_for_dma(data,bpw);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].cur_trans);
          }
          free(data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bpw = 10;
          int _len_data0 = 100;
          struct pch_spi_data * data = (struct pch_spi_data *) malloc(_len_data0*sizeof(struct pch_spi_data));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0].bpw_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_data__i0__cur_trans0 = 1;
          data[_i0].cur_trans = (struct TYPE_4__ *) malloc(_len_data__i0__cur_trans0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_data__i0__cur_trans0; _j0++) {
              int _len_data__i0__cur_trans_rx_buf0 = 1;
          data[_i0].cur_trans->rx_buf = (int *) malloc(_len_data__i0__cur_trans_rx_buf0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__cur_trans_rx_buf0; _j0++) {
            data[_i0].cur_trans->rx_buf[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_data__i0__dma_rx_buf_virt0 = 1;
          data[_i0].dma.rx_buf_virt = (int *) malloc(_len_data__i0__dma_rx_buf_virt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_data__i0__dma_rx_buf_virt0; _j0++) {
            data[_i0].dma.rx_buf_virt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          pch_spi_copy_rx_data_for_dma(data,bpw);
          for(int _aux = 0; _aux < _len_data0; _aux++) {
          free(data[_aux].cur_trans);
          }
          free(data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
