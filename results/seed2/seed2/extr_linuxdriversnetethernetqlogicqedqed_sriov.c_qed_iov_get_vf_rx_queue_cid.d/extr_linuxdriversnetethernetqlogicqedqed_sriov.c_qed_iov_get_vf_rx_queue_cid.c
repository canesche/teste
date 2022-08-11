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
struct qed_vf_queue {TYPE_1__* cids; } ;
struct qed_queue_cid {int dummy; } ;
struct TYPE_2__ {struct qed_queue_cid* p_cid; int /*<<< orphan*/  b_is_tx; } ;

/* Variables and functions */
 int MAX_QUEUES_PER_QZONE ; 

__attribute__((used)) static struct qed_queue_cid *
qed_iov_get_vf_rx_queue_cid(struct qed_vf_queue *p_queue)
{
	int i;

	for (i = 0; i < MAX_QUEUES_PER_QZONE; i++) {
		if (p_queue->cids[i].p_cid && !p_queue->cids[i].b_is_tx)
			return p_queue->cids[i].p_cid;
	}

	return NULL;
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
          int _len_p_queue0 = 1;
          struct qed_vf_queue * p_queue = (struct qed_vf_queue *) malloc(_len_p_queue0*sizeof(struct qed_vf_queue));
          for(int _i0 = 0; _i0 < _len_p_queue0; _i0++) {
              int _len_p_queue__i0__cids0 = 1;
          p_queue[_i0].cids = (struct TYPE_2__ *) malloc(_len_p_queue__i0__cids0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_queue__i0__cids0; _j0++) {
              int _len_p_queue__i0__cids_p_cid0 = 1;
          p_queue[_i0].cids->p_cid = (struct qed_queue_cid *) malloc(_len_p_queue__i0__cids_p_cid0*sizeof(struct qed_queue_cid));
          for(int _j0 = 0; _j0 < _len_p_queue__i0__cids_p_cid0; _j0++) {
            p_queue[_i0].cids->p_cid->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p_queue[_i0].cids->b_is_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct qed_queue_cid * benchRet = qed_iov_get_vf_rx_queue_cid(p_queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_p_queue0; _aux++) {
          free(p_queue[_aux].cids);
          }
          free(p_queue);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p_queue0 = 65025;
          struct qed_vf_queue * p_queue = (struct qed_vf_queue *) malloc(_len_p_queue0*sizeof(struct qed_vf_queue));
          for(int _i0 = 0; _i0 < _len_p_queue0; _i0++) {
              int _len_p_queue__i0__cids0 = 1;
          p_queue[_i0].cids = (struct TYPE_2__ *) malloc(_len_p_queue__i0__cids0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_queue__i0__cids0; _j0++) {
              int _len_p_queue__i0__cids_p_cid0 = 1;
          p_queue[_i0].cids->p_cid = (struct qed_queue_cid *) malloc(_len_p_queue__i0__cids_p_cid0*sizeof(struct qed_queue_cid));
          for(int _j0 = 0; _j0 < _len_p_queue__i0__cids_p_cid0; _j0++) {
            p_queue[_i0].cids->p_cid->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p_queue[_i0].cids->b_is_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct qed_queue_cid * benchRet = qed_iov_get_vf_rx_queue_cid(p_queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_p_queue0; _aux++) {
          free(p_queue[_aux].cids);
          }
          free(p_queue);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p_queue0 = 100;
          struct qed_vf_queue * p_queue = (struct qed_vf_queue *) malloc(_len_p_queue0*sizeof(struct qed_vf_queue));
          for(int _i0 = 0; _i0 < _len_p_queue0; _i0++) {
              int _len_p_queue__i0__cids0 = 1;
          p_queue[_i0].cids = (struct TYPE_2__ *) malloc(_len_p_queue__i0__cids0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_p_queue__i0__cids0; _j0++) {
              int _len_p_queue__i0__cids_p_cid0 = 1;
          p_queue[_i0].cids->p_cid = (struct qed_queue_cid *) malloc(_len_p_queue__i0__cids_p_cid0*sizeof(struct qed_queue_cid));
          for(int _j0 = 0; _j0 < _len_p_queue__i0__cids_p_cid0; _j0++) {
            p_queue[_i0].cids->p_cid->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        p_queue[_i0].cids->b_is_tx = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          struct qed_queue_cid * benchRet = qed_iov_get_vf_rx_queue_cid(p_queue);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_p_queue0; _aux++) {
          free(p_queue[_aux].cids);
          }
          free(p_queue);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
