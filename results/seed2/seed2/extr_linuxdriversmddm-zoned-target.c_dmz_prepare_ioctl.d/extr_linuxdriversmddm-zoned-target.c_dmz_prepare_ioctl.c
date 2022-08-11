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
struct dmz_target {TYPE_1__* dev; } ;
struct dm_target {struct dmz_target* private; } ;
struct block_device {int dummy; } ;
struct TYPE_2__ {struct block_device* bdev; } ;

/* Variables and functions */

__attribute__((used)) static int dmz_prepare_ioctl(struct dm_target *ti, struct block_device **bdev)
{
	struct dmz_target *dmz = ti->private;

	*bdev = dmz->dev->bdev;

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
          int _len_ti0 = 1;
          struct dm_target * ti = (struct dm_target *) malloc(_len_ti0*sizeof(struct dm_target));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
              int _len_ti__i0__private0 = 1;
          ti[_i0].private = (struct dmz_target *) malloc(_len_ti__i0__private0*sizeof(struct dmz_target));
          for(int _j0 = 0; _j0 < _len_ti__i0__private0; _j0++) {
              int _len_ti__i0__private_dev0 = 1;
          ti[_i0].private->dev = (struct TYPE_2__ *) malloc(_len_ti__i0__private_dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ti__i0__private_dev0; _j0++) {
              int _len_ti__i0__private_dev_bdev0 = 1;
          ti[_i0].private->dev->bdev = (struct block_device *) malloc(_len_ti__i0__private_dev_bdev0*sizeof(struct block_device));
          for(int _j0 = 0; _j0 < _len_ti__i0__private_dev_bdev0; _j0++) {
            ti[_i0].private->dev->bdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_bdev0 = 1;
          struct block_device ** bdev = (struct block_device **) malloc(_len_bdev0*sizeof(struct block_device *));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
            int _len_bdev1 = 1;
            bdev[_i0] = (struct block_device *) malloc(_len_bdev1*sizeof(struct block_device));
            for(int _i1 = 0; _i1 < _len_bdev1; _i1++) {
              bdev[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = dmz_prepare_ioctl(ti,bdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ti0; _aux++) {
          free(ti[_aux].private);
          }
          free(ti);
          for(int i1 = 0; i1 < _len_bdev0; i1++) {
            int _len_bdev1 = 1;
              free(bdev[i1]);
          }
          free(bdev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ti0 = 65025;
          struct dm_target * ti = (struct dm_target *) malloc(_len_ti0*sizeof(struct dm_target));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
              int _len_ti__i0__private0 = 1;
          ti[_i0].private = (struct dmz_target *) malloc(_len_ti__i0__private0*sizeof(struct dmz_target));
          for(int _j0 = 0; _j0 < _len_ti__i0__private0; _j0++) {
              int _len_ti__i0__private_dev0 = 1;
          ti[_i0].private->dev = (struct TYPE_2__ *) malloc(_len_ti__i0__private_dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ti__i0__private_dev0; _j0++) {
              int _len_ti__i0__private_dev_bdev0 = 1;
          ti[_i0].private->dev->bdev = (struct block_device *) malloc(_len_ti__i0__private_dev_bdev0*sizeof(struct block_device));
          for(int _j0 = 0; _j0 < _len_ti__i0__private_dev_bdev0; _j0++) {
            ti[_i0].private->dev->bdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_bdev0 = 65025;
          struct block_device ** bdev = (struct block_device **) malloc(_len_bdev0*sizeof(struct block_device *));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
            int _len_bdev1 = 1;
            bdev[_i0] = (struct block_device *) malloc(_len_bdev1*sizeof(struct block_device));
            for(int _i1 = 0; _i1 < _len_bdev1; _i1++) {
              bdev[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = dmz_prepare_ioctl(ti,bdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ti0; _aux++) {
          free(ti[_aux].private);
          }
          free(ti);
          for(int i1 = 0; i1 < _len_bdev0; i1++) {
            int _len_bdev1 = 1;
              free(bdev[i1]);
          }
          free(bdev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ti0 = 100;
          struct dm_target * ti = (struct dm_target *) malloc(_len_ti0*sizeof(struct dm_target));
          for(int _i0 = 0; _i0 < _len_ti0; _i0++) {
              int _len_ti__i0__private0 = 1;
          ti[_i0].private = (struct dmz_target *) malloc(_len_ti__i0__private0*sizeof(struct dmz_target));
          for(int _j0 = 0; _j0 < _len_ti__i0__private0; _j0++) {
              int _len_ti__i0__private_dev0 = 1;
          ti[_i0].private->dev = (struct TYPE_2__ *) malloc(_len_ti__i0__private_dev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ti__i0__private_dev0; _j0++) {
              int _len_ti__i0__private_dev_bdev0 = 1;
          ti[_i0].private->dev->bdev = (struct block_device *) malloc(_len_ti__i0__private_dev_bdev0*sizeof(struct block_device));
          for(int _j0 = 0; _j0 < _len_ti__i0__private_dev_bdev0; _j0++) {
            ti[_i0].private->dev->bdev->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_bdev0 = 100;
          struct block_device ** bdev = (struct block_device **) malloc(_len_bdev0*sizeof(struct block_device *));
          for(int _i0 = 0; _i0 < _len_bdev0; _i0++) {
            int _len_bdev1 = 1;
            bdev[_i0] = (struct block_device *) malloc(_len_bdev1*sizeof(struct block_device));
            for(int _i1 = 0; _i1 < _len_bdev1; _i1++) {
              bdev[_i0][_i1].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int benchRet = dmz_prepare_ioctl(ti,bdev);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_ti0; _aux++) {
          free(ti[_aux].private);
          }
          free(ti);
          for(int i1 = 0; i1 < _len_bdev0; i1++) {
            int _len_bdev1 = 1;
              free(bdev[i1]);
          }
          free(bdev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
