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
struct hal_ops {int /*<<< orphan*/  c2h_id_filter_ccx; int /*<<< orphan*/  c2h_handler; int /*<<< orphan*/  hal_reset_security_engine; int /*<<< orphan*/ * hal_notch_filter; int /*<<< orphan*/ * Efuse_WordEnableDataWrite; int /*<<< orphan*/ * Efuse_PgPacketWrite; int /*<<< orphan*/ * Efuse_PgPacketRead; int /*<<< orphan*/ * EfuseGetCurrentSize; int /*<<< orphan*/ * EFUSEGetEfuseDefinition; int /*<<< orphan*/ * ReadEFuse; int /*<<< orphan*/ * EfusePowerSwitch; int /*<<< orphan*/ * write_rfreg; int /*<<< orphan*/ * read_rfreg; int /*<<< orphan*/ * write_bbreg; int /*<<< orphan*/ * read_bbreg; int /*<<< orphan*/ * Add_RateATid; int /*<<< orphan*/ * hal_dm_watchdog; int /*<<< orphan*/ * set_channel_handler; int /*<<< orphan*/ * set_bwmode_handler; int /*<<< orphan*/ * read_chip_version; int /*<<< orphan*/ * dm_deinit; int /*<<< orphan*/ * dm_init; int /*<<< orphan*/ * free_hal_data; } ;

/* Variables and functions */
 int /*<<< orphan*/  PHY_SetBWMode8192C ; 
 int /*<<< orphan*/  PHY_SwChnl8192C ; 
 int /*<<< orphan*/  c2h_handler_8192c ; 
 int /*<<< orphan*/  c2h_id_filter_ccx_8192c ; 
 int /*<<< orphan*/  hal_notch_filter_8192c ; 
 int /*<<< orphan*/  hal_reset_security_engine_8192c ; 
 int /*<<< orphan*/  rtl8192c_Add_RateATid ; 
 int /*<<< orphan*/  rtl8192c_EFUSE_GetEfuseDefinition ; 
 int /*<<< orphan*/  rtl8192c_EfuseGetCurrentSize ; 
 int /*<<< orphan*/  rtl8192c_EfusePowerSwitch ; 
 int /*<<< orphan*/  rtl8192c_Efuse_PgPacketRead ; 
 int /*<<< orphan*/  rtl8192c_Efuse_PgPacketWrite ; 
 int /*<<< orphan*/  rtl8192c_Efuse_WordEnableDataWrite ; 
 int /*<<< orphan*/  rtl8192c_HalDmWatchDog ; 
 int /*<<< orphan*/  rtl8192c_PHY_QueryBBReg ; 
 int /*<<< orphan*/  rtl8192c_PHY_QueryRFReg ; 
 int /*<<< orphan*/  rtl8192c_PHY_SetBBReg ; 
 int /*<<< orphan*/  rtl8192c_PHY_SetRFReg ; 
 int /*<<< orphan*/  rtl8192c_ReadEFuse ; 
 int /*<<< orphan*/  rtl8192c_deinit_dm_priv ; 
 int /*<<< orphan*/  rtl8192c_free_hal_data ; 
 int /*<<< orphan*/  rtl8192c_init_dm_priv ; 
 int /*<<< orphan*/  rtl8192c_read_chip_version ; 

