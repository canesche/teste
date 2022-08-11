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
struct qlcnic_vf_info {int tx_ctx_id; } ;
struct TYPE_2__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_1__ req; } ;

/* Variables and functions */
 int EINVAL ; 

__attribute__((used)) static int qlcnic_sriov_validate_del_tx_ctx(struct qlcnic_vf_info *vf,
					    struct qlcnic_cmd_args *cmd)
{
	if ((cmd->req.arg[0] >> 29) != 0x3)
		return -EINVAL;

	if ((cmd->req.arg[1] & 0xffff) != vf->tx_ctx_id)
		return -EINVAL;

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
          int _len_vf0 = 1;
          struct qlcnic_vf_info * vf = (struct qlcnic_vf_info *) malloc(_len_vf0*sizeof(struct qlcnic_vf_info));
          for(int _i0 = 0; _i0 < _len_vf0; _i0++) {
            vf[_i0].tx_ctx_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 1;
          struct qlcnic_cmd_args * cmd = (struct qlcnic_cmd_args *) malloc(_len_cmd0*sizeof(struct qlcnic_cmd_args));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__req_arg0 = 1;
          cmd[_i0].req.arg = (int *) malloc(_len_cmd__i0__req_arg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__req_arg0; _j0++) {
            cmd[_i0].req.arg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qlcnic_sriov_validate_del_tx_ctx(vf,cmd);
          printf("%d\n", benchRet); 
          free(vf);
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vf0 = 65025;
          struct qlcnic_vf_info * vf = (struct qlcnic_vf_info *) malloc(_len_vf0*sizeof(struct qlcnic_vf_info));
          for(int _i0 = 0; _i0 < _len_vf0; _i0++) {
            vf[_i0].tx_ctx_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 65025;
          struct qlcnic_cmd_args * cmd = (struct qlcnic_cmd_args *) malloc(_len_cmd0*sizeof(struct qlcnic_cmd_args));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__req_arg0 = 1;
          cmd[_i0].req.arg = (int *) malloc(_len_cmd__i0__req_arg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__req_arg0; _j0++) {
            cmd[_i0].req.arg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qlcnic_sriov_validate_del_tx_ctx(vf,cmd);
          printf("%d\n", benchRet); 
          free(vf);
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vf0 = 100;
          struct qlcnic_vf_info * vf = (struct qlcnic_vf_info *) malloc(_len_vf0*sizeof(struct qlcnic_vf_info));
          for(int _i0 = 0; _i0 < _len_vf0; _i0++) {
            vf[_i0].tx_ctx_id = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd0 = 100;
          struct qlcnic_cmd_args * cmd = (struct qlcnic_cmd_args *) malloc(_len_cmd0*sizeof(struct qlcnic_cmd_args));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__req_arg0 = 1;
          cmd[_i0].req.arg = (int *) malloc(_len_cmd__i0__req_arg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__req_arg0; _j0++) {
            cmd[_i0].req.arg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qlcnic_sriov_validate_del_tx_ctx(vf,cmd);
          printf("%d\n", benchRet); 
          free(vf);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
