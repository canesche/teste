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
struct sk_buff {scalar_t__ data; } ;
struct TYPE_3__ {scalar_t__ category; } ;
struct TYPE_4__ {TYPE_1__ action; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;
struct cw1200_common {int dummy; } ;

/* Variables and functions */
 scalar_t__ WLAN_CATEGORY_BACK ; 

__attribute__((used)) static int cw1200_handle_action_rx(struct cw1200_common *priv,
				   struct sk_buff *skb)
{
	struct ieee80211_mgmt *mgmt = (void *)skb->data;

	/* Filter block ACK negotiation: fully controlled by firmware */
	if (mgmt->u.action.category == WLAN_CATEGORY_BACK)
		return 1;

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
          int _len_priv0 = 1;
          struct cw1200_common * priv = (struct cw1200_common *) malloc(_len_priv0*sizeof(struct cw1200_common));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cw1200_handle_action_rx(priv,skb);
          printf("%d\n", benchRet); 
          free(priv);
          free(skb);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_priv0 = 65025;
          struct cw1200_common * priv = (struct cw1200_common *) malloc(_len_priv0*sizeof(struct cw1200_common));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cw1200_handle_action_rx(priv,skb);
          printf("%d\n", benchRet); 
          free(priv);
          free(skb);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_priv0 = 100;
          struct cw1200_common * priv = (struct cw1200_common *) malloc(_len_priv0*sizeof(struct cw1200_common));
          for(int _i0 = 0; _i0 < _len_priv0; _i0++) {
            priv[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = cw1200_handle_action_rx(priv,skb);
          printf("%d\n", benchRet); 
          free(priv);
          free(skb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
