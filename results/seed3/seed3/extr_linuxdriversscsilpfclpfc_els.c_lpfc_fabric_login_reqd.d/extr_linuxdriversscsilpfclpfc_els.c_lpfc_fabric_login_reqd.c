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
struct TYPE_3__ {scalar_t__* ulpWord; } ;
struct TYPE_4__ {scalar_t__ ulpStatus; TYPE_1__ un; } ;
struct lpfc_iocbq {TYPE_2__ iocb; } ;
struct lpfc_hba {int dummy; } ;

/* Variables and functions */
 scalar_t__ IOSTAT_FABRIC_RJT ; 
 scalar_t__ RJT_LOGIN_REQUIRED ; 

__attribute__((used)) static int
lpfc_fabric_login_reqd(struct lpfc_hba *phba,
		struct lpfc_iocbq *cmdiocb,
		struct lpfc_iocbq *rspiocb)
{

	if ((rspiocb->iocb.ulpStatus != IOSTAT_FABRIC_RJT) ||
		(rspiocb->iocb.un.ulpWord[4] != RJT_LOGIN_REQUIRED))
		return 0;
	else
		return 1;
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
          int _len_cmdiocb0 = 1;
          struct lpfc_iocbq * cmdiocb = (struct lpfc_iocbq *) malloc(_len_cmdiocb0*sizeof(struct lpfc_iocbq));
          for(int _i0 = 0; _i0 < _len_cmdiocb0; _i0++) {
            cmdiocb[_i0].iocb.ulpStatus = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmdiocb__i0__iocb_un_ulpWord0 = 1;
          cmdiocb[_i0].iocb.un.ulpWord = (long *) malloc(_len_cmdiocb__i0__iocb_un_ulpWord0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cmdiocb__i0__iocb_un_ulpWord0; _j0++) {
            cmdiocb[_i0].iocb.un.ulpWord[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rspiocb0 = 1;
          struct lpfc_iocbq * rspiocb = (struct lpfc_iocbq *) malloc(_len_rspiocb0*sizeof(struct lpfc_iocbq));
          for(int _i0 = 0; _i0 < _len_rspiocb0; _i0++) {
            rspiocb[_i0].iocb.ulpStatus = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rspiocb__i0__iocb_un_ulpWord0 = 1;
          rspiocb[_i0].iocb.un.ulpWord = (long *) malloc(_len_rspiocb__i0__iocb_un_ulpWord0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rspiocb__i0__iocb_un_ulpWord0; _j0++) {
            rspiocb[_i0].iocb.un.ulpWord[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lpfc_fabric_login_reqd(phba,cmdiocb,rspiocb);
          printf("%d\n", benchRet); 
          free(phba);
          free(cmdiocb);
          free(rspiocb);
        
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
          int _len_cmdiocb0 = 65025;
          struct lpfc_iocbq * cmdiocb = (struct lpfc_iocbq *) malloc(_len_cmdiocb0*sizeof(struct lpfc_iocbq));
          for(int _i0 = 0; _i0 < _len_cmdiocb0; _i0++) {
            cmdiocb[_i0].iocb.ulpStatus = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmdiocb__i0__iocb_un_ulpWord0 = 1;
          cmdiocb[_i0].iocb.un.ulpWord = (long *) malloc(_len_cmdiocb__i0__iocb_un_ulpWord0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cmdiocb__i0__iocb_un_ulpWord0; _j0++) {
            cmdiocb[_i0].iocb.un.ulpWord[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rspiocb0 = 65025;
          struct lpfc_iocbq * rspiocb = (struct lpfc_iocbq *) malloc(_len_rspiocb0*sizeof(struct lpfc_iocbq));
          for(int _i0 = 0; _i0 < _len_rspiocb0; _i0++) {
            rspiocb[_i0].iocb.ulpStatus = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rspiocb__i0__iocb_un_ulpWord0 = 1;
          rspiocb[_i0].iocb.un.ulpWord = (long *) malloc(_len_rspiocb__i0__iocb_un_ulpWord0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rspiocb__i0__iocb_un_ulpWord0; _j0++) {
            rspiocb[_i0].iocb.un.ulpWord[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lpfc_fabric_login_reqd(phba,cmdiocb,rspiocb);
          printf("%d\n", benchRet); 
          free(phba);
          free(cmdiocb);
          free(rspiocb);
        
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
          int _len_cmdiocb0 = 100;
          struct lpfc_iocbq * cmdiocb = (struct lpfc_iocbq *) malloc(_len_cmdiocb0*sizeof(struct lpfc_iocbq));
          for(int _i0 = 0; _i0 < _len_cmdiocb0; _i0++) {
            cmdiocb[_i0].iocb.ulpStatus = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_cmdiocb__i0__iocb_un_ulpWord0 = 1;
          cmdiocb[_i0].iocb.un.ulpWord = (long *) malloc(_len_cmdiocb__i0__iocb_un_ulpWord0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_cmdiocb__i0__iocb_un_ulpWord0; _j0++) {
            cmdiocb[_i0].iocb.un.ulpWord[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_rspiocb0 = 100;
          struct lpfc_iocbq * rspiocb = (struct lpfc_iocbq *) malloc(_len_rspiocb0*sizeof(struct lpfc_iocbq));
          for(int _i0 = 0; _i0 < _len_rspiocb0; _i0++) {
            rspiocb[_i0].iocb.ulpStatus = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_rspiocb__i0__iocb_un_ulpWord0 = 1;
          rspiocb[_i0].iocb.un.ulpWord = (long *) malloc(_len_rspiocb__i0__iocb_un_ulpWord0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_rspiocb__i0__iocb_un_ulpWord0; _j0++) {
            rspiocb[_i0].iocb.un.ulpWord[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int benchRet = lpfc_fabric_login_reqd(phba,cmdiocb,rspiocb);
          printf("%d\n", benchRet); 
          free(phba);
          free(cmdiocb);
          free(rspiocb);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