void rtl8192c_set_hal_ops(struct hal_ops *pHalFunc)
{
	pHalFunc->free_hal_data = &rtl8192c_free_hal_data;

	pHalFunc->dm_init = &rtl8192c_init_dm_priv;
	pHalFunc->dm_deinit = &rtl8192c_deinit_dm_priv;
	pHalFunc->read_chip_version = &rtl8192c_read_chip_version;

	pHalFunc->set_bwmode_handler = &PHY_SetBWMode8192C;
	pHalFunc->set_channel_handler = &PHY_SwChnl8192C;

	pHalFunc->hal_dm_watchdog = &rtl8192c_HalDmWatchDog;

	pHalFunc->Add_RateATid = &rtl8192c_Add_RateATid;

#ifdef CONFIG_ANTENNA_DIVERSITY
	pHalFunc->AntDivBeforeLinkHandler = &SwAntDivBeforeLink8192C;
	pHalFunc->AntDivCompareHandler = &SwAntDivCompare8192C;
#endif

	pHalFunc->read_bbreg = &rtl8192c_PHY_QueryBBReg;
	pHalFunc->write_bbreg = &rtl8192c_PHY_SetBBReg;
	pHalFunc->read_rfreg = &rtl8192c_PHY_QueryRFReg;
	pHalFunc->write_rfreg = &rtl8192c_PHY_SetRFReg;

	//Efuse related function
	pHalFunc->EfusePowerSwitch = &rtl8192c_EfusePowerSwitch;
	pHalFunc->ReadEFuse = &rtl8192c_ReadEFuse;
	pHalFunc->EFUSEGetEfuseDefinition = &rtl8192c_EFUSE_GetEfuseDefinition;
	pHalFunc->EfuseGetCurrentSize = &rtl8192c_EfuseGetCurrentSize;
	pHalFunc->Efuse_PgPacketRead = &rtl8192c_Efuse_PgPacketRead;
	pHalFunc->Efuse_PgPacketWrite = &rtl8192c_Efuse_PgPacketWrite;
	pHalFunc->Efuse_WordEnableDataWrite = &rtl8192c_Efuse_WordEnableDataWrite;

#ifdef DBG_CONFIG_ERROR_DETECT
	pHalFunc->sreset_init_value = &sreset_init_value;
	pHalFunc->sreset_reset_value = &sreset_reset_value;	
	pHalFunc->silentreset = &sreset_reset;
	pHalFunc->sreset_xmit_status_check = &rtl8192c_sreset_xmit_status_check;
	pHalFunc->sreset_linked_status_check  = &rtl8192c_sreset_linked_status_check;
	pHalFunc->sreset_get_wifi_status  = &sreset_get_wifi_status;
	pHalFunc->sreset_inprogress= &sreset_inprogress;
#endif

#ifdef CONFIG_IOL
	pHalFunc->IOL_exec_cmds_sync = &rtl8192c_IOL_exec_cmds_sync;
#endif
	pHalFunc->hal_notch_filter = &hal_notch_filter_8192c;
	pHalFunc->hal_reset_security_engine = hal_reset_security_engine_8192c;

	pHalFunc->c2h_handler = c2h_handler_8192c;
	pHalFunc->c2h_id_filter_ccx = c2h_id_filter_ccx_8192c;
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
          int _len_pHalFunc0 = 1;
          struct hal_ops * pHalFunc = (struct hal_ops *) malloc(_len_pHalFunc0*sizeof(struct hal_ops));
          for(int _i0 = 0; _i0 < _len_pHalFunc0; _i0++) {
            pHalFunc[_i0].c2h_id_filter_ccx = ((-2 * (next_i()%2)) + 1) * next_i();
        pHalFunc[_i0].c2h_handler = ((-2 * (next_i()%2)) + 1) * next_i();
        pHalFunc[_i0].hal_reset_security_engine = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pHalFunc__i0__hal_notch_filter0 = 1;
          pHalFunc[_i0].hal_notch_filter = (int *) malloc(_len_pHalFunc__i0__hal_notch_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_notch_filter0; _j0++) {
            pHalFunc[_i0].hal_notch_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Efuse_WordEnableDataWrite0 = 1;
          pHalFunc[_i0].Efuse_WordEnableDataWrite = (int *) malloc(_len_pHalFunc__i0__Efuse_WordEnableDataWrite0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Efuse_WordEnableDataWrite0; _j0++) {
            pHalFunc[_i0].Efuse_WordEnableDataWrite[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Efuse_PgPacketWrite0 = 1;
          pHalFunc[_i0].Efuse_PgPacketWrite = (int *) malloc(_len_pHalFunc__i0__Efuse_PgPacketWrite0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Efuse_PgPacketWrite0; _j0++) {
            pHalFunc[_i0].Efuse_PgPacketWrite[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Efuse_PgPacketRead0 = 1;
          pHalFunc[_i0].Efuse_PgPacketRead = (int *) malloc(_len_pHalFunc__i0__Efuse_PgPacketRead0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Efuse_PgPacketRead0; _j0++) {
            pHalFunc[_i0].Efuse_PgPacketRead[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__EfuseGetCurrentSize0 = 1;
          pHalFunc[_i0].EfuseGetCurrentSize = (int *) malloc(_len_pHalFunc__i0__EfuseGetCurrentSize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__EfuseGetCurrentSize0; _j0++) {
            pHalFunc[_i0].EfuseGetCurrentSize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__EFUSEGetEfuseDefinition0 = 1;
          pHalFunc[_i0].EFUSEGetEfuseDefinition = (int *) malloc(_len_pHalFunc__i0__EFUSEGetEfuseDefinition0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__EFUSEGetEfuseDefinition0; _j0++) {
            pHalFunc[_i0].EFUSEGetEfuseDefinition[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__ReadEFuse0 = 1;
          pHalFunc[_i0].ReadEFuse = (int *) malloc(_len_pHalFunc__i0__ReadEFuse0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__ReadEFuse0; _j0++) {
            pHalFunc[_i0].ReadEFuse[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__EfusePowerSwitch0 = 1;
          pHalFunc[_i0].EfusePowerSwitch = (int *) malloc(_len_pHalFunc__i0__EfusePowerSwitch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__EfusePowerSwitch0; _j0++) {
            pHalFunc[_i0].EfusePowerSwitch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__write_rfreg0 = 1;
          pHalFunc[_i0].write_rfreg = (int *) malloc(_len_pHalFunc__i0__write_rfreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__write_rfreg0; _j0++) {
            pHalFunc[_i0].write_rfreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__read_rfreg0 = 1;
          pHalFunc[_i0].read_rfreg = (int *) malloc(_len_pHalFunc__i0__read_rfreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__read_rfreg0; _j0++) {
            pHalFunc[_i0].read_rfreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__write_bbreg0 = 1;
          pHalFunc[_i0].write_bbreg = (int *) malloc(_len_pHalFunc__i0__write_bbreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__write_bbreg0; _j0++) {
            pHalFunc[_i0].write_bbreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__read_bbreg0 = 1;
          pHalFunc[_i0].read_bbreg = (int *) malloc(_len_pHalFunc__i0__read_bbreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__read_bbreg0; _j0++) {
            pHalFunc[_i0].read_bbreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Add_RateATid0 = 1;
          pHalFunc[_i0].Add_RateATid = (int *) malloc(_len_pHalFunc__i0__Add_RateATid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Add_RateATid0; _j0++) {
            pHalFunc[_i0].Add_RateATid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__hal_dm_watchdog0 = 1;
          pHalFunc[_i0].hal_dm_watchdog = (int *) malloc(_len_pHalFunc__i0__hal_dm_watchdog0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_dm_watchdog0; _j0++) {
            pHalFunc[_i0].hal_dm_watchdog[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__set_channel_handler0 = 1;
          pHalFunc[_i0].set_channel_handler = (int *) malloc(_len_pHalFunc__i0__set_channel_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__set_channel_handler0; _j0++) {
            pHalFunc[_i0].set_channel_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__set_bwmode_handler0 = 1;
          pHalFunc[_i0].set_bwmode_handler = (int *) malloc(_len_pHalFunc__i0__set_bwmode_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__set_bwmode_handler0; _j0++) {
            pHalFunc[_i0].set_bwmode_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__read_chip_version0 = 1;
          pHalFunc[_i0].read_chip_version = (int *) malloc(_len_pHalFunc__i0__read_chip_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__read_chip_version0; _j0++) {
            pHalFunc[_i0].read_chip_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__dm_deinit0 = 1;
          pHalFunc[_i0].dm_deinit = (int *) malloc(_len_pHalFunc__i0__dm_deinit0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__dm_deinit0; _j0++) {
            pHalFunc[_i0].dm_deinit[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__dm_init0 = 1;
          pHalFunc[_i0].dm_init = (int *) malloc(_len_pHalFunc__i0__dm_init0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__dm_init0; _j0++) {
            pHalFunc[_i0].dm_init[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__free_hal_data0 = 1;
          pHalFunc[_i0].free_hal_data = (int *) malloc(_len_pHalFunc__i0__free_hal_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__free_hal_data0; _j0++) {
            pHalFunc[_i0].free_hal_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtl8192c_set_hal_ops(pHalFunc);
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_notch_filter);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Efuse_WordEnableDataWrite);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Efuse_PgPacketWrite);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Efuse_PgPacketRead);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].EfuseGetCurrentSize);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].EFUSEGetEfuseDefinition);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].ReadEFuse);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].EfusePowerSwitch);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].write_rfreg);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].read_rfreg);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].write_bbreg);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].read_bbreg);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Add_RateATid);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_dm_watchdog);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_channel_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_bwmode_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].read_chip_version);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].dm_deinit);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].dm_init);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].free_hal_data);
          }
          free(pHalFunc);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_pHalFunc0 = 65025;
          struct hal_ops * pHalFunc = (struct hal_ops *) malloc(_len_pHalFunc0*sizeof(struct hal_ops));
          for(int _i0 = 0; _i0 < _len_pHalFunc0; _i0++) {
            pHalFunc[_i0].c2h_id_filter_ccx = ((-2 * (next_i()%2)) + 1) * next_i();
        pHalFunc[_i0].c2h_handler = ((-2 * (next_i()%2)) + 1) * next_i();
        pHalFunc[_i0].hal_reset_security_engine = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pHalFunc__i0__hal_notch_filter0 = 1;
          pHalFunc[_i0].hal_notch_filter = (int *) malloc(_len_pHalFunc__i0__hal_notch_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_notch_filter0; _j0++) {
            pHalFunc[_i0].hal_notch_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Efuse_WordEnableDataWrite0 = 1;
          pHalFunc[_i0].Efuse_WordEnableDataWrite = (int *) malloc(_len_pHalFunc__i0__Efuse_WordEnableDataWrite0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Efuse_WordEnableDataWrite0; _j0++) {
            pHalFunc[_i0].Efuse_WordEnableDataWrite[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Efuse_PgPacketWrite0 = 1;
          pHalFunc[_i0].Efuse_PgPacketWrite = (int *) malloc(_len_pHalFunc__i0__Efuse_PgPacketWrite0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Efuse_PgPacketWrite0; _j0++) {
            pHalFunc[_i0].Efuse_PgPacketWrite[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Efuse_PgPacketRead0 = 1;
          pHalFunc[_i0].Efuse_PgPacketRead = (int *) malloc(_len_pHalFunc__i0__Efuse_PgPacketRead0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Efuse_PgPacketRead0; _j0++) {
            pHalFunc[_i0].Efuse_PgPacketRead[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__EfuseGetCurrentSize0 = 1;
          pHalFunc[_i0].EfuseGetCurrentSize = (int *) malloc(_len_pHalFunc__i0__EfuseGetCurrentSize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__EfuseGetCurrentSize0; _j0++) {
            pHalFunc[_i0].EfuseGetCurrentSize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__EFUSEGetEfuseDefinition0 = 1;
          pHalFunc[_i0].EFUSEGetEfuseDefinition = (int *) malloc(_len_pHalFunc__i0__EFUSEGetEfuseDefinition0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__EFUSEGetEfuseDefinition0; _j0++) {
            pHalFunc[_i0].EFUSEGetEfuseDefinition[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__ReadEFuse0 = 1;
          pHalFunc[_i0].ReadEFuse = (int *) malloc(_len_pHalFunc__i0__ReadEFuse0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__ReadEFuse0; _j0++) {
            pHalFunc[_i0].ReadEFuse[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__EfusePowerSwitch0 = 1;
          pHalFunc[_i0].EfusePowerSwitch = (int *) malloc(_len_pHalFunc__i0__EfusePowerSwitch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__EfusePowerSwitch0; _j0++) {
            pHalFunc[_i0].EfusePowerSwitch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__write_rfreg0 = 1;
          pHalFunc[_i0].write_rfreg = (int *) malloc(_len_pHalFunc__i0__write_rfreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__write_rfreg0; _j0++) {
            pHalFunc[_i0].write_rfreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__read_rfreg0 = 1;
          pHalFunc[_i0].read_rfreg = (int *) malloc(_len_pHalFunc__i0__read_rfreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__read_rfreg0; _j0++) {
            pHalFunc[_i0].read_rfreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__write_bbreg0 = 1;
          pHalFunc[_i0].write_bbreg = (int *) malloc(_len_pHalFunc__i0__write_bbreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__write_bbreg0; _j0++) {
            pHalFunc[_i0].write_bbreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__read_bbreg0 = 1;
          pHalFunc[_i0].read_bbreg = (int *) malloc(_len_pHalFunc__i0__read_bbreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__read_bbreg0; _j0++) {
            pHalFunc[_i0].read_bbreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Add_RateATid0 = 1;
          pHalFunc[_i0].Add_RateATid = (int *) malloc(_len_pHalFunc__i0__Add_RateATid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Add_RateATid0; _j0++) {
            pHalFunc[_i0].Add_RateATid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__hal_dm_watchdog0 = 1;
          pHalFunc[_i0].hal_dm_watchdog = (int *) malloc(_len_pHalFunc__i0__hal_dm_watchdog0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_dm_watchdog0; _j0++) {
            pHalFunc[_i0].hal_dm_watchdog[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__set_channel_handler0 = 1;
          pHalFunc[_i0].set_channel_handler = (int *) malloc(_len_pHalFunc__i0__set_channel_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__set_channel_handler0; _j0++) {
            pHalFunc[_i0].set_channel_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__set_bwmode_handler0 = 1;
          pHalFunc[_i0].set_bwmode_handler = (int *) malloc(_len_pHalFunc__i0__set_bwmode_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__set_bwmode_handler0; _j0++) {
            pHalFunc[_i0].set_bwmode_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__read_chip_version0 = 1;
          pHalFunc[_i0].read_chip_version = (int *) malloc(_len_pHalFunc__i0__read_chip_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__read_chip_version0; _j0++) {
            pHalFunc[_i0].read_chip_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__dm_deinit0 = 1;
          pHalFunc[_i0].dm_deinit = (int *) malloc(_len_pHalFunc__i0__dm_deinit0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__dm_deinit0; _j0++) {
            pHalFunc[_i0].dm_deinit[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__dm_init0 = 1;
          pHalFunc[_i0].dm_init = (int *) malloc(_len_pHalFunc__i0__dm_init0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__dm_init0; _j0++) {
            pHalFunc[_i0].dm_init[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__free_hal_data0 = 1;
          pHalFunc[_i0].free_hal_data = (int *) malloc(_len_pHalFunc__i0__free_hal_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__free_hal_data0; _j0++) {
            pHalFunc[_i0].free_hal_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtl8192c_set_hal_ops(pHalFunc);
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_notch_filter);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Efuse_WordEnableDataWrite);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Efuse_PgPacketWrite);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Efuse_PgPacketRead);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].EfuseGetCurrentSize);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].EFUSEGetEfuseDefinition);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].ReadEFuse);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].EfusePowerSwitch);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].write_rfreg);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].read_rfreg);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].write_bbreg);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].read_bbreg);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Add_RateATid);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_dm_watchdog);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_channel_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_bwmode_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].read_chip_version);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].dm_deinit);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].dm_init);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].free_hal_data);
          }
          free(pHalFunc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_pHalFunc0 = 100;
          struct hal_ops * pHalFunc = (struct hal_ops *) malloc(_len_pHalFunc0*sizeof(struct hal_ops));
          for(int _i0 = 0; _i0 < _len_pHalFunc0; _i0++) {
            pHalFunc[_i0].c2h_id_filter_ccx = ((-2 * (next_i()%2)) + 1) * next_i();
        pHalFunc[_i0].c2h_handler = ((-2 * (next_i()%2)) + 1) * next_i();
        pHalFunc[_i0].hal_reset_security_engine = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pHalFunc__i0__hal_notch_filter0 = 1;
          pHalFunc[_i0].hal_notch_filter = (int *) malloc(_len_pHalFunc__i0__hal_notch_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_notch_filter0; _j0++) {
            pHalFunc[_i0].hal_notch_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Efuse_WordEnableDataWrite0 = 1;
          pHalFunc[_i0].Efuse_WordEnableDataWrite = (int *) malloc(_len_pHalFunc__i0__Efuse_WordEnableDataWrite0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Efuse_WordEnableDataWrite0; _j0++) {
            pHalFunc[_i0].Efuse_WordEnableDataWrite[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Efuse_PgPacketWrite0 = 1;
          pHalFunc[_i0].Efuse_PgPacketWrite = (int *) malloc(_len_pHalFunc__i0__Efuse_PgPacketWrite0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Efuse_PgPacketWrite0; _j0++) {
            pHalFunc[_i0].Efuse_PgPacketWrite[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Efuse_PgPacketRead0 = 1;
          pHalFunc[_i0].Efuse_PgPacketRead = (int *) malloc(_len_pHalFunc__i0__Efuse_PgPacketRead0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Efuse_PgPacketRead0; _j0++) {
            pHalFunc[_i0].Efuse_PgPacketRead[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__EfuseGetCurrentSize0 = 1;
          pHalFunc[_i0].EfuseGetCurrentSize = (int *) malloc(_len_pHalFunc__i0__EfuseGetCurrentSize0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__EfuseGetCurrentSize0; _j0++) {
            pHalFunc[_i0].EfuseGetCurrentSize[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__EFUSEGetEfuseDefinition0 = 1;
          pHalFunc[_i0].EFUSEGetEfuseDefinition = (int *) malloc(_len_pHalFunc__i0__EFUSEGetEfuseDefinition0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__EFUSEGetEfuseDefinition0; _j0++) {
            pHalFunc[_i0].EFUSEGetEfuseDefinition[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__ReadEFuse0 = 1;
          pHalFunc[_i0].ReadEFuse = (int *) malloc(_len_pHalFunc__i0__ReadEFuse0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__ReadEFuse0; _j0++) {
            pHalFunc[_i0].ReadEFuse[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__EfusePowerSwitch0 = 1;
          pHalFunc[_i0].EfusePowerSwitch = (int *) malloc(_len_pHalFunc__i0__EfusePowerSwitch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__EfusePowerSwitch0; _j0++) {
            pHalFunc[_i0].EfusePowerSwitch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__write_rfreg0 = 1;
          pHalFunc[_i0].write_rfreg = (int *) malloc(_len_pHalFunc__i0__write_rfreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__write_rfreg0; _j0++) {
            pHalFunc[_i0].write_rfreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__read_rfreg0 = 1;
          pHalFunc[_i0].read_rfreg = (int *) malloc(_len_pHalFunc__i0__read_rfreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__read_rfreg0; _j0++) {
            pHalFunc[_i0].read_rfreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__write_bbreg0 = 1;
          pHalFunc[_i0].write_bbreg = (int *) malloc(_len_pHalFunc__i0__write_bbreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__write_bbreg0; _j0++) {
            pHalFunc[_i0].write_bbreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__read_bbreg0 = 1;
          pHalFunc[_i0].read_bbreg = (int *) malloc(_len_pHalFunc__i0__read_bbreg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__read_bbreg0; _j0++) {
            pHalFunc[_i0].read_bbreg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Add_RateATid0 = 1;
          pHalFunc[_i0].Add_RateATid = (int *) malloc(_len_pHalFunc__i0__Add_RateATid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Add_RateATid0; _j0++) {
            pHalFunc[_i0].Add_RateATid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__hal_dm_watchdog0 = 1;
          pHalFunc[_i0].hal_dm_watchdog = (int *) malloc(_len_pHalFunc__i0__hal_dm_watchdog0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_dm_watchdog0; _j0++) {
            pHalFunc[_i0].hal_dm_watchdog[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__set_channel_handler0 = 1;
          pHalFunc[_i0].set_channel_handler = (int *) malloc(_len_pHalFunc__i0__set_channel_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__set_channel_handler0; _j0++) {
            pHalFunc[_i0].set_channel_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__set_bwmode_handler0 = 1;
          pHalFunc[_i0].set_bwmode_handler = (int *) malloc(_len_pHalFunc__i0__set_bwmode_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__set_bwmode_handler0; _j0++) {
            pHalFunc[_i0].set_bwmode_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__read_chip_version0 = 1;
          pHalFunc[_i0].read_chip_version = (int *) malloc(_len_pHalFunc__i0__read_chip_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__read_chip_version0; _j0++) {
            pHalFunc[_i0].read_chip_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__dm_deinit0 = 1;
          pHalFunc[_i0].dm_deinit = (int *) malloc(_len_pHalFunc__i0__dm_deinit0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__dm_deinit0; _j0++) {
            pHalFunc[_i0].dm_deinit[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__dm_init0 = 1;
          pHalFunc[_i0].dm_init = (int *) malloc(_len_pHalFunc__i0__dm_init0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__dm_init0; _j0++) {
            pHalFunc[_i0].dm_init[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__free_hal_data0 = 1;
          pHalFunc[_i0].free_hal_data = (int *) malloc(_len_pHalFunc__i0__free_hal_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__free_hal_data0; _j0++) {
            pHalFunc[_i0].free_hal_data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          rtl8192c_set_hal_ops(pHalFunc);
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_notch_filter);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Efuse_WordEnableDataWrite);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Efuse_PgPacketWrite);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Efuse_PgPacketRead);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].EfuseGetCurrentSize);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].EFUSEGetEfuseDefinition);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].ReadEFuse);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].EfusePowerSwitch);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].write_rfreg);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].read_rfreg);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].write_bbreg);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].read_bbreg);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Add_RateATid);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_dm_watchdog);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_channel_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_bwmode_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].read_chip_version);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].dm_deinit);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].dm_init);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].free_hal_data);
          }
          free(pHalFunc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
