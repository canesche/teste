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
struct net {struct hlist_head* dev_index_head; } ;
struct hlist_head {int dummy; } ;

/* Variables and functions */
 int NETDEV_HASHENTRIES ; 

__attribute__((used)) static inline struct hlist_head *dev_index_hash(struct net *net, int ifindex)
{
	return &net->dev_index_head[ifindex & (NETDEV_HASHENTRIES - 1)];
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
          int ifindex = 100;
          int _len_net0 = 1;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
              int _len_net__i0__dev_index_head0 = 1;
          net[_i0].dev_index_head = (struct hlist_head *) malloc(_len_net__i0__dev_index_head0*sizeof(struct hlist_head));
          for(int _j0 = 0; _j0 < _len_net__i0__dev_index_head0; _j0++) {
            net[_i0].dev_index_head->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct hlist_head * benchRet = dev_index_hash(net,ifindex);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].dev_index_head);
          }
          free(net);
        
        break;
    }
    // big-arr
    case 1:
    {
          int ifindex = 255;
          int _len_net0 = 65025;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
              int _len_net__i0__dev_index_head0 = 1;
          net[_i0].dev_index_head = (struct hlist_head *) malloc(_len_net__i0__dev_index_head0*sizeof(struct hlist_head));
          for(int _j0 = 0; _j0 < _len_net__i0__dev_index_head0; _j0++) {
            net[_i0].dev_index_head->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct hlist_head * benchRet = dev_index_hash(net,ifindex);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].dev_index_head);
          }
          free(net);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int ifindex = 10;
          int _len_net0 = 100;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
              int _len_net__i0__dev_index_head0 = 1;
          net[_i0].dev_index_head = (struct hlist_head *) malloc(_len_net__i0__dev_index_head0*sizeof(struct hlist_head));
          for(int _j0 = 0; _j0 < _len_net__i0__dev_index_head0; _j0++) {
            net[_i0].dev_index_head->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct hlist_head * benchRet = dev_index_hash(net,ifindex);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_net0; _aux++) {
          free(net[_aux].dev_index_head);
          }
          free(net);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
