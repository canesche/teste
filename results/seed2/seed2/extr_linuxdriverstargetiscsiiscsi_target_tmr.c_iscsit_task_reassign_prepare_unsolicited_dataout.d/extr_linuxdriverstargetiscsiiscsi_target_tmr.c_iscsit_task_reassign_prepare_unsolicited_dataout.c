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
struct iscsi_seq {scalar_t__ type; int pdu_count; int pdu_start; int /*<<< orphan*/  status; scalar_t__ next_burst_len; scalar_t__ orig_offset; scalar_t__ offset; scalar_t__ data_sn; } ;
struct iscsi_pdu {scalar_t__ status; scalar_t__ offset; scalar_t__ length; } ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {scalar_t__ first_burst_len; scalar_t__ seq_start_offset; int pdu_count; scalar_t__ seq_end_offset; int seq_count; struct iscsi_pdu* pdu_list; int /*<<< orphan*/  write_data_done; struct iscsi_seq* seq_list; scalar_t__ immediate_data; int /*<<< orphan*/  r2t_offset; scalar_t__ data_sn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {scalar_t__ DataPDUInOrder; scalar_t__ DataSequenceInOrder; } ;

/* Variables and functions */
 int /*<<< orphan*/  DATAOUT_SEQUENCE_WITHIN_COMMAND_RECOVERY ; 
 void* ISCSI_PDU_NOT_RECEIVED ; 
 scalar_t__ ISCSI_PDU_RECEIVED_OK ; 
 scalar_t__ SEQTYPE_UNSOLICITED ; 

__attribute__((used)) static void iscsit_task_reassign_prepare_unsolicited_dataout(
	struct iscsi_cmd *cmd,
	struct iscsi_conn *conn)
{
	int i, j;
	struct iscsi_pdu *pdu = NULL;
	struct iscsi_seq *seq = NULL;

