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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  int u32 ;
struct TYPE_6__ {scalar_t__ imm_data; } ;
struct TYPE_7__ {int wr_id; TYPE_2__ ex; struct ib_sge* sg_list; } ;
struct rds_ib_send_work {struct ib_sge* s_sge; TYPE_3__ s_wr; int /*<<< orphan*/ * s_op; } ;
struct TYPE_5__ {int w_nr; } ;
struct rds_ib_connection {TYPE_4__* i_pd; scalar_t__ i_send_hdrs_dma; TYPE_1__ i_send_ring; struct rds_ib_send_work* i_sends; } ;
struct rds_header {int dummy; } ;
struct ib_sge {int length; int /*<<< orphan*/  lkey; scalar_t__ addr; } ;
struct TYPE_8__ {int /*<<< orphan*/  local_dma_lkey; } ;

/* Variables and functions */

void rds_ib_send_init_ring(struct rds_ib_connection *ic)
{
	struct rds_ib_send_work *send;
	u32 i;

	for (i = 0, send = ic->i_sends; i < ic->i_send_ring.w_nr; i++, send++) {
		struct ib_sge *sge;

		send->s_op = NULL;

		send->s_wr.wr_id = i;
		send->s_wr.sg_list = send->s_sge;
		send->s_wr.ex.imm_data = 0;

		sge = &send->s_sge[0];
		sge->addr = ic->i_send_hdrs_dma + (i * sizeof(struct rds_header));
		sge->length = sizeof(struct rds_header);
		sge->lkey = ic->i_pd->local_dma_lkey;

		send->s_sge[1].lkey = ic->i_pd->local_dma_lkey;
	}
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
          int _len_ic0 = 1;
          struct rds_ib_connection * ic = (struct rds_ib_connection *) malloc(_len_ic0*sizeof(struct rds_ib_connection));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
              int _len_ic__i0__i_pd0 = 1;
          ic[_i0].i_pd = (struct TYPE_8__ *) malloc(_len_ic__i0__i_pd0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_pd0; _j0++) {
            ic[_i0].i_pd->local_dma_lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_send_hdrs_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_send_ring.w_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_sends0 = 1;
          ic[_i0].i_sends = (struct rds_ib_send_work *) malloc(_len_ic__i0__i_sends0*sizeof(struct rds_ib_send_work));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_sends0; _j0++) {
              int _len_ic__i0__i_sends_s_sge0 = 1;
          ic[_i0].i_sends->s_sge = (struct ib_sge *) malloc(_len_ic__i0__i_sends_s_sge0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_sends_s_sge0; _j0++) {
            ic[_i0].i_sends->s_sge->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_sge->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_sge->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_sends->s_wr.wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_wr.ex.imm_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_sends_s_wr_sg_list0 = 1;
          ic[_i0].i_sends->s_wr.sg_list = (struct ib_sge *) malloc(_len_ic__i0__i_sends_s_wr_sg_list0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_sends_s_wr_sg_list0; _j0++) {
            ic[_i0].i_sends->s_wr.sg_list->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_wr.sg_list->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_wr.sg_list->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic__i0__i_sends_s_op0 = 1;
          ic[_i0].i_sends->s_op = (int *) malloc(_len_ic__i0__i_sends_s_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_sends_s_op0; _j0++) {
            ic[_i0].i_sends->s_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rds_ib_send_init_ring(ic);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_pd);
          }
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_sends);
          }
          free(ic);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ic0 = 65025;
          struct rds_ib_connection * ic = (struct rds_ib_connection *) malloc(_len_ic0*sizeof(struct rds_ib_connection));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
              int _len_ic__i0__i_pd0 = 1;
          ic[_i0].i_pd = (struct TYPE_8__ *) malloc(_len_ic__i0__i_pd0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_pd0; _j0++) {
            ic[_i0].i_pd->local_dma_lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_send_hdrs_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_send_ring.w_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_sends0 = 1;
          ic[_i0].i_sends = (struct rds_ib_send_work *) malloc(_len_ic__i0__i_sends0*sizeof(struct rds_ib_send_work));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_sends0; _j0++) {
              int _len_ic__i0__i_sends_s_sge0 = 1;
          ic[_i0].i_sends->s_sge = (struct ib_sge *) malloc(_len_ic__i0__i_sends_s_sge0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_sends_s_sge0; _j0++) {
            ic[_i0].i_sends->s_sge->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_sge->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_sge->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_sends->s_wr.wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_wr.ex.imm_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_sends_s_wr_sg_list0 = 1;
          ic[_i0].i_sends->s_wr.sg_list = (struct ib_sge *) malloc(_len_ic__i0__i_sends_s_wr_sg_list0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_sends_s_wr_sg_list0; _j0++) {
            ic[_i0].i_sends->s_wr.sg_list->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_wr.sg_list->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_wr.sg_list->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic__i0__i_sends_s_op0 = 1;
          ic[_i0].i_sends->s_op = (int *) malloc(_len_ic__i0__i_sends_s_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_sends_s_op0; _j0++) {
            ic[_i0].i_sends->s_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rds_ib_send_init_ring(ic);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_pd);
          }
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_sends);
          }
          free(ic);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ic0 = 100;
          struct rds_ib_connection * ic = (struct rds_ib_connection *) malloc(_len_ic0*sizeof(struct rds_ib_connection));
          for(int _i0 = 0; _i0 < _len_ic0; _i0++) {
              int _len_ic__i0__i_pd0 = 1;
          ic[_i0].i_pd = (struct TYPE_8__ *) malloc(_len_ic__i0__i_pd0*sizeof(struct TYPE_8__));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_pd0; _j0++) {
            ic[_i0].i_pd->local_dma_lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_send_hdrs_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_send_ring.w_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_sends0 = 1;
          ic[_i0].i_sends = (struct rds_ib_send_work *) malloc(_len_ic__i0__i_sends0*sizeof(struct rds_ib_send_work));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_sends0; _j0++) {
              int _len_ic__i0__i_sends_s_sge0 = 1;
          ic[_i0].i_sends->s_sge = (struct ib_sge *) malloc(_len_ic__i0__i_sends_s_sge0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_sends_s_sge0; _j0++) {
            ic[_i0].i_sends->s_sge->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_sge->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_sge->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_sends->s_wr.wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_wr.ex.imm_data = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_sends_s_wr_sg_list0 = 1;
          ic[_i0].i_sends->s_wr.sg_list = (struct ib_sge *) malloc(_len_ic__i0__i_sends_s_wr_sg_list0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_sends_s_wr_sg_list0; _j0++) {
            ic[_i0].i_sends->s_wr.sg_list->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_wr.sg_list->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_sends->s_wr.sg_list->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic__i0__i_sends_s_op0 = 1;
          ic[_i0].i_sends->s_op = (int *) malloc(_len_ic__i0__i_sends_s_op0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_sends_s_op0; _j0++) {
            ic[_i0].i_sends->s_op[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rds_ib_send_init_ring(ic);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_pd);
          }
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_sends);
          }
          free(ic);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
