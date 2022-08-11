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
typedef  scalar_t__ u8 ;
typedef  size_t u32 ;
struct fast_ant_train {int /*<<< orphan*/ * AuxAnt_Cnt; int /*<<< orphan*/ * AuxAnt_Sum; int /*<<< orphan*/ * MainAnt_Cnt; int /*<<< orphan*/ * MainAnt_Sum; } ;
struct odm_dm_struct {scalar_t__ AntDivType; struct fast_ant_train DM_FatTable; } ;

/* Variables and functions */
 scalar_t__ CGCS_RX_HW_ANTDIV ; 
 scalar_t__ CG_TRX_HW_ANTDIV ; 
 scalar_t__ MAIN_ANT_CGCS_RX ; 
 scalar_t__ MAIN_ANT_CG_TRX ; 

void rtl88eu_dm_ant_sel_statistics(struct odm_dm_struct *dm_odm,
				   u8 antsel_tr_mux, u32 mac_id, u8 rx_pwdb_all)
{
	struct fast_ant_train *dm_fat_tbl = &dm_odm->DM_FatTable;

	if (dm_odm->AntDivType == CG_TRX_HW_ANTDIV) {
		if (antsel_tr_mux == MAIN_ANT_CG_TRX) {
			dm_fat_tbl->MainAnt_Sum[mac_id] += rx_pwdb_all;
			dm_fat_tbl->MainAnt_Cnt[mac_id]++;
		} else {
			dm_fat_tbl->AuxAnt_Sum[mac_id] += rx_pwdb_all;
			dm_fat_tbl->AuxAnt_Cnt[mac_id]++;
		}
	} else if (dm_odm->AntDivType == CGCS_RX_HW_ANTDIV) {
		if (antsel_tr_mux == MAIN_ANT_CGCS_RX) {
			dm_fat_tbl->MainAnt_Sum[mac_id] += rx_pwdb_all;
			dm_fat_tbl->MainAnt_Cnt[mac_id]++;
		} else {
			dm_fat_tbl->AuxAnt_Sum[mac_id] += rx_pwdb_all;
			dm_fat_tbl->AuxAnt_Cnt[mac_id]++;
		}
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
          long antsel_tr_mux = 100;
          unsigned long mac_id = 100;
          long rx_pwdb_all = 100;
          int _len_dm_odm0 = 1;
          struct odm_dm_struct * dm_odm = (struct odm_dm_struct *) malloc(_len_dm_odm0*sizeof(struct odm_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm_odm0; _i0++) {
            dm_odm[_i0].AntDivType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dm_odm__i0__DM_FatTable_AuxAnt_Cnt0 = 1;
          dm_odm[_i0].DM_FatTable.AuxAnt_Cnt = (int *) malloc(_len_dm_odm__i0__DM_FatTable_AuxAnt_Cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dm_odm__i0__DM_FatTable_AuxAnt_Cnt0; _j0++) {
            dm_odm[_i0].DM_FatTable.AuxAnt_Cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm_odm__i0__DM_FatTable_AuxAnt_Sum0 = 1;
          dm_odm[_i0].DM_FatTable.AuxAnt_Sum = (int *) malloc(_len_dm_odm__i0__DM_FatTable_AuxAnt_Sum0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dm_odm__i0__DM_FatTable_AuxAnt_Sum0; _j0++) {
            dm_odm[_i0].DM_FatTable.AuxAnt_Sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm_odm__i0__DM_FatTable_MainAnt_Cnt0 = 1;
          dm_odm[_i0].DM_FatTable.MainAnt_Cnt = (int *) malloc(_len_dm_odm__i0__DM_FatTable_MainAnt_Cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dm_odm__i0__DM_FatTable_MainAnt_Cnt0; _j0++) {
            dm_odm[_i0].DM_FatTable.MainAnt_Cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm_odm__i0__DM_FatTable_MainAnt_Sum0 = 1;
          dm_odm[_i0].DM_FatTable.MainAnt_Sum = (int *) malloc(_len_dm_odm__i0__DM_FatTable_MainAnt_Sum0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dm_odm__i0__DM_FatTable_MainAnt_Sum0; _j0++) {
            dm_odm[_i0].DM_FatTable.MainAnt_Sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtl88eu_dm_ant_sel_statistics(dm_odm,antsel_tr_mux,mac_id,rx_pwdb_all);
          free(dm_odm);
        
        break;
    }
    // big-arr
    case 1:
    {
          long antsel_tr_mux = 255;
          unsigned long mac_id = 255;
          long rx_pwdb_all = 255;
          int _len_dm_odm0 = 65025;
          struct odm_dm_struct * dm_odm = (struct odm_dm_struct *) malloc(_len_dm_odm0*sizeof(struct odm_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm_odm0; _i0++) {
            dm_odm[_i0].AntDivType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dm_odm__i0__DM_FatTable_AuxAnt_Cnt0 = 1;
          dm_odm[_i0].DM_FatTable.AuxAnt_Cnt = (int *) malloc(_len_dm_odm__i0__DM_FatTable_AuxAnt_Cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dm_odm__i0__DM_FatTable_AuxAnt_Cnt0; _j0++) {
            dm_odm[_i0].DM_FatTable.AuxAnt_Cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm_odm__i0__DM_FatTable_AuxAnt_Sum0 = 1;
          dm_odm[_i0].DM_FatTable.AuxAnt_Sum = (int *) malloc(_len_dm_odm__i0__DM_FatTable_AuxAnt_Sum0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dm_odm__i0__DM_FatTable_AuxAnt_Sum0; _j0++) {
            dm_odm[_i0].DM_FatTable.AuxAnt_Sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm_odm__i0__DM_FatTable_MainAnt_Cnt0 = 1;
          dm_odm[_i0].DM_FatTable.MainAnt_Cnt = (int *) malloc(_len_dm_odm__i0__DM_FatTable_MainAnt_Cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dm_odm__i0__DM_FatTable_MainAnt_Cnt0; _j0++) {
            dm_odm[_i0].DM_FatTable.MainAnt_Cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm_odm__i0__DM_FatTable_MainAnt_Sum0 = 1;
          dm_odm[_i0].DM_FatTable.MainAnt_Sum = (int *) malloc(_len_dm_odm__i0__DM_FatTable_MainAnt_Sum0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dm_odm__i0__DM_FatTable_MainAnt_Sum0; _j0++) {
            dm_odm[_i0].DM_FatTable.MainAnt_Sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtl88eu_dm_ant_sel_statistics(dm_odm,antsel_tr_mux,mac_id,rx_pwdb_all);
          free(dm_odm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long antsel_tr_mux = 10;
          unsigned long mac_id = 10;
          long rx_pwdb_all = 10;
          int _len_dm_odm0 = 100;
          struct odm_dm_struct * dm_odm = (struct odm_dm_struct *) malloc(_len_dm_odm0*sizeof(struct odm_dm_struct));
          for(int _i0 = 0; _i0 < _len_dm_odm0; _i0++) {
            dm_odm[_i0].AntDivType = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dm_odm__i0__DM_FatTable_AuxAnt_Cnt0 = 1;
          dm_odm[_i0].DM_FatTable.AuxAnt_Cnt = (int *) malloc(_len_dm_odm__i0__DM_FatTable_AuxAnt_Cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dm_odm__i0__DM_FatTable_AuxAnt_Cnt0; _j0++) {
            dm_odm[_i0].DM_FatTable.AuxAnt_Cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm_odm__i0__DM_FatTable_AuxAnt_Sum0 = 1;
          dm_odm[_i0].DM_FatTable.AuxAnt_Sum = (int *) malloc(_len_dm_odm__i0__DM_FatTable_AuxAnt_Sum0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dm_odm__i0__DM_FatTable_AuxAnt_Sum0; _j0++) {
            dm_odm[_i0].DM_FatTable.AuxAnt_Sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm_odm__i0__DM_FatTable_MainAnt_Cnt0 = 1;
          dm_odm[_i0].DM_FatTable.MainAnt_Cnt = (int *) malloc(_len_dm_odm__i0__DM_FatTable_MainAnt_Cnt0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dm_odm__i0__DM_FatTable_MainAnt_Cnt0; _j0++) {
            dm_odm[_i0].DM_FatTable.MainAnt_Cnt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dm_odm__i0__DM_FatTable_MainAnt_Sum0 = 1;
          dm_odm[_i0].DM_FatTable.MainAnt_Sum = (int *) malloc(_len_dm_odm__i0__DM_FatTable_MainAnt_Sum0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dm_odm__i0__DM_FatTable_MainAnt_Sum0; _j0++) {
            dm_odm[_i0].DM_FatTable.MainAnt_Sum[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtl88eu_dm_ant_sel_statistics(dm_odm,antsel_tr_mux,mac_id,rx_pwdb_all);
          free(dm_odm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
