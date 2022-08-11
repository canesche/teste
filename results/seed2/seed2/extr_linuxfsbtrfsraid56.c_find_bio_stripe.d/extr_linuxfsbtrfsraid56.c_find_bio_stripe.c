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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int u64 ;
struct btrfs_raid_bio {int stripe_len; TYPE_2__* bbio; } ;
struct btrfs_bio_stripe {int physical; TYPE_4__* dev; } ;
struct TYPE_5__ {int bi_sector; } ;
struct bio {scalar_t__ bi_disk; scalar_t__ bi_partno; TYPE_1__ bi_iter; } ;
struct TYPE_8__ {TYPE_3__* bdev; } ;
struct TYPE_7__ {scalar_t__ bd_disk; scalar_t__ bd_partno; } ;
struct TYPE_6__ {int num_stripes; struct btrfs_bio_stripe* stripes; } ;

/* Variables and functions */

__attribute__((used)) static int find_bio_stripe(struct btrfs_raid_bio *rbio,
			   struct bio *bio)
{
	u64 physical = bio->bi_iter.bi_sector;
	u64 stripe_start;
	int i;
	struct btrfs_bio_stripe *stripe;

	physical <<= 9;

	for (i = 0; i < rbio->bbio->num_stripes; i++) {
		stripe = &rbio->bbio->stripes[i];
		stripe_start = stripe->physical;
		if (physical >= stripe_start &&
		    physical < stripe_start + rbio->stripe_len &&
		    stripe->dev->bdev &&
		    bio->bi_disk == stripe->dev->bdev->bd_disk &&
		    bio->bi_partno == stripe->dev->bdev->bd_partno) {
			return i;
		}
	}
	return -1;
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
          int _len_rbio0 = 1;
          struct btrfs_raid_bio * rbio = (struct btrfs_raid_bio *) malloc(_len_rbio0*sizeof(struct btrfs_raid_bio));
          for(int _i0 = 0; _i0 < _len_rbio0; _i0++) {
            rbio[_i0].stripe_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rbio__i0__bbio0 = 1;
          rbio[_i0].bbio = (struct TYPE_6__ *) malloc(_len_rbio__i0__bbio0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio0; _j0++) {
            rbio[_i0].bbio->num_stripes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rbio__i0__bbio_stripes0 = 1;
          rbio[_i0].bbio->stripes = (struct btrfs_bio_stripe *) malloc(_len_rbio__i0__bbio_stripes0*sizeof(struct btrfs_bio_stripe));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio_stripes0; _j0++) {
            rbio[_i0].bbio->stripes->physical = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rbio__i0__bbio_stripes_dev0 = 1;
          rbio[_i0].bbio->stripes->dev = (struct TYPE_8__ *) malloc(_len_rbio__i0__bbio_stripes_dev0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio_stripes_dev0; _j0++) {
              int _len_rbio__i0__bbio_stripes_dev_bdev0 = 1;
          rbio[_i0].bbio->stripes->dev->bdev = (struct TYPE_7__ *) malloc(_len_rbio__i0__bbio_stripes_dev_bdev0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio_stripes_dev_bdev0; _j0++) {
            rbio[_i0].bbio->stripes->dev->bdev->bd_disk = ((-2 * (next_i()%2)) + 1) * next_i();
        rbio[_i0].bbio->stripes->dev->bdev->bd_partno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          int _len_bio0 = 1;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
            bio[_i0].bi_disk = ((-2 * (next_i()%2)) + 1) * next_i();
        bio[_i0].bi_partno = ((-2 * (next_i()%2)) + 1) * next_i();
        bio[_i0].bi_iter.bi_sector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_bio_stripe(rbio,bio);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rbio0; _aux++) {
          free(rbio[_aux].bbio);
          }
          free(rbio);
          free(bio);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_rbio0 = 65025;
          struct btrfs_raid_bio * rbio = (struct btrfs_raid_bio *) malloc(_len_rbio0*sizeof(struct btrfs_raid_bio));
          for(int _i0 = 0; _i0 < _len_rbio0; _i0++) {
            rbio[_i0].stripe_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rbio__i0__bbio0 = 1;
          rbio[_i0].bbio = (struct TYPE_6__ *) malloc(_len_rbio__i0__bbio0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio0; _j0++) {
            rbio[_i0].bbio->num_stripes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rbio__i0__bbio_stripes0 = 1;
          rbio[_i0].bbio->stripes = (struct btrfs_bio_stripe *) malloc(_len_rbio__i0__bbio_stripes0*sizeof(struct btrfs_bio_stripe));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio_stripes0; _j0++) {
            rbio[_i0].bbio->stripes->physical = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rbio__i0__bbio_stripes_dev0 = 1;
          rbio[_i0].bbio->stripes->dev = (struct TYPE_8__ *) malloc(_len_rbio__i0__bbio_stripes_dev0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio_stripes_dev0; _j0++) {
              int _len_rbio__i0__bbio_stripes_dev_bdev0 = 1;
          rbio[_i0].bbio->stripes->dev->bdev = (struct TYPE_7__ *) malloc(_len_rbio__i0__bbio_stripes_dev_bdev0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio_stripes_dev_bdev0; _j0++) {
            rbio[_i0].bbio->stripes->dev->bdev->bd_disk = ((-2 * (next_i()%2)) + 1) * next_i();
        rbio[_i0].bbio->stripes->dev->bdev->bd_partno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          int _len_bio0 = 65025;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
            bio[_i0].bi_disk = ((-2 * (next_i()%2)) + 1) * next_i();
        bio[_i0].bi_partno = ((-2 * (next_i()%2)) + 1) * next_i();
        bio[_i0].bi_iter.bi_sector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_bio_stripe(rbio,bio);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rbio0; _aux++) {
          free(rbio[_aux].bbio);
          }
          free(rbio);
          free(bio);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_rbio0 = 100;
          struct btrfs_raid_bio * rbio = (struct btrfs_raid_bio *) malloc(_len_rbio0*sizeof(struct btrfs_raid_bio));
          for(int _i0 = 0; _i0 < _len_rbio0; _i0++) {
            rbio[_i0].stripe_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rbio__i0__bbio0 = 1;
          rbio[_i0].bbio = (struct TYPE_6__ *) malloc(_len_rbio__i0__bbio0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio0; _j0++) {
            rbio[_i0].bbio->num_stripes = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rbio__i0__bbio_stripes0 = 1;
          rbio[_i0].bbio->stripes = (struct btrfs_bio_stripe *) malloc(_len_rbio__i0__bbio_stripes0*sizeof(struct btrfs_bio_stripe));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio_stripes0; _j0++) {
            rbio[_i0].bbio->stripes->physical = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rbio__i0__bbio_stripes_dev0 = 1;
          rbio[_i0].bbio->stripes->dev = (struct TYPE_8__ *) malloc(_len_rbio__i0__bbio_stripes_dev0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio_stripes_dev0; _j0++) {
              int _len_rbio__i0__bbio_stripes_dev_bdev0 = 1;
          rbio[_i0].bbio->stripes->dev->bdev = (struct TYPE_7__ *) malloc(_len_rbio__i0__bbio_stripes_dev_bdev0*sizeof(struct TYPE_7__));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio_stripes_dev_bdev0; _j0++) {
            rbio[_i0].bbio->stripes->dev->bdev->bd_disk = ((-2 * (next_i()%2)) + 1) * next_i();
        rbio[_i0].bbio->stripes->dev->bdev->bd_partno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          }
          int _len_bio0 = 100;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
            bio[_i0].bi_disk = ((-2 * (next_i()%2)) + 1) * next_i();
        bio[_i0].bi_partno = ((-2 * (next_i()%2)) + 1) * next_i();
        bio[_i0].bi_iter.bi_sector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_bio_stripe(rbio,bio);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_rbio0; _aux++) {
          free(rbio[_aux].bbio);
          }
          free(rbio);
          free(bio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
