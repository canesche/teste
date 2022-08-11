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
typedef  scalar_t__ u8 ;
struct usb_card_rec {TYPE_1__* port; } ;
struct mwifiex_private {scalar_t__ bss_role; scalar_t__ usb_port; scalar_t__ media_connected; scalar_t__ bss_started; } ;
struct mwifiex_adapter {int priv_num; struct mwifiex_private** priv; scalar_t__ usb_mc_status; struct usb_card_rec* card; } ;
struct TYPE_2__ {int block_status; scalar_t__ tx_data_ep; } ;

/* Variables and functions */
 scalar_t__ MWIFIEX_BSS_ROLE_STA ; 
 scalar_t__ MWIFIEX_BSS_ROLE_UAP ; 
 int MWIFIEX_TX_DATA_PORT ; 
 void* MWIFIEX_USB_EP_DATA ; 

__attribute__((used)) static void mwifiex_usb_port_resync(struct mwifiex_adapter *adapter)
{
	struct usb_card_rec *card = adapter->card;
	u8 active_port = MWIFIEX_USB_EP_DATA;
	struct mwifiex_private *priv = NULL;
	int i;

	if (adapter->usb_mc_status) {
		for (i = 0; i < adapter->priv_num; i++) {
			priv = adapter->priv[i];
			if (!priv)
				continue;
			if ((priv->bss_role == MWIFIEX_BSS_ROLE_UAP &&
			     !priv->bss_started) ||
			    (priv->bss_role == MWIFIEX_BSS_ROLE_STA &&
			     !priv->media_connected))
				priv->usb_port = MWIFIEX_USB_EP_DATA;
		}
		for (i = 0; i < MWIFIEX_TX_DATA_PORT; i++)
			card->port[i].block_status = false;
	} else {
		for (i = 0; i < adapter->priv_num; i++) {
			priv = adapter->priv[i];
			if (!priv)
				continue;
			if ((priv->bss_role == MWIFIEX_BSS_ROLE_UAP &&
			     priv->bss_started) ||
			    (priv->bss_role == MWIFIEX_BSS_ROLE_STA &&
			     priv->media_connected)) {
				active_port = priv->usb_port;
				break;
			}
		}
		for (i = 0; i < adapter->priv_num; i++) {
			priv = adapter->priv[i];
			if (priv)
				priv->usb_port = active_port;
		}
		for (i = 0; i < MWIFIEX_TX_DATA_PORT; i++) {
			if (active_port == card->port[i].tx_data_ep)
				card->port[i].block_status = false;
			else
				card->port[i].block_status = true;
		}
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
          int _len_adapter0 = 1;
          struct mwifiex_adapter * adapter = (struct mwifiex_adapter *) malloc(_len_adapter0*sizeof(struct mwifiex_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].priv_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__priv0 = 1;
          adapter[_i0].priv = (struct mwifiex_private **) malloc(_len_adapter__i0__priv0*sizeof(struct mwifiex_private *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__priv0; _j0++) {
            int _len_adapter__i0__priv1 = 1;
            adapter[_i0].priv[_j0] = (struct mwifiex_private *) malloc(_len_adapter__i0__priv1*sizeof(struct mwifiex_private));
            for(int _j1 = 0; _j1 < _len_adapter__i0__priv1; _j1++) {
              adapter[_i0].priv[_j0]->bss_role = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].priv[_j0]->usb_port = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].priv[_j0]->media_connected = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].priv[_j0]->bss_started = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapter[_i0].usb_mc_status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__card0 = 1;
          adapter[_i0].card = (struct usb_card_rec *) malloc(_len_adapter__i0__card0*sizeof(struct usb_card_rec));
          for(int _j0 = 0; _j0 < _len_adapter__i0__card0; _j0++) {
              int _len_adapter__i0__card_port0 = 1;
          adapter[_i0].card->port = (struct TYPE_2__ *) malloc(_len_adapter__i0__card_port0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__card_port0; _j0++) {
            adapter[_i0].card->port->block_status = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].card->port->tx_data_ep = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          mwifiex_usb_port_resync(adapter);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].priv));
        free(adapter[_aux].priv);
          }
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].card);
          }
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapter0 = 65025;
          struct mwifiex_adapter * adapter = (struct mwifiex_adapter *) malloc(_len_adapter0*sizeof(struct mwifiex_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].priv_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__priv0 = 1;
          adapter[_i0].priv = (struct mwifiex_private **) malloc(_len_adapter__i0__priv0*sizeof(struct mwifiex_private *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__priv0; _j0++) {
            int _len_adapter__i0__priv1 = 1;
            adapter[_i0].priv[_j0] = (struct mwifiex_private *) malloc(_len_adapter__i0__priv1*sizeof(struct mwifiex_private));
            for(int _j1 = 0; _j1 < _len_adapter__i0__priv1; _j1++) {
              adapter[_i0].priv[_j0]->bss_role = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].priv[_j0]->usb_port = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].priv[_j0]->media_connected = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].priv[_j0]->bss_started = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapter[_i0].usb_mc_status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__card0 = 1;
          adapter[_i0].card = (struct usb_card_rec *) malloc(_len_adapter__i0__card0*sizeof(struct usb_card_rec));
          for(int _j0 = 0; _j0 < _len_adapter__i0__card0; _j0++) {
              int _len_adapter__i0__card_port0 = 1;
          adapter[_i0].card->port = (struct TYPE_2__ *) malloc(_len_adapter__i0__card_port0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__card_port0; _j0++) {
            adapter[_i0].card->port->block_status = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].card->port->tx_data_ep = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          mwifiex_usb_port_resync(adapter);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].priv));
        free(adapter[_aux].priv);
          }
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].card);
          }
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapter0 = 100;
          struct mwifiex_adapter * adapter = (struct mwifiex_adapter *) malloc(_len_adapter0*sizeof(struct mwifiex_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].priv_num = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__priv0 = 1;
          adapter[_i0].priv = (struct mwifiex_private **) malloc(_len_adapter__i0__priv0*sizeof(struct mwifiex_private *));
          for(int _j0 = 0; _j0 < _len_adapter__i0__priv0; _j0++) {
            int _len_adapter__i0__priv1 = 1;
            adapter[_i0].priv[_j0] = (struct mwifiex_private *) malloc(_len_adapter__i0__priv1*sizeof(struct mwifiex_private));
            for(int _j1 = 0; _j1 < _len_adapter__i0__priv1; _j1++) {
              adapter[_i0].priv[_j0]->bss_role = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].priv[_j0]->usb_port = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].priv[_j0]->media_connected = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].priv[_j0]->bss_started = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        adapter[_i0].usb_mc_status = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__card0 = 1;
          adapter[_i0].card = (struct usb_card_rec *) malloc(_len_adapter__i0__card0*sizeof(struct usb_card_rec));
          for(int _j0 = 0; _j0 < _len_adapter__i0__card0; _j0++) {
              int _len_adapter__i0__card_port0 = 1;
          adapter[_i0].card->port = (struct TYPE_2__ *) malloc(_len_adapter__i0__card_port0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__card_port0; _j0++) {
            adapter[_i0].card->port->block_status = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].card->port->tx_data_ep = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          mwifiex_usb_port_resync(adapter);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(*(adapter[_aux].priv));
        free(adapter[_aux].priv);
          }
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].card);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
