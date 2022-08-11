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
typedef  size_t u32 ;
struct qedi_ctx {TYPE_1__* itt_map; } ;
struct qedi_cmd {size_t task_id; } ;
struct TYPE_2__ {struct qedi_cmd* p_cmd; } ;

/* Variables and functions */
 size_t MAX_ISCSI_TASK_ENTRIES ; 

struct qedi_cmd *qedi_get_cmd_from_tid(struct qedi_ctx *qedi, u32 tid)
{
	struct qedi_cmd *cmd = NULL;

	if (tid >= MAX_ISCSI_TASK_ENTRIES)
		return NULL;

	cmd = qedi->itt_map[tid].p_cmd;
	if (cmd->task_id != tid)
		return NULL;

	qedi->itt_map[tid].p_cmd = NULL;

	return cmd;
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
          unsigned long tid = 100;
          int _len_qedi0 = 1;
          struct qedi_ctx * qedi = (struct qedi_ctx *) malloc(_len_qedi0*sizeof(struct qedi_ctx));
          for(int _i0 = 0; _i0 < _len_qedi0; _i0++) {
              int _len_qedi__i0__itt_map0 = 1;
          qedi[_i0].itt_map = (struct TYPE_2__ *) malloc(_len_qedi__i0__itt_map0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qedi__i0__itt_map0; _j0++) {
              int _len_qedi__i0__itt_map_p_cmd0 = 1;
          qedi[_i0].itt_map->p_cmd = (struct qedi_cmd *) malloc(_len_qedi__i0__itt_map_p_cmd0*sizeof(struct qedi_cmd));
          for(int _j0 = 0; _j0 < _len_qedi__i0__itt_map_p_cmd0; _j0++) {
            qedi[_i0].itt_map->p_cmd->task_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct qedi_cmd * benchRet = qedi_get_cmd_from_tid(qedi,tid);
          printf("%lu\n", (*benchRet).task_id);
          for(int _aux = 0; _aux < _len_qedi0; _aux++) {
          free(qedi[_aux].itt_map);
          }
          free(qedi);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned long tid = 255;
          int _len_qedi0 = 65025;
          struct qedi_ctx * qedi = (struct qedi_ctx *) malloc(_len_qedi0*sizeof(struct qedi_ctx));
          for(int _i0 = 0; _i0 < _len_qedi0; _i0++) {
              int _len_qedi__i0__itt_map0 = 1;
          qedi[_i0].itt_map = (struct TYPE_2__ *) malloc(_len_qedi__i0__itt_map0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qedi__i0__itt_map0; _j0++) {
              int _len_qedi__i0__itt_map_p_cmd0 = 1;
          qedi[_i0].itt_map->p_cmd = (struct qedi_cmd *) malloc(_len_qedi__i0__itt_map_p_cmd0*sizeof(struct qedi_cmd));
          for(int _j0 = 0; _j0 < _len_qedi__i0__itt_map_p_cmd0; _j0++) {
            qedi[_i0].itt_map->p_cmd->task_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct qedi_cmd * benchRet = qedi_get_cmd_from_tid(qedi,tid);
          printf("%lu\n", (*benchRet).task_id);
          for(int _aux = 0; _aux < _len_qedi0; _aux++) {
          free(qedi[_aux].itt_map);
          }
          free(qedi);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned long tid = 10;
          int _len_qedi0 = 100;
          struct qedi_ctx * qedi = (struct qedi_ctx *) malloc(_len_qedi0*sizeof(struct qedi_ctx));
          for(int _i0 = 0; _i0 < _len_qedi0; _i0++) {
              int _len_qedi__i0__itt_map0 = 1;
          qedi[_i0].itt_map = (struct TYPE_2__ *) malloc(_len_qedi__i0__itt_map0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_qedi__i0__itt_map0; _j0++) {
              int _len_qedi__i0__itt_map_p_cmd0 = 1;
          qedi[_i0].itt_map->p_cmd = (struct qedi_cmd *) malloc(_len_qedi__i0__itt_map_p_cmd0*sizeof(struct qedi_cmd));
          for(int _j0 = 0; _j0 < _len_qedi__i0__itt_map_p_cmd0; _j0++) {
            qedi[_i0].itt_map->p_cmd->task_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct qedi_cmd * benchRet = qedi_get_cmd_from_tid(qedi,tid);
          printf("%lu\n", (*benchRet).task_id);
          for(int _aux = 0; _aux < _len_qedi0; _aux++) {
          free(qedi[_aux].itt_map);
          }
          free(qedi);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
