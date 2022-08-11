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
struct ib_sge {int length; int /*<<< orphan*/  lkey; int /*<<< orphan*/  addr; } ;
struct ib_send_wr {int num_sge; int send_flags; int /*<<< orphan*/  wr_id; int /*<<< orphan*/  opcode; struct ib_sge* sg_list; } ;
struct rds_ib_connection {TYPE_1__* i_pd; int /*<<< orphan*/  i_ack_dma; struct ib_sge i_ack_sge; struct ib_send_wr i_ack_wr; } ;
struct rds_header {int dummy; } ;
struct TYPE_2__ {int /*<<< orphan*/  local_dma_lkey; } ;

/* Variables and functions */
 int IB_SEND_SIGNALED ; 
 int IB_SEND_SOLICITED ; 
 int /*<<< orphan*/  IB_WR_SEND ; 
 int /*<<< orphan*/  RDS_IB_ACK_WR_ID ; 

void rds_ib_recv_init_ack(struct rds_ib_connection *ic)
{
	struct ib_send_wr *wr = &ic->i_ack_wr;
	struct ib_sge *sge = &ic->i_ack_sge;

	sge->addr = ic->i_ack_dma;
	sge->length = sizeof(struct rds_header);
	sge->lkey = ic->i_pd->local_dma_lkey;

	wr->sg_list = sge;
	wr->num_sge = 1;
	wr->opcode = IB_WR_SEND;
	wr->wr_id = RDS_IB_ACK_WR_ID;
	wr->send_flags = IB_SEND_SIGNALED | IB_SEND_SOLICITED;
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
          ic[_i0].i_pd = (struct TYPE_2__ *) malloc(_len_ic__i0__i_pd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_pd0; _j0++) {
            ic[_i0].i_pd->local_dma_lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_ack_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_sge.length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_sge.lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_sge.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.send_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_ack_wr_sg_list0 = 1;
          ic[_i0].i_ack_wr.sg_list = (struct ib_sge *) malloc(_len_ic__i0__i_ack_wr_sg_list0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_ack_wr_sg_list0; _j0++) {
            ic[_i0].i_ack_wr.sg_list->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.sg_list->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.sg_list->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rds_ib_recv_init_ack(ic);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_pd);
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
          ic[_i0].i_pd = (struct TYPE_2__ *) malloc(_len_ic__i0__i_pd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_pd0; _j0++) {
            ic[_i0].i_pd->local_dma_lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_ack_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_sge.length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_sge.lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_sge.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.send_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_ack_wr_sg_list0 = 1;
          ic[_i0].i_ack_wr.sg_list = (struct ib_sge *) malloc(_len_ic__i0__i_ack_wr_sg_list0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_ack_wr_sg_list0; _j0++) {
            ic[_i0].i_ack_wr.sg_list->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.sg_list->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.sg_list->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rds_ib_recv_init_ack(ic);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_pd);
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
          ic[_i0].i_pd = (struct TYPE_2__ *) malloc(_len_ic__i0__i_pd0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_pd0; _j0++) {
            ic[_i0].i_pd->local_dma_lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_ack_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_sge.length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_sge.lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_sge.addr = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.send_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.opcode = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_ack_wr_sg_list0 = 1;
          ic[_i0].i_ack_wr.sg_list = (struct ib_sge *) malloc(_len_ic__i0__i_ack_wr_sg_list0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_ack_wr_sg_list0; _j0++) {
            ic[_i0].i_ack_wr.sg_list->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.sg_list->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_ack_wr.sg_list->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rds_ib_recv_init_ack(ic);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_pd);
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
