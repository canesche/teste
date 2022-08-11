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
struct sk_buff {scalar_t__ data; } ;
struct ioc3_private {int rx_ci; size_t rx_pi; struct sk_buff** rx_skbs; int /*<<< orphan*/ * rxr; } ;
struct ioc3_erxbuf {scalar_t__ w0; } ;

/* Variables and functions */
 scalar_t__ RX_OFFSET ; 

__attribute__((used)) static inline void ioc3_clean_rx_ring(struct ioc3_private *ip)
{
	struct sk_buff *skb;
	int i;

	for (i = ip->rx_ci; i & 15; i++) {
		ip->rx_skbs[ip->rx_pi] = ip->rx_skbs[ip->rx_ci];
		ip->rxr[ip->rx_pi++] = ip->rxr[ip->rx_ci++];
	}
	ip->rx_pi &= 511;
	ip->rx_ci &= 511;

	for (i = ip->rx_ci; i != ip->rx_pi; i = (i+1) & 511) {
		struct ioc3_erxbuf *rxb;
		skb = ip->rx_skbs[i];
		rxb = (struct ioc3_erxbuf *) (skb->data - RX_OFFSET);
		rxb->w0 = 0;
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
          int _len_ip0 = 1;
          struct ioc3_private * ip = (struct ioc3_private *) malloc(_len_ip0*sizeof(struct ioc3_private));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0].rx_ci = ((-2 * (next_i()%2)) + 1) * next_i();
        ip[_i0].rx_pi = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ip__i0__rx_skbs0 = 1;
          ip[_i0].rx_skbs = (struct sk_buff **) malloc(_len_ip__i0__rx_skbs0*sizeof(struct sk_buff *));
          for(int _j0 = 0; _j0 < _len_ip__i0__rx_skbs0; _j0++) {
            int _len_ip__i0__rx_skbs1 = 1;
            ip[_i0].rx_skbs[_j0] = (struct sk_buff *) malloc(_len_ip__i0__rx_skbs1*sizeof(struct sk_buff));
            for(int _j1 = 0; _j1 < _len_ip__i0__rx_skbs1; _j1++) {
              ip[_i0].rx_skbs[_j0]->data = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ip__i0__rxr0 = 1;
          ip[_i0].rxr = (int *) malloc(_len_ip__i0__rxr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ip__i0__rxr0; _j0++) {
            ip[_i0].rxr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ioc3_clean_rx_ring(ip);
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(*(ip[_aux].rx_skbs));
        free(ip[_aux].rx_skbs);
          }
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].rxr);
          }
          free(ip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ip0 = 65025;
          struct ioc3_private * ip = (struct ioc3_private *) malloc(_len_ip0*sizeof(struct ioc3_private));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0].rx_ci = ((-2 * (next_i()%2)) + 1) * next_i();
        ip[_i0].rx_pi = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ip__i0__rx_skbs0 = 1;
          ip[_i0].rx_skbs = (struct sk_buff **) malloc(_len_ip__i0__rx_skbs0*sizeof(struct sk_buff *));
          for(int _j0 = 0; _j0 < _len_ip__i0__rx_skbs0; _j0++) {
            int _len_ip__i0__rx_skbs1 = 1;
            ip[_i0].rx_skbs[_j0] = (struct sk_buff *) malloc(_len_ip__i0__rx_skbs1*sizeof(struct sk_buff));
            for(int _j1 = 0; _j1 < _len_ip__i0__rx_skbs1; _j1++) {
              ip[_i0].rx_skbs[_j0]->data = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ip__i0__rxr0 = 1;
          ip[_i0].rxr = (int *) malloc(_len_ip__i0__rxr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ip__i0__rxr0; _j0++) {
            ip[_i0].rxr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ioc3_clean_rx_ring(ip);
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(*(ip[_aux].rx_skbs));
        free(ip[_aux].rx_skbs);
          }
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].rxr);
          }
          free(ip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ip0 = 100;
          struct ioc3_private * ip = (struct ioc3_private *) malloc(_len_ip0*sizeof(struct ioc3_private));
          for(int _i0 = 0; _i0 < _len_ip0; _i0++) {
            ip[_i0].rx_ci = ((-2 * (next_i()%2)) + 1) * next_i();
        ip[_i0].rx_pi = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ip__i0__rx_skbs0 = 1;
          ip[_i0].rx_skbs = (struct sk_buff **) malloc(_len_ip__i0__rx_skbs0*sizeof(struct sk_buff *));
          for(int _j0 = 0; _j0 < _len_ip__i0__rx_skbs0; _j0++) {
            int _len_ip__i0__rx_skbs1 = 1;
            ip[_i0].rx_skbs[_j0] = (struct sk_buff *) malloc(_len_ip__i0__rx_skbs1*sizeof(struct sk_buff));
            for(int _j1 = 0; _j1 < _len_ip__i0__rx_skbs1; _j1++) {
              ip[_i0].rx_skbs[_j0]->data = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_ip__i0__rxr0 = 1;
          ip[_i0].rxr = (int *) malloc(_len_ip__i0__rxr0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ip__i0__rxr0; _j0++) {
            ip[_i0].rxr[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          ioc3_clean_rx_ring(ip);
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(*(ip[_aux].rx_skbs));
        free(ip[_aux].rx_skbs);
          }
          for(int _aux = 0; _aux < _len_ip0; _aux++) {
          free(ip[_aux].rxr);
          }
          free(ip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
