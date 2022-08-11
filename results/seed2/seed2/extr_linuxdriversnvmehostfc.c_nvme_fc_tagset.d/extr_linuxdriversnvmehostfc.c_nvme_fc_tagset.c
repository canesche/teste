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
struct nvme_fc_queue {size_t qnum; TYPE_3__* ctrl; } ;
struct blk_mq_tags {int dummy; } ;
struct TYPE_5__ {struct blk_mq_tags** tags; } ;
struct TYPE_4__ {struct blk_mq_tags** tags; } ;
struct TYPE_6__ {TYPE_2__ tag_set; TYPE_1__ admin_tag_set; } ;

/* Variables and functions */

__attribute__((used)) static struct blk_mq_tags *
nvme_fc_tagset(struct nvme_fc_queue *queue)
{
	if (queue->qnum == 0)
		return queue->ctrl->admin_tag_set.tags[queue->qnum];

	return queue->ctrl->tag_set.tags[queue->qnum - 1];
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
          int _len_queue0 = 1;
          struct nvme_fc_queue * queue = (struct nvme_fc_queue *) malloc(_len_queue0*sizeof(struct nvme_fc_queue));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].qnum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_queue__i0__ctrl0 = 1;
          queue[_i0].ctrl = (struct TYPE_6__ *) malloc(_len_queue__i0__ctrl0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_queue__i0__ctrl0; _j0++) {
              int _len_queue__i0__ctrl_tag_set_tags0 = 1;
          queue[_i0].ctrl->tag_set.tags = (struct blk_mq_tags **) malloc(_len_queue__i0__ctrl_tag_set_tags0*sizeof(struct blk_mq_tags *));
          for(int _j0 = 0; _j0 < _len_queue__i0__ctrl_tag_set_tags0; _j0++) {
            int _len_queue__i0__ctrl_tag_set_tags1 = 1;
            queue[_i0].ctrl->tag_set.tags[_j0] = (struct blk_mq_tags *) malloc(_len_queue__i0__ctrl_tag_set_tags1*sizeof(struct blk_mq_tags));
            for(int _j1 = 0; _j1 < _len_queue__i0__ctrl_tag_set_tags1; _j1++) {
              queue[_i0].ctrl->tag_set.tags[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_queue__i0__ctrl_admin_tag_set_tags0 = 1;
          queue[_i0].ctrl->admin_tag_set.tags = (struct blk_mq_tags **) malloc(_len_queue__i0__ctrl_admin_tag_set_tags0*sizeof(struct blk_mq_tags *));
          for(int _j0 = 0; _j0 < _len_queue__i0__ctrl_admin_tag_set_tags0; _j0++) {
            int _len_queue__i0__ctrl_admin_tag_set_tags1 = 1;
            queue[_i0].ctrl->admin_tag_set.tags[_j0] = (struct blk_mq_tags *) malloc(_len_queue__i0__ctrl_admin_tag_set_tags1*sizeof(struct blk_mq_tags));
            for(int _j1 = 0; _j1 < _len_queue__i0__ctrl_admin_tag_set_tags1; _j1++) {
              queue[_i0].ctrl->admin_tag_set.tags[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct blk_mq_tags * benchRet = nvme_fc_tagset(queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_queue0; _aux++) {
          free(queue[_aux].ctrl);
          }
          free(queue);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_queue0 = 65025;
          struct nvme_fc_queue * queue = (struct nvme_fc_queue *) malloc(_len_queue0*sizeof(struct nvme_fc_queue));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].qnum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_queue__i0__ctrl0 = 1;
          queue[_i0].ctrl = (struct TYPE_6__ *) malloc(_len_queue__i0__ctrl0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_queue__i0__ctrl0; _j0++) {
              int _len_queue__i0__ctrl_tag_set_tags0 = 1;
          queue[_i0].ctrl->tag_set.tags = (struct blk_mq_tags **) malloc(_len_queue__i0__ctrl_tag_set_tags0*sizeof(struct blk_mq_tags *));
          for(int _j0 = 0; _j0 < _len_queue__i0__ctrl_tag_set_tags0; _j0++) {
            int _len_queue__i0__ctrl_tag_set_tags1 = 1;
            queue[_i0].ctrl->tag_set.tags[_j0] = (struct blk_mq_tags *) malloc(_len_queue__i0__ctrl_tag_set_tags1*sizeof(struct blk_mq_tags));
            for(int _j1 = 0; _j1 < _len_queue__i0__ctrl_tag_set_tags1; _j1++) {
              queue[_i0].ctrl->tag_set.tags[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_queue__i0__ctrl_admin_tag_set_tags0 = 1;
          queue[_i0].ctrl->admin_tag_set.tags = (struct blk_mq_tags **) malloc(_len_queue__i0__ctrl_admin_tag_set_tags0*sizeof(struct blk_mq_tags *));
          for(int _j0 = 0; _j0 < _len_queue__i0__ctrl_admin_tag_set_tags0; _j0++) {
            int _len_queue__i0__ctrl_admin_tag_set_tags1 = 1;
            queue[_i0].ctrl->admin_tag_set.tags[_j0] = (struct blk_mq_tags *) malloc(_len_queue__i0__ctrl_admin_tag_set_tags1*sizeof(struct blk_mq_tags));
            for(int _j1 = 0; _j1 < _len_queue__i0__ctrl_admin_tag_set_tags1; _j1++) {
              queue[_i0].ctrl->admin_tag_set.tags[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct blk_mq_tags * benchRet = nvme_fc_tagset(queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_queue0; _aux++) {
          free(queue[_aux].ctrl);
          }
          free(queue);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_queue0 = 100;
          struct nvme_fc_queue * queue = (struct nvme_fc_queue *) malloc(_len_queue0*sizeof(struct nvme_fc_queue));
          for(int _i0 = 0; _i0 < _len_queue0; _i0++) {
            queue[_i0].qnum = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_queue__i0__ctrl0 = 1;
          queue[_i0].ctrl = (struct TYPE_6__ *) malloc(_len_queue__i0__ctrl0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_queue__i0__ctrl0; _j0++) {
              int _len_queue__i0__ctrl_tag_set_tags0 = 1;
          queue[_i0].ctrl->tag_set.tags = (struct blk_mq_tags **) malloc(_len_queue__i0__ctrl_tag_set_tags0*sizeof(struct blk_mq_tags *));
          for(int _j0 = 0; _j0 < _len_queue__i0__ctrl_tag_set_tags0; _j0++) {
            int _len_queue__i0__ctrl_tag_set_tags1 = 1;
            queue[_i0].ctrl->tag_set.tags[_j0] = (struct blk_mq_tags *) malloc(_len_queue__i0__ctrl_tag_set_tags1*sizeof(struct blk_mq_tags));
            for(int _j1 = 0; _j1 < _len_queue__i0__ctrl_tag_set_tags1; _j1++) {
              queue[_i0].ctrl->tag_set.tags[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          int _len_queue__i0__ctrl_admin_tag_set_tags0 = 1;
          queue[_i0].ctrl->admin_tag_set.tags = (struct blk_mq_tags **) malloc(_len_queue__i0__ctrl_admin_tag_set_tags0*sizeof(struct blk_mq_tags *));
          for(int _j0 = 0; _j0 < _len_queue__i0__ctrl_admin_tag_set_tags0; _j0++) {
            int _len_queue__i0__ctrl_admin_tag_set_tags1 = 1;
            queue[_i0].ctrl->admin_tag_set.tags[_j0] = (struct blk_mq_tags *) malloc(_len_queue__i0__ctrl_admin_tag_set_tags1*sizeof(struct blk_mq_tags));
            for(int _j1 = 0; _j1 < _len_queue__i0__ctrl_admin_tag_set_tags1; _j1++) {
              queue[_i0].ctrl->admin_tag_set.tags[_j0]->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          }
          struct blk_mq_tags * benchRet = nvme_fc_tagset(queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_queue0; _aux++) {
          free(queue[_aux].ctrl);
          }
          free(queue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
