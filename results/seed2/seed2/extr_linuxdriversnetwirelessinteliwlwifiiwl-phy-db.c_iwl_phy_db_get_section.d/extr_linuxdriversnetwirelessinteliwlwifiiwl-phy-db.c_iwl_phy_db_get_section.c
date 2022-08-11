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
       3            linked\n\
       4            dlinked\n\
       5            bintree\n\
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
typedef  size_t u16 ;
struct iwl_phy_db_entry {int dummy; } ;
struct iwl_phy_db {size_t n_group_papd; size_t n_group_txp; struct iwl_phy_db_entry* calib_ch_group_txp; struct iwl_phy_db_entry* calib_ch_group_papd; struct iwl_phy_db_entry calib_nch; struct iwl_phy_db_entry cfg; } ;
typedef  enum iwl_phy_db_section_type { ____Placeholder_iwl_phy_db_section_type } iwl_phy_db_section_type ;

/* Variables and functions */
#define  IWL_PHY_DB_CALIB_CHG_PAPD 131 
#define  IWL_PHY_DB_CALIB_CHG_TXP 130 
#define  IWL_PHY_DB_CALIB_NCH 129 
#define  IWL_PHY_DB_CFG 128 
 int IWL_PHY_DB_MAX ; 

__attribute__((used)) static struct iwl_phy_db_entry *
iwl_phy_db_get_section(struct iwl_phy_db *phy_db,
		       enum iwl_phy_db_section_type type,
		       u16 chg_id)
{
	if (!phy_db || type >= IWL_PHY_DB_MAX)
		return NULL;

	switch (type) {
	case IWL_PHY_DB_CFG:
		return &phy_db->cfg;
	case IWL_PHY_DB_CALIB_NCH:
		return &phy_db->calib_nch;
	case IWL_PHY_DB_CALIB_CHG_PAPD:
		if (chg_id >= phy_db->n_group_papd)
			return NULL;
		return &phy_db->calib_ch_group_papd[chg_id];
	case IWL_PHY_DB_CALIB_CHG_TXP:
		if (chg_id >= phy_db->n_group_txp)
			return NULL;
		return &phy_db->calib_ch_group_txp[chg_id];
	default:
		return NULL;
	}
	return NULL;
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
          enum iwl_phy_db_section_type type = 0;
          unsigned long chg_id = 100;
          int _len_phy_db0 = 1;
          struct iwl_phy_db * phy_db = (struct iwl_phy_db *) malloc(_len_phy_db0*sizeof(struct iwl_phy_db));
          for(int _i0 = 0; _i0 < _len_phy_db0; _i0++) {
            phy_db[_i0].n_group_papd = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_db[_i0].n_group_txp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy_db__i0__calib_ch_group_txp0 = 1;
          phy_db[_i0].calib_ch_group_txp = (struct iwl_phy_db_entry *) malloc(_len_phy_db__i0__calib_ch_group_txp0*sizeof(struct iwl_phy_db_entry));
          for(int _j0 = 0; _j0 < _len_phy_db__i0__calib_ch_group_txp0; _j0++) {
            phy_db[_i0].calib_ch_group_txp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy_db__i0__calib_ch_group_papd0 = 1;
          phy_db[_i0].calib_ch_group_papd = (struct iwl_phy_db_entry *) malloc(_len_phy_db__i0__calib_ch_group_papd0*sizeof(struct iwl_phy_db_entry));
          for(int _j0 = 0; _j0 < _len_phy_db__i0__calib_ch_group_papd0; _j0++) {
            phy_db[_i0].calib_ch_group_papd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phy_db[_i0].calib_nch.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_db[_i0].cfg.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct iwl_phy_db_entry * benchRet = iwl_phy_db_get_section(phy_db,type,chg_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_phy_db0; _aux++) {
          free(phy_db[_aux].calib_ch_group_txp);
          }
          for(int _aux = 0; _aux < _len_phy_db0; _aux++) {
          free(phy_db[_aux].calib_ch_group_papd);
          }
          free(phy_db);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum iwl_phy_db_section_type type = 0;
          unsigned long chg_id = 255;
          int _len_phy_db0 = 65025;
          struct iwl_phy_db * phy_db = (struct iwl_phy_db *) malloc(_len_phy_db0*sizeof(struct iwl_phy_db));
          for(int _i0 = 0; _i0 < _len_phy_db0; _i0++) {
            phy_db[_i0].n_group_papd = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_db[_i0].n_group_txp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy_db__i0__calib_ch_group_txp0 = 1;
          phy_db[_i0].calib_ch_group_txp = (struct iwl_phy_db_entry *) malloc(_len_phy_db__i0__calib_ch_group_txp0*sizeof(struct iwl_phy_db_entry));
          for(int _j0 = 0; _j0 < _len_phy_db__i0__calib_ch_group_txp0; _j0++) {
            phy_db[_i0].calib_ch_group_txp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy_db__i0__calib_ch_group_papd0 = 1;
          phy_db[_i0].calib_ch_group_papd = (struct iwl_phy_db_entry *) malloc(_len_phy_db__i0__calib_ch_group_papd0*sizeof(struct iwl_phy_db_entry));
          for(int _j0 = 0; _j0 < _len_phy_db__i0__calib_ch_group_papd0; _j0++) {
            phy_db[_i0].calib_ch_group_papd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phy_db[_i0].calib_nch.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_db[_i0].cfg.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct iwl_phy_db_entry * benchRet = iwl_phy_db_get_section(phy_db,type,chg_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_phy_db0; _aux++) {
          free(phy_db[_aux].calib_ch_group_txp);
          }
          for(int _aux = 0; _aux < _len_phy_db0; _aux++) {
          free(phy_db[_aux].calib_ch_group_papd);
          }
          free(phy_db);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum iwl_phy_db_section_type type = 0;
          unsigned long chg_id = 10;
          int _len_phy_db0 = 100;
          struct iwl_phy_db * phy_db = (struct iwl_phy_db *) malloc(_len_phy_db0*sizeof(struct iwl_phy_db));
          for(int _i0 = 0; _i0 < _len_phy_db0; _i0++) {
            phy_db[_i0].n_group_papd = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_db[_i0].n_group_txp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy_db__i0__calib_ch_group_txp0 = 1;
          phy_db[_i0].calib_ch_group_txp = (struct iwl_phy_db_entry *) malloc(_len_phy_db__i0__calib_ch_group_txp0*sizeof(struct iwl_phy_db_entry));
          for(int _j0 = 0; _j0 < _len_phy_db__i0__calib_ch_group_txp0; _j0++) {
            phy_db[_i0].calib_ch_group_txp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy_db__i0__calib_ch_group_papd0 = 1;
          phy_db[_i0].calib_ch_group_papd = (struct iwl_phy_db_entry *) malloc(_len_phy_db__i0__calib_ch_group_papd0*sizeof(struct iwl_phy_db_entry));
          for(int _j0 = 0; _j0 < _len_phy_db__i0__calib_ch_group_papd0; _j0++) {
            phy_db[_i0].calib_ch_group_papd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phy_db[_i0].calib_nch.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_db[_i0].cfg.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct iwl_phy_db_entry * benchRet = iwl_phy_db_get_section(phy_db,type,chg_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_phy_db0; _aux++) {
          free(phy_db[_aux].calib_ch_group_txp);
          }
          for(int _aux = 0; _aux < _len_phy_db0; _aux++) {
          free(phy_db[_aux].calib_ch_group_papd);
          }
          free(phy_db);
        
        break;
    }
    // linked
    case 3:
    {
          enum iwl_phy_db_section_type type = 0;
          unsigned long chg_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy_db0 = 1;
          struct iwl_phy_db * phy_db = (struct iwl_phy_db *) malloc(_len_phy_db0*sizeof(struct iwl_phy_db));
          for(int _i0 = 0; _i0 < _len_phy_db0; _i0++) {
            phy_db[_i0].n_group_papd = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_db[_i0].n_group_txp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy_db__i0__calib_ch_group_txp0 = 1;
          phy_db[_i0].calib_ch_group_txp = (struct iwl_phy_db_entry *) malloc(_len_phy_db__i0__calib_ch_group_txp0*sizeof(struct iwl_phy_db_entry));
          for(int _j0 = 0; _j0 < _len_phy_db__i0__calib_ch_group_txp0; _j0++) {
            phy_db[_i0].calib_ch_group_txp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy_db__i0__calib_ch_group_papd0 = 1;
          phy_db[_i0].calib_ch_group_papd = (struct iwl_phy_db_entry *) malloc(_len_phy_db__i0__calib_ch_group_papd0*sizeof(struct iwl_phy_db_entry));
          for(int _j0 = 0; _j0 < _len_phy_db__i0__calib_ch_group_papd0; _j0++) {
            phy_db[_i0].calib_ch_group_papd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phy_db[_i0].calib_nch.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_db[_i0].cfg.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct iwl_phy_db_entry * benchRet = iwl_phy_db_get_section(phy_db,type,chg_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_phy_db0; _aux++) {
          free(phy_db[_aux].calib_ch_group_txp);
          }
          for(int _aux = 0; _aux < _len_phy_db0; _aux++) {
          free(phy_db[_aux].calib_ch_group_papd);
          }
          free(phy_db);
        
        break;
    }
    // dlinked
    case 4:
    {
          enum iwl_phy_db_section_type type = 0;
          unsigned long chg_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy_db0 = 1;
          struct iwl_phy_db * phy_db = (struct iwl_phy_db *) malloc(_len_phy_db0*sizeof(struct iwl_phy_db));
          for(int _i0 = 0; _i0 < _len_phy_db0; _i0++) {
            phy_db[_i0].n_group_papd = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_db[_i0].n_group_txp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy_db__i0__calib_ch_group_txp0 = 1;
          phy_db[_i0].calib_ch_group_txp = (struct iwl_phy_db_entry *) malloc(_len_phy_db__i0__calib_ch_group_txp0*sizeof(struct iwl_phy_db_entry));
          for(int _j0 = 0; _j0 < _len_phy_db__i0__calib_ch_group_txp0; _j0++) {
            phy_db[_i0].calib_ch_group_txp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy_db__i0__calib_ch_group_papd0 = 1;
          phy_db[_i0].calib_ch_group_papd = (struct iwl_phy_db_entry *) malloc(_len_phy_db__i0__calib_ch_group_papd0*sizeof(struct iwl_phy_db_entry));
          for(int _j0 = 0; _j0 < _len_phy_db__i0__calib_ch_group_papd0; _j0++) {
            phy_db[_i0].calib_ch_group_papd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phy_db[_i0].calib_nch.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_db[_i0].cfg.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct iwl_phy_db_entry * benchRet = iwl_phy_db_get_section(phy_db,type,chg_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_phy_db0; _aux++) {
          free(phy_db[_aux].calib_ch_group_txp);
          }
          for(int _aux = 0; _aux < _len_phy_db0; _aux++) {
          free(phy_db[_aux].calib_ch_group_papd);
          }
          free(phy_db);
        
        break;
    }
    // bintree
    case 5:
    {
          enum iwl_phy_db_section_type type = 0;
          unsigned long chg_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy_db0 = 1;
          struct iwl_phy_db * phy_db = (struct iwl_phy_db *) malloc(_len_phy_db0*sizeof(struct iwl_phy_db));
          for(int _i0 = 0; _i0 < _len_phy_db0; _i0++) {
            phy_db[_i0].n_group_papd = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_db[_i0].n_group_txp = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_phy_db__i0__calib_ch_group_txp0 = 1;
          phy_db[_i0].calib_ch_group_txp = (struct iwl_phy_db_entry *) malloc(_len_phy_db__i0__calib_ch_group_txp0*sizeof(struct iwl_phy_db_entry));
          for(int _j0 = 0; _j0 < _len_phy_db__i0__calib_ch_group_txp0; _j0++) {
            phy_db[_i0].calib_ch_group_txp->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_phy_db__i0__calib_ch_group_papd0 = 1;
          phy_db[_i0].calib_ch_group_papd = (struct iwl_phy_db_entry *) malloc(_len_phy_db__i0__calib_ch_group_papd0*sizeof(struct iwl_phy_db_entry));
          for(int _j0 = 0; _j0 < _len_phy_db__i0__calib_ch_group_papd0; _j0++) {
            phy_db[_i0].calib_ch_group_papd->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        phy_db[_i0].calib_nch.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
        phy_db[_i0].cfg.dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct iwl_phy_db_entry * benchRet = iwl_phy_db_get_section(phy_db,type,chg_id);
          printf("%d\n", (*benchRet).dummy);
          for(int _aux = 0; _aux < _len_phy_db0; _aux++) {
          free(phy_db[_aux].calib_ch_group_txp);
          }
          for(int _aux = 0; _aux < _len_phy_db0; _aux++) {
          free(phy_db[_aux].calib_ch_group_papd);
          }
          free(phy_db);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
