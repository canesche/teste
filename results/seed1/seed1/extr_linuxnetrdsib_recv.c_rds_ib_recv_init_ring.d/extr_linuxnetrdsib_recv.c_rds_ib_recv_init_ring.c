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
typedef  int u32 ;
struct TYPE_5__ {int wr_id; int /*<<< orphan*/  num_sge; struct ib_sge* sg_list; int /*<<< orphan*/ * next; } ;
struct rds_ib_recv_work {struct ib_sge* r_sge; TYPE_2__ r_wr; int /*<<< orphan*/ * r_frag; int /*<<< orphan*/ * r_ibinc; } ;
struct TYPE_4__ {int w_nr; } ;
struct rds_ib_connection {TYPE_3__* i_pd; scalar_t__ i_recv_hdrs_dma; TYPE_1__ i_recv_ring; struct rds_ib_recv_work* i_recvs; } ;
struct rds_header {int dummy; } ;
struct ib_sge {int length; int /*<<< orphan*/  lkey; scalar_t__ addr; } ;
struct TYPE_6__ {int /*<<< orphan*/  local_dma_lkey; } ;

/* Variables and functions */
 int RDS_FRAG_SIZE ; 
 int /*<<< orphan*/  RDS_IB_RECV_SGE ; 

void rds_ib_recv_init_ring(struct rds_ib_connection *ic)
{
	struct rds_ib_recv_work *recv;
	u32 i;

	for (i = 0, recv = ic->i_recvs; i < ic->i_recv_ring.w_nr; i++, recv++) {
		struct ib_sge *sge;

		recv->r_ibinc = NULL;
		recv->r_frag = NULL;

		recv->r_wr.next = NULL;
		recv->r_wr.wr_id = i;
		recv->r_wr.sg_list = recv->r_sge;
		recv->r_wr.num_sge = RDS_IB_RECV_SGE;

		sge = &recv->r_sge[0];
		sge->addr = ic->i_recv_hdrs_dma + (i * sizeof(struct rds_header));
		sge->length = sizeof(struct rds_header);
		sge->lkey = ic->i_pd->local_dma_lkey;

		sge = &recv->r_sge[1];
		sge->addr = 0;
		sge->length = RDS_FRAG_SIZE;
		sge->lkey = ic->i_pd->local_dma_lkey;
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
          ic[_i0].i_pd = (struct TYPE_6__ *) malloc(_len_ic__i0__i_pd0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_pd0; _j0++) {
            ic[_i0].i_pd->local_dma_lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_recv_hdrs_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recv_ring.w_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_recvs0 = 1;
          ic[_i0].i_recvs = (struct rds_ib_recv_work *) malloc(_len_ic__i0__i_recvs0*sizeof(struct rds_ib_recv_work));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs0; _j0++) {
              int _len_ic__i0__i_recvs_r_sge0 = 1;
          ic[_i0].i_recvs->r_sge = (struct ib_sge *) malloc(_len_ic__i0__i_recvs_r_sge0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_sge0; _j0++) {
            ic[_i0].i_recvs->r_sge->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_sge->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_sge->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_recvs->r_wr.wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_wr.num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_recvs_r_wr_sg_list0 = 1;
          ic[_i0].i_recvs->r_wr.sg_list = (struct ib_sge *) malloc(_len_ic__i0__i_recvs_r_wr_sg_list0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_wr_sg_list0; _j0++) {
            ic[_i0].i_recvs->r_wr.sg_list->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_wr.sg_list->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_wr.sg_list->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic__i0__i_recvs_r_wr_next0 = 1;
          ic[_i0].i_recvs->r_wr.next = (int *) malloc(_len_ic__i0__i_recvs_r_wr_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_wr_next0; _j0++) {
            ic[_i0].i_recvs->r_wr.next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic__i0__i_recvs_r_frag0 = 1;
          ic[_i0].i_recvs->r_frag = (int *) malloc(_len_ic__i0__i_recvs_r_frag0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_frag0; _j0++) {
            ic[_i0].i_recvs->r_frag[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic__i0__i_recvs_r_ibinc0 = 1;
          ic[_i0].i_recvs->r_ibinc = (int *) malloc(_len_ic__i0__i_recvs_r_ibinc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_ibinc0; _j0++) {
            ic[_i0].i_recvs->r_ibinc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rds_ib_recv_init_ring(ic);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_pd);
          }
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_recvs);
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
          ic[_i0].i_pd = (struct TYPE_6__ *) malloc(_len_ic__i0__i_pd0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_pd0; _j0++) {
            ic[_i0].i_pd->local_dma_lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_recv_hdrs_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recv_ring.w_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_recvs0 = 1;
          ic[_i0].i_recvs = (struct rds_ib_recv_work *) malloc(_len_ic__i0__i_recvs0*sizeof(struct rds_ib_recv_work));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs0; _j0++) {
              int _len_ic__i0__i_recvs_r_sge0 = 1;
          ic[_i0].i_recvs->r_sge = (struct ib_sge *) malloc(_len_ic__i0__i_recvs_r_sge0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_sge0; _j0++) {
            ic[_i0].i_recvs->r_sge->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_sge->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_sge->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_recvs->r_wr.wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_wr.num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_recvs_r_wr_sg_list0 = 1;
          ic[_i0].i_recvs->r_wr.sg_list = (struct ib_sge *) malloc(_len_ic__i0__i_recvs_r_wr_sg_list0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_wr_sg_list0; _j0++) {
            ic[_i0].i_recvs->r_wr.sg_list->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_wr.sg_list->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_wr.sg_list->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic__i0__i_recvs_r_wr_next0 = 1;
          ic[_i0].i_recvs->r_wr.next = (int *) malloc(_len_ic__i0__i_recvs_r_wr_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_wr_next0; _j0++) {
            ic[_i0].i_recvs->r_wr.next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic__i0__i_recvs_r_frag0 = 1;
          ic[_i0].i_recvs->r_frag = (int *) malloc(_len_ic__i0__i_recvs_r_frag0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_frag0; _j0++) {
            ic[_i0].i_recvs->r_frag[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic__i0__i_recvs_r_ibinc0 = 1;
          ic[_i0].i_recvs->r_ibinc = (int *) malloc(_len_ic__i0__i_recvs_r_ibinc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_ibinc0; _j0++) {
            ic[_i0].i_recvs->r_ibinc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rds_ib_recv_init_ring(ic);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_pd);
          }
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_recvs);
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
          ic[_i0].i_pd = (struct TYPE_6__ *) malloc(_len_ic__i0__i_pd0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_pd0; _j0++) {
            ic[_i0].i_pd->local_dma_lkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_recv_hdrs_dma = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recv_ring.w_nr = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_recvs0 = 1;
          ic[_i0].i_recvs = (struct rds_ib_recv_work *) malloc(_len_ic__i0__i_recvs0*sizeof(struct rds_ib_recv_work));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs0; _j0++) {
              int _len_ic__i0__i_recvs_r_sge0 = 1;
          ic[_i0].i_recvs->r_sge = (struct ib_sge *) malloc(_len_ic__i0__i_recvs_r_sge0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_sge0; _j0++) {
            ic[_i0].i_recvs->r_sge->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_sge->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_sge->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ic[_i0].i_recvs->r_wr.wr_id = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_wr.num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ic__i0__i_recvs_r_wr_sg_list0 = 1;
          ic[_i0].i_recvs->r_wr.sg_list = (struct ib_sge *) malloc(_len_ic__i0__i_recvs_r_wr_sg_list0*sizeof(struct ib_sge));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_wr_sg_list0; _j0++) {
            ic[_i0].i_recvs->r_wr.sg_list->length = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_wr.sg_list->lkey = ((-2 * (next_i()%2)) + 1) * next_i();
        ic[_i0].i_recvs->r_wr.sg_list->addr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic__i0__i_recvs_r_wr_next0 = 1;
          ic[_i0].i_recvs->r_wr.next = (int *) malloc(_len_ic__i0__i_recvs_r_wr_next0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_wr_next0; _j0++) {
            ic[_i0].i_recvs->r_wr.next[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic__i0__i_recvs_r_frag0 = 1;
          ic[_i0].i_recvs->r_frag = (int *) malloc(_len_ic__i0__i_recvs_r_frag0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_frag0; _j0++) {
            ic[_i0].i_recvs->r_frag[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ic__i0__i_recvs_r_ibinc0 = 1;
          ic[_i0].i_recvs->r_ibinc = (int *) malloc(_len_ic__i0__i_recvs_r_ibinc0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ic__i0__i_recvs_r_ibinc0; _j0++) {
            ic[_i0].i_recvs->r_ibinc[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rds_ib_recv_init_ring(ic);
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_pd);
          }
          for(int _aux = 0; _aux < _len_ic0; _aux++) {
          free(ic[_aux].i_recvs);
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
