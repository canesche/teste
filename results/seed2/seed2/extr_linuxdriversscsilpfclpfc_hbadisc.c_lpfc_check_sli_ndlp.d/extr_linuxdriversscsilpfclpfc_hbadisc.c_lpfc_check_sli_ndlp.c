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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ ushort ;
typedef  int /*<<< orphan*/  uint8_t ;
struct lpfc_vport {int dummy; } ;
struct lpfc_sli_ring {scalar_t__ ringno; } ;
struct lpfc_nodelist {int nlp_type; int nlp_flag; scalar_t__ nlp_rpi; int /*<<< orphan*/  nlp_DID; struct lpfc_vport* vport; } ;
struct TYPE_5__ {struct lpfc_nodelist* ndlp; } ;
struct TYPE_6__ {int /*<<< orphan*/  remoteID; } ;
struct TYPE_7__ {TYPE_2__ elsreq64; } ;
struct TYPE_8__ {int ulpCommand; scalar_t__ volatile ulpContext; TYPE_3__ un; } ;
struct lpfc_iocbq {int /*<<< orphan*/ * context1; TYPE_1__ context_un; struct lpfc_vport* vport; TYPE_4__ iocb; } ;
struct lpfc_hba {int dummy; } ;
typedef  TYPE_4__ IOCB_t ;

/* Variables and functions */
#define  CMD_ELS_REQUEST64_CR 130 
#define  CMD_GEN_REQUEST64_CR 129 
#define  CMD_XMIT_ELS_RSP64_CX 128 
 scalar_t__ LPFC_ELS_RING ; 
 scalar_t__ LPFC_FCP_RING ; 
 int NLP_DELAY_TMO ; 
 int NLP_FCP_TARGET ; 

int
lpfc_check_sli_ndlp(struct lpfc_hba *phba,
		    struct lpfc_sli_ring *pring,
		    struct lpfc_iocbq *iocb,
		    struct lpfc_nodelist *ndlp)
{
	IOCB_t *icmd = &iocb->iocb;
	struct lpfc_vport    *vport = ndlp->vport;

	if (iocb->vport != vport)
		return 0;

