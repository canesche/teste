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
struct TYPE_6__ {TYPE_2__* q; } ;
struct bfq_io_cq {TYPE_3__ icq; } ;
struct bfq_data {int dummy; } ;
struct TYPE_5__ {TYPE_1__* elevator; } ;
struct TYPE_4__ {struct bfq_data* elevator_data; } ;

/* Variables and functions */

struct bfq_data *bic_to_bfqd(struct bfq_io_cq *bic)
{
	return bic->icq.q->elevator->elevator_data;
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
          int _len_bic0 = 1;
          struct bfq_io_cq * bic = (struct bfq_io_cq *) malloc(_len_bic0*sizeof(struct bfq_io_cq));
          for(int _i0 = 0; _i0 < _len_bic0; _i0++) {
              int _len_bic__i0__icq_q0 = 1;
          bic[_i0].icq.q = (struct TYPE_5__ *) malloc(_len_bic__i0__icq_q0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_bic__i0__icq_q0; _j0++) {
              int _len_bic__i0__icq_q_elevator0 = 1;
          bic[_i0].icq.q->elevator = (struct TYPE_4__ *) malloc(_len_bic__i0__icq_q_elevator0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bic__i0__icq_q_elevator0; _j0++) {
              int _len_bic__i0__icq_q_elevator_elevator_data0 = 1;
          bic[_i0].icq.q->elevator->elevator_data = (struct bfq_data *) malloc(_len_bic__i0__icq_q_elevator_elevator_data0*sizeof(struct bfq_data));
          for(int _j0 = 0; _j0 < _len_bic__i0__icq_q_elevator_elevator_data0; _j0++) {
            bic[_i0].icq.q->elevator->elevator_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct bfq_data * benchRet = bic_to_bfqd(bic);
          printf("%d\n", (*benchRet).dummy);
          free(bic);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bic0 = 65025;
          struct bfq_io_cq * bic = (struct bfq_io_cq *) malloc(_len_bic0*sizeof(struct bfq_io_cq));
          for(int _i0 = 0; _i0 < _len_bic0; _i0++) {
              int _len_bic__i0__icq_q0 = 1;
          bic[_i0].icq.q = (struct TYPE_5__ *) malloc(_len_bic__i0__icq_q0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_bic__i0__icq_q0; _j0++) {
              int _len_bic__i0__icq_q_elevator0 = 1;
          bic[_i0].icq.q->elevator = (struct TYPE_4__ *) malloc(_len_bic__i0__icq_q_elevator0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bic__i0__icq_q_elevator0; _j0++) {
              int _len_bic__i0__icq_q_elevator_elevator_data0 = 1;
          bic[_i0].icq.q->elevator->elevator_data = (struct bfq_data *) malloc(_len_bic__i0__icq_q_elevator_elevator_data0*sizeof(struct bfq_data));
          for(int _j0 = 0; _j0 < _len_bic__i0__icq_q_elevator_elevator_data0; _j0++) {
            bic[_i0].icq.q->elevator->elevator_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct bfq_data * benchRet = bic_to_bfqd(bic);
          printf("%d\n", (*benchRet).dummy);
          free(bic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bic0 = 100;
          struct bfq_io_cq * bic = (struct bfq_io_cq *) malloc(_len_bic0*sizeof(struct bfq_io_cq));
          for(int _i0 = 0; _i0 < _len_bic0; _i0++) {
              int _len_bic__i0__icq_q0 = 1;
          bic[_i0].icq.q = (struct TYPE_5__ *) malloc(_len_bic__i0__icq_q0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_bic__i0__icq_q0; _j0++) {
              int _len_bic__i0__icq_q_elevator0 = 1;
          bic[_i0].icq.q->elevator = (struct TYPE_4__ *) malloc(_len_bic__i0__icq_q_elevator0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_bic__i0__icq_q_elevator0; _j0++) {
              int _len_bic__i0__icq_q_elevator_elevator_data0 = 1;
          bic[_i0].icq.q->elevator->elevator_data = (struct bfq_data *) malloc(_len_bic__i0__icq_q_elevator_elevator_data0*sizeof(struct bfq_data));
          for(int _j0 = 0; _j0 < _len_bic__i0__icq_q_elevator_elevator_data0; _j0++) {
            bic[_i0].icq.q->elevator->elevator_data->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct bfq_data * benchRet = bic_to_bfqd(bic);
          printf("%d\n", (*benchRet).dummy);
          free(bic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
