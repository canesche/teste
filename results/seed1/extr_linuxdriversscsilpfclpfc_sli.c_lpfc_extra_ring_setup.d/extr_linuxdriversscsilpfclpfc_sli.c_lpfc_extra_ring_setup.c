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
struct TYPE_4__ {int /*<<< orphan*/  numRiocb; int /*<<< orphan*/  numCiocb; } ;
struct TYPE_5__ {TYPE_1__ sli3; } ;
struct lpfc_sli_ring {int iotag_max; int num_mask; TYPE_3__* prt; TYPE_2__ sli; } ;
struct lpfc_sli {struct lpfc_sli_ring* sli3_ring; } ;
struct lpfc_hba {int /*<<< orphan*/  cfg_multi_ring_type; int /*<<< orphan*/  cfg_multi_ring_rctl; struct lpfc_sli sli; } ;
struct TYPE_6__ {int /*<<< orphan*/ * lpfc_sli_rcv_unsol_event; int /*<<< orphan*/  type; int /*<<< orphan*/  rctl; scalar_t__ profile; } ;

/* Variables and functions */
 size_t LPFC_EXTRA_RING ; 
 size_t LPFC_FCP_RING ; 
 scalar_t__ SLI2_IOCB_CMD_R1XTRA_ENTRIES ; 
 scalar_t__ SLI2_IOCB_CMD_R3XTRA_ENTRIES ; 
 scalar_t__ SLI2_IOCB_RSP_R1XTRA_ENTRIES ; 
 scalar_t__ SLI2_IOCB_RSP_R3XTRA_ENTRIES ; 

