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

/* Type definitions */
typedef  size_t u16 ;
struct nvmet_sq {size_t qid; size_t size; scalar_t__ sqhd; } ;
struct nvmet_ctrl {struct nvmet_sq** sqs; } ;

/* Variables and functions */

void nvmet_sq_setup(struct nvmet_ctrl *ctrl, struct nvmet_sq *sq,
		u16 qid, u16 size)
{
	sq->sqhd = 0;
	sq->qid = qid;
	sq->size = size;

	ctrl->sqs[qid] = sq;
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
          unsigned long qid = 100;
          unsigned long size = 100;
          int _len_ctrl0 = 1;
          struct nvmet_ctrl * ctrl = (struct nvmet_ctrl *) malloc(_len_ctrl0*sizeof(struct nvmet_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
              int _len_ctrl__i0__sqs0 = 1;
          ctrl[_i0].sqs = (struct nvmet_sq **) malloc(_len_ctrl__i0__sqs0*sizeof(struct nvmet_sq *));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__sqs0; _j0++) {
            int _len_ctrl__i0__sqs1 = 1;
            ctrl[_i0].sqs[_j0] = (struct nvmet_sq *) malloc(_len_ctrl__i0__sqs1*sizeof(struct nvmet_sq));
            for(int _j1 = 0; _j1 < _len_ctrl__i0__sqs1; _j1++) {
              ctrl[_i0].sqs[_j0]->qid = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].sqs[_j0]->size = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].sqs[_j0]->sqhd = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_sq0 = 1;
          struct nvmet_sq * sq = (struct nvmet_sq *) malloc(_len_sq0*sizeof(struct nvmet_sq));
          for(int _i0 = 0; _i0 < _len_sq0; _i0++) {
            sq[_i0].qid = ((-2 * (next_i()%2)) + 1) * next_i();
        sq[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        sq[_i0].sqhd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvmet_sq_setup(ctrl,sq,qid,size);
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(*(ctrl[_aux].sqs));
        free(ctrl[_aux].sqs);
          }
          free(ctrl);
          free(sq);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long qid = 255;
          unsigned long size = 255;
          int _len_ctrl0 = 65025;
          struct nvmet_ctrl * ctrl = (struct nvmet_ctrl *) malloc(_len_ctrl0*sizeof(struct nvmet_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
              int _len_ctrl__i0__sqs0 = 1;
          ctrl[_i0].sqs = (struct nvmet_sq **) malloc(_len_ctrl__i0__sqs0*sizeof(struct nvmet_sq *));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__sqs0; _j0++) {
            int _len_ctrl__i0__sqs1 = 1;
            ctrl[_i0].sqs[_j0] = (struct nvmet_sq *) malloc(_len_ctrl__i0__sqs1*sizeof(struct nvmet_sq));
            for(int _j1 = 0; _j1 < _len_ctrl__i0__sqs1; _j1++) {
              ctrl[_i0].sqs[_j0]->qid = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].sqs[_j0]->size = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].sqs[_j0]->sqhd = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_sq0 = 65025;
          struct nvmet_sq * sq = (struct nvmet_sq *) malloc(_len_sq0*sizeof(struct nvmet_sq));
          for(int _i0 = 0; _i0 < _len_sq0; _i0++) {
            sq[_i0].qid = ((-2 * (next_i()%2)) + 1) * next_i();
        sq[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        sq[_i0].sqhd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvmet_sq_setup(ctrl,sq,qid,size);
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(*(ctrl[_aux].sqs));
        free(ctrl[_aux].sqs);
          }
          free(ctrl);
          free(sq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long qid = 10;
          unsigned long size = 10;
          int _len_ctrl0 = 100;
          struct nvmet_ctrl * ctrl = (struct nvmet_ctrl *) malloc(_len_ctrl0*sizeof(struct nvmet_ctrl));
          for(int _i0 = 0; _i0 < _len_ctrl0; _i0++) {
              int _len_ctrl__i0__sqs0 = 1;
          ctrl[_i0].sqs = (struct nvmet_sq **) malloc(_len_ctrl__i0__sqs0*sizeof(struct nvmet_sq *));
          for(int _j0 = 0; _j0 < _len_ctrl__i0__sqs0; _j0++) {
            int _len_ctrl__i0__sqs1 = 1;
            ctrl[_i0].sqs[_j0] = (struct nvmet_sq *) malloc(_len_ctrl__i0__sqs1*sizeof(struct nvmet_sq));
            for(int _j1 = 0; _j1 < _len_ctrl__i0__sqs1; _j1++) {
              ctrl[_i0].sqs[_j0]->qid = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].sqs[_j0]->size = ((-2 * (next_i()%2)) + 1) * next_i();
        ctrl[_i0].sqs[_j0]->sqhd = ((-2 * (next_i()%2)) + 1) * next_i();
            }
          }
          }
          int _len_sq0 = 100;
          struct nvmet_sq * sq = (struct nvmet_sq *) malloc(_len_sq0*sizeof(struct nvmet_sq));
          for(int _i0 = 0; _i0 < _len_sq0; _i0++) {
            sq[_i0].qid = ((-2 * (next_i()%2)) + 1) * next_i();
        sq[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        sq[_i0].sqhd = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          nvmet_sq_setup(ctrl,sq,qid,size);
          for(int _aux = 0; _aux < _len_ctrl0; _aux++) {
          free(*(ctrl[_aux].sqs));
        free(ctrl[_aux].sqs);
          }
          free(ctrl);
          free(sq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
