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

/* Type definitions */
struct lpfc_vport {int dummy; } ;

/* Variables and functions */

inline void
lpfc_debugfs_terminate(struct lpfc_vport *vport)
{
#ifdef CONFIG_SCSI_LPFC_DEBUG_FS
	struct lpfc_hba   *phba = vport->phba;

	kfree(vport->disc_trc);
	vport->disc_trc = NULL;

	debugfs_remove(vport->debug_disc_trc); /* discovery_trace */
	vport->debug_disc_trc = NULL;

	debugfs_remove(vport->debug_nodelist); /* nodelist */
	vport->debug_nodelist = NULL;

	debugfs_remove(vport->debug_nvmestat); /* nvmestat */
	vport->debug_nvmestat = NULL;

	debugfs_remove(vport->debug_nvmektime); /* nvmektime */
	vport->debug_nvmektime = NULL;

	debugfs_remove(vport->debug_cpucheck); /* cpucheck */
	vport->debug_cpucheck = NULL;

	if (vport->vport_debugfs_root) {
		debugfs_remove(vport->vport_debugfs_root); /* vportX */
		vport->vport_debugfs_root = NULL;
		atomic_dec(&phba->debugfs_vport_count);
	}

	if (atomic_read(&phba->debugfs_vport_count) == 0) {

		debugfs_remove(phba->debug_hbqinfo); /* hbqinfo */
		phba->debug_hbqinfo = NULL;

		debugfs_remove(phba->debug_dumpHBASlim); /* HBASlim */
		phba->debug_dumpHBASlim = NULL;

		debugfs_remove(phba->debug_dumpHostSlim); /* HostSlim */
		phba->debug_dumpHostSlim = NULL;

		debugfs_remove(phba->debug_dumpData); /* dumpData */
		phba->debug_dumpData = NULL;

		debugfs_remove(phba->debug_dumpDif); /* dumpDif */
		phba->debug_dumpDif = NULL;

		debugfs_remove(phba->debug_InjErrLBA); /* InjErrLBA */
		phba->debug_InjErrLBA = NULL;

		debugfs_remove(phba->debug_InjErrNPortID);
		phba->debug_InjErrNPortID = NULL;

		debugfs_remove(phba->debug_InjErrWWPN); /* InjErrWWPN */
		phba->debug_InjErrWWPN = NULL;

		debugfs_remove(phba->debug_writeGuard); /* writeGuard */
		phba->debug_writeGuard = NULL;

		debugfs_remove(phba->debug_writeApp); /* writeApp */
		phba->debug_writeApp = NULL;

		debugfs_remove(phba->debug_writeRef); /* writeRef */
		phba->debug_writeRef = NULL;

		debugfs_remove(phba->debug_readGuard); /* readGuard */
		phba->debug_readGuard = NULL;

		debugfs_remove(phba->debug_readApp); /* readApp */
		phba->debug_readApp = NULL;

		debugfs_remove(phba->debug_readRef); /* readRef */
		phba->debug_readRef = NULL;

		kfree(phba->slow_ring_trc);
		phba->slow_ring_trc = NULL;

		/* slow_ring_trace */
		debugfs_remove(phba->debug_slow_ring_trc);
		phba->debug_slow_ring_trc = NULL;

		debugfs_remove(phba->debug_nvmeio_trc);
		phba->debug_nvmeio_trc = NULL;

		kfree(phba->nvmeio_trc);
		phba->nvmeio_trc = NULL;

		/*
		 * iDiag release
		 */
		if (phba->sli_rev == LPFC_SLI_REV4) {
			/* iDiag extAcc */
			debugfs_remove(phba->idiag_ext_acc);
			phba->idiag_ext_acc = NULL;

			/* iDiag mbxAcc */
			debugfs_remove(phba->idiag_mbx_acc);
			phba->idiag_mbx_acc = NULL;

			/* iDiag ctlAcc */
			debugfs_remove(phba->idiag_ctl_acc);
			phba->idiag_ctl_acc = NULL;

			/* iDiag drbAcc */
			debugfs_remove(phba->idiag_drb_acc);
			phba->idiag_drb_acc = NULL;

			/* iDiag queAcc */
			debugfs_remove(phba->idiag_que_acc);
			phba->idiag_que_acc = NULL;

			/* iDiag queInfo */
			debugfs_remove(phba->idiag_que_info);
			phba->idiag_que_info = NULL;

			/* iDiag barAcc */
			debugfs_remove(phba->idiag_bar_acc);
			phba->idiag_bar_acc = NULL;

			/* iDiag pciCfg */
			debugfs_remove(phba->idiag_pci_cfg);
			phba->idiag_pci_cfg = NULL;

			/* Finally remove the iDiag debugfs root */
			debugfs_remove(phba->idiag_root);
			phba->idiag_root = NULL;
		}

		if (phba->hba_debugfs_root) {
			debugfs_remove(phba->hba_debugfs_root); /* fnX */
			phba->hba_debugfs_root = NULL;
			atomic_dec(&lpfc_debugfs_hba_count);
		}

		if (atomic_read(&lpfc_debugfs_hba_count) == 0) {
			debugfs_remove(lpfc_debugfs_root); /* lpfc */
			lpfc_debugfs_root = NULL;
		}
	}
#endif
	return;
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
          int _len_vport0 = 1;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
            vport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpfc_debugfs_terminate(vport);
          free(vport);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vport0 = 65025;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
            vport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpfc_debugfs_terminate(vport);
          free(vport);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vport0 = 100;
          struct lpfc_vport * vport = (struct lpfc_vport *) malloc(_len_vport0*sizeof(struct lpfc_vport));
          for(int _i0 = 0; _i0 < _len_vport0; _i0++) {
            vport[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          lpfc_debugfs_terminate(vport);
          free(vport);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
