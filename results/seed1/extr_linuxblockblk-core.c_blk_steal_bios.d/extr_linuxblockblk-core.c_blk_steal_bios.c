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
struct request {scalar_t__ __data_len; TYPE_1__* biotail; int /*<<< orphan*/ * bio; } ;
struct bio_list {TYPE_1__* tail; int /*<<< orphan*/ * head; } ;
struct TYPE_2__ {int /*<<< orphan*/ * bi_next; } ;

/* Variables and functions */

void blk_steal_bios(struct bio_list *list, struct request *rq)
{
	if (rq->bio) {
		if (list->tail)
			list->tail->bi_next = rq->bio;
		else
			list->head = rq->bio;
		list->tail = rq->biotail;

		rq->bio = NULL;
		rq->biotail = NULL;
	}

	rq->__data_len = 0;
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
          int _len_list0 = 1;
          struct bio_list * list = (struct bio_list *) malloc(_len_list0*sizeof(struct bio_list));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
              int _len_list__i0__tail0 = 1;
          list[_i0].tail = (struct TYPE_2__ *) malloc(_len_list__i0__tail0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_list__i0__tail0; _j0++) {
              int _len_list__i0__tail_bi_next0 = 1;
          list[_i0].tail->bi_next = (int *) malloc(_len_list__i0__tail_bi_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_list__i0__tail_bi_next0; _j0++) {
            list[_i0].tail->bi_next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_list__i0__head0 = 1;
          list[_i0].head = (int *) malloc(_len_list__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_list__i0__head0; _j0++) {
            list[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rq0 = 1;
          struct request * rq = (struct request *) malloc(_len_rq0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
            rq[_i0].__data_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rq__i0__biotail0 = 1;
          rq[_i0].biotail = (struct TYPE_2__ *) malloc(_len_rq__i0__biotail0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rq__i0__biotail0; _j0++) {
              int _len_rq__i0__biotail_bi_next0 = 1;
          rq[_i0].biotail->bi_next = (int *) malloc(_len_rq__i0__biotail_bi_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rq__i0__biotail_bi_next0; _j0++) {
            rq[_i0].biotail->bi_next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rq__i0__bio0 = 1;
          rq[_i0].bio = (int *) malloc(_len_rq__i0__bio0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rq__i0__bio0; _j0++) {
            rq[_i0].bio[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          blk_steal_bios(list,rq);
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(list[_aux].tail);
          }
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(list[_aux].head);
          }
          free(list);
          for(int _aux = 0; _aux < _len_rq0; _aux++) {
          free(rq[_aux].biotail);
          }
          for(int _aux = 0; _aux < _len_rq0; _aux++) {
          free(rq[_aux].bio);
          }
          free(rq);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_list0 = 65025;
          struct bio_list * list = (struct bio_list *) malloc(_len_list0*sizeof(struct bio_list));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
              int _len_list__i0__tail0 = 1;
          list[_i0].tail = (struct TYPE_2__ *) malloc(_len_list__i0__tail0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_list__i0__tail0; _j0++) {
              int _len_list__i0__tail_bi_next0 = 1;
          list[_i0].tail->bi_next = (int *) malloc(_len_list__i0__tail_bi_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_list__i0__tail_bi_next0; _j0++) {
            list[_i0].tail->bi_next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_list__i0__head0 = 1;
          list[_i0].head = (int *) malloc(_len_list__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_list__i0__head0; _j0++) {
            list[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rq0 = 65025;
          struct request * rq = (struct request *) malloc(_len_rq0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
            rq[_i0].__data_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rq__i0__biotail0 = 1;
          rq[_i0].biotail = (struct TYPE_2__ *) malloc(_len_rq__i0__biotail0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rq__i0__biotail0; _j0++) {
              int _len_rq__i0__biotail_bi_next0 = 1;
          rq[_i0].biotail->bi_next = (int *) malloc(_len_rq__i0__biotail_bi_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rq__i0__biotail_bi_next0; _j0++) {
            rq[_i0].biotail->bi_next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rq__i0__bio0 = 1;
          rq[_i0].bio = (int *) malloc(_len_rq__i0__bio0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rq__i0__bio0; _j0++) {
            rq[_i0].bio[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          blk_steal_bios(list,rq);
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(list[_aux].tail);
          }
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(list[_aux].head);
          }
          free(list);
          for(int _aux = 0; _aux < _len_rq0; _aux++) {
          free(rq[_aux].biotail);
          }
          for(int _aux = 0; _aux < _len_rq0; _aux++) {
          free(rq[_aux].bio);
          }
          free(rq);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_list0 = 100;
          struct bio_list * list = (struct bio_list *) malloc(_len_list0*sizeof(struct bio_list));
          for(int _i0 = 0; _i0 < _len_list0; _i0++) {
              int _len_list__i0__tail0 = 1;
          list[_i0].tail = (struct TYPE_2__ *) malloc(_len_list__i0__tail0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_list__i0__tail0; _j0++) {
              int _len_list__i0__tail_bi_next0 = 1;
          list[_i0].tail->bi_next = (int *) malloc(_len_list__i0__tail_bi_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_list__i0__tail_bi_next0; _j0++) {
            list[_i0].tail->bi_next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_list__i0__head0 = 1;
          list[_i0].head = (int *) malloc(_len_list__i0__head0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_list__i0__head0; _j0++) {
            list[_i0].head[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rq0 = 100;
          struct request * rq = (struct request *) malloc(_len_rq0*sizeof(struct request));
          for(int _i0 = 0; _i0 < _len_rq0; _i0++) {
            rq[_i0].__data_len = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rq__i0__biotail0 = 1;
          rq[_i0].biotail = (struct TYPE_2__ *) malloc(_len_rq__i0__biotail0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_rq__i0__biotail0; _j0++) {
              int _len_rq__i0__biotail_bi_next0 = 1;
          rq[_i0].biotail->bi_next = (int *) malloc(_len_rq__i0__biotail_bi_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rq__i0__biotail_bi_next0; _j0++) {
            rq[_i0].biotail->bi_next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rq__i0__bio0 = 1;
          rq[_i0].bio = (int *) malloc(_len_rq__i0__bio0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_rq__i0__bio0; _j0++) {
            rq[_i0].bio[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          blk_steal_bios(list,rq);
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(list[_aux].tail);
          }
          for(int _aux = 0; _aux < _len_list0; _aux++) {
          free(list[_aux].head);
          }
          free(list);
          for(int _aux = 0; _aux < _len_rq0; _aux++) {
          free(rq[_aux].biotail);
          }
          for(int _aux = 0; _aux < _len_rq0; _aux++) {
          free(rq[_aux].bio);
          }
          free(rq);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
