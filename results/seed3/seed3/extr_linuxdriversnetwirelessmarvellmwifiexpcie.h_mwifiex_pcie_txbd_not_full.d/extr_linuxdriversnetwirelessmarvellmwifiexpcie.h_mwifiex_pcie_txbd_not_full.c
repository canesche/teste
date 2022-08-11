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
struct TYPE_3__ {struct mwifiex_pcie_card_reg* reg; } ;
struct pcie_service_card {int txbd_wrptr; int txbd_rdptr; TYPE_2__* dev; TYPE_1__ pcie; } ;
struct mwifiex_pcie_card_reg {int tx_mask; int tx_rollover_ind; } ;
struct TYPE_4__ {int device; } ;

/* Variables and functions */
#define  PCIE_DEVICE_ID_MARVELL_88W8766P 130 
#define  PCIE_DEVICE_ID_MARVELL_88W8897 129 
#define  PCIE_DEVICE_ID_MARVELL_88W8997 128 

__attribute__((used)) static inline int
mwifiex_pcie_txbd_not_full(struct pcie_service_card *card)
{
	const struct mwifiex_pcie_card_reg *reg = card->pcie.reg;

	switch (card->dev->device) {
	case PCIE_DEVICE_ID_MARVELL_88W8766P:
		if (((card->txbd_wrptr & reg->tx_mask) !=
		     (card->txbd_rdptr & reg->tx_mask)) ||
		    ((card->txbd_wrptr & reg->tx_rollover_ind) !=
		     (card->txbd_rdptr & reg->tx_rollover_ind)))
			return 1;
		break;
	case PCIE_DEVICE_ID_MARVELL_88W8897:
	case PCIE_DEVICE_ID_MARVELL_88W8997:
		if (((card->txbd_wrptr & reg->tx_mask) !=
		     (card->txbd_rdptr & reg->tx_mask)) ||
		    ((card->txbd_wrptr & reg->tx_rollover_ind) ==
		     (card->txbd_rdptr & reg->tx_rollover_ind)))
			return 1;
		break;
	}

	return 0;
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
          int _len_card0 = 1;
          struct pcie_service_card * card = (struct pcie_service_card *) malloc(_len_card0*sizeof(struct pcie_service_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].txbd_wrptr = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].txbd_rdptr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__dev0 = 1;
          card[_i0].dev = (struct TYPE_4__ *) malloc(_len_card__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_card__i0__dev0; _j0++) {
            card[_i0].dev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__pcie_reg0 = 1;
          card[_i0].pcie.reg = (struct mwifiex_pcie_card_reg *) malloc(_len_card__i0__pcie_reg0*sizeof(struct mwifiex_pcie_card_reg));
          for(int _j0 = 0; _j0 < _len_card__i0__pcie_reg0; _j0++) {
            card[_i0].pcie.reg->tx_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].pcie.reg->tx_rollover_ind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mwifiex_pcie_txbd_not_full(card);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dev);
          }
          free(card);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_card0 = 65025;
          struct pcie_service_card * card = (struct pcie_service_card *) malloc(_len_card0*sizeof(struct pcie_service_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].txbd_wrptr = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].txbd_rdptr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__dev0 = 1;
          card[_i0].dev = (struct TYPE_4__ *) malloc(_len_card__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_card__i0__dev0; _j0++) {
            card[_i0].dev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__pcie_reg0 = 1;
          card[_i0].pcie.reg = (struct mwifiex_pcie_card_reg *) malloc(_len_card__i0__pcie_reg0*sizeof(struct mwifiex_pcie_card_reg));
          for(int _j0 = 0; _j0 < _len_card__i0__pcie_reg0; _j0++) {
            card[_i0].pcie.reg->tx_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].pcie.reg->tx_rollover_ind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mwifiex_pcie_txbd_not_full(card);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dev);
          }
          free(card);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_card0 = 100;
          struct pcie_service_card * card = (struct pcie_service_card *) malloc(_len_card0*sizeof(struct pcie_service_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].txbd_wrptr = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].txbd_rdptr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__dev0 = 1;
          card[_i0].dev = (struct TYPE_4__ *) malloc(_len_card__i0__dev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_card__i0__dev0; _j0++) {
            card[_i0].dev->device = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__pcie_reg0 = 1;
          card[_i0].pcie.reg = (struct mwifiex_pcie_card_reg *) malloc(_len_card__i0__pcie_reg0*sizeof(struct mwifiex_pcie_card_reg));
          for(int _j0 = 0; _j0 < _len_card__i0__pcie_reg0; _j0++) {
            card[_i0].pcie.reg->tx_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].pcie.reg->tx_rollover_ind = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = mwifiex_pcie_txbd_not_full(card);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].dev);
          }
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
