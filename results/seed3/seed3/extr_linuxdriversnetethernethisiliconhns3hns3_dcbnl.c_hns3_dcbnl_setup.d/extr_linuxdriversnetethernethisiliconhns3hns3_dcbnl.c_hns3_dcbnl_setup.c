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
struct net_device {int /*<<< orphan*/ * dcbnl_ops; } ;
struct TYPE_2__ {int /*<<< orphan*/  dcb_ops; struct net_device* netdev; } ;
struct hnae3_handle {int flags; TYPE_1__ kinfo; } ;

/* Variables and functions */
 int HNAE3_SUPPORT_VF ; 
 int /*<<< orphan*/  hns3_dcbnl_ops ; 

void hns3_dcbnl_setup(struct hnae3_handle *handle)
{
	struct net_device *dev = handle->kinfo.netdev;

	if ((!handle->kinfo.dcb_ops) || (handle->flags & HNAE3_SUPPORT_VF))
		return;

	dev->dcbnl_ops = &hns3_dcbnl_ops;
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
          int _len_handle0 = 1;
          struct hnae3_handle * handle = (struct hnae3_handle *) malloc(_len_handle0*sizeof(struct hnae3_handle));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        handle[_i0].kinfo.dcb_ops = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_handle__i0__kinfo_netdev0 = 1;
          handle[_i0].kinfo.netdev = (struct net_device *) malloc(_len_handle__i0__kinfo_netdev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_handle__i0__kinfo_netdev0; _j0++) {
              int _len_handle__i0__kinfo_netdev_dcbnl_ops0 = 1;
          handle[_i0].kinfo.netdev->dcbnl_ops = (int *) malloc(_len_handle__i0__kinfo_netdev_dcbnl_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_handle__i0__kinfo_netdev_dcbnl_ops0; _j0++) {
            handle[_i0].kinfo.netdev->dcbnl_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          hns3_dcbnl_setup(handle);
          free(handle);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_handle0 = 65025;
          struct hnae3_handle * handle = (struct hnae3_handle *) malloc(_len_handle0*sizeof(struct hnae3_handle));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        handle[_i0].kinfo.dcb_ops = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_handle__i0__kinfo_netdev0 = 1;
          handle[_i0].kinfo.netdev = (struct net_device *) malloc(_len_handle__i0__kinfo_netdev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_handle__i0__kinfo_netdev0; _j0++) {
              int _len_handle__i0__kinfo_netdev_dcbnl_ops0 = 1;
          handle[_i0].kinfo.netdev->dcbnl_ops = (int *) malloc(_len_handle__i0__kinfo_netdev_dcbnl_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_handle__i0__kinfo_netdev_dcbnl_ops0; _j0++) {
            handle[_i0].kinfo.netdev->dcbnl_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          hns3_dcbnl_setup(handle);
          free(handle);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_handle0 = 100;
          struct hnae3_handle * handle = (struct hnae3_handle *) malloc(_len_handle0*sizeof(struct hnae3_handle));
          for(int _i0 = 0; _i0 < _len_handle0; _i0++) {
            handle[_i0].flags = ((-2 * (next_i()%2)) + 1) * next_i();
        handle[_i0].kinfo.dcb_ops = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_handle__i0__kinfo_netdev0 = 1;
          handle[_i0].kinfo.netdev = (struct net_device *) malloc(_len_handle__i0__kinfo_netdev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_handle__i0__kinfo_netdev0; _j0++) {
              int _len_handle__i0__kinfo_netdev_dcbnl_ops0 = 1;
          handle[_i0].kinfo.netdev->dcbnl_ops = (int *) malloc(_len_handle__i0__kinfo_netdev_dcbnl_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_handle__i0__kinfo_netdev_dcbnl_ops0; _j0++) {
            handle[_i0].kinfo.netdev->dcbnl_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          hns3_dcbnl_setup(handle);
          free(handle);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
