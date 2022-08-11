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
typedef  scalar_t__ u32 ;
struct iscsi_conn {TYPE_2__* sess; } ;
struct iscsi_cmd {scalar_t__ write_data_done; scalar_t__ next_burst_len; scalar_t__ data_sn; struct iscsi_conn* conn; } ;
struct TYPE_4__ {TYPE_1__* sess_ops; } ;
struct TYPE_3__ {scalar_t__ MaxBurstLength; } ;

/* Variables and functions */

void iscsit_create_conn_recovery_dataout_values(
	struct iscsi_cmd *cmd)
{
	u32 write_data_done = 0;
	struct iscsi_conn *conn = cmd->conn;

	cmd->data_sn = 0;
	cmd->next_burst_len = 0;

	while (cmd->write_data_done > write_data_done) {
		if ((write_data_done + conn->sess->sess_ops->MaxBurstLength) <=
		     cmd->write_data_done)
			write_data_done += conn->sess->sess_ops->MaxBurstLength;
		else
			break;
	}

	cmd->write_data_done = write_data_done;
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
            cmd[_i0].write_data_done = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].next_burst_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].data_sn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__conn0 = 1;
          cmd[_i0].conn = (struct iscsi_conn *) malloc(_len_cmd__i0__conn0*sizeof(struct iscsi_conn));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn0; _j0++) {
              int _len_cmd__i0__conn_sess0 = 1;
          cmd[_i0].conn->sess = (struct TYPE_4__ *) malloc(_len_cmd__i0__conn_sess0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_sess0; _j0++) {
              int _len_cmd__i0__conn_sess_sess_ops0 = 1;
          cmd[_i0].conn->sess->sess_ops = (struct TYPE_3__ *) malloc(_len_cmd__i0__conn_sess_sess_ops0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_sess_sess_ops0; _j0++) {
            cmd[_i0].conn->sess->sess_ops->MaxBurstLength = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          iscsit_create_conn_recovery_dataout_values(cmd);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].conn);
          }
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_cmd0 = 65025;
          struct iscsi_cmd * cmd = (struct iscsi_cmd *) malloc(_len_cmd0*sizeof(struct iscsi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].write_data_done = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].next_burst_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].data_sn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__conn0 = 1;
          cmd[_i0].conn = (struct iscsi_conn *) malloc(_len_cmd__i0__conn0*sizeof(struct iscsi_conn));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn0; _j0++) {
              int _len_cmd__i0__conn_sess0 = 1;
          cmd[_i0].conn->sess = (struct TYPE_4__ *) malloc(_len_cmd__i0__conn_sess0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_sess0; _j0++) {
              int _len_cmd__i0__conn_sess_sess_ops0 = 1;
          cmd[_i0].conn->sess->sess_ops = (struct TYPE_3__ *) malloc(_len_cmd__i0__conn_sess_sess_ops0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_sess_sess_ops0; _j0++) {
            cmd[_i0].conn->sess->sess_ops->MaxBurstLength = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          iscsit_create_conn_recovery_dataout_values(cmd);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].conn);
          }
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_cmd0 = 100;
          struct iscsi_cmd * cmd = (struct iscsi_cmd *) malloc(_len_cmd0*sizeof(struct iscsi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].write_data_done = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].next_burst_len = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].data_sn = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__conn0 = 1;
          cmd[_i0].conn = (struct iscsi_conn *) malloc(_len_cmd__i0__conn0*sizeof(struct iscsi_conn));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn0; _j0++) {
              int _len_cmd__i0__conn_sess0 = 1;
          cmd[_i0].conn->sess = (struct TYPE_4__ *) malloc(_len_cmd__i0__conn_sess0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_sess0; _j0++) {
              int _len_cmd__i0__conn_sess_sess_ops0 = 1;
          cmd[_i0].conn->sess->sess_ops = (struct TYPE_3__ *) malloc(_len_cmd__i0__conn_sess_sess_ops0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__conn_sess_sess_ops0; _j0++) {
            cmd[_i0].conn->sess->sess_ops->MaxBurstLength = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          iscsit_create_conn_recovery_dataout_values(cmd);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].conn);
          }
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