	if (conn->sess->sess_ops->DataSequenceInOrder) {
		cmd->data_sn = 0;

		if (cmd->immediate_data)
			cmd->r2t_offset += (cmd->first_burst_len -
				cmd->seq_start_offset);

		if (conn->sess->sess_ops->DataPDUInOrder) {
			cmd->write_data_done -= (cmd->immediate_data) ?
						(cmd->first_burst_len -
						 cmd->seq_start_offset) :
						 cmd->first_burst_len;
			cmd->first_burst_len = 0;
			return;
		}

		for (i = 0; i < cmd->pdu_count; i++) {
			pdu = &cmd->pdu_list[i];

			if (pdu->status != ISCSI_PDU_RECEIVED_OK)
				continue;

			if ((pdu->offset >= cmd->seq_start_offset) &&
			   ((pdu->offset + pdu->length) <=
			     cmd->seq_end_offset)) {
				cmd->first_burst_len -= pdu->length;
				cmd->write_data_done -= pdu->length;
				pdu->status = ISCSI_PDU_NOT_RECEIVED;
			}
		}
	} else {
		for (i = 0; i < cmd->seq_count; i++) {
			seq = &cmd->seq_list[i];

			if (seq->type != SEQTYPE_UNSOLICITED)
				continue;

			cmd->write_data_done -=
					(seq->offset - seq->orig_offset);
			cmd->first_burst_len = 0;
			seq->data_sn = 0;
			seq->offset = seq->orig_offset;
			seq->next_burst_len = 0;
			seq->status = DATAOUT_SEQUENCE_WITHIN_COMMAND_RECOVERY;

			if (conn->sess->sess_ops->DataPDUInOrder)
				continue;

			for (j = 0; j < seq->pdu_count; j++) {
				pdu = &cmd->pdu_list[j+seq->pdu_start];

				if (pdu->status != ISCSI_PDU_RECEIVED_OK)
					continue;

				pdu->status = ISCSI_PDU_NOT_RECEIVED;
			}
		}
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
          int _len_cmd0 = 1;
          struct iscsi_cmd * cmd = (struct iscsi_cmd *) malloc(_len_cmd0*sizeof(struct iscsi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].first_burst_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_start_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_count = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_end_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__pdu_list0 = 1;
          cmd[_i0].pdu_list = (struct iscsi_pdu *) malloc(_len_cmd__i0__pdu_list0*sizeof(struct iscsi_pdu));
          for(int _j0 = 0; _j0 < _len_cmd__i0__pdu_list0; _j0++) {
            cmd[_i0].pdu_list->status = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_list->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_list->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].write_data_done = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__seq_list0 = 1;
          cmd[_i0].seq_list = (struct iscsi_seq *) malloc(_len_cmd__i0__seq_list0*sizeof(struct iscsi_seq));
          for(int _j0 = 0; _j0 < _len_cmd__i0__seq_list0; _j0++) {
            cmd[_i0].seq_list->type = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->pdu_count = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->pdu_start = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->status = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->next_burst_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->orig_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->data_sn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].immediate_data = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].r2t_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].data_sn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conn0 = 1;
          struct iscsi_conn * conn = (struct iscsi_conn *) malloc(_len_conn0*sizeof(struct iscsi_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              int _len_conn__i0__sess0 = 1;
          conn[_i0].sess = (struct TYPE_4__ *) malloc(_len_conn__i0__sess0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_conn__i0__sess0; _j0++) {
              int _len_conn__i0__sess_sess_ops0 = 1;
          conn[_i0].sess->sess_ops = (struct TYPE_3__ *) malloc(_len_conn__i0__sess_sess_ops0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_conn__i0__sess_sess_ops0; _j0++) {
            conn[_i0].sess->sess_ops->DataPDUInOrder = ((-2 * (next_i()%2)) + 1) * next_i();
        conn[_i0].sess->sess_ops->DataSequenceInOrder = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          iscsit_task_reassign_prepare_unsolicited_dataout(cmd,conn);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].pdu_list);
          }
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].seq_list);
          }
          free(cmd);
          for(int _aux = 0; _aux < _len_conn0; _aux++) {
          free(conn[_aux].sess);
          }
          free(conn);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cmd0 = 65025;
          struct iscsi_cmd * cmd = (struct iscsi_cmd *) malloc(_len_cmd0*sizeof(struct iscsi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].first_burst_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_start_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_count = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_end_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__pdu_list0 = 1;
          cmd[_i0].pdu_list = (struct iscsi_pdu *) malloc(_len_cmd__i0__pdu_list0*sizeof(struct iscsi_pdu));
          for(int _j0 = 0; _j0 < _len_cmd__i0__pdu_list0; _j0++) {
            cmd[_i0].pdu_list->status = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_list->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_list->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].write_data_done = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__seq_list0 = 1;
          cmd[_i0].seq_list = (struct iscsi_seq *) malloc(_len_cmd__i0__seq_list0*sizeof(struct iscsi_seq));
          for(int _j0 = 0; _j0 < _len_cmd__i0__seq_list0; _j0++) {
            cmd[_i0].seq_list->type = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->pdu_count = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->pdu_start = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->status = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->next_burst_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->orig_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->data_sn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].immediate_data = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].r2t_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].data_sn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conn0 = 65025;
          struct iscsi_conn * conn = (struct iscsi_conn *) malloc(_len_conn0*sizeof(struct iscsi_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              int _len_conn__i0__sess0 = 1;
          conn[_i0].sess = (struct TYPE_4__ *) malloc(_len_conn__i0__sess0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_conn__i0__sess0; _j0++) {
              int _len_conn__i0__sess_sess_ops0 = 1;
          conn[_i0].sess->sess_ops = (struct TYPE_3__ *) malloc(_len_conn__i0__sess_sess_ops0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_conn__i0__sess_sess_ops0; _j0++) {
            conn[_i0].sess->sess_ops->DataPDUInOrder = ((-2 * (next_i()%2)) + 1) * next_i();
        conn[_i0].sess->sess_ops->DataSequenceInOrder = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          iscsit_task_reassign_prepare_unsolicited_dataout(cmd,conn);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].pdu_list);
          }
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].seq_list);
          }
          free(cmd);
          for(int _aux = 0; _aux < _len_conn0; _aux++) {
          free(conn[_aux].sess);
          }
          free(conn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cmd0 = 100;
          struct iscsi_cmd * cmd = (struct iscsi_cmd *) malloc(_len_cmd0*sizeof(struct iscsi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].first_burst_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_start_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_count = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_end_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__pdu_list0 = 1;
          cmd[_i0].pdu_list = (struct iscsi_pdu *) malloc(_len_cmd__i0__pdu_list0*sizeof(struct iscsi_pdu));
          for(int _j0 = 0; _j0 < _len_cmd__i0__pdu_list0; _j0++) {
            cmd[_i0].pdu_list->status = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_list->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_list->length = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].write_data_done = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__seq_list0 = 1;
          cmd[_i0].seq_list = (struct iscsi_seq *) malloc(_len_cmd__i0__seq_list0*sizeof(struct iscsi_seq));
          for(int _j0 = 0; _j0 < _len_cmd__i0__seq_list0; _j0++) {
            cmd[_i0].seq_list->type = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->pdu_count = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->pdu_start = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->status = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->next_burst_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->orig_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_list->data_sn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        cmd[_i0].immediate_data = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].r2t_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].data_sn = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_conn0 = 100;
          struct iscsi_conn * conn = (struct iscsi_conn *) malloc(_len_conn0*sizeof(struct iscsi_conn));
          for(int _i0 = 0; _i0 < _len_conn0; _i0++) {
              int _len_conn__i0__sess0 = 1;
          conn[_i0].sess = (struct TYPE_4__ *) malloc(_len_conn__i0__sess0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_conn__i0__sess0; _j0++) {
              int _len_conn__i0__sess_sess_ops0 = 1;
          conn[_i0].sess->sess_ops = (struct TYPE_3__ *) malloc(_len_conn__i0__sess_sess_ops0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_conn__i0__sess_sess_ops0; _j0++) {
            conn[_i0].sess->sess_ops->DataPDUInOrder = ((-2 * (next_i()%2)) + 1) * next_i();
        conn[_i0].sess->sess_ops->DataSequenceInOrder = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          iscsit_task_reassign_prepare_unsolicited_dataout(cmd,conn);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].pdu_list);
          }
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].seq_list);
          }
          free(cmd);
          for(int _aux = 0; _aux < _len_conn0; _aux++) {
          free(conn[_aux].sess);
          }
          free(conn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
