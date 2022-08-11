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
typedef  int u8 ;
typedef  scalar_t__ u16 ;
struct TYPE_2__ {int pkt_cnt; int start_port; int ports; scalar_t__* len_arr; int /*<<< orphan*/ ** skb_arr; int /*<<< orphan*/  buf_len; } ;
struct sdio_mmc_card {TYPE_1__ mpa_rx; scalar_t__ supports_sdio_new_mode; } ;

/* Variables and functions */

__attribute__((used)) static inline void mp_rx_aggr_setup(struct sdio_mmc_card *card,
				    u16 rx_len, u8 port)
{
	card->mpa_rx.buf_len += rx_len;

	if (!card->mpa_rx.pkt_cnt)
		card->mpa_rx.start_port = port;

	if (card->supports_sdio_new_mode) {
		card->mpa_rx.ports |= (1 << port);
	} else {
		if (card->mpa_rx.start_port <= port)
			card->mpa_rx.ports |= 1 << (card->mpa_rx.pkt_cnt);
		else
			card->mpa_rx.ports |= 1 << (card->mpa_rx.pkt_cnt + 1);
	}
	card->mpa_rx.skb_arr[card->mpa_rx.pkt_cnt] = NULL;
	card->mpa_rx.len_arr[card->mpa_rx.pkt_cnt] = rx_len;
	card->mpa_rx.pkt_cnt++;
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
          long rx_len = 100;
          int port = 100;
          int _len_card0 = 1;
          struct sdio_mmc_card * card = (struct sdio_mmc_card *) malloc(_len_card0*sizeof(struct sdio_mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].mpa_rx.pkt_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].mpa_rx.start_port = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].mpa_rx.ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__mpa_rx_len_arr0 = 1;
          card[_i0].mpa_rx.len_arr = (long *) malloc(_len_card__i0__mpa_rx_len_arr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__mpa_rx_len_arr0; _j0++) {
            card[_i0].mpa_rx.len_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__mpa_rx_skb_arr0 = 1;
          card[_i0].mpa_rx.skb_arr = (int **) malloc(_len_card__i0__mpa_rx_skb_arr0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_card__i0__mpa_rx_skb_arr0; _j0++) {
            int _len_card__i0__mpa_rx_skb_arr1 = 1;
            card[_i0].mpa_rx.skb_arr[_j0] = (int *) malloc(_len_card__i0__mpa_rx_skb_arr1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_card__i0__mpa_rx_skb_arr1; _j1++) {
              card[_i0].mpa_rx.skb_arr[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        card[_i0].mpa_rx.buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].supports_sdio_new_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_rx_aggr_setup(card,rx_len,port);
          free(card);
        
        break;
    }
    // big-arr
    case 1:
    {
          long rx_len = 255;
          int port = 255;
          int _len_card0 = 65025;
          struct sdio_mmc_card * card = (struct sdio_mmc_card *) malloc(_len_card0*sizeof(struct sdio_mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].mpa_rx.pkt_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].mpa_rx.start_port = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].mpa_rx.ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__mpa_rx_len_arr0 = 1;
          card[_i0].mpa_rx.len_arr = (long *) malloc(_len_card__i0__mpa_rx_len_arr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__mpa_rx_len_arr0; _j0++) {
            card[_i0].mpa_rx.len_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__mpa_rx_skb_arr0 = 1;
          card[_i0].mpa_rx.skb_arr = (int **) malloc(_len_card__i0__mpa_rx_skb_arr0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_card__i0__mpa_rx_skb_arr0; _j0++) {
            int _len_card__i0__mpa_rx_skb_arr1 = 1;
            card[_i0].mpa_rx.skb_arr[_j0] = (int *) malloc(_len_card__i0__mpa_rx_skb_arr1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_card__i0__mpa_rx_skb_arr1; _j1++) {
              card[_i0].mpa_rx.skb_arr[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        card[_i0].mpa_rx.buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].supports_sdio_new_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_rx_aggr_setup(card,rx_len,port);
          free(card);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long rx_len = 10;
          int port = 10;
          int _len_card0 = 100;
          struct sdio_mmc_card * card = (struct sdio_mmc_card *) malloc(_len_card0*sizeof(struct sdio_mmc_card));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
            card[_i0].mpa_rx.pkt_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].mpa_rx.start_port = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].mpa_rx.ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__mpa_rx_len_arr0 = 1;
          card[_i0].mpa_rx.len_arr = (long *) malloc(_len_card__i0__mpa_rx_len_arr0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_card__i0__mpa_rx_len_arr0; _j0++) {
            card[_i0].mpa_rx.len_arr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_card__i0__mpa_rx_skb_arr0 = 1;
          card[_i0].mpa_rx.skb_arr = (int **) malloc(_len_card__i0__mpa_rx_skb_arr0*sizeof(int *));
          for(int _j0 = 0; _j0 < _len_card__i0__mpa_rx_skb_arr0; _j0++) {
            int _len_card__i0__mpa_rx_skb_arr1 = 1;
            card[_i0].mpa_rx.skb_arr[_j0] = (int *) malloc(_len_card__i0__mpa_rx_skb_arr1*sizeof(int));
            for(int _j1 = 0; _j1 < _len_card__i0__mpa_rx_skb_arr1; _j1++) {
              card[_i0].mpa_rx.skb_arr[_j0][_j1] = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        card[_i0].mpa_rx.buf_len = ((-2 * (next_i()%2)) + 1) * next_i();
        card[_i0].supports_sdio_new_mode = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          mp_rx_aggr_setup(card,rx_len,port);
          free(card);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
