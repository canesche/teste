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
typedef  struct TYPE_10__   TYPE_5__ ;
typedef  struct TYPE_9__   TYPE_4__ ;
typedef  struct TYPE_8__   TYPE_3__ ;
typedef  struct TYPE_7__   TYPE_2__ ;
typedef  struct TYPE_6__   TYPE_1__ ;

/* Type definitions */
struct TYPE_10__ {TYPE_4__* devconf_dflt; } ;
struct net {TYPE_5__ ipv6; } ;
struct TYPE_6__ {int /*<<< orphan*/  initialized; } ;
struct TYPE_7__ {TYPE_1__ stable_secret; } ;
struct inet6_dev {TYPE_2__ cnf; } ;
struct TYPE_8__ {int /*<<< orphan*/  initialized; } ;
struct TYPE_9__ {TYPE_3__ stable_secret; } ;

/* Variables and functions */
 int EINVAL ; 
 int IN6_ADDR_GEN_MODE_STABLE_PRIVACY ; 

__attribute__((used)) static int check_stable_privacy(struct inet6_dev *idev, struct net *net,
				int mode)
{
	if (mode == IN6_ADDR_GEN_MODE_STABLE_PRIVACY &&
	    !idev->cnf.stable_secret.initialized &&
	    !net->ipv6.devconf_dflt->stable_secret.initialized)
		return -EINVAL;
	return 1;
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
          int mode = 100;
          int _len_idev0 = 1;
          struct inet6_dev * idev = (struct inet6_dev *) malloc(_len_idev0*sizeof(struct inet6_dev));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
            idev[_i0].cnf.stable_secret.initialized = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_net0 = 1;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
              int _len_net__i0__ipv6_devconf_dflt0 = 1;
          net[_i0].ipv6.devconf_dflt = (struct TYPE_9__ *) malloc(_len_net__i0__ipv6_devconf_dflt0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_net__i0__ipv6_devconf_dflt0; _j0++) {
            net[_i0].ipv6.devconf_dflt->stable_secret.initialized = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_stable_privacy(idev,net,mode);
          printf("%d\n", benchRet); 
          free(idev);
          free(net);
        
        break;
    }
    // big-arr
    case 1:
    {
          int mode = 255;
          int _len_idev0 = 65025;
          struct inet6_dev * idev = (struct inet6_dev *) malloc(_len_idev0*sizeof(struct inet6_dev));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
            idev[_i0].cnf.stable_secret.initialized = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_net0 = 65025;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
              int _len_net__i0__ipv6_devconf_dflt0 = 1;
          net[_i0].ipv6.devconf_dflt = (struct TYPE_9__ *) malloc(_len_net__i0__ipv6_devconf_dflt0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_net__i0__ipv6_devconf_dflt0; _j0++) {
            net[_i0].ipv6.devconf_dflt->stable_secret.initialized = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_stable_privacy(idev,net,mode);
          printf("%d\n", benchRet); 
          free(idev);
          free(net);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int mode = 10;
          int _len_idev0 = 100;
          struct inet6_dev * idev = (struct inet6_dev *) malloc(_len_idev0*sizeof(struct inet6_dev));
          for(int _i0 = 0; _i0 < _len_idev0; _i0++) {
            idev[_i0].cnf.stable_secret.initialized = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_net0 = 100;
          struct net * net = (struct net *) malloc(_len_net0*sizeof(struct net));
          for(int _i0 = 0; _i0 < _len_net0; _i0++) {
              int _len_net__i0__ipv6_devconf_dflt0 = 1;
          net[_i0].ipv6.devconf_dflt = (struct TYPE_9__ *) malloc(_len_net__i0__ipv6_devconf_dflt0*sizeof(struct TYPE_9__));
          for(int _j0 = 0; _j0 < _len_net__i0__ipv6_devconf_dflt0; _j0++) {
            net[_i0].ipv6.devconf_dflt->stable_secret.initialized = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = check_stable_privacy(idev,net,mode);
          printf("%d\n", benchRet); 
          free(idev);
          free(net);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
