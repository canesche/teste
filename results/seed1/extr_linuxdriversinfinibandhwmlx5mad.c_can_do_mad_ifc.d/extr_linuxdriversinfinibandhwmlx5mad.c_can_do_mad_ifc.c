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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  int u8 ;
struct mlx5_ib_dev {TYPE_3__* mdev; } ;
struct TYPE_4__ {scalar_t__ mgmt_class; } ;
struct ib_mad {TYPE_1__ mad_hdr; } ;
struct TYPE_6__ {TYPE_2__* port_caps; } ;
struct TYPE_5__ {int has_smi; } ;

/* Variables and functions */
 scalar_t__ IB_MGMT_CLASS_SUBN_DIRECTED_ROUTE ; 
 scalar_t__ IB_MGMT_CLASS_SUBN_LID_ROUTED ; 

__attribute__((used)) static bool can_do_mad_ifc(struct mlx5_ib_dev *dev, u8 port_num,
			   struct ib_mad *in_mad)
{
	if (in_mad->mad_hdr.mgmt_class != IB_MGMT_CLASS_SUBN_LID_ROUTED &&
	    in_mad->mad_hdr.mgmt_class != IB_MGMT_CLASS_SUBN_DIRECTED_ROUTE)
		return true;
	return dev->mdev->port_caps[port_num - 1].has_smi;
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
          int port_num = 100;
          int _len_dev0 = 1;
          struct mlx5_ib_dev * dev = (struct mlx5_ib_dev *) malloc(_len_dev0*sizeof(struct mlx5_ib_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__mdev0 = 1;
          dev[_i0].mdev = (struct TYPE_6__ *) malloc(_len_dev__i0__mdev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__mdev0; _j0++) {
              int _len_dev__i0__mdev_port_caps0 = 1;
          dev[_i0].mdev->port_caps = (struct TYPE_5__ *) malloc(_len_dev__i0__mdev_port_caps0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__mdev_port_caps0; _j0++) {
            dev[_i0].mdev->port_caps->has_smi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_in_mad0 = 1;
          struct ib_mad * in_mad = (struct ib_mad *) malloc(_len_in_mad0*sizeof(struct ib_mad));
          for(int _i0 = 0; _i0 < _len_in_mad0; _i0++) {
            in_mad[_i0].mad_hdr.mgmt_class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = can_do_mad_ifc(dev,port_num,in_mad);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].mdev);
          }
          free(dev);
          free(in_mad);
        
        break;
    }
    // big-arr
    case 1:
    {
          int port_num = 255;
          int _len_dev0 = 65025;
          struct mlx5_ib_dev * dev = (struct mlx5_ib_dev *) malloc(_len_dev0*sizeof(struct mlx5_ib_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__mdev0 = 1;
          dev[_i0].mdev = (struct TYPE_6__ *) malloc(_len_dev__i0__mdev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__mdev0; _j0++) {
              int _len_dev__i0__mdev_port_caps0 = 1;
          dev[_i0].mdev->port_caps = (struct TYPE_5__ *) malloc(_len_dev__i0__mdev_port_caps0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__mdev_port_caps0; _j0++) {
            dev[_i0].mdev->port_caps->has_smi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_in_mad0 = 65025;
          struct ib_mad * in_mad = (struct ib_mad *) malloc(_len_in_mad0*sizeof(struct ib_mad));
          for(int _i0 = 0; _i0 < _len_in_mad0; _i0++) {
            in_mad[_i0].mad_hdr.mgmt_class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = can_do_mad_ifc(dev,port_num,in_mad);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].mdev);
          }
          free(dev);
          free(in_mad);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int port_num = 10;
          int _len_dev0 = 100;
          struct mlx5_ib_dev * dev = (struct mlx5_ib_dev *) malloc(_len_dev0*sizeof(struct mlx5_ib_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__mdev0 = 1;
          dev[_i0].mdev = (struct TYPE_6__ *) malloc(_len_dev__i0__mdev0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_dev__i0__mdev0; _j0++) {
              int _len_dev__i0__mdev_port_caps0 = 1;
          dev[_i0].mdev->port_caps = (struct TYPE_5__ *) malloc(_len_dev__i0__mdev_port_caps0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dev__i0__mdev_port_caps0; _j0++) {
            dev[_i0].mdev->port_caps->has_smi = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_in_mad0 = 100;
          struct ib_mad * in_mad = (struct ib_mad *) malloc(_len_in_mad0*sizeof(struct ib_mad));
          for(int _i0 = 0; _i0 < _len_in_mad0; _i0++) {
            in_mad[_i0].mad_hdr.mgmt_class = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = can_do_mad_ifc(dev,port_num,in_mad);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_dev0; _aux++) {
          free(dev[_aux].mdev);
          }
          free(dev);
          free(in_mad);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
