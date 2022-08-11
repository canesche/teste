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
struct mapped_device {int use_blk_mq; TYPE_2__* queue; } ;
struct TYPE_4__ {TYPE_1__* backing_dev_info; } ;
struct TYPE_3__ {int /*<<< orphan*/  congested_fn; } ;

/* Variables and functions */
 int /*<<< orphan*/  dm_any_congested ; 

__attribute__((used)) static void dm_init_normal_md_queue(struct mapped_device *md)
{
	md->use_blk_mq = false;

	/*
	 * Initialize aspects of queue that aren't relevant for blk-mq
	 */
	md->queue->backing_dev_info->congested_fn = dm_any_congested;
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
          int _len_md0 = 1;
          struct mapped_device * md = (struct mapped_device *) malloc(_len_md0*sizeof(struct mapped_device));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
            md[_i0].use_blk_mq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_md__i0__queue0 = 1;
          md[_i0].queue = (struct TYPE_4__ *) malloc(_len_md__i0__queue0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_md__i0__queue0; _j0++) {
              int _len_md__i0__queue_backing_dev_info0 = 1;
          md[_i0].queue->backing_dev_info = (struct TYPE_3__ *) malloc(_len_md__i0__queue_backing_dev_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_md__i0__queue_backing_dev_info0; _j0++) {
            md[_i0].queue->backing_dev_info->congested_fn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          dm_init_normal_md_queue(md);
          for(int _aux = 0; _aux < _len_md0; _aux++) {
          free(md[_aux].queue);
          }
          free(md);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_md0 = 65025;
          struct mapped_device * md = (struct mapped_device *) malloc(_len_md0*sizeof(struct mapped_device));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
            md[_i0].use_blk_mq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_md__i0__queue0 = 1;
          md[_i0].queue = (struct TYPE_4__ *) malloc(_len_md__i0__queue0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_md__i0__queue0; _j0++) {
              int _len_md__i0__queue_backing_dev_info0 = 1;
          md[_i0].queue->backing_dev_info = (struct TYPE_3__ *) malloc(_len_md__i0__queue_backing_dev_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_md__i0__queue_backing_dev_info0; _j0++) {
            md[_i0].queue->backing_dev_info->congested_fn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          dm_init_normal_md_queue(md);
          for(int _aux = 0; _aux < _len_md0; _aux++) {
          free(md[_aux].queue);
          }
          free(md);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_md0 = 100;
          struct mapped_device * md = (struct mapped_device *) malloc(_len_md0*sizeof(struct mapped_device));
          for(int _i0 = 0; _i0 < _len_md0; _i0++) {
            md[_i0].use_blk_mq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_md__i0__queue0 = 1;
          md[_i0].queue = (struct TYPE_4__ *) malloc(_len_md__i0__queue0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_md__i0__queue0; _j0++) {
              int _len_md__i0__queue_backing_dev_info0 = 1;
          md[_i0].queue->backing_dev_info = (struct TYPE_3__ *) malloc(_len_md__i0__queue_backing_dev_info0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_md__i0__queue_backing_dev_info0; _j0++) {
            md[_i0].queue->backing_dev_info->congested_fn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          dm_init_normal_md_queue(md);
          for(int _aux = 0; _aux < _len_md0; _aux++) {
          free(md[_aux].queue);
          }
          free(md);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
