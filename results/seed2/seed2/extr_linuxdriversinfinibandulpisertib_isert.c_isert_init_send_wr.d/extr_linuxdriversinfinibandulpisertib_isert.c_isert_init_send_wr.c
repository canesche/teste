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
struct isert_conn {scalar_t__ snd_w_inv; } ;
struct TYPE_3__ {int /*<<< orphan*/  done; } ;
struct iser_tx_desc {int /*<<< orphan*/  num_sge; int /*<<< orphan*/ * tx_sg; TYPE_1__ tx_cqe; } ;
struct isert_cmd {struct iser_tx_desc tx_desc; scalar_t__ inv_rkey; } ;
struct TYPE_4__ {scalar_t__ invalidate_rkey; } ;
struct ib_send_wr {int /*<<< orphan*/  send_flags; int /*<<< orphan*/  num_sge; int /*<<< orphan*/ * sg_list; int /*<<< orphan*/  opcode; TYPE_2__ ex; TYPE_1__* wr_cqe; } ;

/* Variables and functions */
 int /*<<< orphan*/  IB_SEND_SIGNALED ; 
 int /*<<< orphan*/  IB_WR_SEND ; 
 int /*<<< orphan*/  IB_WR_SEND_WITH_INV ; 
 int /*<<< orphan*/  isert_send_done ; 

__attribute__((used)) static void
isert_init_send_wr(struct isert_conn *isert_conn, struct isert_cmd *isert_cmd,
		   struct ib_send_wr *send_wr)
{
	struct iser_tx_desc *tx_desc = &isert_cmd->tx_desc;

	tx_desc->tx_cqe.done = isert_send_done;
	send_wr->wr_cqe = &tx_desc->tx_cqe;

	if (isert_conn->snd_w_inv && isert_cmd->inv_rkey) {
		send_wr->opcode  = IB_WR_SEND_WITH_INV;
		send_wr->ex.invalidate_rkey = isert_cmd->inv_rkey;
	} else {
		send_wr->opcode = IB_WR_SEND;
	}

