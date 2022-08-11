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
typedef  int /*<<< orphan*/  u8 ;
struct sk_buff {scalar_t__ data; } ;
struct rx_desc_819x_usb {scalar_t__ Length; } ;
struct ieee80211_rx_stats {int ntotalfrag; scalar_t__ fragoffset; scalar_t__ packetlength; scalar_t__ fraglength; scalar_t__ Length; scalar_t__ RxBufShift; scalar_t__ RxDrvInfoSize; int /*<<< orphan*/ * virtual_address; } ;

/* Variables and functions */
 scalar_t__ scrclng ; 

__attribute__((used)) static void query_rx_cmdpkt_desc_status(struct sk_buff *skb,
					struct ieee80211_rx_stats *stats)
{
	struct rx_desc_819x_usb *desc = (struct rx_desc_819x_usb *)skb->data;

	/* Get Rx Descriptor Information */
	stats->virtual_address = (u8 *)skb->data;
	stats->Length = desc->Length;
	stats->RxDrvInfoSize = 0;
	stats->RxBufShift = 0;
	stats->packetlength = stats->Length - scrclng;
	stats->fraglength = stats->packetlength;
	stats->fragoffset = 0;
	stats->ntotalfrag = 1;
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
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stats0 = 1;
          struct ieee80211_rx_stats * stats = (struct ieee80211_rx_stats *) malloc(_len_stats0*sizeof(struct ieee80211_rx_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].ntotalfrag = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].fragoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].packetlength = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].fraglength = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].Length = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].RxBufShift = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].RxDrvInfoSize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stats__i0__virtual_address0 = 1;
          stats[_i0].virtual_address = (int *) malloc(_len_stats__i0__virtual_address0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stats__i0__virtual_address0; _j0++) {
            stats[_i0].virtual_address[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          query_rx_cmdpkt_desc_status(skb,stats);
          free(skb);
          for(int _aux = 0; _aux < _len_stats0; _aux++) {
          free(stats[_aux].virtual_address);
          }
          free(stats);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stats0 = 65025;
          struct ieee80211_rx_stats * stats = (struct ieee80211_rx_stats *) malloc(_len_stats0*sizeof(struct ieee80211_rx_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].ntotalfrag = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].fragoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].packetlength = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].fraglength = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].Length = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].RxBufShift = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].RxDrvInfoSize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stats__i0__virtual_address0 = 1;
          stats[_i0].virtual_address = (int *) malloc(_len_stats__i0__virtual_address0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stats__i0__virtual_address0; _j0++) {
            stats[_i0].virtual_address[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          query_rx_cmdpkt_desc_status(skb,stats);
          free(skb);
          for(int _aux = 0; _aux < _len_stats0; _aux++) {
          free(stats[_aux].virtual_address);
          }
          free(stats);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_stats0 = 100;
          struct ieee80211_rx_stats * stats = (struct ieee80211_rx_stats *) malloc(_len_stats0*sizeof(struct ieee80211_rx_stats));
          for(int _i0 = 0; _i0 < _len_stats0; _i0++) {
            stats[_i0].ntotalfrag = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].fragoffset = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].packetlength = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].fraglength = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].Length = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].RxBufShift = ((-2 * (next_i()%2)) + 1) * next_i();
        stats[_i0].RxDrvInfoSize = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_stats__i0__virtual_address0 = 1;
          stats[_i0].virtual_address = (int *) malloc(_len_stats__i0__virtual_address0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_stats__i0__virtual_address0; _j0++) {
            stats[_i0].virtual_address[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          query_rx_cmdpkt_desc_status(skb,stats);
          free(skb);
          for(int _aux = 0; _aux < _len_stats0; _aux++) {
          free(stats[_aux].virtual_address);
          }
          free(stats);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
