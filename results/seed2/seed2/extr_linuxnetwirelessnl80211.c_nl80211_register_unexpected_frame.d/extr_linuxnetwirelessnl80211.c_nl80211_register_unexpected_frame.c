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
struct wireless_dev {scalar_t__ iftype; scalar_t__ ap_unexpected_nlportid; } ;
struct sk_buff {int dummy; } ;
struct net_device {struct wireless_dev* ieee80211_ptr; } ;
struct genl_info {scalar_t__ snd_portid; struct net_device** user_ptr; } ;

/* Variables and functions */
 int EBUSY ; 
 int EINVAL ; 
 scalar_t__ NL80211_IFTYPE_AP ; 
 scalar_t__ NL80211_IFTYPE_P2P_GO ; 

__attribute__((used)) static int nl80211_register_unexpected_frame(struct sk_buff *skb,
					     struct genl_info *info)
{
	struct net_device *dev = info->user_ptr[1];
	struct wireless_dev *wdev = dev->ieee80211_ptr;

	if (wdev->iftype != NL80211_IFTYPE_AP &&
	    wdev->iftype != NL80211_IFTYPE_P2P_GO)
		return -EINVAL;

	if (wdev->ap_unexpected_nlportid)
		return -EBUSY;

	wdev->ap_unexpected_nlportid = info->snd_portid;
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
          int _len_skb0 = 1;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 1;
          struct genl_info * info = (struct genl_info *) malloc(_len_info0*sizeof(struct genl_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].snd_portid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__user_ptr0 = 1;
          info[_i0].user_ptr = (struct net_device **) malloc(_len_info__i0__user_ptr0*sizeof(struct net_device *));
          for(int _j0 = 0; _j0 < _len_info__i0__user_ptr0; _j0++) {
            int _len_info__i0__user_ptr1 = 1;
            info[_i0].user_ptr[_j0] = (struct net_device *) malloc(_len_info__i0__user_ptr1*sizeof(struct net_device));
            for(int _j1 = 0; _j1 < _len_info__i0__user_ptr1; _j1++) {
                int _len_info__i0__user_ptr__j0__ieee80211_ptr0 = 1;
          info[_i0].user_ptr[_j0]->ieee80211_ptr = (struct wireless_dev *) malloc(_len_info__i0__user_ptr__j0__ieee80211_ptr0*sizeof(struct wireless_dev));
          for(int _j0 = 0; _j0 < _len_info__i0__user_ptr__j0__ieee80211_ptr0; _j0++) {
            info[_i0].user_ptr[_j0]->ieee80211_ptr->iftype = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].user_ptr[_j0]->ieee80211_ptr->ap_unexpected_nlportid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = nl80211_register_unexpected_frame(skb,info);
          printf("%d\n", benchRet); 
          free(skb);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(*(info[_aux].user_ptr));
        free(info[_aux].user_ptr);
          }
          free(info);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_skb0 = 65025;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 65025;
          struct genl_info * info = (struct genl_info *) malloc(_len_info0*sizeof(struct genl_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].snd_portid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__user_ptr0 = 1;
          info[_i0].user_ptr = (struct net_device **) malloc(_len_info__i0__user_ptr0*sizeof(struct net_device *));
          for(int _j0 = 0; _j0 < _len_info__i0__user_ptr0; _j0++) {
            int _len_info__i0__user_ptr1 = 1;
            info[_i0].user_ptr[_j0] = (struct net_device *) malloc(_len_info__i0__user_ptr1*sizeof(struct net_device));
            for(int _j1 = 0; _j1 < _len_info__i0__user_ptr1; _j1++) {
                int _len_info__i0__user_ptr__j0__ieee80211_ptr0 = 1;
          info[_i0].user_ptr[_j0]->ieee80211_ptr = (struct wireless_dev *) malloc(_len_info__i0__user_ptr__j0__ieee80211_ptr0*sizeof(struct wireless_dev));
          for(int _j0 = 0; _j0 < _len_info__i0__user_ptr__j0__ieee80211_ptr0; _j0++) {
            info[_i0].user_ptr[_j0]->ieee80211_ptr->iftype = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].user_ptr[_j0]->ieee80211_ptr->ap_unexpected_nlportid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = nl80211_register_unexpected_frame(skb,info);
          printf("%d\n", benchRet); 
          free(skb);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(*(info[_aux].user_ptr));
        free(info[_aux].user_ptr);
          }
          free(info);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_skb0 = 100;
          struct sk_buff * skb = (struct sk_buff *) malloc(_len_skb0*sizeof(struct sk_buff));
          for(int _i0 = 0; _i0 < _len_skb0; _i0++) {
            skb[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_info0 = 100;
          struct genl_info * info = (struct genl_info *) malloc(_len_info0*sizeof(struct genl_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].snd_portid = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_info__i0__user_ptr0 = 1;
          info[_i0].user_ptr = (struct net_device **) malloc(_len_info__i0__user_ptr0*sizeof(struct net_device *));
          for(int _j0 = 0; _j0 < _len_info__i0__user_ptr0; _j0++) {
            int _len_info__i0__user_ptr1 = 1;
            info[_i0].user_ptr[_j0] = (struct net_device *) malloc(_len_info__i0__user_ptr1*sizeof(struct net_device));
            for(int _j1 = 0; _j1 < _len_info__i0__user_ptr1; _j1++) {
                int _len_info__i0__user_ptr__j0__ieee80211_ptr0 = 1;
          info[_i0].user_ptr[_j0]->ieee80211_ptr = (struct wireless_dev *) malloc(_len_info__i0__user_ptr__j0__ieee80211_ptr0*sizeof(struct wireless_dev));
          for(int _j0 = 0; _j0 < _len_info__i0__user_ptr__j0__ieee80211_ptr0; _j0++) {
            info[_i0].user_ptr[_j0]->ieee80211_ptr->iftype = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].user_ptr[_j0]->ieee80211_ptr->ap_unexpected_nlportid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
            }
          }
          }
          int benchRet = nl80211_register_unexpected_frame(skb,info);
          printf("%d\n", benchRet); 
          free(skb);
          for(int _aux = 0; _aux < _len_info0; _aux++) {
          free(*(info[_aux].user_ptr));
        free(info[_aux].user_ptr);
          }
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
