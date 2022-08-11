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
struct TYPE_2__ {int /*<<< orphan*/  request_type; int /*<<< orphan*/ * cdb; } ;
struct ipr_ioarcb {TYPE_1__ cmd_pkt; int /*<<< orphan*/  res_handle; } ;
struct ipr_cmnd {struct ipr_ioarcb ioarcb; } ;
typedef  int /*<<< orphan*/  __be32 ;

/* Variables and functions */
 int /*<<< orphan*/  IPR_IOA_SERVICE_ACTION ; 
 int /*<<< orphan*/  IPR_RQTYPE_IOACMD ; 

__attribute__((used)) static void ipr_build_ioa_service_action(struct ipr_cmnd *ipr_cmd,
					 __be32 res_handle, u8 sa_code)
{
	struct ipr_ioarcb *ioarcb = &ipr_cmd->ioarcb;

	ioarcb->res_handle = res_handle;
	ioarcb->cmd_pkt.cdb[0] = IPR_IOA_SERVICE_ACTION;
	ioarcb->cmd_pkt.cdb[1] = sa_code;
	ioarcb->cmd_pkt.request_type = IPR_RQTYPE_IOACMD;
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
          int res_handle = 100;
          int sa_code = 100;
          int _len_ipr_cmd0 = 1;
          struct ipr_cmnd * ipr_cmd = (struct ipr_cmnd *) malloc(_len_ipr_cmd0*sizeof(struct ipr_cmnd));
          for(int _i0 = 0; _i0 < _len_ipr_cmd0; _i0++) {
            ipr_cmd[_i0].ioarcb.cmd_pkt.request_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipr_cmd__i0__ioarcb_cmd_pkt_cdb0 = 1;
          ipr_cmd[_i0].ioarcb.cmd_pkt.cdb = (int *) malloc(_len_ipr_cmd__i0__ioarcb_cmd_pkt_cdb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ipr_cmd__i0__ioarcb_cmd_pkt_cdb0; _j0++) {
            ipr_cmd[_i0].ioarcb.cmd_pkt.cdb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ipr_cmd[_i0].ioarcb.res_handle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ipr_build_ioa_service_action(ipr_cmd,res_handle,sa_code);
          free(ipr_cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int res_handle = 255;
          int sa_code = 255;
          int _len_ipr_cmd0 = 65025;
          struct ipr_cmnd * ipr_cmd = (struct ipr_cmnd *) malloc(_len_ipr_cmd0*sizeof(struct ipr_cmnd));
          for(int _i0 = 0; _i0 < _len_ipr_cmd0; _i0++) {
            ipr_cmd[_i0].ioarcb.cmd_pkt.request_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipr_cmd__i0__ioarcb_cmd_pkt_cdb0 = 1;
          ipr_cmd[_i0].ioarcb.cmd_pkt.cdb = (int *) malloc(_len_ipr_cmd__i0__ioarcb_cmd_pkt_cdb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ipr_cmd__i0__ioarcb_cmd_pkt_cdb0; _j0++) {
            ipr_cmd[_i0].ioarcb.cmd_pkt.cdb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ipr_cmd[_i0].ioarcb.res_handle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ipr_build_ioa_service_action(ipr_cmd,res_handle,sa_code);
          free(ipr_cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int res_handle = 10;
          int sa_code = 10;
          int _len_ipr_cmd0 = 100;
          struct ipr_cmnd * ipr_cmd = (struct ipr_cmnd *) malloc(_len_ipr_cmd0*sizeof(struct ipr_cmnd));
          for(int _i0 = 0; _i0 < _len_ipr_cmd0; _i0++) {
            ipr_cmd[_i0].ioarcb.cmd_pkt.request_type = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ipr_cmd__i0__ioarcb_cmd_pkt_cdb0 = 1;
          ipr_cmd[_i0].ioarcb.cmd_pkt.cdb = (int *) malloc(_len_ipr_cmd__i0__ioarcb_cmd_pkt_cdb0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ipr_cmd__i0__ioarcb_cmd_pkt_cdb0; _j0++) {
            ipr_cmd[_i0].ioarcb.cmd_pkt.cdb[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        ipr_cmd[_i0].ioarcb.res_handle = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ipr_build_ioa_service_action(ipr_cmd,res_handle,sa_code);
          free(ipr_cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
