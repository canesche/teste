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
typedef  scalar_t__ u32 ;
struct iscsi_datain_req {scalar_t__ begrun; scalar_t__ next_burst_len; int /*<<< orphan*/  read_data_done; } ;
struct iscsi_conn {TYPE_3__* sess; TYPE_1__* conn_ops; } ;
struct iscsi_cmd {scalar_t__ pdu_send_order; scalar_t__ pdu_start; scalar_t__ seq_no; struct iscsi_conn* conn; } ;
struct TYPE_6__ {TYPE_2__* sess_ops; } ;
struct TYPE_5__ {scalar_t__ MaxBurstLength; int /*<<< orphan*/  DataPDUInOrder; } ;
struct TYPE_4__ {scalar_t__ MaxRecvDataSegmentLength; } ;

/* Variables and functions */

int iscsit_create_recovery_datain_values_datasequenceinorder_yes(
	struct iscsi_cmd *cmd,
	struct iscsi_datain_req *dr)
{
	u32 data_sn = 0, data_sn_count = 0;
	u32 pdu_start = 0, seq_no = 0;
	u32 begrun = dr->begrun;
	struct iscsi_conn *conn = cmd->conn;

	while (begrun > data_sn++) {
		data_sn_count++;
		if ((dr->next_burst_len +
		     conn->conn_ops->MaxRecvDataSegmentLength) <
		     conn->sess->sess_ops->MaxBurstLength) {
			dr->read_data_done +=
				conn->conn_ops->MaxRecvDataSegmentLength;
			dr->next_burst_len +=
				conn->conn_ops->MaxRecvDataSegmentLength;
		} else {
			dr->read_data_done +=
				(conn->sess->sess_ops->MaxBurstLength -
				 dr->next_burst_len);
			dr->next_burst_len = 0;
			pdu_start += data_sn_count;
			data_sn_count = 0;
			seq_no++;
		}
	}

	if (!conn->sess->sess_ops->DataPDUInOrder) {
		cmd->seq_no = seq_no;
		cmd->pdu_start = pdu_start;
		cmd->pdu_send_order = data_sn_count;
	}

