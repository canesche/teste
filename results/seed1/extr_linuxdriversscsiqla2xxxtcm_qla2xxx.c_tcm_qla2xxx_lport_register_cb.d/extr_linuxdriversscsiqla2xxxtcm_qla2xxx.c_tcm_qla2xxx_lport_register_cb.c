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
typedef  int /*<<< orphan*/  u64 ;
struct tcm_qla2xxx_lport {struct scsi_qla_host* qla_vha; } ;
struct TYPE_4__ {void* target_lport_ptr; } ;
struct scsi_qla_host {TYPE_2__ vha_tgt; struct qla_hw_data* hw; } ;
struct TYPE_3__ {int /*<<< orphan*/ * tgt_ops; } ;
struct qla_hw_data {TYPE_1__ tgt; } ;

/* Variables and functions */
 int /*<<< orphan*/  tcm_qla2xxx_template ; 

__attribute__((used)) static int tcm_qla2xxx_lport_register_cb(struct scsi_qla_host *vha,
					 void *target_lport_ptr,
					 u64 npiv_wwpn, u64 npiv_wwnn)
{
	struct qla_hw_data *ha = vha->hw;
	struct tcm_qla2xxx_lport *lport =
			(struct tcm_qla2xxx_lport *)target_lport_ptr;
	/*
	 * Setup tgt_ops, local pointer to vha and target_lport_ptr
	 */
	ha->tgt.tgt_ops = &tcm_qla2xxx_template;
	vha->vha_tgt.target_lport_ptr = target_lport_ptr;
	lport->qla_vha = vha;

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
          int npiv_wwpn = 100;
          int npiv_wwnn = 100;
          int _len_vha0 = 1;
          struct scsi_qla_host * vha = (struct scsi_qla_host *) malloc(_len_vha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_vha0; _i0++) {
              int _len_vha__i0__hw0 = 1;
          vha[_i0].hw = (struct qla_hw_data *) malloc(_len_vha__i0__hw0*sizeof(struct qla_hw_data));
          for(int _j0 = 0; _j0 < _len_vha__i0__hw0; _j0++) {
              int _len_vha__i0__hw_tgt_tgt_ops0 = 1;
          vha[_i0].hw->tgt.tgt_ops = (int *) malloc(_len_vha__i0__hw_tgt_tgt_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vha__i0__hw_tgt_tgt_ops0; _j0++) {
            vha[_i0].hw->tgt.tgt_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * target_lport_ptr;
          int benchRet = tcm_qla2xxx_lport_register_cb(vha,target_lport_ptr,npiv_wwpn,npiv_wwnn);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vha0; _aux++) {
          free(vha[_aux].hw);
          }
          free(vha);
        
        break;
    }
    // big-arr
    case 1:
    {
          int npiv_wwpn = 255;
          int npiv_wwnn = 255;
          int _len_vha0 = 65025;
          struct scsi_qla_host * vha = (struct scsi_qla_host *) malloc(_len_vha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_vha0; _i0++) {
              int _len_vha__i0__hw0 = 1;
          vha[_i0].hw = (struct qla_hw_data *) malloc(_len_vha__i0__hw0*sizeof(struct qla_hw_data));
          for(int _j0 = 0; _j0 < _len_vha__i0__hw0; _j0++) {
              int _len_vha__i0__hw_tgt_tgt_ops0 = 1;
          vha[_i0].hw->tgt.tgt_ops = (int *) malloc(_len_vha__i0__hw_tgt_tgt_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vha__i0__hw_tgt_tgt_ops0; _j0++) {
            vha[_i0].hw->tgt.tgt_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * target_lport_ptr;
          int benchRet = tcm_qla2xxx_lport_register_cb(vha,target_lport_ptr,npiv_wwpn,npiv_wwnn);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vha0; _aux++) {
          free(vha[_aux].hw);
          }
          free(vha);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int npiv_wwpn = 10;
          int npiv_wwnn = 10;
          int _len_vha0 = 100;
          struct scsi_qla_host * vha = (struct scsi_qla_host *) malloc(_len_vha0*sizeof(struct scsi_qla_host));
          for(int _i0 = 0; _i0 < _len_vha0; _i0++) {
              int _len_vha__i0__hw0 = 1;
          vha[_i0].hw = (struct qla_hw_data *) malloc(_len_vha__i0__hw0*sizeof(struct qla_hw_data));
          for(int _j0 = 0; _j0 < _len_vha__i0__hw0; _j0++) {
              int _len_vha__i0__hw_tgt_tgt_ops0 = 1;
          vha[_i0].hw->tgt.tgt_ops = (int *) malloc(_len_vha__i0__hw_tgt_tgt_ops0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vha__i0__hw_tgt_tgt_ops0; _j0++) {
            vha[_i0].hw->tgt.tgt_ops[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          void * target_lport_ptr;
          int benchRet = tcm_qla2xxx_lport_register_cb(vha,target_lport_ptr,npiv_wwpn,npiv_wwnn);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_vha0; _aux++) {
          free(vha[_aux].hw);
          }
          free(vha);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
