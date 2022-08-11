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
struct TYPE_4__ {int msg_id; int task_id; int large; int drv_id; int busy; int res_rqd; scalar_t__ done; } ;
struct TYPE_5__ {TYPE_1__ part; } ;
struct TYPE_6__ {TYPE_2__ header_high; } ;
union ipc_header_mrfld {TYPE_3__ p; scalar_t__ full; } ;

/* Variables and functions */

void sst_fill_header_mrfld(union ipc_header_mrfld *header,
				int msg, int task_id, int large, int drv_id)
{
	header->full = 0;
	header->p.header_high.part.msg_id = msg;
	header->p.header_high.part.task_id = task_id;
	header->p.header_high.part.large = large;
	header->p.header_high.part.drv_id = drv_id;
	header->p.header_high.part.done = 0;
	header->p.header_high.part.busy = 1;
	header->p.header_high.part.res_rqd = 1;
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
          int msg = 100;
          int task_id = 100;
          int large = 100;
          int drv_id = 100;
          int _len_header0 = 1;
          union ipc_header_mrfld * header = (union ipc_header_mrfld *) malloc(_len_header0*sizeof(union ipc_header_mrfld));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0] = 0;
          }
          sst_fill_header_mrfld(header,msg,task_id,large,drv_id);
          free(header);
        
        break;
    }
    // big-arr
    case 1:
    {
          int msg = 255;
          int task_id = 255;
          int large = 255;
          int drv_id = 255;
          int _len_header0 = 65025;
          union ipc_header_mrfld * header = (union ipc_header_mrfld *) malloc(_len_header0*sizeof(union ipc_header_mrfld));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0] = 0;
          }
          sst_fill_header_mrfld(header,msg,task_id,large,drv_id);
          free(header);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int msg = 10;
          int task_id = 10;
          int large = 10;
          int drv_id = 10;
          int _len_header0 = 100;
          union ipc_header_mrfld * header = (union ipc_header_mrfld *) malloc(_len_header0*sizeof(union ipc_header_mrfld));
          for(int _i0 = 0; _i0 < _len_header0; _i0++) {
            header[_i0] = 0;
          }
          sst_fill_header_mrfld(header,msg,task_id,large,drv_id);
          free(header);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
