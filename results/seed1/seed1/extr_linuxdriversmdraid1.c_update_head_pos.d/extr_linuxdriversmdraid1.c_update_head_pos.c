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
struct r1conf {TYPE_2__* mirrors; } ;
struct r1bio {scalar_t__ sectors; scalar_t__ sector; TYPE_1__* mddev; } ;
struct TYPE_4__ {scalar_t__ head_position; } ;
struct TYPE_3__ {struct r1conf* private; } ;

/* Variables and functions */

__attribute__((used)) static inline void update_head_pos(int disk, struct r1bio *r1_bio)
{
	struct r1conf *conf = r1_bio->mddev->private;

	conf->mirrors[disk].head_position =
		r1_bio->sector + (r1_bio->sectors);
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
          int disk = 100;
          int _len_r1_bio0 = 1;
          struct r1bio * r1_bio = (struct r1bio *) malloc(_len_r1_bio0*sizeof(struct r1bio));
          for(int _i0 = 0; _i0 < _len_r1_bio0; _i0++) {
            r1_bio[_i0].sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        r1_bio[_i0].sector = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r1_bio__i0__mddev0 = 1;
          r1_bio[_i0].mddev = (struct TYPE_3__ *) malloc(_len_r1_bio__i0__mddev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_r1_bio__i0__mddev0; _j0++) {
              int _len_r1_bio__i0__mddev_private0 = 1;
          r1_bio[_i0].mddev->private = (struct r1conf *) malloc(_len_r1_bio__i0__mddev_private0*sizeof(struct r1conf));
          for(int _j0 = 0; _j0 < _len_r1_bio__i0__mddev_private0; _j0++) {
              int _len_r1_bio__i0__mddev_private_mirrors0 = 1;
          r1_bio[_i0].mddev->private->mirrors = (struct TYPE_4__ *) malloc(_len_r1_bio__i0__mddev_private_mirrors0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_r1_bio__i0__mddev_private_mirrors0; _j0++) {
            r1_bio[_i0].mddev->private->mirrors->head_position = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          update_head_pos(disk,r1_bio);
          for(int _aux = 0; _aux < _len_r1_bio0; _aux++) {
          free(r1_bio[_aux].mddev);
          }
          free(r1_bio);
        
        break;
    }
    // big-arr
    case 1:
    {
          int disk = 255;
          int _len_r1_bio0 = 65025;
          struct r1bio * r1_bio = (struct r1bio *) malloc(_len_r1_bio0*sizeof(struct r1bio));
          for(int _i0 = 0; _i0 < _len_r1_bio0; _i0++) {
            r1_bio[_i0].sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        r1_bio[_i0].sector = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r1_bio__i0__mddev0 = 1;
          r1_bio[_i0].mddev = (struct TYPE_3__ *) malloc(_len_r1_bio__i0__mddev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_r1_bio__i0__mddev0; _j0++) {
              int _len_r1_bio__i0__mddev_private0 = 1;
          r1_bio[_i0].mddev->private = (struct r1conf *) malloc(_len_r1_bio__i0__mddev_private0*sizeof(struct r1conf));
          for(int _j0 = 0; _j0 < _len_r1_bio__i0__mddev_private0; _j0++) {
              int _len_r1_bio__i0__mddev_private_mirrors0 = 1;
          r1_bio[_i0].mddev->private->mirrors = (struct TYPE_4__ *) malloc(_len_r1_bio__i0__mddev_private_mirrors0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_r1_bio__i0__mddev_private_mirrors0; _j0++) {
            r1_bio[_i0].mddev->private->mirrors->head_position = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          update_head_pos(disk,r1_bio);
          for(int _aux = 0; _aux < _len_r1_bio0; _aux++) {
          free(r1_bio[_aux].mddev);
          }
          free(r1_bio);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int disk = 10;
          int _len_r1_bio0 = 100;
          struct r1bio * r1_bio = (struct r1bio *) malloc(_len_r1_bio0*sizeof(struct r1bio));
          for(int _i0 = 0; _i0 < _len_r1_bio0; _i0++) {
            r1_bio[_i0].sectors = ((-2 * (next_i()%2)) + 1) * next_i();
        r1_bio[_i0].sector = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_r1_bio__i0__mddev0 = 1;
          r1_bio[_i0].mddev = (struct TYPE_3__ *) malloc(_len_r1_bio__i0__mddev0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_r1_bio__i0__mddev0; _j0++) {
              int _len_r1_bio__i0__mddev_private0 = 1;
          r1_bio[_i0].mddev->private = (struct r1conf *) malloc(_len_r1_bio__i0__mddev_private0*sizeof(struct r1conf));
          for(int _j0 = 0; _j0 < _len_r1_bio__i0__mddev_private0; _j0++) {
              int _len_r1_bio__i0__mddev_private_mirrors0 = 1;
          r1_bio[_i0].mddev->private->mirrors = (struct TYPE_4__ *) malloc(_len_r1_bio__i0__mddev_private_mirrors0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_r1_bio__i0__mddev_private_mirrors0; _j0++) {
            r1_bio[_i0].mddev->private->mirrors->head_position = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          update_head_pos(disk,r1_bio);
          for(int _aux = 0; _aux < _len_r1_bio0; _aux++) {
          free(r1_bio[_aux].mddev);
          }
          free(r1_bio);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
