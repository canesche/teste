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
struct r10conf {TYPE_2__* mirrors; } ;
struct r10bio {scalar_t__ sectors; TYPE_3__* devs; TYPE_1__* mddev; } ;
struct TYPE_6__ {size_t devnum; scalar_t__ addr; } ;
struct TYPE_5__ {scalar_t__ head_position; } ;
struct TYPE_4__ {struct r10conf* private; } ;

/* Variables and functions */

__attribute__((used)) static inline void update_head_pos(int slot, struct r10bio *r10_bio)
{
	struct r10conf *conf = r10_bio->mddev->private;

	conf->mirrors[r10_bio->devs[slot].devnum].head_position =
		r10_bio->devs[slot].addr + (r10_bio->sectors);
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
          int slot = 100;
          int _len_r10_bio0 = 1;
          struct r10bio * r10_bio = (struct r10bio *) malloc(_len_r10_bio0*sizeof(struct r10bio));
          for(int _i0 = 0; _i0 < _len_r10_bio0; _i0++) {
            r10_bio[_i0].sectors = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r10_bio__i0__devs0 = 1;
          r10_bio[_i0].devs = (struct TYPE_6__ *) malloc(_len_r10_bio__i0__devs0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_r10_bio__i0__devs0; _j0++) {
            r10_bio[_i0].devs->devnum = ((-2 * (next_i()%2)) + 1) * next_i();
        r10_bio[_i0].devs->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r10_bio__i0__mddev0 = 1;
          r10_bio[_i0].mddev = (struct TYPE_4__ *) malloc(_len_r10_bio__i0__mddev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_r10_bio__i0__mddev0; _j0++) {
              int _len_r10_bio__i0__mddev_private0 = 1;
          r10_bio[_i0].mddev->private = (struct r10conf *) malloc(_len_r10_bio__i0__mddev_private0*sizeof(struct r10conf));
          for(int _j0 = 0; _j0 < _len_r10_bio__i0__mddev_private0; _j0++) {
              int _len_r10_bio__i0__mddev_private_mirrors0 = 1;
          r10_bio[_i0].mddev->private->mirrors = (struct TYPE_5__ *) malloc(_len_r10_bio__i0__mddev_private_mirrors0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_r10_bio__i0__mddev_private_mirrors0; _j0++) {
            r10_bio[_i0].mddev->private->mirrors->head_position = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          update_head_pos(slot,r10_bio);
          for(int _aux = 0; _aux < _len_r10_bio0; _aux++) {
          free(r10_bio[_aux].devs);
          }
          for(int _aux = 0; _aux < _len_r10_bio0; _aux++) {
          free(r10_bio[_aux].mddev);
          }
          free(r10_bio);
        
        break;
    }
    // big-arr
    case 1:
    {
          int slot = 255;
          int _len_r10_bio0 = 65025;
          struct r10bio * r10_bio = (struct r10bio *) malloc(_len_r10_bio0*sizeof(struct r10bio));
          for(int _i0 = 0; _i0 < _len_r10_bio0; _i0++) {
            r10_bio[_i0].sectors = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r10_bio__i0__devs0 = 1;
          r10_bio[_i0].devs = (struct TYPE_6__ *) malloc(_len_r10_bio__i0__devs0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_r10_bio__i0__devs0; _j0++) {
            r10_bio[_i0].devs->devnum = ((-2 * (next_i()%2)) + 1) * next_i();
        r10_bio[_i0].devs->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r10_bio__i0__mddev0 = 1;
          r10_bio[_i0].mddev = (struct TYPE_4__ *) malloc(_len_r10_bio__i0__mddev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_r10_bio__i0__mddev0; _j0++) {
              int _len_r10_bio__i0__mddev_private0 = 1;
          r10_bio[_i0].mddev->private = (struct r10conf *) malloc(_len_r10_bio__i0__mddev_private0*sizeof(struct r10conf));
          for(int _j0 = 0; _j0 < _len_r10_bio__i0__mddev_private0; _j0++) {
              int _len_r10_bio__i0__mddev_private_mirrors0 = 1;
          r10_bio[_i0].mddev->private->mirrors = (struct TYPE_5__ *) malloc(_len_r10_bio__i0__mddev_private_mirrors0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_r10_bio__i0__mddev_private_mirrors0; _j0++) {
            r10_bio[_i0].mddev->private->mirrors->head_position = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          update_head_pos(slot,r10_bio);
          for(int _aux = 0; _aux < _len_r10_bio0; _aux++) {
          free(r10_bio[_aux].devs);
          }
          for(int _aux = 0; _aux < _len_r10_bio0; _aux++) {
          free(r10_bio[_aux].mddev);
          }
          free(r10_bio);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int slot = 10;
          int _len_r10_bio0 = 100;
          struct r10bio * r10_bio = (struct r10bio *) malloc(_len_r10_bio0*sizeof(struct r10bio));
          for(int _i0 = 0; _i0 < _len_r10_bio0; _i0++) {
            r10_bio[_i0].sectors = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r10_bio__i0__devs0 = 1;
          r10_bio[_i0].devs = (struct TYPE_6__ *) malloc(_len_r10_bio__i0__devs0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_r10_bio__i0__devs0; _j0++) {
            r10_bio[_i0].devs->devnum = ((-2 * (next_i()%2)) + 1) * next_i();
        r10_bio[_i0].devs->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_r10_bio__i0__mddev0 = 1;
          r10_bio[_i0].mddev = (struct TYPE_4__ *) malloc(_len_r10_bio__i0__mddev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_r10_bio__i0__mddev0; _j0++) {
              int _len_r10_bio__i0__mddev_private0 = 1;
          r10_bio[_i0].mddev->private = (struct r10conf *) malloc(_len_r10_bio__i0__mddev_private0*sizeof(struct r10conf));
          for(int _j0 = 0; _j0 < _len_r10_bio__i0__mddev_private0; _j0++) {
              int _len_r10_bio__i0__mddev_private_mirrors0 = 1;
          r10_bio[_i0].mddev->private->mirrors = (struct TYPE_5__ *) malloc(_len_r10_bio__i0__mddev_private_mirrors0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_r10_bio__i0__mddev_private_mirrors0; _j0++) {
            r10_bio[_i0].mddev->private->mirrors->head_position = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          update_head_pos(slot,r10_bio);
          for(int _aux = 0; _aux < _len_r10_bio0; _aux++) {
          free(r10_bio[_aux].devs);
          }
          for(int _aux = 0; _aux < _len_r10_bio0; _aux++) {
          free(r10_bio[_aux].mddev);
          }
          free(r10_bio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
