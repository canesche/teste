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
typedef  scalar_t__ u8 ;
struct TYPE_4__ {TYPE_1__* cmd; } ;
struct sas_task {TYPE_2__ ssp_task; } ;
struct TYPE_3__ {scalar_t__* cmnd; } ;

/* Variables and functions */
 scalar_t__ READ_10 ; 
 scalar_t__ WRITE_10 ; 
 scalar_t__ WRITE_VERIFY ; 

__attribute__((used)) static int check_enc_sas_cmd(struct sas_task *task)
{
	u8 cmd = task->ssp_task.cmd->cmnd[0];

	if (cmd == READ_10 || cmd == WRITE_10 || cmd == WRITE_VERIFY)
		return 1;
	else
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
          int _len_task0 = 1;
          struct sas_task * task = (struct sas_task *) malloc(_len_task0*sizeof(struct sas_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__ssp_task_cmd0 = 1;
          task[_i0].ssp_task.cmd = (struct TYPE_3__ *) malloc(_len_task__i0__ssp_task_cmd0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_task__i0__ssp_task_cmd0; _j0++) {
              int _len_task__i0__ssp_task_cmd_cmnd0 = 1;
          task[_i0].ssp_task.cmd->cmnd = (long *) malloc(_len_task__i0__ssp_task_cmd_cmnd0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_task__i0__ssp_task_cmd_cmnd0; _j0++) {
            task[_i0].ssp_task.cmd->cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = check_enc_sas_cmd(task);
          printf("%d\n", benchRet); 
          free(task);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_task0 = 65025;
          struct sas_task * task = (struct sas_task *) malloc(_len_task0*sizeof(struct sas_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__ssp_task_cmd0 = 1;
          task[_i0].ssp_task.cmd = (struct TYPE_3__ *) malloc(_len_task__i0__ssp_task_cmd0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_task__i0__ssp_task_cmd0; _j0++) {
              int _len_task__i0__ssp_task_cmd_cmnd0 = 1;
          task[_i0].ssp_task.cmd->cmnd = (long *) malloc(_len_task__i0__ssp_task_cmd_cmnd0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_task__i0__ssp_task_cmd_cmnd0; _j0++) {
            task[_i0].ssp_task.cmd->cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = check_enc_sas_cmd(task);
          printf("%d\n", benchRet); 
          free(task);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_task0 = 100;
          struct sas_task * task = (struct sas_task *) malloc(_len_task0*sizeof(struct sas_task));
          for(int _i0 = 0; _i0 < _len_task0; _i0++) {
              int _len_task__i0__ssp_task_cmd0 = 1;
          task[_i0].ssp_task.cmd = (struct TYPE_3__ *) malloc(_len_task__i0__ssp_task_cmd0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_task__i0__ssp_task_cmd0; _j0++) {
              int _len_task__i0__ssp_task_cmd_cmnd0 = 1;
          task[_i0].ssp_task.cmd->cmnd = (long *) malloc(_len_task__i0__ssp_task_cmd_cmnd0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_task__i0__ssp_task_cmd_cmnd0; _j0++) {
            task[_i0].ssp_task.cmd->cmnd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = check_enc_sas_cmd(task);
          printf("%d\n", benchRet); 
          free(task);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
