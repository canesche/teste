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
struct lpfc_sli_ring {int dummy; } ;
struct TYPE_6__ {struct lpfc_sli_ring* sli3_ring; } ;
struct TYPE_5__ {TYPE_1__* els_wq; } ;
struct lpfc_hba {scalar_t__ sli_rev; TYPE_3__ sli; TYPE_2__ sli4_hba; } ;
struct TYPE_4__ {struct lpfc_sli_ring* pring; } ;

/* Variables and functions */
 size_t LPFC_ELS_RING ; 
 scalar_t__ LPFC_SLI_REV4 ; 

__attribute__((used)) static inline struct lpfc_sli_ring *
lpfc_phba_elsring(struct lpfc_hba *phba)
{
	if (phba->sli_rev == LPFC_SLI_REV4) {
		if (phba->sli4_hba.els_wq)
			return phba->sli4_hba.els_wq->pring;
		else
			return NULL;
	}
	return &phba->sli.sli3_ring[LPFC_ELS_RING];
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
            phba[_i0].sli_rev = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phba__i0__sli_sli3_ring0 = 1;
          phba[_i0].sli.sli3_ring = (struct lpfc_sli_ring *) malloc(_len_phba__i0__sli_sli3_ring0*sizeof(struct lpfc_sli_ring));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli_sli3_ring0; _j0++) {
            phba[_i0].sli.sli3_ring->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phba__i0__sli4_hba_els_wq0 = 1;
          phba[_i0].sli4_hba.els_wq = (struct TYPE_4__ *) malloc(_len_phba__i0__sli4_hba_els_wq0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli4_hba_els_wq0; _j0++) {
              int _len_phba__i0__sli4_hba_els_wq_pring0 = 1;
          phba[_i0].sli4_hba.els_wq->pring = (struct lpfc_sli_ring *) malloc(_len_phba__i0__sli4_hba_els_wq_pring0*sizeof(struct lpfc_sli_ring));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli4_hba_els_wq_pring0; _j0++) {
            phba[_i0].sli4_hba.els_wq->pring->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct lpfc_sli_ring * benchRet = lpfc_phba_elsring(phba);
          printf("%d\n", (*benchRet).dummy);
          free(phba);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_phba0 = 65025;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].sli_rev = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phba__i0__sli_sli3_ring0 = 1;
          phba[_i0].sli.sli3_ring = (struct lpfc_sli_ring *) malloc(_len_phba__i0__sli_sli3_ring0*sizeof(struct lpfc_sli_ring));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli_sli3_ring0; _j0++) {
            phba[_i0].sli.sli3_ring->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phba__i0__sli4_hba_els_wq0 = 1;
          phba[_i0].sli4_hba.els_wq = (struct TYPE_4__ *) malloc(_len_phba__i0__sli4_hba_els_wq0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli4_hba_els_wq0; _j0++) {
              int _len_phba__i0__sli4_hba_els_wq_pring0 = 1;
          phba[_i0].sli4_hba.els_wq->pring = (struct lpfc_sli_ring *) malloc(_len_phba__i0__sli4_hba_els_wq_pring0*sizeof(struct lpfc_sli_ring));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli4_hba_els_wq_pring0; _j0++) {
            phba[_i0].sli4_hba.els_wq->pring->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct lpfc_sli_ring * benchRet = lpfc_phba_elsring(phba);
          printf("%d\n", (*benchRet).dummy);
          free(phba);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_phba0 = 100;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].sli_rev = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phba__i0__sli_sli3_ring0 = 1;
          phba[_i0].sli.sli3_ring = (struct lpfc_sli_ring *) malloc(_len_phba__i0__sli_sli3_ring0*sizeof(struct lpfc_sli_ring));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli_sli3_ring0; _j0++) {
            phba[_i0].sli.sli3_ring->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phba__i0__sli4_hba_els_wq0 = 1;
          phba[_i0].sli4_hba.els_wq = (struct TYPE_4__ *) malloc(_len_phba__i0__sli4_hba_els_wq0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli4_hba_els_wq0; _j0++) {
              int _len_phba__i0__sli4_hba_els_wq_pring0 = 1;
          phba[_i0].sli4_hba.els_wq->pring = (struct lpfc_sli_ring *) malloc(_len_phba__i0__sli4_hba_els_wq_pring0*sizeof(struct lpfc_sli_ring));
          for(int _j0 = 0; _j0 < _len_phba__i0__sli4_hba_els_wq_pring0; _j0++) {
            phba[_i0].sli4_hba.els_wq->pring->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct lpfc_sli_ring * benchRet = lpfc_phba_elsring(phba);
          printf("%d\n", (*benchRet).dummy);
          free(phba);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
