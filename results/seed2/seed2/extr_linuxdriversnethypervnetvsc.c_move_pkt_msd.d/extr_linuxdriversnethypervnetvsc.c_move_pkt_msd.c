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
struct sk_buff {int dummy; } ;
struct multi_send_data {scalar_t__ count; struct hv_netvsc_packet* pkt; struct sk_buff* skb; } ;
struct hv_netvsc_packet {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static inline void move_pkt_msd(struct hv_netvsc_packet **msd_send,
				struct sk_buff **msd_skb,
				struct multi_send_data *msdp)
{
	*msd_skb = msdp->skb;
	*msd_send = msdp->pkt;
	msdp->skb = NULL;
	msdp->pkt = NULL;
	msdp->count = 0;
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
          int _len_msd_send0 = 1;
          struct hv_netvsc_packet ** msd_send = (struct hv_netvsc_packet **) malloc(_len_msd_send0*sizeof(struct hv_netvsc_packet *));
          for(int _i0 = 0; _i0 < _len_msd_send0; _i0++) {
            int _len_msd_send1 = 1;
            msd_send[_i0] = (struct hv_netvsc_packet *) malloc(_len_msd_send1*sizeof(struct hv_netvsc_packet));
            for(int _i1 = 0; _i1 < _len_msd_send1; _i1++) {
              msd_send[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_msd_skb0 = 1;
          struct sk_buff ** msd_skb = (struct sk_buff **) malloc(_len_msd_skb0*sizeof(struct sk_buff *));
          for(int _i0 = 0; _i0 < _len_msd_skb0; _i0++) {
            int _len_msd_skb1 = 1;
            msd_skb[_i0] = (struct sk_buff *) malloc(_len_msd_skb1*sizeof(struct sk_buff));
            for(int _i1 = 0; _i1 < _len_msd_skb1; _i1++) {
              msd_skb[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_msdp0 = 1;
          struct multi_send_data * msdp = (struct multi_send_data *) malloc(_len_msdp0*sizeof(struct multi_send_data));
          for(int _i0 = 0; _i0 < _len_msdp0; _i0++) {
            msdp[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_msdp__i0__pkt0 = 1;
          msdp[_i0].pkt = (struct hv_netvsc_packet *) malloc(_len_msdp__i0__pkt0*sizeof(struct hv_netvsc_packet));
          for(int _j0 = 0; _j0 < _len_msdp__i0__pkt0; _j0++) {
            msdp[_i0].pkt->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msdp__i0__skb0 = 1;
          msdp[_i0].skb = (struct sk_buff *) malloc(_len_msdp__i0__skb0*sizeof(struct sk_buff));
          for(int _j0 = 0; _j0 < _len_msdp__i0__skb0; _j0++) {
            msdp[_i0].skb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          move_pkt_msd(msd_send,msd_skb,msdp);
          for(int i1 = 0; i1 < _len_msd_send0; i1++) {
            int _len_msd_send1 = 1;
              free(msd_send[i1]);
          }
          free(msd_send);
          for(int i1 = 0; i1 < _len_msd_skb0; i1++) {
            int _len_msd_skb1 = 1;
              free(msd_skb[i1]);
          }
          free(msd_skb);
          for(int _aux = 0; _aux < _len_msdp0; _aux++) {
          free(msdp[_aux].pkt);
          }
          for(int _aux = 0; _aux < _len_msdp0; _aux++) {
          free(msdp[_aux].skb);
          }
          free(msdp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_msd_send0 = 65025;
          struct hv_netvsc_packet ** msd_send = (struct hv_netvsc_packet **) malloc(_len_msd_send0*sizeof(struct hv_netvsc_packet *));
          for(int _i0 = 0; _i0 < _len_msd_send0; _i0++) {
            int _len_msd_send1 = 1;
            msd_send[_i0] = (struct hv_netvsc_packet *) malloc(_len_msd_send1*sizeof(struct hv_netvsc_packet));
            for(int _i1 = 0; _i1 < _len_msd_send1; _i1++) {
              msd_send[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_msd_skb0 = 65025;
          struct sk_buff ** msd_skb = (struct sk_buff **) malloc(_len_msd_skb0*sizeof(struct sk_buff *));
          for(int _i0 = 0; _i0 < _len_msd_skb0; _i0++) {
            int _len_msd_skb1 = 1;
            msd_skb[_i0] = (struct sk_buff *) malloc(_len_msd_skb1*sizeof(struct sk_buff));
            for(int _i1 = 0; _i1 < _len_msd_skb1; _i1++) {
              msd_skb[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_msdp0 = 65025;
          struct multi_send_data * msdp = (struct multi_send_data *) malloc(_len_msdp0*sizeof(struct multi_send_data));
          for(int _i0 = 0; _i0 < _len_msdp0; _i0++) {
            msdp[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_msdp__i0__pkt0 = 1;
          msdp[_i0].pkt = (struct hv_netvsc_packet *) malloc(_len_msdp__i0__pkt0*sizeof(struct hv_netvsc_packet));
          for(int _j0 = 0; _j0 < _len_msdp__i0__pkt0; _j0++) {
            msdp[_i0].pkt->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msdp__i0__skb0 = 1;
          msdp[_i0].skb = (struct sk_buff *) malloc(_len_msdp__i0__skb0*sizeof(struct sk_buff));
          for(int _j0 = 0; _j0 < _len_msdp__i0__skb0; _j0++) {
            msdp[_i0].skb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          move_pkt_msd(msd_send,msd_skb,msdp);
          for(int i1 = 0; i1 < _len_msd_send0; i1++) {
            int _len_msd_send1 = 1;
              free(msd_send[i1]);
          }
          free(msd_send);
          for(int i1 = 0; i1 < _len_msd_skb0; i1++) {
            int _len_msd_skb1 = 1;
              free(msd_skb[i1]);
          }
          free(msd_skb);
          for(int _aux = 0; _aux < _len_msdp0; _aux++) {
          free(msdp[_aux].pkt);
          }
          for(int _aux = 0; _aux < _len_msdp0; _aux++) {
          free(msdp[_aux].skb);
          }
          free(msdp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_msd_send0 = 100;
          struct hv_netvsc_packet ** msd_send = (struct hv_netvsc_packet **) malloc(_len_msd_send0*sizeof(struct hv_netvsc_packet *));
          for(int _i0 = 0; _i0 < _len_msd_send0; _i0++) {
            int _len_msd_send1 = 1;
            msd_send[_i0] = (struct hv_netvsc_packet *) malloc(_len_msd_send1*sizeof(struct hv_netvsc_packet));
            for(int _i1 = 0; _i1 < _len_msd_send1; _i1++) {
              msd_send[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_msd_skb0 = 100;
          struct sk_buff ** msd_skb = (struct sk_buff **) malloc(_len_msd_skb0*sizeof(struct sk_buff *));
          for(int _i0 = 0; _i0 < _len_msd_skb0; _i0++) {
            int _len_msd_skb1 = 1;
            msd_skb[_i0] = (struct sk_buff *) malloc(_len_msd_skb1*sizeof(struct sk_buff));
            for(int _i1 = 0; _i1 < _len_msd_skb1; _i1++) {
              msd_skb[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_msdp0 = 100;
          struct multi_send_data * msdp = (struct multi_send_data *) malloc(_len_msdp0*sizeof(struct multi_send_data));
          for(int _i0 = 0; _i0 < _len_msdp0; _i0++) {
            msdp[_i0].count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_msdp__i0__pkt0 = 1;
          msdp[_i0].pkt = (struct hv_netvsc_packet *) malloc(_len_msdp__i0__pkt0*sizeof(struct hv_netvsc_packet));
          for(int _j0 = 0; _j0 < _len_msdp__i0__pkt0; _j0++) {
            msdp[_i0].pkt->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_msdp__i0__skb0 = 1;
          msdp[_i0].skb = (struct sk_buff *) malloc(_len_msdp__i0__skb0*sizeof(struct sk_buff));
          for(int _j0 = 0; _j0 < _len_msdp__i0__skb0; _j0++) {
            msdp[_i0].skb->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          move_pkt_msd(msd_send,msd_skb,msdp);
          for(int i1 = 0; i1 < _len_msd_send0; i1++) {
            int _len_msd_send1 = 1;
              free(msd_send[i1]);
          }
          free(msd_send);
          for(int i1 = 0; i1 < _len_msd_skb0; i1++) {
            int _len_msd_skb1 = 1;
              free(msd_skb[i1]);
          }
          free(msd_skb);
          for(int _aux = 0; _aux < _len_msdp0; _aux++) {
          free(msdp[_aux].pkt);
          }
          for(int _aux = 0; _aux < _len_msdp0; _aux++) {
          free(msdp[_aux].skb);
          }
          free(msdp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
