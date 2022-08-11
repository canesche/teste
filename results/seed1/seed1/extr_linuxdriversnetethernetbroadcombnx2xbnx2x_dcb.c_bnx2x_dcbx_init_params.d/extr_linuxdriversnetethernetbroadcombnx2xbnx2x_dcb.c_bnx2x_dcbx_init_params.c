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
struct TYPE_4__ {int admin_dcbx_version; int admin_ets_willing; int admin_pfc_willing; int overwrite_settings; int admin_ets_enable; int admin_pfc_enable; int admin_tc_supported_tx_enable; int admin_ets_configuration_tx_enable; int admin_pfc_tx_enable; int admin_application_priority_tx_enable; int admin_ets_reco_valid; int admin_app_priority_willing; int* admin_configuration_bw_precentage; int* admin_recommendation_bw_precentage; int* admin_recommendation_ets_pg; int admin_pfc_bitmap; scalar_t__ admin_default_priority; TYPE_1__* admin_priority_app_table; scalar_t__* admin_configuration_ets_pg; } ;
struct bnx2x {TYPE_2__ dcbx_config_params; } ;
struct TYPE_3__ {scalar_t__ valid; } ;

/* Variables and functions */

void bnx2x_dcbx_init_params(struct bnx2x *bp)
{
	bp->dcbx_config_params.admin_dcbx_version = 0x0; /* 0 - CEE; 1 - IEEE */
	bp->dcbx_config_params.admin_ets_willing = 1;
	bp->dcbx_config_params.admin_pfc_willing = 1;
	bp->dcbx_config_params.overwrite_settings = 1;
	bp->dcbx_config_params.admin_ets_enable = 1;
	bp->dcbx_config_params.admin_pfc_enable = 1;
	bp->dcbx_config_params.admin_tc_supported_tx_enable = 1;
	bp->dcbx_config_params.admin_ets_configuration_tx_enable = 1;
	bp->dcbx_config_params.admin_pfc_tx_enable = 1;
	bp->dcbx_config_params.admin_application_priority_tx_enable = 1;
	bp->dcbx_config_params.admin_ets_reco_valid = 1;
	bp->dcbx_config_params.admin_app_priority_willing = 1;
	bp->dcbx_config_params.admin_configuration_bw_precentage[0] = 100;
	bp->dcbx_config_params.admin_configuration_bw_precentage[1] = 0;
	bp->dcbx_config_params.admin_configuration_bw_precentage[2] = 0;
	bp->dcbx_config_params.admin_configuration_bw_precentage[3] = 0;
	bp->dcbx_config_params.admin_configuration_bw_precentage[4] = 0;
	bp->dcbx_config_params.admin_configuration_bw_precentage[5] = 0;
	bp->dcbx_config_params.admin_configuration_bw_precentage[6] = 0;
	bp->dcbx_config_params.admin_configuration_bw_precentage[7] = 0;
	bp->dcbx_config_params.admin_configuration_ets_pg[0] = 0;
	bp->dcbx_config_params.admin_configuration_ets_pg[1] = 0;
	bp->dcbx_config_params.admin_configuration_ets_pg[2] = 0;
	bp->dcbx_config_params.admin_configuration_ets_pg[3] = 0;
	bp->dcbx_config_params.admin_configuration_ets_pg[4] = 0;
	bp->dcbx_config_params.admin_configuration_ets_pg[5] = 0;
	bp->dcbx_config_params.admin_configuration_ets_pg[6] = 0;
	bp->dcbx_config_params.admin_configuration_ets_pg[7] = 0;
	bp->dcbx_config_params.admin_recommendation_bw_precentage[0] = 100;
	bp->dcbx_config_params.admin_recommendation_bw_precentage[1] = 0;
	bp->dcbx_config_params.admin_recommendation_bw_precentage[2] = 0;
	bp->dcbx_config_params.admin_recommendation_bw_precentage[3] = 0;
	bp->dcbx_config_params.admin_recommendation_bw_precentage[4] = 0;
	bp->dcbx_config_params.admin_recommendation_bw_precentage[5] = 0;
	bp->dcbx_config_params.admin_recommendation_bw_precentage[6] = 0;
	bp->dcbx_config_params.admin_recommendation_bw_precentage[7] = 0;
	bp->dcbx_config_params.admin_recommendation_ets_pg[0] = 0;
	bp->dcbx_config_params.admin_recommendation_ets_pg[1] = 1;
	bp->dcbx_config_params.admin_recommendation_ets_pg[2] = 2;
	bp->dcbx_config_params.admin_recommendation_ets_pg[3] = 3;
	bp->dcbx_config_params.admin_recommendation_ets_pg[4] = 4;
	bp->dcbx_config_params.admin_recommendation_ets_pg[5] = 5;
	bp->dcbx_config_params.admin_recommendation_ets_pg[6] = 6;
	bp->dcbx_config_params.admin_recommendation_ets_pg[7] = 7;
	bp->dcbx_config_params.admin_pfc_bitmap = 0x0;
	bp->dcbx_config_params.admin_priority_app_table[0].valid = 0;
	bp->dcbx_config_params.admin_priority_app_table[1].valid = 0;
	bp->dcbx_config_params.admin_priority_app_table[2].valid = 0;
	bp->dcbx_config_params.admin_priority_app_table[3].valid = 0;
	bp->dcbx_config_params.admin_default_priority = 0;
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
          int _len_bp0 = 1;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dcbx_config_params.admin_dcbx_version = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_ets_willing = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_pfc_willing = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.overwrite_settings = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_ets_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_pfc_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_tc_supported_tx_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_ets_configuration_tx_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_pfc_tx_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_application_priority_tx_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_ets_reco_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_app_priority_willing = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__dcbx_config_params_admin_configuration_bw_precentage0 = 1;
          bp[_i0].dcbx_config_params.admin_configuration_bw_precentage = (int *) malloc(_len_bp__i0__dcbx_config_params_admin_configuration_bw_precentage0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_configuration_bw_precentage0; _j0++) {
            bp[_i0].dcbx_config_params.admin_configuration_bw_precentage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__dcbx_config_params_admin_recommendation_bw_precentage0 = 1;
          bp[_i0].dcbx_config_params.admin_recommendation_bw_precentage = (int *) malloc(_len_bp__i0__dcbx_config_params_admin_recommendation_bw_precentage0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_recommendation_bw_precentage0; _j0++) {
            bp[_i0].dcbx_config_params.admin_recommendation_bw_precentage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__dcbx_config_params_admin_recommendation_ets_pg0 = 1;
          bp[_i0].dcbx_config_params.admin_recommendation_ets_pg = (int *) malloc(_len_bp__i0__dcbx_config_params_admin_recommendation_ets_pg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_recommendation_ets_pg0; _j0++) {
            bp[_i0].dcbx_config_params.admin_recommendation_ets_pg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bp[_i0].dcbx_config_params.admin_pfc_bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_default_priority = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__dcbx_config_params_admin_priority_app_table0 = 1;
          bp[_i0].dcbx_config_params.admin_priority_app_table = (struct TYPE_3__ *) malloc(_len_bp__i0__dcbx_config_params_admin_priority_app_table0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_priority_app_table0; _j0++) {
            bp[_i0].dcbx_config_params.admin_priority_app_table->valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__dcbx_config_params_admin_configuration_ets_pg0 = 1;
          bp[_i0].dcbx_config_params.admin_configuration_ets_pg = (long *) malloc(_len_bp__i0__dcbx_config_params_admin_configuration_ets_pg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_configuration_ets_pg0; _j0++) {
            bp[_i0].dcbx_config_params.admin_configuration_ets_pg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bnx2x_dcbx_init_params(bp);
          free(bp);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_bp0 = 65025;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dcbx_config_params.admin_dcbx_version = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_ets_willing = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_pfc_willing = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.overwrite_settings = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_ets_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_pfc_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_tc_supported_tx_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_ets_configuration_tx_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_pfc_tx_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_application_priority_tx_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_ets_reco_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_app_priority_willing = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__dcbx_config_params_admin_configuration_bw_precentage0 = 1;
          bp[_i0].dcbx_config_params.admin_configuration_bw_precentage = (int *) malloc(_len_bp__i0__dcbx_config_params_admin_configuration_bw_precentage0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_configuration_bw_precentage0; _j0++) {
            bp[_i0].dcbx_config_params.admin_configuration_bw_precentage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__dcbx_config_params_admin_recommendation_bw_precentage0 = 1;
          bp[_i0].dcbx_config_params.admin_recommendation_bw_precentage = (int *) malloc(_len_bp__i0__dcbx_config_params_admin_recommendation_bw_precentage0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_recommendation_bw_precentage0; _j0++) {
            bp[_i0].dcbx_config_params.admin_recommendation_bw_precentage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__dcbx_config_params_admin_recommendation_ets_pg0 = 1;
          bp[_i0].dcbx_config_params.admin_recommendation_ets_pg = (int *) malloc(_len_bp__i0__dcbx_config_params_admin_recommendation_ets_pg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_recommendation_ets_pg0; _j0++) {
            bp[_i0].dcbx_config_params.admin_recommendation_ets_pg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bp[_i0].dcbx_config_params.admin_pfc_bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_default_priority = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__dcbx_config_params_admin_priority_app_table0 = 1;
          bp[_i0].dcbx_config_params.admin_priority_app_table = (struct TYPE_3__ *) malloc(_len_bp__i0__dcbx_config_params_admin_priority_app_table0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_priority_app_table0; _j0++) {
            bp[_i0].dcbx_config_params.admin_priority_app_table->valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__dcbx_config_params_admin_configuration_ets_pg0 = 1;
          bp[_i0].dcbx_config_params.admin_configuration_ets_pg = (long *) malloc(_len_bp__i0__dcbx_config_params_admin_configuration_ets_pg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_configuration_ets_pg0; _j0++) {
            bp[_i0].dcbx_config_params.admin_configuration_ets_pg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bnx2x_dcbx_init_params(bp);
          free(bp);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_bp0 = 100;
          struct bnx2x * bp = (struct bnx2x *) malloc(_len_bp0*sizeof(struct bnx2x));
          for(int _i0 = 0; _i0 < _len_bp0; _i0++) {
            bp[_i0].dcbx_config_params.admin_dcbx_version = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_ets_willing = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_pfc_willing = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.overwrite_settings = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_ets_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_pfc_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_tc_supported_tx_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_ets_configuration_tx_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_pfc_tx_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_application_priority_tx_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_ets_reco_valid = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_app_priority_willing = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__dcbx_config_params_admin_configuration_bw_precentage0 = 1;
          bp[_i0].dcbx_config_params.admin_configuration_bw_precentage = (int *) malloc(_len_bp__i0__dcbx_config_params_admin_configuration_bw_precentage0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_configuration_bw_precentage0; _j0++) {
            bp[_i0].dcbx_config_params.admin_configuration_bw_precentage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__dcbx_config_params_admin_recommendation_bw_precentage0 = 1;
          bp[_i0].dcbx_config_params.admin_recommendation_bw_precentage = (int *) malloc(_len_bp__i0__dcbx_config_params_admin_recommendation_bw_precentage0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_recommendation_bw_precentage0; _j0++) {
            bp[_i0].dcbx_config_params.admin_recommendation_bw_precentage[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__dcbx_config_params_admin_recommendation_ets_pg0 = 1;
          bp[_i0].dcbx_config_params.admin_recommendation_ets_pg = (int *) malloc(_len_bp__i0__dcbx_config_params_admin_recommendation_ets_pg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_recommendation_ets_pg0; _j0++) {
            bp[_i0].dcbx_config_params.admin_recommendation_ets_pg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        bp[_i0].dcbx_config_params.admin_pfc_bitmap = ((-2 * (next_i()%2)) + 1) * next_i();
        bp[_i0].dcbx_config_params.admin_default_priority = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_bp__i0__dcbx_config_params_admin_priority_app_table0 = 1;
          bp[_i0].dcbx_config_params.admin_priority_app_table = (struct TYPE_3__ *) malloc(_len_bp__i0__dcbx_config_params_admin_priority_app_table0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_priority_app_table0; _j0++) {
            bp[_i0].dcbx_config_params.admin_priority_app_table->valid = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_bp__i0__dcbx_config_params_admin_configuration_ets_pg0 = 1;
          bp[_i0].dcbx_config_params.admin_configuration_ets_pg = (long *) malloc(_len_bp__i0__dcbx_config_params_admin_configuration_ets_pg0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_bp__i0__dcbx_config_params_admin_configuration_ets_pg0; _j0++) {
            bp[_i0].dcbx_config_params.admin_configuration_ets_pg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          bnx2x_dcbx_init_params(bp);
          free(bp);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
