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
struct TYPE_2__ {int num_ports; int /*<<< orphan*/ * port_type; int /*<<< orphan*/ * port_mask; } ;
struct mlx4_dev {TYPE_1__ caps; } ;

/* Variables and functions */

__attribute__((used)) static void mlx4_set_port_mask(struct mlx4_dev *dev)
{
	int i;

	for (i = 1; i <= dev->caps.num_ports; ++i)
		dev->caps.port_mask[i] = dev->caps.port_type[i];
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
          int _len_dev0 = 1;
          struct mlx4_dev * dev = (struct mlx4_dev *) malloc(_len_dev0*sizeof(struct mlx4_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].caps.num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__caps_port_type0 = 1;
          dev[_i0].caps.port_type = (int *) malloc(_len_dev__i0__caps_port_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_port_type0; _j0++) {
            dev[_i0].caps.port_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_port_mask0 = 1;
          dev[_i0].caps.port_mask = (int *) malloc(_len_dev__i0__caps_port_mask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_port_mask0; _j0++) {
            dev[_i0].caps.port_mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mlx4_set_port_mask(dev);
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dev0 = 65025;
          struct mlx4_dev * dev = (struct mlx4_dev *) malloc(_len_dev0*sizeof(struct mlx4_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].caps.num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__caps_port_type0 = 1;
          dev[_i0].caps.port_type = (int *) malloc(_len_dev__i0__caps_port_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_port_type0; _j0++) {
            dev[_i0].caps.port_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_port_mask0 = 1;
          dev[_i0].caps.port_mask = (int *) malloc(_len_dev__i0__caps_port_mask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_port_mask0; _j0++) {
            dev[_i0].caps.port_mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mlx4_set_port_mask(dev);
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dev0 = 100;
          struct mlx4_dev * dev = (struct mlx4_dev *) malloc(_len_dev0*sizeof(struct mlx4_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].caps.num_ports = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__caps_port_type0 = 1;
          dev[_i0].caps.port_type = (int *) malloc(_len_dev__i0__caps_port_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_port_type0; _j0++) {
            dev[_i0].caps.port_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_port_mask0 = 1;
          dev[_i0].caps.port_mask = (int *) malloc(_len_dev__i0__caps_port_mask0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_port_mask0; _j0++) {
            dev[_i0].caps.port_mask[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          mlx4_set_port_mask(dev);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