	return 0;
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
            cmd[_i0].pdu_send_order = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_start = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__conn0 = 1;
          cmd[_i0].conn = (struct iscsi_conn *) malloc(_len_cmd__i0__conn0*sizeof(struct iscsi_conn));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn0; _j0++) {
              int _len_cmd__i0__conn_sess0 = 1;
          cmd[_i0].conn->sess = (struct TYPE_6__ *) malloc(_len_cmd__i0__conn_sess0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_sess0; _j0++) {
              int _len_cmd__i0__conn_sess_sess_ops0 = 1;
          cmd[_i0].conn->sess->sess_ops = (struct TYPE_5__ *) malloc(_len_cmd__i0__conn_sess_sess_ops0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_sess_sess_ops0; _j0++) {
            cmd[_i0].conn->sess->sess_ops->MaxBurstLength = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].conn->sess->sess_ops->DataPDUInOrder = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmd__i0__conn_conn_ops0 = 1;
          cmd[_i0].conn->conn_ops = (struct TYPE_4__ *) malloc(_len_cmd__i0__conn_conn_ops0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_conn_ops0; _j0++) {
            cmd[_i0].conn->conn_ops->MaxRecvDataSegmentLength = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dr0 = 1;
          struct iscsi_datain_req * dr = (struct iscsi_datain_req *) malloc(_len_dr0*sizeof(struct iscsi_datain_req));
          for(int _i0 = 0; _i0 < _len_dr0; _i0++) {
            dr[_i0].begrun = ((-2 * (next_i()%2)) + 1) * next_i();
        dr[_i0].next_burst_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dr[_i0].read_data_done = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iscsit_create_recovery_datain_values_datasequenceinorder_yes(cmd,dr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].conn);
          }
          free(cmd);
          free(dr);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cmd0 = 65025;
          struct iscsi_cmd * cmd = (struct iscsi_cmd *) malloc(_len_cmd0*sizeof(struct iscsi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].pdu_send_order = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_start = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__conn0 = 1;
          cmd[_i0].conn = (struct iscsi_conn *) malloc(_len_cmd__i0__conn0*sizeof(struct iscsi_conn));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn0; _j0++) {
              int _len_cmd__i0__conn_sess0 = 1;
          cmd[_i0].conn->sess = (struct TYPE_6__ *) malloc(_len_cmd__i0__conn_sess0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_sess0; _j0++) {
              int _len_cmd__i0__conn_sess_sess_ops0 = 1;
          cmd[_i0].conn->sess->sess_ops = (struct TYPE_5__ *) malloc(_len_cmd__i0__conn_sess_sess_ops0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_sess_sess_ops0; _j0++) {
            cmd[_i0].conn->sess->sess_ops->MaxBurstLength = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].conn->sess->sess_ops->DataPDUInOrder = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmd__i0__conn_conn_ops0 = 1;
          cmd[_i0].conn->conn_ops = (struct TYPE_4__ *) malloc(_len_cmd__i0__conn_conn_ops0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_conn_ops0; _j0++) {
            cmd[_i0].conn->conn_ops->MaxRecvDataSegmentLength = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dr0 = 65025;
          struct iscsi_datain_req * dr = (struct iscsi_datain_req *) malloc(_len_dr0*sizeof(struct iscsi_datain_req));
          for(int _i0 = 0; _i0 < _len_dr0; _i0++) {
            dr[_i0].begrun = ((-2 * (next_i()%2)) + 1) * next_i();
        dr[_i0].next_burst_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dr[_i0].read_data_done = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iscsit_create_recovery_datain_values_datasequenceinorder_yes(cmd,dr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].conn);
          }
          free(cmd);
          free(dr);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cmd0 = 100;
          struct iscsi_cmd * cmd = (struct iscsi_cmd *) malloc(_len_cmd0*sizeof(struct iscsi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].pdu_send_order = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_start = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__conn0 = 1;
          cmd[_i0].conn = (struct iscsi_conn *) malloc(_len_cmd__i0__conn0*sizeof(struct iscsi_conn));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn0; _j0++) {
              int _len_cmd__i0__conn_sess0 = 1;
          cmd[_i0].conn->sess = (struct TYPE_6__ *) malloc(_len_cmd__i0__conn_sess0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_sess0; _j0++) {
              int _len_cmd__i0__conn_sess_sess_ops0 = 1;
          cmd[_i0].conn->sess->sess_ops = (struct TYPE_5__ *) malloc(_len_cmd__i0__conn_sess_sess_ops0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_sess_sess_ops0; _j0++) {
            cmd[_i0].conn->sess->sess_ops->MaxBurstLength = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].conn->sess->sess_ops->DataPDUInOrder = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_cmd__i0__conn_conn_ops0 = 1;
          cmd[_i0].conn->conn_ops = (struct TYPE_4__ *) malloc(_len_cmd__i0__conn_conn_ops0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_conn_ops0; _j0++) {
            cmd[_i0].conn->conn_ops->MaxRecvDataSegmentLength = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_dr0 = 100;
          struct iscsi_datain_req * dr = (struct iscsi_datain_req *) malloc(_len_dr0*sizeof(struct iscsi_datain_req));
          for(int _i0 = 0; _i0 < _len_dr0; _i0++) {
            dr[_i0].begrun = ((-2 * (next_i()%2)) + 1) * next_i();
        dr[_i0].next_burst_len = ((-2 * (next_i()%2)) + 1) * next_i();
        dr[_i0].read_data_done = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = iscsit_create_recovery_datain_values_datasequenceinorder_yes(cmd,dr);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].conn);
          }
          free(cmd);
          free(dr);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
