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
typedef  int u64 ;
struct btrfs_raid_bio {int nr_data; int stripe_len; TYPE_2__* bbio; } ;
struct TYPE_3__ {int bi_sector; } ;
struct bio {TYPE_1__ bi_iter; } ;
struct TYPE_4__ {int* raid_map; } ;

/* Variables and functions */

__attribute__((used)) static int find_logical_bio_stripe(struct btrfs_raid_bio *rbio,
				   struct bio *bio)
{
	u64 logical = bio->bi_iter.bi_sector;
	u64 stripe_start;
	int i;

	logical <<= 9;

	for (i = 0; i < rbio->nr_data; i++) {
		stripe_start = rbio->bbio->raid_map[i];
		if (logical >= stripe_start &&
		    logical < stripe_start + rbio->stripe_len) {
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
            rbio[_i0].nr_data = ((-2 * (next_i()%2)) + 1) * next_i();
        rbio[_i0].stripe_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rbio__i0__bbio0 = 1;
          rbio[_i0].bbio = (struct TYPE_4__ *) malloc(_len_rbio__i0__bbio0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio0; _j0++) {
              int _len_rbio__i0__bbio_raid_map0 = 1;
          rbio[_i0].bbio->raid_map = (int *) malloc(_len_rbio__i0__bbio_raid_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio_raid_map0; _j0++) {
            rbio[_i0].bbio->raid_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_bio0 = 1;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
            bio[_i0].bi_iter.bi_sector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_logical_bio_stripe(rbio,bio);
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
            rbio[_i0].nr_data = ((-2 * (next_i()%2)) + 1) * next_i();
        rbio[_i0].stripe_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rbio__i0__bbio0 = 1;
          rbio[_i0].bbio = (struct TYPE_4__ *) malloc(_len_rbio__i0__bbio0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio0; _j0++) {
              int _len_rbio__i0__bbio_raid_map0 = 1;
          rbio[_i0].bbio->raid_map = (int *) malloc(_len_rbio__i0__bbio_raid_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio_raid_map0; _j0++) {
            rbio[_i0].bbio->raid_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_bio0 = 65025;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
            bio[_i0].bi_iter.bi_sector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_logical_bio_stripe(rbio,bio);
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
            rbio[_i0].nr_data = ((-2 * (next_i()%2)) + 1) * next_i();
        rbio[_i0].stripe_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rbio__i0__bbio0 = 1;
          rbio[_i0].bbio = (struct TYPE_4__ *) malloc(_len_rbio__i0__bbio0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio0; _j0++) {
              int _len_rbio__i0__bbio_raid_map0 = 1;
          rbio[_i0].bbio->raid_map = (int *) malloc(_len_rbio__i0__bbio_raid_map0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rbio__i0__bbio_raid_map0; _j0++) {
            rbio[_i0].bbio->raid_map[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_bio0 = 100;
          struct bio * bio = (struct bio *) malloc(_len_bio0*sizeof(struct bio));
          for(int _i0 = 0; _i0 < _len_bio0; _i0++) {
            bio[_i0].bi_iter.bi_sector = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = find_logical_bio_stripe(rbio,bio);
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
