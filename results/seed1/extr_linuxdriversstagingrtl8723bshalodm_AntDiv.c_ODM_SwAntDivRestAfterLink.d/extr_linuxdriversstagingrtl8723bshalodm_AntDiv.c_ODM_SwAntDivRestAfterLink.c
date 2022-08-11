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
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
typedef  size_t u32 ;
typedef  TYPE_1__* pSWAT_T ;
typedef  TYPE_2__* pFAT_T ;
struct TYPE_6__ {scalar_t__* AuxAnt_Cnt; scalar_t__* MainAnt_Cnt; scalar_t__* AuxAnt_Sum; scalar_t__* MainAnt_Sum; int /*<<< orphan*/  RxIdleAnt; } ;
struct TYPE_5__ {int try_flag; scalar_t__ Double_chk_flag; scalar_t__ RSSI_Trying; } ;
struct TYPE_7__ {int RSSI_test; TYPE_2__ DM_FatTable; TYPE_1__ DM_SWAT_Table; } ;
typedef  TYPE_3__* PDM_ODM_T ;

/* Variables and functions */
 int /*<<< orphan*/  MAIN_ANT ; 
 size_t ODM_ASSOCIATE_ENTRY_NUM ; 

void ODM_SwAntDivRestAfterLink(PDM_ODM_T pDM_Odm)
{
	pSWAT_T pDM_SWAT_Table = &pDM_Odm->DM_SWAT_Table;
	pFAT_T pDM_FatTable = &pDM_Odm->DM_FatTable;
	u32 i;

	pDM_Odm->RSSI_test = false;
	pDM_SWAT_Table->try_flag = 0xff;
	pDM_SWAT_Table->RSSI_Trying = 0;
	pDM_SWAT_Table->Double_chk_flag = 0;

	pDM_FatTable->RxIdleAnt = MAIN_ANT;

	for (i = 0; i < ODM_ASSOCIATE_ENTRY_NUM; i++) {
		pDM_FatTable->MainAnt_Sum[i] = 0;
		pDM_FatTable->AuxAnt_Sum[i] = 0;
		pDM_FatTable->MainAnt_Cnt[i] = 0;
		pDM_FatTable->AuxAnt_Cnt[i] = 0;
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
          int _len_pDM_Odm0 = 1;
          struct TYPE_7__ * pDM_Odm = (struct TYPE_7__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
            pDM_Odm[_i0].RSSI_test = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pDM_Odm__i0__DM_FatTable_AuxAnt_Cnt0 = 1;
          pDM_Odm[_i0].DM_FatTable.AuxAnt_Cnt = (long *) malloc(_len_pDM_Odm__i0__DM_FatTable_AuxAnt_Cnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__DM_FatTable_AuxAnt_Cnt0; _j0++) {
            pDM_Odm[_i0].DM_FatTable.AuxAnt_Cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDM_Odm__i0__DM_FatTable_MainAnt_Cnt0 = 1;
          pDM_Odm[_i0].DM_FatTable.MainAnt_Cnt = (long *) malloc(_len_pDM_Odm__i0__DM_FatTable_MainAnt_Cnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__DM_FatTable_MainAnt_Cnt0; _j0++) {
            pDM_Odm[_i0].DM_FatTable.MainAnt_Cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDM_Odm__i0__DM_FatTable_AuxAnt_Sum0 = 1;
          pDM_Odm[_i0].DM_FatTable.AuxAnt_Sum = (long *) malloc(_len_pDM_Odm__i0__DM_FatTable_AuxAnt_Sum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__DM_FatTable_AuxAnt_Sum0; _j0++) {
            pDM_Odm[_i0].DM_FatTable.AuxAnt_Sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDM_Odm__i0__DM_FatTable_MainAnt_Sum0 = 1;
          pDM_Odm[_i0].DM_FatTable.MainAnt_Sum = (long *) malloc(_len_pDM_Odm__i0__DM_FatTable_MainAnt_Sum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__DM_FatTable_MainAnt_Sum0; _j0++) {
            pDM_Odm[_i0].DM_FatTable.MainAnt_Sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pDM_Odm[_i0].DM_FatTable.RxIdleAnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].DM_SWAT_Table.try_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].DM_SWAT_Table.Double_chk_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].DM_SWAT_Table.RSSI_Trying = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ODM_SwAntDivRestAfterLink(pDM_Odm);
          free(pDM_Odm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pDM_Odm0 = 65025;
          struct TYPE_7__ * pDM_Odm = (struct TYPE_7__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
            pDM_Odm[_i0].RSSI_test = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pDM_Odm__i0__DM_FatTable_AuxAnt_Cnt0 = 1;
          pDM_Odm[_i0].DM_FatTable.AuxAnt_Cnt = (long *) malloc(_len_pDM_Odm__i0__DM_FatTable_AuxAnt_Cnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__DM_FatTable_AuxAnt_Cnt0; _j0++) {
            pDM_Odm[_i0].DM_FatTable.AuxAnt_Cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDM_Odm__i0__DM_FatTable_MainAnt_Cnt0 = 1;
          pDM_Odm[_i0].DM_FatTable.MainAnt_Cnt = (long *) malloc(_len_pDM_Odm__i0__DM_FatTable_MainAnt_Cnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__DM_FatTable_MainAnt_Cnt0; _j0++) {
            pDM_Odm[_i0].DM_FatTable.MainAnt_Cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDM_Odm__i0__DM_FatTable_AuxAnt_Sum0 = 1;
          pDM_Odm[_i0].DM_FatTable.AuxAnt_Sum = (long *) malloc(_len_pDM_Odm__i0__DM_FatTable_AuxAnt_Sum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__DM_FatTable_AuxAnt_Sum0; _j0++) {
            pDM_Odm[_i0].DM_FatTable.AuxAnt_Sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDM_Odm__i0__DM_FatTable_MainAnt_Sum0 = 1;
          pDM_Odm[_i0].DM_FatTable.MainAnt_Sum = (long *) malloc(_len_pDM_Odm__i0__DM_FatTable_MainAnt_Sum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__DM_FatTable_MainAnt_Sum0; _j0++) {
            pDM_Odm[_i0].DM_FatTable.MainAnt_Sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pDM_Odm[_i0].DM_FatTable.RxIdleAnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].DM_SWAT_Table.try_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].DM_SWAT_Table.Double_chk_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].DM_SWAT_Table.RSSI_Trying = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ODM_SwAntDivRestAfterLink(pDM_Odm);
          free(pDM_Odm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pDM_Odm0 = 100;
          struct TYPE_7__ * pDM_Odm = (struct TYPE_7__ *) malloc(_len_pDM_Odm0*sizeof(struct TYPE_7__));
          for(int _i0 = 0; _i0 < _len_pDM_Odm0; _i0++) {
            pDM_Odm[_i0].RSSI_test = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pDM_Odm__i0__DM_FatTable_AuxAnt_Cnt0 = 1;
          pDM_Odm[_i0].DM_FatTable.AuxAnt_Cnt = (long *) malloc(_len_pDM_Odm__i0__DM_FatTable_AuxAnt_Cnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__DM_FatTable_AuxAnt_Cnt0; _j0++) {
            pDM_Odm[_i0].DM_FatTable.AuxAnt_Cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDM_Odm__i0__DM_FatTable_MainAnt_Cnt0 = 1;
          pDM_Odm[_i0].DM_FatTable.MainAnt_Cnt = (long *) malloc(_len_pDM_Odm__i0__DM_FatTable_MainAnt_Cnt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__DM_FatTable_MainAnt_Cnt0; _j0++) {
            pDM_Odm[_i0].DM_FatTable.MainAnt_Cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDM_Odm__i0__DM_FatTable_AuxAnt_Sum0 = 1;
          pDM_Odm[_i0].DM_FatTable.AuxAnt_Sum = (long *) malloc(_len_pDM_Odm__i0__DM_FatTable_AuxAnt_Sum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__DM_FatTable_AuxAnt_Sum0; _j0++) {
            pDM_Odm[_i0].DM_FatTable.AuxAnt_Sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pDM_Odm__i0__DM_FatTable_MainAnt_Sum0 = 1;
          pDM_Odm[_i0].DM_FatTable.MainAnt_Sum = (long *) malloc(_len_pDM_Odm__i0__DM_FatTable_MainAnt_Sum0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_pDM_Odm__i0__DM_FatTable_MainAnt_Sum0; _j0++) {
            pDM_Odm[_i0].DM_FatTable.MainAnt_Sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pDM_Odm[_i0].DM_FatTable.RxIdleAnt = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].DM_SWAT_Table.try_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].DM_SWAT_Table.Double_chk_flag = ((-2 * (next_i()%2)) + 1) * next_i();
        pDM_Odm[_i0].DM_SWAT_Table.RSSI_Trying = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          ODM_SwAntDivRestAfterLink(pDM_Odm);
          free(pDM_Odm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