	if (pring->ringno == LPFC_ELS_RING) {
		switch (icmd->ulpCommand) {
		case CMD_GEN_REQUEST64_CR:
			if (iocb->context_un.ndlp == ndlp)
				return 1;
		case CMD_ELS_REQUEST64_CR:
			if (icmd->un.elsreq64.remoteID == ndlp->nlp_DID)
				return 1;
		case CMD_XMIT_ELS_RSP64_CX:
			if (iocb->context1 == (uint8_t *) ndlp)
				return 1;
		}
	} else if (pring->ringno == LPFC_FCP_RING) {
		/* Skip match check if waiting to relogin to FCP target */
		if ((ndlp->nlp_type & NLP_FCP_TARGET) &&
		    (ndlp->nlp_flag & NLP_DELAY_TMO)) {
			return 0;
		}
		if (icmd->ulpContext == (volatile ushort)ndlp->nlp_rpi) {
			return 1;
		}
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
          int _len_phba0 = 1;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pring0 = 1;
          struct lpfc_sli_ring * pring = (struct lpfc_sli_ring *) malloc(_len_pring0*sizeof(struct lpfc_sli_ring));
          for(int _i0 = 0; _i0 < _len_pring0; _i0++) {
            pring[_i0].ringno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iocb0 = 1;
          struct lpfc_iocbq * iocb = (struct lpfc_iocbq *) malloc(_len_iocb0*sizeof(struct lpfc_iocbq));
          for(int _i0 = 0; _i0 < _len_iocb0; _i0++) {
              int _len_iocb__i0__context10 = 1;
          iocb[_i0].context1 = (int *) malloc(_len_iocb__i0__context10*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iocb__i0__context10; _j0++) {
            iocb[_i0].context1[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iocb__i0__context_un_ndlp0 = 1;
          iocb[_i0].context_un.ndlp = (struct lpfc_nodelist *) malloc(_len_iocb__i0__context_un_ndlp0*sizeof(struct lpfc_nodelist));
          for(int _j0 = 0; _j0 < _len_iocb__i0__context_un_ndlp0; _j0++) {
            iocb[_i0].context_un.ndlp->nlp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].context_un.ndlp->nlp_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].context_un.ndlp->nlp_rpi = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].context_un.ndlp->nlp_DID = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iocb__i0__context_un_ndlp_vport0 = 1;
          iocb[_i0].context_un.ndlp->vport = (struct lpfc_vport *) malloc(_len_iocb__i0__context_un_ndlp_vport0*sizeof(struct lpfc_vport));
          for(int _j0 = 0; _j0 < _len_iocb__i0__context_un_ndlp_vport0; _j0++) {
            iocb[_i0].context_un.ndlp->vport->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iocb__i0__vport0 = 1;
          iocb[_i0].vport = (struct lpfc_vport *) malloc(_len_iocb__i0__vport0*sizeof(struct lpfc_vport));
          for(int _j0 = 0; _j0 < _len_iocb__i0__vport0; _j0++) {
            iocb[_i0].vport->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iocb[_i0].iocb.ulpCommand = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].iocb.ulpContext = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].iocb.un.elsreq64.remoteID = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ndlp0 = 1;
          struct lpfc_nodelist * ndlp = (struct lpfc_nodelist *) malloc(_len_ndlp0*sizeof(struct lpfc_nodelist));
          for(int _i0 = 0; _i0 < _len_ndlp0; _i0++) {
            ndlp[_i0].nlp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        ndlp[_i0].nlp_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        ndlp[_i0].nlp_rpi = ((-2 * (next_i()%2)) + 1) * next_i();
        ndlp[_i0].nlp_DID = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ndlp__i0__vport0 = 1;
          ndlp[_i0].vport = (struct lpfc_vport *) malloc(_len_ndlp__i0__vport0*sizeof(struct lpfc_vport));
          for(int _j0 = 0; _j0 < _len_ndlp__i0__vport0; _j0++) {
            ndlp[_i0].vport->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lpfc_check_sli_ndlp(phba,pring,iocb,ndlp);
          printf("%d\n", benchRet); 
          free(phba);
          free(pring);
          for(int _aux = 0; _aux < _len_iocb0; _aux++) {
          free(iocb[_aux].context1);
          }
          for(int _aux = 0; _aux < _len_iocb0; _aux++) {
          free(iocb[_aux].vport);
          }
          free(iocb);
          for(int _aux = 0; _aux < _len_ndlp0; _aux++) {
          free(ndlp[_aux].vport);
          }
          free(ndlp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_phba0 = 65025;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pring0 = 65025;
          struct lpfc_sli_ring * pring = (struct lpfc_sli_ring *) malloc(_len_pring0*sizeof(struct lpfc_sli_ring));
          for(int _i0 = 0; _i0 < _len_pring0; _i0++) {
            pring[_i0].ringno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iocb0 = 65025;
          struct lpfc_iocbq * iocb = (struct lpfc_iocbq *) malloc(_len_iocb0*sizeof(struct lpfc_iocbq));
          for(int _i0 = 0; _i0 < _len_iocb0; _i0++) {
              int _len_iocb__i0__context10 = 1;
          iocb[_i0].context1 = (int *) malloc(_len_iocb__i0__context10*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iocb__i0__context10; _j0++) {
            iocb[_i0].context1[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iocb__i0__context_un_ndlp0 = 1;
          iocb[_i0].context_un.ndlp = (struct lpfc_nodelist *) malloc(_len_iocb__i0__context_un_ndlp0*sizeof(struct lpfc_nodelist));
          for(int _j0 = 0; _j0 < _len_iocb__i0__context_un_ndlp0; _j0++) {
            iocb[_i0].context_un.ndlp->nlp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].context_un.ndlp->nlp_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].context_un.ndlp->nlp_rpi = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].context_un.ndlp->nlp_DID = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iocb__i0__context_un_ndlp_vport0 = 1;
          iocb[_i0].context_un.ndlp->vport = (struct lpfc_vport *) malloc(_len_iocb__i0__context_un_ndlp_vport0*sizeof(struct lpfc_vport));
          for(int _j0 = 0; _j0 < _len_iocb__i0__context_un_ndlp_vport0; _j0++) {
            iocb[_i0].context_un.ndlp->vport->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iocb__i0__vport0 = 1;
          iocb[_i0].vport = (struct lpfc_vport *) malloc(_len_iocb__i0__vport0*sizeof(struct lpfc_vport));
          for(int _j0 = 0; _j0 < _len_iocb__i0__vport0; _j0++) {
            iocb[_i0].vport->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iocb[_i0].iocb.ulpCommand = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].iocb.ulpContext = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].iocb.un.elsreq64.remoteID = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ndlp0 = 65025;
          struct lpfc_nodelist * ndlp = (struct lpfc_nodelist *) malloc(_len_ndlp0*sizeof(struct lpfc_nodelist));
          for(int _i0 = 0; _i0 < _len_ndlp0; _i0++) {
            ndlp[_i0].nlp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        ndlp[_i0].nlp_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        ndlp[_i0].nlp_rpi = ((-2 * (next_i()%2)) + 1) * next_i();
        ndlp[_i0].nlp_DID = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ndlp__i0__vport0 = 1;
          ndlp[_i0].vport = (struct lpfc_vport *) malloc(_len_ndlp__i0__vport0*sizeof(struct lpfc_vport));
          for(int _j0 = 0; _j0 < _len_ndlp__i0__vport0; _j0++) {
            ndlp[_i0].vport->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lpfc_check_sli_ndlp(phba,pring,iocb,ndlp);
          printf("%d\n", benchRet); 
          free(phba);
          free(pring);
          for(int _aux = 0; _aux < _len_iocb0; _aux++) {
          free(iocb[_aux].context1);
          }
          for(int _aux = 0; _aux < _len_iocb0; _aux++) {
          free(iocb[_aux].vport);
          }
          free(iocb);
          for(int _aux = 0; _aux < _len_ndlp0; _aux++) {
          free(ndlp[_aux].vport);
          }
          free(ndlp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_phba0 = 100;
          struct lpfc_hba * phba = (struct lpfc_hba *) malloc(_len_phba0*sizeof(struct lpfc_hba));
          for(int _i0 = 0; _i0 < _len_phba0; _i0++) {
            phba[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pring0 = 100;
          struct lpfc_sli_ring * pring = (struct lpfc_sli_ring *) malloc(_len_pring0*sizeof(struct lpfc_sli_ring));
          for(int _i0 = 0; _i0 < _len_pring0; _i0++) {
            pring[_i0].ringno = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iocb0 = 100;
          struct lpfc_iocbq * iocb = (struct lpfc_iocbq *) malloc(_len_iocb0*sizeof(struct lpfc_iocbq));
          for(int _i0 = 0; _i0 < _len_iocb0; _i0++) {
              int _len_iocb__i0__context10 = 1;
          iocb[_i0].context1 = (int *) malloc(_len_iocb__i0__context10*sizeof(int));
          for(int _j0 = 0; _j0 < _len_iocb__i0__context10; _j0++) {
            iocb[_i0].context1[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_iocb__i0__context_un_ndlp0 = 1;
          iocb[_i0].context_un.ndlp = (struct lpfc_nodelist *) malloc(_len_iocb__i0__context_un_ndlp0*sizeof(struct lpfc_nodelist));
          for(int _j0 = 0; _j0 < _len_iocb__i0__context_un_ndlp0; _j0++) {
            iocb[_i0].context_un.ndlp->nlp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].context_un.ndlp->nlp_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].context_un.ndlp->nlp_rpi = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].context_un.ndlp->nlp_DID = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_iocb__i0__context_un_ndlp_vport0 = 1;
          iocb[_i0].context_un.ndlp->vport = (struct lpfc_vport *) malloc(_len_iocb__i0__context_un_ndlp_vport0*sizeof(struct lpfc_vport));
          for(int _j0 = 0; _j0 < _len_iocb__i0__context_un_ndlp_vport0; _j0++) {
            iocb[_i0].context_un.ndlp->vport->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_iocb__i0__vport0 = 1;
          iocb[_i0].vport = (struct lpfc_vport *) malloc(_len_iocb__i0__vport0*sizeof(struct lpfc_vport));
          for(int _j0 = 0; _j0 < _len_iocb__i0__vport0; _j0++) {
            iocb[_i0].vport->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        iocb[_i0].iocb.ulpCommand = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].iocb.ulpContext = ((-2 * (next_i()%2)) + 1) * next_i();
        iocb[_i0].iocb.un.elsreq64.remoteID = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ndlp0 = 100;
          struct lpfc_nodelist * ndlp = (struct lpfc_nodelist *) malloc(_len_ndlp0*sizeof(struct lpfc_nodelist));
          for(int _i0 = 0; _i0 < _len_ndlp0; _i0++) {
            ndlp[_i0].nlp_type = ((-2 * (next_i()%2)) + 1) * next_i();
        ndlp[_i0].nlp_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        ndlp[_i0].nlp_rpi = ((-2 * (next_i()%2)) + 1) * next_i();
        ndlp[_i0].nlp_DID = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ndlp__i0__vport0 = 1;
          ndlp[_i0].vport = (struct lpfc_vport *) malloc(_len_ndlp__i0__vport0*sizeof(struct lpfc_vport));
          for(int _j0 = 0; _j0 < _len_ndlp__i0__vport0; _j0++) {
            ndlp[_i0].vport->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lpfc_check_sli_ndlp(phba,pring,iocb,ndlp);
          printf("%d\n", benchRet); 
          free(phba);
          free(pring);
          for(int _aux = 0; _aux < _len_iocb0; _aux++) {
          free(iocb[_aux].context1);
          }
          for(int _aux = 0; _aux < _len_iocb0; _aux++) {
          free(iocb[_aux].vport);
          }
          free(iocb);
          for(int _aux = 0; _aux < _len_ndlp0; _aux++) {
          free(ndlp[_aux].vport);
          }
          free(ndlp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
