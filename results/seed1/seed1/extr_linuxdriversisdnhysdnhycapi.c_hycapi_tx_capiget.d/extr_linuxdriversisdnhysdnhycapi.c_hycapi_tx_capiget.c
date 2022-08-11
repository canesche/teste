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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct sk_buff {int dummy; } ;
struct TYPE_4__ {TYPE_2__* hyctrlinfo; } ;
typedef  TYPE_1__ hysdn_card ;
struct TYPE_5__ {size_t out_idx; struct sk_buff** skbs; int /*<<< orphan*/  sk_count; } ;
typedef  TYPE_2__ hycapictrl_info ;

/* Variables and functions */

struct sk_buff *
hycapi_tx_capiget(hysdn_card *card)
{
	hycapictrl_info *cinfo = card->hyctrlinfo;
	if (!cinfo) {
		return (struct sk_buff *)NULL;
	}
	if (!cinfo->sk_count)
		return (struct sk_buff *)NULL;	/* nothing available */

	return (cinfo->skbs[cinfo->out_idx]);		/* next packet to send */
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
          struct TYPE_4__ * card = (struct TYPE_4__ *) malloc(_len_card0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              int _len_card__i0__hyctrlinfo0 = 1;
          card[_i0].hyctrlinfo = (struct TYPE_5__ *) malloc(_len_card__i0__hyctrlinfo0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_card__i0__hyctrlinfo0; _j0++) {
            card[_i0].hyctrlinfo->out_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__hyctrlinfo_skbs0 = 1;
          card[_i0].hyctrlinfo->skbs = (struct sk_buff **) malloc(_len_card__i0__hyctrlinfo_skbs0*sizeof(struct sk_buff *));
          for(int _j0 = 0; _j0 < _len_card__i0__hyctrlinfo_skbs0; _j0++) {
            int _len_card__i0__hyctrlinfo_skbs1 = 1;
            card[_i0].hyctrlinfo->skbs[_j0] = (struct sk_buff *) malloc(_len_card__i0__hyctrlinfo_skbs1*sizeof(struct sk_buff));
            for(int _j1 = 0; _j1 < _len_card__i0__hyctrlinfo_skbs1; _j1++) {
              card[_i0].hyctrlinfo->skbs[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        card[_i0].hyctrlinfo->sk_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct sk_buff * benchRet = hycapi_tx_capiget(card);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].hyctrlinfo);
          }
          free(card);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_card0 = 65025;
          struct TYPE_4__ * card = (struct TYPE_4__ *) malloc(_len_card0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              int _len_card__i0__hyctrlinfo0 = 1;
          card[_i0].hyctrlinfo = (struct TYPE_5__ *) malloc(_len_card__i0__hyctrlinfo0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_card__i0__hyctrlinfo0; _j0++) {
            card[_i0].hyctrlinfo->out_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__hyctrlinfo_skbs0 = 1;
          card[_i0].hyctrlinfo->skbs = (struct sk_buff **) malloc(_len_card__i0__hyctrlinfo_skbs0*sizeof(struct sk_buff *));
          for(int _j0 = 0; _j0 < _len_card__i0__hyctrlinfo_skbs0; _j0++) {
            int _len_card__i0__hyctrlinfo_skbs1 = 1;
            card[_i0].hyctrlinfo->skbs[_j0] = (struct sk_buff *) malloc(_len_card__i0__hyctrlinfo_skbs1*sizeof(struct sk_buff));
            for(int _j1 = 0; _j1 < _len_card__i0__hyctrlinfo_skbs1; _j1++) {
              card[_i0].hyctrlinfo->skbs[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        card[_i0].hyctrlinfo->sk_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct sk_buff * benchRet = hycapi_tx_capiget(card);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].hyctrlinfo);
          }
          free(card);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_card0 = 100;
          struct TYPE_4__ * card = (struct TYPE_4__ *) malloc(_len_card0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_card0; _i0++) {
              int _len_card__i0__hyctrlinfo0 = 1;
          card[_i0].hyctrlinfo = (struct TYPE_5__ *) malloc(_len_card__i0__hyctrlinfo0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_card__i0__hyctrlinfo0; _j0++) {
            card[_i0].hyctrlinfo->out_idx = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_card__i0__hyctrlinfo_skbs0 = 1;
          card[_i0].hyctrlinfo->skbs = (struct sk_buff **) malloc(_len_card__i0__hyctrlinfo_skbs0*sizeof(struct sk_buff *));
          for(int _j0 = 0; _j0 < _len_card__i0__hyctrlinfo_skbs0; _j0++) {
            int _len_card__i0__hyctrlinfo_skbs1 = 1;
            card[_i0].hyctrlinfo->skbs[_j0] = (struct sk_buff *) malloc(_len_card__i0__hyctrlinfo_skbs1*sizeof(struct sk_buff));
            for(int _j1 = 0; _j1 < _len_card__i0__hyctrlinfo_skbs1; _j1++) {
              card[_i0].hyctrlinfo->skbs[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        card[_i0].hyctrlinfo->sk_count = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct sk_buff * benchRet = hycapi_tx_capiget(card);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_card0; _aux++) {
          free(card[_aux].hyctrlinfo);
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
