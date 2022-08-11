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
typedef  int u8 ;
struct qlcnic_vf_info {TYPE_2__* vp; } ;
struct TYPE_6__ {int* arg; } ;
struct TYPE_4__ {int* arg; } ;
struct qlcnic_cmd_args {TYPE_3__ rsp; TYPE_1__ req; } ;
struct qlcnic_bc_trans {struct qlcnic_vf_info* vf; } ;
struct TYPE_5__ {int* mac; } ;

/* Variables and functions */
#define  QLCNIC_GET_CURRENT_MAC 130 
#define  QLCNIC_SET_FAC_DEF_MAC 129 
#define  QLCNIC_SET_STATION_MAC 128 

__attribute__((used)) static int qlcnic_sriov_pf_mac_address_cmd(struct qlcnic_bc_trans *trans,
					   struct qlcnic_cmd_args *cmd)
{
	struct qlcnic_vf_info *vf = trans->vf;
	u8 type, *mac;

	type = cmd->req.arg[1];
	switch (type) {
	case QLCNIC_SET_STATION_MAC:
	case QLCNIC_SET_FAC_DEF_MAC:
		cmd->rsp.arg[0] = (2 << 25);
		break;
	case QLCNIC_GET_CURRENT_MAC:
		cmd->rsp.arg[0] = (1 << 25);
		mac = vf->vp->mac;
		cmd->rsp.arg[2] = mac[1] | ((mac[0] << 8) & 0xff00);
		cmd->rsp.arg[1] = mac[5] | ((mac[4] << 8) & 0xff00) |
				  ((mac[3]) << 16 & 0xff0000) |
				  ((mac[2]) << 24 & 0xff000000);
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
          int _len_trans0 = 1;
          struct qlcnic_bc_trans * trans = (struct qlcnic_bc_trans *) malloc(_len_trans0*sizeof(struct qlcnic_bc_trans));
          for(int _i0 = 0; _i0 < _len_trans0; _i0++) {
              int _len_trans__i0__vf0 = 1;
          trans[_i0].vf = (struct qlcnic_vf_info *) malloc(_len_trans__i0__vf0*sizeof(struct qlcnic_vf_info));
          for(int _j0 = 0; _j0 < _len_trans__i0__vf0; _j0++) {
              int _len_trans__i0__vf_vp0 = 1;
          trans[_i0].vf->vp = (struct TYPE_5__ *) malloc(_len_trans__i0__vf_vp0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_trans__i0__vf_vp0; _j0++) {
              int _len_trans__i0__vf_vp_mac0 = 1;
          trans[_i0].vf->vp->mac = (int *) malloc(_len_trans__i0__vf_vp_mac0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_trans__i0__vf_vp_mac0; _j0++) {
            trans[_i0].vf->vp->mac[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_cmd0 = 1;
          struct qlcnic_cmd_args * cmd = (struct qlcnic_cmd_args *) malloc(_len_cmd0*sizeof(struct qlcnic_cmd_args));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__rsp_arg0 = 1;
          cmd[_i0].rsp.arg = (int *) malloc(_len_cmd__i0__rsp_arg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__rsp_arg0; _j0++) {
            cmd[_i0].rsp.arg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd__i0__req_arg0 = 1;
          cmd[_i0].req.arg = (int *) malloc(_len_cmd__i0__req_arg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__req_arg0; _j0++) {
            cmd[_i0].req.arg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qlcnic_sriov_pf_mac_address_cmd(trans,cmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_trans0; _aux++) {
          free(trans[_aux].vf);
          }
          free(trans);
          free(cmd);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_trans0 = 65025;
          struct qlcnic_bc_trans * trans = (struct qlcnic_bc_trans *) malloc(_len_trans0*sizeof(struct qlcnic_bc_trans));
          for(int _i0 = 0; _i0 < _len_trans0; _i0++) {
              int _len_trans__i0__vf0 = 1;
          trans[_i0].vf = (struct qlcnic_vf_info *) malloc(_len_trans__i0__vf0*sizeof(struct qlcnic_vf_info));
          for(int _j0 = 0; _j0 < _len_trans__i0__vf0; _j0++) {
              int _len_trans__i0__vf_vp0 = 1;
          trans[_i0].vf->vp = (struct TYPE_5__ *) malloc(_len_trans__i0__vf_vp0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_trans__i0__vf_vp0; _j0++) {
              int _len_trans__i0__vf_vp_mac0 = 1;
          trans[_i0].vf->vp->mac = (int *) malloc(_len_trans__i0__vf_vp_mac0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_trans__i0__vf_vp_mac0; _j0++) {
            trans[_i0].vf->vp->mac[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_cmd0 = 65025;
          struct qlcnic_cmd_args * cmd = (struct qlcnic_cmd_args *) malloc(_len_cmd0*sizeof(struct qlcnic_cmd_args));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__rsp_arg0 = 1;
          cmd[_i0].rsp.arg = (int *) malloc(_len_cmd__i0__rsp_arg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__rsp_arg0; _j0++) {
            cmd[_i0].rsp.arg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd__i0__req_arg0 = 1;
          cmd[_i0].req.arg = (int *) malloc(_len_cmd__i0__req_arg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__req_arg0; _j0++) {
            cmd[_i0].req.arg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qlcnic_sriov_pf_mac_address_cmd(trans,cmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_trans0; _aux++) {
          free(trans[_aux].vf);
          }
          free(trans);
          free(cmd);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_trans0 = 100;
          struct qlcnic_bc_trans * trans = (struct qlcnic_bc_trans *) malloc(_len_trans0*sizeof(struct qlcnic_bc_trans));
          for(int _i0 = 0; _i0 < _len_trans0; _i0++) {
              int _len_trans__i0__vf0 = 1;
          trans[_i0].vf = (struct qlcnic_vf_info *) malloc(_len_trans__i0__vf0*sizeof(struct qlcnic_vf_info));
          for(int _j0 = 0; _j0 < _len_trans__i0__vf0; _j0++) {
              int _len_trans__i0__vf_vp0 = 1;
          trans[_i0].vf->vp = (struct TYPE_5__ *) malloc(_len_trans__i0__vf_vp0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_trans__i0__vf_vp0; _j0++) {
              int _len_trans__i0__vf_vp_mac0 = 1;
          trans[_i0].vf->vp->mac = (int *) malloc(_len_trans__i0__vf_vp_mac0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_trans__i0__vf_vp_mac0; _j0++) {
            trans[_i0].vf->vp->mac[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          int _len_cmd0 = 100;
          struct qlcnic_cmd_args * cmd = (struct qlcnic_cmd_args *) malloc(_len_cmd0*sizeof(struct qlcnic_cmd_args));
          for(int _i0 = 0; _i0 < _len_cmd0; _i0++) {
              int _len_cmd__i0__rsp_arg0 = 1;
          cmd[_i0].rsp.arg = (int *) malloc(_len_cmd__i0__rsp_arg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__rsp_arg0; _j0++) {
            cmd[_i0].rsp.arg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_cmd__i0__req_arg0 = 1;
          cmd[_i0].req.arg = (int *) malloc(_len_cmd__i0__req_arg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_cmd__i0__req_arg0; _j0++) {
            cmd[_i0].req.arg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = qlcnic_sriov_pf_mac_address_cmd(trans,cmd);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_trans0; _aux++) {
          free(trans[_aux].vf);
          }
          free(trans);
          free(cmd);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
