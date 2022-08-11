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
struct au1550_spi {int /*<<< orphan*/ * irq_callback; int /*<<< orphan*/ * txrx_bufs; int /*<<< orphan*/ * tx_word; int /*<<< orphan*/ * rx_word; scalar_t__ usedma; } ;

/* Variables and functions */
 int /*<<< orphan*/  au1550_spi_dma_irq_callback ; 
 int /*<<< orphan*/  au1550_spi_dma_txrxb ; 
 int /*<<< orphan*/  au1550_spi_pio_irq_callback ; 
 int /*<<< orphan*/  au1550_spi_pio_txrxb ; 
 int /*<<< orphan*/  au1550_spi_rx_word_16 ; 
 int /*<<< orphan*/  au1550_spi_rx_word_32 ; 
 int /*<<< orphan*/  au1550_spi_rx_word_8 ; 
 int /*<<< orphan*/  au1550_spi_tx_word_16 ; 
 int /*<<< orphan*/  au1550_spi_tx_word_32 ; 
 int /*<<< orphan*/  au1550_spi_tx_word_8 ; 

__attribute__((used)) static void au1550_spi_bits_handlers_set(struct au1550_spi *hw, int bpw)
{
	if (bpw <= 8) {
		if (hw->usedma) {
			hw->txrx_bufs = &au1550_spi_dma_txrxb;
			hw->irq_callback = &au1550_spi_dma_irq_callback;
		} else {
			hw->rx_word = &au1550_spi_rx_word_8;
			hw->tx_word = &au1550_spi_tx_word_8;
			hw->txrx_bufs = &au1550_spi_pio_txrxb;
			hw->irq_callback = &au1550_spi_pio_irq_callback;
		}
	} else if (bpw <= 16) {
		hw->rx_word = &au1550_spi_rx_word_16;
		hw->tx_word = &au1550_spi_tx_word_16;
		hw->txrx_bufs = &au1550_spi_pio_txrxb;
		hw->irq_callback = &au1550_spi_pio_irq_callback;
	} else {
		hw->rx_word = &au1550_spi_rx_word_32;
		hw->tx_word = &au1550_spi_tx_word_32;
		hw->txrx_bufs = &au1550_spi_pio_txrxb;
		hw->irq_callback = &au1550_spi_pio_irq_callback;
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
          int _len_hw0 = 1;
          struct au1550_spi * hw = (struct au1550_spi *) malloc(_len_hw0*sizeof(struct au1550_spi));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__irq_callback0 = 1;
          hw[_i0].irq_callback = (int *) malloc(_len_hw__i0__irq_callback0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__irq_callback0; _j0++) {
            hw[_i0].irq_callback[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hw__i0__txrx_bufs0 = 1;
          hw[_i0].txrx_bufs = (int *) malloc(_len_hw__i0__txrx_bufs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__txrx_bufs0; _j0++) {
            hw[_i0].txrx_bufs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hw__i0__tx_word0 = 1;
          hw[_i0].tx_word = (int *) malloc(_len_hw__i0__tx_word0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__tx_word0; _j0++) {
            hw[_i0].tx_word[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hw__i0__rx_word0 = 1;
          hw[_i0].rx_word = (int *) malloc(_len_hw__i0__rx_word0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__rx_word0; _j0++) {
            hw[_i0].rx_word[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hw[_i0].usedma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          au1550_spi_bits_handlers_set(hw,bpw);
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].irq_callback);
          }
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].txrx_bufs);
          }
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].tx_word);
          }
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].rx_word);
          }
          free(hw);
        
        break;
    }
    // big-arr
    case 1:
    {
          int bpw = 255;
          int _len_hw0 = 65025;
          struct au1550_spi * hw = (struct au1550_spi *) malloc(_len_hw0*sizeof(struct au1550_spi));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__irq_callback0 = 1;
          hw[_i0].irq_callback = (int *) malloc(_len_hw__i0__irq_callback0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__irq_callback0; _j0++) {
            hw[_i0].irq_callback[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hw__i0__txrx_bufs0 = 1;
          hw[_i0].txrx_bufs = (int *) malloc(_len_hw__i0__txrx_bufs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__txrx_bufs0; _j0++) {
            hw[_i0].txrx_bufs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hw__i0__tx_word0 = 1;
          hw[_i0].tx_word = (int *) malloc(_len_hw__i0__tx_word0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__tx_word0; _j0++) {
            hw[_i0].tx_word[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hw__i0__rx_word0 = 1;
          hw[_i0].rx_word = (int *) malloc(_len_hw__i0__rx_word0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__rx_word0; _j0++) {
            hw[_i0].rx_word[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hw[_i0].usedma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          au1550_spi_bits_handlers_set(hw,bpw);
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].irq_callback);
          }
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].txrx_bufs);
          }
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].tx_word);
          }
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].rx_word);
          }
          free(hw);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int bpw = 10;
          int _len_hw0 = 100;
          struct au1550_spi * hw = (struct au1550_spi *) malloc(_len_hw0*sizeof(struct au1550_spi));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
              int _len_hw__i0__irq_callback0 = 1;
          hw[_i0].irq_callback = (int *) malloc(_len_hw__i0__irq_callback0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__irq_callback0; _j0++) {
            hw[_i0].irq_callback[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hw__i0__txrx_bufs0 = 1;
          hw[_i0].txrx_bufs = (int *) malloc(_len_hw__i0__txrx_bufs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__txrx_bufs0; _j0++) {
            hw[_i0].txrx_bufs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hw__i0__tx_word0 = 1;
          hw[_i0].tx_word = (int *) malloc(_len_hw__i0__tx_word0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__tx_word0; _j0++) {
            hw[_i0].tx_word[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_hw__i0__rx_word0 = 1;
          hw[_i0].rx_word = (int *) malloc(_len_hw__i0__rx_word0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_hw__i0__rx_word0; _j0++) {
            hw[_i0].rx_word[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        hw[_i0].usedma = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          au1550_spi_bits_handlers_set(hw,bpw);
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].irq_callback);
          }
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].txrx_bufs);
          }
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].tx_word);
          }
          for(int _aux = 0; _aux < _len_hw0; _aux++) {
          free(hw[_aux].rx_word);
          }
          free(hw);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