	send_wr->sg_list = &tx_desc->tx_sg[0];
	send_wr->num_sge = isert_cmd->tx_desc.num_sge;
	send_wr->send_flags = IB_SEND_SIGNALED;
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
          int _len_isert_conn0 = 1;
          struct isert_conn * isert_conn = (struct isert_conn *) malloc(_len_isert_conn0*sizeof(struct isert_conn));
          for(int _i0 = 0; _i0 < _len_isert_conn0; _i0++) {
            isert_conn[_i0].snd_w_inv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_isert_cmd0 = 1;
          struct isert_cmd * isert_cmd = (struct isert_cmd *) malloc(_len_isert_cmd0*sizeof(struct isert_cmd));
          for(int _i0 = 0; _i0 < _len_isert_cmd0; _i0++) {
            isert_cmd[_i0].tx_desc.num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_isert_cmd__i0__tx_desc_tx_sg0 = 1;
          isert_cmd[_i0].tx_desc.tx_sg = (int *) malloc(_len_isert_cmd__i0__tx_desc_tx_sg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_isert_cmd__i0__tx_desc_tx_sg0; _j0++) {
            isert_cmd[_i0].tx_desc.tx_sg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        isert_cmd[_i0].tx_desc.tx_cqe.done = ((-2 * (next_i()%2)) + 1) * next_i();
        isert_cmd[_i0].inv_rkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_send_wr0 = 1;
          struct ib_send_wr * send_wr = (struct ib_send_wr *) malloc(_len_send_wr0*sizeof(struct ib_send_wr));
          for(int _i0 = 0; _i0 < _len_send_wr0; _i0++) {
            send_wr[_i0].send_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        send_wr[_i0].num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_send_wr__i0__sg_list0 = 1;
          send_wr[_i0].sg_list = (int *) malloc(_len_send_wr__i0__sg_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_send_wr__i0__sg_list0; _j0++) {
            send_wr[_i0].sg_list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        send_wr[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        send_wr[_i0].ex.invalidate_rkey = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_send_wr__i0__wr_cqe0 = 1;
          send_wr[_i0].wr_cqe = (struct TYPE_3__ *) malloc(_len_send_wr__i0__wr_cqe0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_send_wr__i0__wr_cqe0; _j0++) {
            send_wr[_i0].wr_cqe->done = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          isert_init_send_wr(isert_conn,isert_cmd,send_wr);
          free(isert_conn);
          free(isert_cmd);
          for(int _aux = 0; _aux < _len_send_wr0; _aux++) {
          free(send_wr[_aux].sg_list);
          }
          for(int _aux = 0; _aux < _len_send_wr0; _aux++) {
          free(send_wr[_aux].wr_cqe);
          }
          free(send_wr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_isert_conn0 = 65025;
          struct isert_conn * isert_conn = (struct isert_conn *) malloc(_len_isert_conn0*sizeof(struct isert_conn));
          for(int _i0 = 0; _i0 < _len_isert_conn0; _i0++) {
            isert_conn[_i0].snd_w_inv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_isert_cmd0 = 65025;
          struct isert_cmd * isert_cmd = (struct isert_cmd *) malloc(_len_isert_cmd0*sizeof(struct isert_cmd));
          for(int _i0 = 0; _i0 < _len_isert_cmd0; _i0++) {
            isert_cmd[_i0].tx_desc.num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_isert_cmd__i0__tx_desc_tx_sg0 = 1;
          isert_cmd[_i0].tx_desc.tx_sg = (int *) malloc(_len_isert_cmd__i0__tx_desc_tx_sg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_isert_cmd__i0__tx_desc_tx_sg0; _j0++) {
            isert_cmd[_i0].tx_desc.tx_sg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        isert_cmd[_i0].tx_desc.tx_cqe.done = ((-2 * (next_i()%2)) + 1) * next_i();
        isert_cmd[_i0].inv_rkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_send_wr0 = 65025;
          struct ib_send_wr * send_wr = (struct ib_send_wr *) malloc(_len_send_wr0*sizeof(struct ib_send_wr));
          for(int _i0 = 0; _i0 < _len_send_wr0; _i0++) {
            send_wr[_i0].send_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        send_wr[_i0].num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_send_wr__i0__sg_list0 = 1;
          send_wr[_i0].sg_list = (int *) malloc(_len_send_wr__i0__sg_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_send_wr__i0__sg_list0; _j0++) {
            send_wr[_i0].sg_list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        send_wr[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        send_wr[_i0].ex.invalidate_rkey = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_send_wr__i0__wr_cqe0 = 1;
          send_wr[_i0].wr_cqe = (struct TYPE_3__ *) malloc(_len_send_wr__i0__wr_cqe0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_send_wr__i0__wr_cqe0; _j0++) {
            send_wr[_i0].wr_cqe->done = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          isert_init_send_wr(isert_conn,isert_cmd,send_wr);
          free(isert_conn);
          free(isert_cmd);
          for(int _aux = 0; _aux < _len_send_wr0; _aux++) {
          free(send_wr[_aux].sg_list);
          }
          for(int _aux = 0; _aux < _len_send_wr0; _aux++) {
          free(send_wr[_aux].wr_cqe);
          }
          free(send_wr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_isert_conn0 = 100;
          struct isert_conn * isert_conn = (struct isert_conn *) malloc(_len_isert_conn0*sizeof(struct isert_conn));
          for(int _i0 = 0; _i0 < _len_isert_conn0; _i0++) {
            isert_conn[_i0].snd_w_inv = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_isert_cmd0 = 100;
          struct isert_cmd * isert_cmd = (struct isert_cmd *) malloc(_len_isert_cmd0*sizeof(struct isert_cmd));
          for(int _i0 = 0; _i0 < _len_isert_cmd0; _i0++) {
            isert_cmd[_i0].tx_desc.num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_isert_cmd__i0__tx_desc_tx_sg0 = 1;
          isert_cmd[_i0].tx_desc.tx_sg = (int *) malloc(_len_isert_cmd__i0__tx_desc_tx_sg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_isert_cmd__i0__tx_desc_tx_sg0; _j0++) {
            isert_cmd[_i0].tx_desc.tx_sg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        isert_cmd[_i0].tx_desc.tx_cqe.done = ((-2 * (next_i()%2)) + 1) * next_i();
        isert_cmd[_i0].inv_rkey = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_send_wr0 = 100;
          struct ib_send_wr * send_wr = (struct ib_send_wr *) malloc(_len_send_wr0*sizeof(struct ib_send_wr));
          for(int _i0 = 0; _i0 < _len_send_wr0; _i0++) {
            send_wr[_i0].send_flags = ((-2 * (next_i()%2)) + 1) * next_i();
        send_wr[_i0].num_sge = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_send_wr__i0__sg_list0 = 1;
          send_wr[_i0].sg_list = (int *) malloc(_len_send_wr__i0__sg_list0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_send_wr__i0__sg_list0; _j0++) {
            send_wr[_i0].sg_list[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        send_wr[_i0].opcode = ((-2 * (next_i()%2)) + 1) * next_i();
        send_wr[_i0].ex.invalidate_rkey = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_send_wr__i0__wr_cqe0 = 1;
          send_wr[_i0].wr_cqe = (struct TYPE_3__ *) malloc(_len_send_wr__i0__wr_cqe0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_send_wr__i0__wr_cqe0; _j0++) {
            send_wr[_i0].wr_cqe->done = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          isert_init_send_wr(isert_conn,isert_cmd,send_wr);
          free(isert_conn);
          free(isert_cmd);
          for(int _aux = 0; _aux < _len_send_wr0; _aux++) {
          free(send_wr[_aux].sg_list);
          }
          for(int _aux = 0; _aux < _len_send_wr0; _aux++) {
          free(send_wr[_aux].wr_cqe);
          }
          free(send_wr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
