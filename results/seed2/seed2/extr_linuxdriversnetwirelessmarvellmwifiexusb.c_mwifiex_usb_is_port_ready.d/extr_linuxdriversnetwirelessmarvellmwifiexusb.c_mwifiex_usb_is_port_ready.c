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
struct usb_card_rec {TYPE_2__* port; } ;
struct mwifiex_private {scalar_t__ usb_port; TYPE_1__* adapter; } ;
struct TYPE_4__ {scalar_t__ tx_data_ep; int /*<<< orphan*/  block_status; } ;
struct TYPE_3__ {struct usb_card_rec* card; } ;

/* Variables and functions */
 int MWIFIEX_TX_DATA_PORT ; 

__attribute__((used)) static bool mwifiex_usb_is_port_ready(struct mwifiex_private *priv)
{
	struct usb_card_rec *card = priv->adapter->card;
	int idx;

	for (idx = 0; idx < MWIFIEX_TX_DATA_PORT; idx++) {
		if (priv->usb_port == card->port[idx].tx_data_ep)
			return !card->port[idx].block_status;
	}

	return false;
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
          int _len_priv0 = 1;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].usb_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__adapter0 = 1;
          priv[_i0].adapter = (struct TYPE_3__ *) malloc(_len_priv__i0__adapter0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_priv__i0__adapter0; _j0++) {
              int _len_priv__i0__adapter_card0 = 1;
          priv[_i0].adapter->card = (struct usb_card_rec *) malloc(_len_priv__i0__adapter_card0*sizeof(struct usb_card_rec));
          for(int _j0 = 0; _j0 < _len_priv__i0__adapter_card0; _j0++) {
              int _len_priv__i0__adapter_card_port0 = 1;
          priv[_i0].adapter->card->port = (struct TYPE_4__ *) malloc(_len_priv__i0__adapter_card_port0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_priv__i0__adapter_card_port0; _j0++) {
            priv[_i0].adapter->card->port->tx_data_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].adapter->card->port->block_status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = mwifiex_usb_is_port_ready(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].adapter);
          }
          free(priv);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].usb_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__adapter0 = 1;
          priv[_i0].adapter = (struct TYPE_3__ *) malloc(_len_priv__i0__adapter0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_priv__i0__adapter0; _j0++) {
              int _len_priv__i0__adapter_card0 = 1;
          priv[_i0].adapter->card = (struct usb_card_rec *) malloc(_len_priv__i0__adapter_card0*sizeof(struct usb_card_rec));
          for(int _j0 = 0; _j0 < _len_priv__i0__adapter_card0; _j0++) {
              int _len_priv__i0__adapter_card_port0 = 1;
          priv[_i0].adapter->card->port = (struct TYPE_4__ *) malloc(_len_priv__i0__adapter_card_port0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_priv__i0__adapter_card_port0; _j0++) {
            priv[_i0].adapter->card->port->tx_data_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].adapter->card->port->block_status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = mwifiex_usb_is_port_ready(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].adapter);
          }
          free(priv);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct mwifiex_private * priv = (struct mwifiex_private *) malloc(_len_priv0*sizeof(struct mwifiex_private));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].usb_port = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_priv__i0__adapter0 = 1;
          priv[_i0].adapter = (struct TYPE_3__ *) malloc(_len_priv__i0__adapter0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_priv__i0__adapter0; _j0++) {
              int _len_priv__i0__adapter_card0 = 1;
          priv[_i0].adapter->card = (struct usb_card_rec *) malloc(_len_priv__i0__adapter_card0*sizeof(struct usb_card_rec));
          for(int _j0 = 0; _j0 < _len_priv__i0__adapter_card0; _j0++) {
              int _len_priv__i0__adapter_card_port0 = 1;
          priv[_i0].adapter->card->port = (struct TYPE_4__ *) malloc(_len_priv__i0__adapter_card_port0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_priv__i0__adapter_card_port0; _j0++) {
            priv[_i0].adapter->card->port->tx_data_ep = ((-2 * (next_i()%2)) + 1) * next_i();
        priv[_i0].adapter->card->port->block_status = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int benchRet = mwifiex_usb_is_port_ready(priv);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_priv0; _aux++) {
          free(priv[_aux].adapter);
          }
          free(priv);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
