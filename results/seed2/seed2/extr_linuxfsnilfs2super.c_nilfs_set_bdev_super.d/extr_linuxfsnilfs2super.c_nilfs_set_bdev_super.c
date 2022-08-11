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
struct super_block {TYPE_1__* s_bdev; int /*<<< orphan*/  s_dev; } ;
struct TYPE_2__ {int /*<<< orphan*/  bd_dev; } ;

/* Variables and functions */

__attribute__((used)) static int nilfs_set_bdev_super(struct super_block *s, void *data)
{
	s->s_bdev = data;
	s->s_dev = s->s_bdev->bd_dev;
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
          int _len_s0 = 1;
          struct super_block * s = (struct super_block *) malloc(_len_s0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__s_bdev0 = 1;
          s[_i0].s_bdev = (struct TYPE_2__ *) malloc(_len_s__i0__s_bdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_s__i0__s_bdev0; _j0++) {
            s[_i0].s_bdev->bd_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].s_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = nilfs_set_bdev_super(s,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].s_bdev);
          }
          free(s);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_s0 = 65025;
          struct super_block * s = (struct super_block *) malloc(_len_s0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__s_bdev0 = 1;
          s[_i0].s_bdev = (struct TYPE_2__ *) malloc(_len_s__i0__s_bdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_s__i0__s_bdev0; _j0++) {
            s[_i0].s_bdev->bd_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].s_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = nilfs_set_bdev_super(s,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].s_bdev);
          }
          free(s);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_s0 = 100;
          struct super_block * s = (struct super_block *) malloc(_len_s0*sizeof(struct super_block));
          for(int _i0 = 0; _i0 < _len_s0; _i0++) {
              int _len_s__i0__s_bdev0 = 1;
          s[_i0].s_bdev = (struct TYPE_2__ *) malloc(_len_s__i0__s_bdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_s__i0__s_bdev0; _j0++) {
            s[_i0].s_bdev->bd_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        s[_i0].s_dev = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          void * data;
          int benchRet = nilfs_set_bdev_super(s,data);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_s0; _aux++) {
          free(s[_aux].s_bdev);
          }
          free(s);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
