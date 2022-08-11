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
struct TYPE_4__ {scalar_t__ offload_handle; } ;
struct xfrm_state {TYPE_2__ xso; } ;
struct sk_buff {TYPE_1__* sp; } ;
struct net_device {int dummy; } ;
typedef  int /*<<< orphan*/  netdev_features_t ;
struct TYPE_3__ {struct xfrm_state** xvec; scalar_t__ len; } ;

/* Variables and functions */

bool mlx5e_ipsec_feature_check(struct sk_buff *skb, struct net_device *netdev,
			       netdev_features_t features)
{
	struct xfrm_state *x;

	if (skb->sp && skb->sp->len) {
		x = skb->sp->xvec[0];
		if (x && x->xso.offload_handle)
			return true;
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
          int features = 100;
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              int _len_skb__i0__sp0 = 1;
          skb[_i0].sp = (struct TYPE_3__ *) malloc(_len_skb__i0__sp0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_skb__i0__sp0; _j0++) {
              int _len_skb__i0__sp_xvec0 = 1;
          skb[_i0].sp->xvec = (struct xfrm_state **) malloc(_len_skb__i0__sp_xvec0*sizeof(struct xfrm_state *));
          for(int _j0 = 0; _j0 < _len_skb__i0__sp_xvec0; _j0++) {
            int _len_skb__i0__sp_xvec1 = 1;
            skb[_i0].sp->xvec[_j0] = (struct xfrm_state *) malloc(_len_skb__i0__sp_xvec1*sizeof(struct xfrm_state));
            for(int _j1 = 0; _j1 < _len_skb__i0__sp_xvec1; _j1++) {
              skb[_i0].sp->xvec[_j0]->xso.offload_handle = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        skb[_i0].sp->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_netdev0 = 1;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx5e_ipsec_feature_check(skb,netdev,features);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_skb0; _aux++) {
          free(skb[_aux].sp);
          }
          free(skb);
          free(netdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int features = 255;
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              int _len_skb__i0__sp0 = 1;
          skb[_i0].sp = (struct TYPE_3__ *) malloc(_len_skb__i0__sp0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_skb__i0__sp0; _j0++) {
              int _len_skb__i0__sp_xvec0 = 1;
          skb[_i0].sp->xvec = (struct xfrm_state **) malloc(_len_skb__i0__sp_xvec0*sizeof(struct xfrm_state *));
          for(int _j0 = 0; _j0 < _len_skb__i0__sp_xvec0; _j0++) {
            int _len_skb__i0__sp_xvec1 = 1;
            skb[_i0].sp->xvec[_j0] = (struct xfrm_state *) malloc(_len_skb__i0__sp_xvec1*sizeof(struct xfrm_state));
            for(int _j1 = 0; _j1 < _len_skb__i0__sp_xvec1; _j1++) {
              skb[_i0].sp->xvec[_j0]->xso.offload_handle = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        skb[_i0].sp->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_netdev0 = 65025;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx5e_ipsec_feature_check(skb,netdev,features);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_skb0; _aux++) {
          free(skb[_aux].sp);
          }
          free(skb);
          free(netdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int features = 10;
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
              int _len_skb__i0__sp0 = 1;
          skb[_i0].sp = (struct TYPE_3__ *) malloc(_len_skb__i0__sp0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_skb__i0__sp0; _j0++) {
              int _len_skb__i0__sp_xvec0 = 1;
          skb[_i0].sp->xvec = (struct xfrm_state **) malloc(_len_skb__i0__sp_xvec0*sizeof(struct xfrm_state *));
          for(int _j0 = 0; _j0 < _len_skb__i0__sp_xvec0; _j0++) {
            int _len_skb__i0__sp_xvec1 = 1;
            skb[_i0].sp->xvec[_j0] = (struct xfrm_state *) malloc(_len_skb__i0__sp_xvec1*sizeof(struct xfrm_state));
            for(int _j1 = 0; _j1 < _len_skb__i0__sp_xvec1; _j1++) {
              skb[_i0].sp->xvec[_j0]->xso.offload_handle = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
        skb[_i0].sp->len = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_netdev0 = 100;
          struct net_device * netdev = (struct net_device *) malloc(_len_netdev0*sizeof(struct net_device));
          for(int _i0 = 0; _i0 < _len_netdev0; _i0++) {
            netdev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = mlx5e_ipsec_feature_check(skb,netdev,features);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_skb0; _aux++) {
          free(skb[_aux].sp);
          }
          free(skb);
          free(netdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