__attribute__((used)) static int
lpfc_extra_ring_setup( struct lpfc_hba *phba)
{
	struct lpfc_sli *psli;
	struct lpfc_sli_ring *pring;

	psli = &phba->sli;

	/* Adjust cmd/rsp ring iocb entries more evenly */

	/* Take some away from the FCP ring */
	pring = &psli->sli3_ring[LPFC_FCP_RING];
	pring->sli.sli3.numCiocb -= SLI2_IOCB_CMD_R1XTRA_ENTRIES;
	pring->sli.sli3.numRiocb -= SLI2_IOCB_RSP_R1XTRA_ENTRIES;
	pring->sli.sli3.numCiocb -= SLI2_IOCB_CMD_R3XTRA_ENTRIES;
	pring->sli.sli3.numRiocb -= SLI2_IOCB_RSP_R3XTRA_ENTRIES;

	/* and give them to the extra ring */
	pring = &psli->sli3_ring[LPFC_EXTRA_RING];

	pring->sli.sli3.numCiocb += SLI2_IOCB_CMD_R1XTRA_ENTRIES;
	pring->sli.sli3.numRiocb += SLI2_IOCB_RSP_R1XTRA_ENTRIES;
	pring->sli.sli3.numCiocb += SLI2_IOCB_CMD_R3XTRA_ENTRIES;
	pring->sli.sli3.numRiocb += SLI2_IOCB_RSP_R3XTRA_ENTRIES;

	/* Setup default profile for this ring */
	pring->iotag_max = 4096;
	pring->num_mask = 1;
	pring->prt[0].profile = 0;      /* Mask 0 */
	pring->prt[0].rctl = phba->cfg_multi_ring_rctl;
	pring->prt[0].type = phba->cfg_multi_ring_type;
	pring->prt[0].lpfc_sli_rcv_unsol_event = NULL;
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
          int _len_phba0 = 1;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].cfg_multi_ring_type = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].cfg_multi_ring_rctl = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phba__i0__sli_sli3_ring0 = 1;
          phba[_i0].sli.sli3_ring = (struct lpfc_sli_ring *) malloc(_len_phba__i0__sli_sli3_ring0*sizeof(struct lpfc_sli_ring));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli_sli3_ring0; _j0++) {
            phba[_i0].sli.sli3_ring->iotag_max = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli.sli3_ring->num_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phba__i0__sli_sli3_ring_prt0 = 1;
          phba[_i0].sli.sli3_ring->prt = (struct TYPE_6__ *) malloc(_len_phba__i0__sli_sli3_ring_prt0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli_sli3_ring_prt0; _j0++) {
              int _len_phba__i0__sli_sli3_ring_prt_lpfc_sli_rcv_unsol_event0 = 1;
          phba[_i0].sli.sli3_ring->prt->lpfc_sli_rcv_unsol_event = (int *) malloc(_len_phba__i0__sli_sli3_ring_prt_lpfc_sli_rcv_unsol_event0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli_sli3_ring_prt_lpfc_sli_rcv_unsol_event0; _j0++) {
            phba[_i0].sli.sli3_ring->prt->lpfc_sli_rcv_unsol_event[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phba[_i0].sli.sli3_ring->prt->type = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli.sli3_ring->prt->rctl = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli.sli3_ring->prt->profile = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phba[_i0].sli.sli3_ring->sli.sli3.numRiocb = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli.sli3_ring->sli.sli3.numCiocb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lpfc_extra_ring_setup(phba);
          printf("%d\n", benchRet); 
          free(phba);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_phba0 = 65025;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].cfg_multi_ring_type = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].cfg_multi_ring_rctl = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phba__i0__sli_sli3_ring0 = 1;
          phba[_i0].sli.sli3_ring = (struct lpfc_sli_ring *) malloc(_len_phba__i0__sli_sli3_ring0*sizeof(struct lpfc_sli_ring));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli_sli3_ring0; _j0++) {
            phba[_i0].sli.sli3_ring->iotag_max = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli.sli3_ring->num_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phba__i0__sli_sli3_ring_prt0 = 1;
          phba[_i0].sli.sli3_ring->prt = (struct TYPE_6__ *) malloc(_len_phba__i0__sli_sli3_ring_prt0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli_sli3_ring_prt0; _j0++) {
              int _len_phba__i0__sli_sli3_ring_prt_lpfc_sli_rcv_unsol_event0 = 1;
          phba[_i0].sli.sli3_ring->prt->lpfc_sli_rcv_unsol_event = (int *) malloc(_len_phba__i0__sli_sli3_ring_prt_lpfc_sli_rcv_unsol_event0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli_sli3_ring_prt_lpfc_sli_rcv_unsol_event0; _j0++) {
            phba[_i0].sli.sli3_ring->prt->lpfc_sli_rcv_unsol_event[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phba[_i0].sli.sli3_ring->prt->type = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli.sli3_ring->prt->rctl = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli.sli3_ring->prt->profile = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phba[_i0].sli.sli3_ring->sli.sli3.numRiocb = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli.sli3_ring->sli.sli3.numCiocb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lpfc_extra_ring_setup(phba);
          printf("%d\n", benchRet); 
          free(phba);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_phba0 = 100;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].cfg_multi_ring_type = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].cfg_multi_ring_rctl = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phba__i0__sli_sli3_ring0 = 1;
          phba[_i0].sli.sli3_ring = (struct lpfc_sli_ring *) malloc(_len_phba__i0__sli_sli3_ring0*sizeof(struct lpfc_sli_ring));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli_sli3_ring0; _j0++) {
            phba[_i0].sli.sli3_ring->iotag_max = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli.sli3_ring->num_mask = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phba__i0__sli_sli3_ring_prt0 = 1;
          phba[_i0].sli.sli3_ring->prt = (struct TYPE_6__ *) malloc(_len_phba__i0__sli_sli3_ring_prt0*sizeof(struct TYPE_6__));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli_sli3_ring_prt0; _j0++) {
              int _len_phba__i0__sli_sli3_ring_prt_lpfc_sli_rcv_unsol_event0 = 1;
          phba[_i0].sli.sli3_ring->prt->lpfc_sli_rcv_unsol_event = (int *) malloc(_len_phba__i0__sli_sli3_ring_prt_lpfc_sli_rcv_unsol_event0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli_sli3_ring_prt_lpfc_sli_rcv_unsol_event0; _j0++) {
            phba[_i0].sli.sli3_ring->prt->lpfc_sli_rcv_unsol_event[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phba[_i0].sli.sli3_ring->prt->type = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli.sli3_ring->prt->rctl = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli.sli3_ring->prt->profile = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phba[_i0].sli.sli3_ring->sli.sli3.numRiocb = ((-2 * (next_i()%2)) + 1) * next_i();
        phba[_i0].sli.sli3_ring->sli.sli3.numCiocb = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lpfc_extra_ring_setup(phba);
          printf("%d\n", benchRet); 
          free(phba);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
