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
typedef  size_t u8 ;
struct TYPE_3__ {struct init_qm_port_params* qm_port_params; } ;
struct qed_hwfn {TYPE_1__ qm_info; TYPE_2__* cdev; } ;
struct init_qm_port_params {int active; size_t active_phys_tcs; size_t num_pbf_cmd_lines; size_t num_btb_blocks; } ;
struct TYPE_4__ {size_t num_ports_in_engine; } ;

/* Variables and functions */
 size_t ACTIVE_TCS_BMAP ; 
 size_t ACTIVE_TCS_BMAP_4PORT_K2 ; 
 size_t BTB_MAX_BLOCKS ; 
 size_t MAX_NUM_PORTS_K2 ; 
 size_t PBF_MAX_CMD_LINES ; 

__attribute__((used)) static void qed_init_qm_port_params(struct qed_hwfn *p_hwfn)
{
	/* Initialize qm port parameters */
	u8 i, active_phys_tcs, num_ports = p_hwfn->cdev->num_ports_in_engine;

	/* indicate how ooo and high pri traffic is dealt with */
	active_phys_tcs = num_ports == MAX_NUM_PORTS_K2 ?
			  ACTIVE_TCS_BMAP_4PORT_K2 :
			  ACTIVE_TCS_BMAP;

	for (i = 0; i < num_ports; i++) {
		struct init_qm_port_params *p_qm_port =
		    &p_hwfn->qm_info.qm_port_params[i];

		p_qm_port->active = 1;
		p_qm_port->active_phys_tcs = active_phys_tcs;
		p_qm_port->num_pbf_cmd_lines = PBF_MAX_CMD_LINES / num_ports;
		p_qm_port->num_btb_blocks = BTB_MAX_BLOCKS / num_ports;
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
          int _len_p_hwfn0 = 1;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__qm_info_qm_port_params0 = 1;
          p_hwfn[_i0].qm_info.qm_port_params = (struct init_qm_port_params *) malloc(_len_p_hwfn__i0__qm_info_qm_port_params0*sizeof(struct init_qm_port_params));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__qm_info_qm_port_params0; _j0++) {
            p_hwfn[_i0].qm_info.qm_port_params->active = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].qm_info.qm_port_params->active_phys_tcs = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].qm_info.qm_port_params->num_pbf_cmd_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].qm_info.qm_port_params->num_btb_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_hwfn__i0__cdev0 = 1;
          p_hwfn[_i0].cdev = (struct TYPE_4__ *) malloc(_len_p_hwfn__i0__cdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__cdev0; _j0++) {
            p_hwfn[_i0].cdev->num_ports_in_engine = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qed_init_qm_port_params(p_hwfn);
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].cdev);
          }
          free(p_hwfn);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_p_hwfn0 = 65025;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__qm_info_qm_port_params0 = 1;
          p_hwfn[_i0].qm_info.qm_port_params = (struct init_qm_port_params *) malloc(_len_p_hwfn__i0__qm_info_qm_port_params0*sizeof(struct init_qm_port_params));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__qm_info_qm_port_params0; _j0++) {
            p_hwfn[_i0].qm_info.qm_port_params->active = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].qm_info.qm_port_params->active_phys_tcs = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].qm_info.qm_port_params->num_pbf_cmd_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].qm_info.qm_port_params->num_btb_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_hwfn__i0__cdev0 = 1;
          p_hwfn[_i0].cdev = (struct TYPE_4__ *) malloc(_len_p_hwfn__i0__cdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__cdev0; _j0++) {
            p_hwfn[_i0].cdev->num_ports_in_engine = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qed_init_qm_port_params(p_hwfn);
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].cdev);
          }
          free(p_hwfn);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_p_hwfn0 = 100;
          struct qed_hwfn * p_hwfn = (struct qed_hwfn *) malloc(_len_p_hwfn0*sizeof(struct qed_hwfn));
          for(int _i0 = 0; _i0 < _len_p_hwfn0; _i0++) {
              int _len_p_hwfn__i0__qm_info_qm_port_params0 = 1;
          p_hwfn[_i0].qm_info.qm_port_params = (struct init_qm_port_params *) malloc(_len_p_hwfn__i0__qm_info_qm_port_params0*sizeof(struct init_qm_port_params));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__qm_info_qm_port_params0; _j0++) {
            p_hwfn[_i0].qm_info.qm_port_params->active = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].qm_info.qm_port_params->active_phys_tcs = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].qm_info.qm_port_params->num_pbf_cmd_lines = ((-2 * (next_i()%2)) + 1) * next_i();
        p_hwfn[_i0].qm_info.qm_port_params->num_btb_blocks = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_p_hwfn__i0__cdev0 = 1;
          p_hwfn[_i0].cdev = (struct TYPE_4__ *) malloc(_len_p_hwfn__i0__cdev0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_p_hwfn__i0__cdev0; _j0++) {
            p_hwfn[_i0].cdev->num_ports_in_engine = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          qed_init_qm_port_params(p_hwfn);
          for(int _aux = 0; _aux < _len_p_hwfn0; _aux++) {
          free(p_hwfn[_aux].cdev);
          }
          free(p_hwfn);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
