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
typedef  int /*<<< orphan*/  u8 ;
typedef  size_t u32 ;
struct iscsi_cmd {size_t pdu_count; TYPE_1__* pdu_list; } ;
struct TYPE_2__ {size_t seq_no; scalar_t__ pdu_send_order; } ;

/* Variables and functions */

__attribute__((used)) static void iscsit_ordered_pdu_lists(
	struct iscsi_cmd *cmd,
	u8 type)
{
	u32 i, pdu_send_order = 0, seq_no = 0;

	for (i = 0; i < cmd->pdu_count; i++) {
redo:
		if (cmd->pdu_list[i].seq_no == seq_no) {
			cmd->pdu_list[i].pdu_send_order = pdu_send_order++;
			continue;
		}
		seq_no++;
		pdu_send_order = 0;
		goto redo;
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
          int type = 100;
          int _len_cmd0 = 1;
          struct iscsi_cmd * cmd = (struct iscsi_cmd *) malloc(_len_cmd0*sizeof(struct iscsi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].pdu_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__pdu_list0 = 1;
          cmd[_i0].pdu_list = (struct TYPE_2__ *) malloc(_len_cmd__i0__pdu_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__pdu_list0; _j0++) {
            cmd[_i0].pdu_list->seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_list->pdu_send_order = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          iscsit_ordered_pdu_lists(cmd,type);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].pdu_list);
          }
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int type = 255;
          int _len_cmd0 = 65025;
          struct iscsi_cmd * cmd = (struct iscsi_cmd *) malloc(_len_cmd0*sizeof(struct iscsi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].pdu_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__pdu_list0 = 1;
          cmd[_i0].pdu_list = (struct TYPE_2__ *) malloc(_len_cmd__i0__pdu_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__pdu_list0; _j0++) {
            cmd[_i0].pdu_list->seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_list->pdu_send_order = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          iscsit_ordered_pdu_lists(cmd,type);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].pdu_list);
          }
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int type = 10;
          int _len_cmd0 = 100;
          struct iscsi_cmd * cmd = (struct iscsi_cmd *) malloc(_len_cmd0*sizeof(struct iscsi_cmd));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
            cmd[_i0].pdu_count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmd__i0__pdu_list0 = 1;
          cmd[_i0].pdu_list = (struct TYPE_2__ *) malloc(_len_cmd__i0__pdu_list0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_cmd__i0__pdu_list0; _j0++) {
            cmd[_i0].pdu_list->seq_no = ((-2 * (next_i()%2)) + 1) * next_i();
        cmd[_i0].pdu_list->pdu_send_order = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          iscsit_ordered_pdu_lists(cmd,type);
          for(int _aux = 0; _aux < _len_cmd0; _aux++) {
          free(cmd[_aux].pdu_list);
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
