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
struct TYPE_3__ {int cmdidx; scalar_t__ cmdringaddr; } ;
struct TYPE_4__ {TYPE_1__ sli3; } ;
struct lpfc_sli_ring {TYPE_2__ sli; } ;
struct lpfc_hba {int iocb_cmd_size; } ;
typedef  int /*<<< orphan*/  IOCB_t ;

/* Variables and functions */

__attribute__((used)) static inline IOCB_t *
lpfc_cmd_iocb(struct lpfc_hba *phba, struct lpfc_sli_ring *pring)
{
	return (IOCB_t *) (((char *) pring->sli.sli3.cmdringaddr) +
			   pring->sli.sli3.cmdidx * phba->iocb_cmd_size);
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
            phba[_i0].iocb_cmd_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pring0 = 1;
          struct lpfc_sli_ring * pring = (struct lpfc_sli_ring *) malloc(_len_pring0*sizeof(struct lpfc_sli_ring));
          for(int _i0 = 0; _i0 < _len_pring0; _i0++) {
            pring[_i0].sli.sli3.cmdidx = ((-2 * (next_i()%2)) + 1) * next_i();
        pring[_i0].sli.sli3.cmdringaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = lpfc_cmd_iocb(phba,pring);
          printf("%d\n", (*benchRet)); 
          free(phba);
          free(pring);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_phba0 = 65025;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].iocb_cmd_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pring0 = 65025;
          struct lpfc_sli_ring * pring = (struct lpfc_sli_ring *) malloc(_len_pring0*sizeof(struct lpfc_sli_ring));
          for(int _i0 = 0; _i0 < _len_pring0; _i0++) {
            pring[_i0].sli.sli3.cmdidx = ((-2 * (next_i()%2)) + 1) * next_i();
        pring[_i0].sli.sli3.cmdringaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = lpfc_cmd_iocb(phba,pring);
          printf("%d\n", (*benchRet)); 
          free(phba);
          free(pring);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_phba0 = 100;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].iocb_cmd_size = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pring0 = 100;
          struct lpfc_sli_ring * pring = (struct lpfc_sli_ring *) malloc(_len_pring0*sizeof(struct lpfc_sli_ring));
          for(int _i0 = 0; _i0 < _len_pring0; _i0++) {
            pring[_i0].sli.sli3.cmdidx = ((-2 * (next_i()%2)) + 1) * next_i();
        pring[_i0].sli.sli3.cmdringaddr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int * benchRet = lpfc_cmd_iocb(phba,pring);
          printf("%d\n", (*benchRet)); 
          free(phba);
          free(pring);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
