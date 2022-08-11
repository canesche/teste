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
struct hal_ops {int /*<<< orphan*/ * fill_h2c_cmd; int /*<<< orphan*/  c2h_id_filter_ccx; int /*<<< orphan*/  c2h_handler; int /*<<< orphan*/ * hal_notch_filter; int /*<<< orphan*/ * xmit_thread_handler; int /*<<< orphan*/ * SetHalODMVarHandler; int /*<<< orphan*/ * GetHalODMVarHandler; int /*<<< orphan*/ * Efuse_PgPacketWrite_BT; int /*<<< orphan*/ * Efuse_WordEnableDataWrite; int /*<<< orphan*/ * Efuse_PgPacketWrite; int /*<<< orphan*/ * Efuse_PgPacketRead; int /*<<< orphan*/ * EfuseGetCurrentSize; int /*<<< orphan*/ * EFUSEGetEfuseDefinition; int /*<<< orphan*/ * ReadEFuse; int /*<<< orphan*/ * EfusePowerSwitch; int /*<<< orphan*/ * BTEfusePowerSwitch; int /*<<< orphan*/ * write_rfreg; int /*<<< orphan*/ * read_rfreg; int /*<<< orphan*/ * write_bbreg; int /*<<< orphan*/ * read_bbreg; int /*<<< orphan*/ * cancel_thread; int /*<<< orphan*/ * run_thread; int /*<<< orphan*/ * Add_RateATid; int /*<<< orphan*/ * SetBeaconRelatedRegistersHandler; int /*<<< orphan*/ * hal_dm_watchdog_in_lps; int /*<<< orphan*/ * hal_dm_watchdog; int /*<<< orphan*/ * get_tx_power_level_handler; int /*<<< orphan*/ * set_tx_power_level_handler; int /*<<< orphan*/ * set_chnl_bw_handler; int /*<<< orphan*/ * set_channel_handler; int /*<<< orphan*/ * set_bwmode_handler; int /*<<< orphan*/ * UpdateRAMaskHandler; int /*<<< orphan*/ * read_chip_version; int /*<<< orphan*/ * dm_init; int /*<<< orphan*/ * free_hal_data; } ;

/* Variables and functions */
 int /*<<< orphan*/  FillH2CCmd8723B ; 
 int /*<<< orphan*/  Hal_BT_EfusePowerSwitch ; 
 int /*<<< orphan*/  Hal_EfuseGetCurrentSize ; 
 int /*<<< orphan*/  Hal_EfusePgPacketRead ; 
 int /*<<< orphan*/  Hal_EfusePgPacketWrite ; 
 int /*<<< orphan*/  Hal_EfusePgPacketWrite_BT ; 
 int /*<<< orphan*/  Hal_EfusePowerSwitch ; 
 int /*<<< orphan*/  Hal_EfuseWordEnableDataWrite ; 
 int /*<<< orphan*/  Hal_GetEfuseDefinition ; 
 int /*<<< orphan*/  Hal_ReadEFuse ; 
 int /*<<< orphan*/  PHY_GetTxPowerLevel8723B ; 
 int /*<<< orphan*/  PHY_QueryBBReg_8723B ; 
 int /*<<< orphan*/  PHY_QueryRFReg_8723B ; 
 int /*<<< orphan*/  PHY_SetBBReg_8723B ; 
 int /*<<< orphan*/  PHY_SetBWMode8723B ; 
 int /*<<< orphan*/  PHY_SetRFReg_8723B ; 
 int /*<<< orphan*/  PHY_SetSwChnlBWMode8723B ; 
 int /*<<< orphan*/  PHY_SetTxPowerLevel8723B ; 
 int /*<<< orphan*/  PHY_SwChnl8723B ; 
 int /*<<< orphan*/  UpdateHalRAMask8723B ; 
 int /*<<< orphan*/  c2h_handler_8723b ; 
 int /*<<< orphan*/  c2h_id_filter_ccx_8723b ; 
 int /*<<< orphan*/  hal_notch_filter_8723b ; 
 int /*<<< orphan*/  hal_xmit_handler ; 
 int /*<<< orphan*/  rtl8723b_Add_RateATid ; 
 int /*<<< orphan*/  rtl8723b_GetHalODMVar ; 
 int /*<<< orphan*/  rtl8723b_HalDmWatchDog ; 
 int /*<<< orphan*/  rtl8723b_HalDmWatchDog_in_LPS ; 
 int /*<<< orphan*/  rtl8723b_SetBeaconRelatedRegisters ; 
 int /*<<< orphan*/  rtl8723b_SetHalODMVar ; 
 int /*<<< orphan*/  rtl8723b_free_hal_data ; 
 int /*<<< orphan*/  rtl8723b_init_dm_priv ; 
 int /*<<< orphan*/  rtl8723b_read_chip_version ; 
 int /*<<< orphan*/  rtl8723b_start_thread ; 
 int /*<<< orphan*/  rtl8723b_stop_thread ; 

void rtl8723b_set_hal_ops(struct hal_ops *pHalFunc)
{
	pHalFunc->free_hal_data = &rtl8723b_free_hal_data;

	pHalFunc->dm_init = &rtl8723b_init_dm_priv;

	pHalFunc->read_chip_version = &rtl8723b_read_chip_version;

	pHalFunc->UpdateRAMaskHandler = &UpdateHalRAMask8723B;

	pHalFunc->set_bwmode_handler = &PHY_SetBWMode8723B;
	pHalFunc->set_channel_handler = &PHY_SwChnl8723B;
	pHalFunc->set_chnl_bw_handler = &PHY_SetSwChnlBWMode8723B;

	pHalFunc->set_tx_power_level_handler = &PHY_SetTxPowerLevel8723B;
	pHalFunc->get_tx_power_level_handler = &PHY_GetTxPowerLevel8723B;

	pHalFunc->hal_dm_watchdog = &rtl8723b_HalDmWatchDog;
	pHalFunc->hal_dm_watchdog_in_lps = &rtl8723b_HalDmWatchDog_in_LPS;


	pHalFunc->SetBeaconRelatedRegistersHandler = &rtl8723b_SetBeaconRelatedRegisters;

	pHalFunc->Add_RateATid = &rtl8723b_Add_RateATid;

	pHalFunc->run_thread = &rtl8723b_start_thread;
	pHalFunc->cancel_thread = &rtl8723b_stop_thread;

	pHalFunc->read_bbreg = &PHY_QueryBBReg_8723B;
	pHalFunc->write_bbreg = &PHY_SetBBReg_8723B;
	pHalFunc->read_rfreg = &PHY_QueryRFReg_8723B;
	pHalFunc->write_rfreg = &PHY_SetRFReg_8723B;

	/*  Efuse related function */
	pHalFunc->BTEfusePowerSwitch = &Hal_BT_EfusePowerSwitch;
	pHalFunc->EfusePowerSwitch = &Hal_EfusePowerSwitch;
	pHalFunc->ReadEFuse = &Hal_ReadEFuse;
	pHalFunc->EFUSEGetEfuseDefinition = &Hal_GetEfuseDefinition;
	pHalFunc->EfuseGetCurrentSize = &Hal_EfuseGetCurrentSize;
	pHalFunc->Efuse_PgPacketRead = &Hal_EfusePgPacketRead;
	pHalFunc->Efuse_PgPacketWrite = &Hal_EfusePgPacketWrite;
	pHalFunc->Efuse_WordEnableDataWrite = &Hal_EfuseWordEnableDataWrite;
	pHalFunc->Efuse_PgPacketWrite_BT = &Hal_EfusePgPacketWrite_BT;

	pHalFunc->GetHalODMVarHandler = &rtl8723b_GetHalODMVar;
	pHalFunc->SetHalODMVarHandler = &rtl8723b_SetHalODMVar;

	pHalFunc->xmit_thread_handler = &hal_xmit_handler;
	pHalFunc->hal_notch_filter = &hal_notch_filter_8723b;

	pHalFunc->c2h_handler = c2h_handler_8723b;
	pHalFunc->c2h_id_filter_ccx = c2h_id_filter_ccx_8723b;

	pHalFunc->fill_h2c_cmd = &FillH2CCmd8723B;
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
              int _len_pHalFunc__i0__fill_h2c_cmd0 = 1;
          pHalFunc[_i0].fill_h2c_cmd = (int *) malloc(_len_pHalFunc__i0__fill_h2c_cmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__fill_h2c_cmd0; _j0++) {
            pHalFunc[_i0].fill_h2c_cmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pHalFunc[_i0].c2h_id_filter_ccx = ((-2 * (next_i()%2)) + 1) * next_i();
        pHalFunc[_i0].c2h_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pHalFunc__i0__hal_notch_filter0 = 1;
          pHalFunc[_i0].hal_notch_filter = (int *) malloc(_len_pHalFunc__i0__hal_notch_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_notch_filter0; _j0++) {
            pHalFunc[_i0].hal_notch_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__xmit_thread_handler0 = 1;
          pHalFunc[_i0].xmit_thread_handler = (int *) malloc(_len_pHalFunc__i0__xmit_thread_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__xmit_thread_handler0; _j0++) {
            pHalFunc[_i0].xmit_thread_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__SetHalODMVarHandler0 = 1;
          pHalFunc[_i0].SetHalODMVarHandler = (int *) malloc(_len_pHalFunc__i0__SetHalODMVarHandler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__SetHalODMVarHandler0; _j0++) {
            pHalFunc[_i0].SetHalODMVarHandler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__GetHalODMVarHandler0 = 1;
          pHalFunc[_i0].GetHalODMVarHandler = (int *) malloc(_len_pHalFunc__i0__GetHalODMVarHandler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__GetHalODMVarHandler0; _j0++) {
            pHalFunc[_i0].GetHalODMVarHandler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Efuse_PgPacketWrite_BT0 = 1;
          pHalFunc[_i0].Efuse_PgPacketWrite_BT = (int *) malloc(_len_pHalFunc__i0__Efuse_PgPacketWrite_BT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Efuse_PgPacketWrite_BT0; _j0++) {
            pHalFunc[_i0].Efuse_PgPacketWrite_BT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int _len_pHalFunc__i0__BTEfusePowerSwitch0 = 1;
          pHalFunc[_i0].BTEfusePowerSwitch = (int *) malloc(_len_pHalFunc__i0__BTEfusePowerSwitch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__BTEfusePowerSwitch0; _j0++) {
            pHalFunc[_i0].BTEfusePowerSwitch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int _len_pHalFunc__i0__cancel_thread0 = 1;
          pHalFunc[_i0].cancel_thread = (int *) malloc(_len_pHalFunc__i0__cancel_thread0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__cancel_thread0; _j0++) {
            pHalFunc[_i0].cancel_thread[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__run_thread0 = 1;
          pHalFunc[_i0].run_thread = (int *) malloc(_len_pHalFunc__i0__run_thread0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__run_thread0; _j0++) {
            pHalFunc[_i0].run_thread[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Add_RateATid0 = 1;
          pHalFunc[_i0].Add_RateATid = (int *) malloc(_len_pHalFunc__i0__Add_RateATid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Add_RateATid0; _j0++) {
            pHalFunc[_i0].Add_RateATid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__SetBeaconRelatedRegistersHandler0 = 1;
          pHalFunc[_i0].SetBeaconRelatedRegistersHandler = (int *) malloc(_len_pHalFunc__i0__SetBeaconRelatedRegistersHandler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__SetBeaconRelatedRegistersHandler0; _j0++) {
            pHalFunc[_i0].SetBeaconRelatedRegistersHandler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__hal_dm_watchdog_in_lps0 = 1;
          pHalFunc[_i0].hal_dm_watchdog_in_lps = (int *) malloc(_len_pHalFunc__i0__hal_dm_watchdog_in_lps0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_dm_watchdog_in_lps0; _j0++) {
            pHalFunc[_i0].hal_dm_watchdog_in_lps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__hal_dm_watchdog0 = 1;
          pHalFunc[_i0].hal_dm_watchdog = (int *) malloc(_len_pHalFunc__i0__hal_dm_watchdog0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_dm_watchdog0; _j0++) {
            pHalFunc[_i0].hal_dm_watchdog[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__get_tx_power_level_handler0 = 1;
          pHalFunc[_i0].get_tx_power_level_handler = (int *) malloc(_len_pHalFunc__i0__get_tx_power_level_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__get_tx_power_level_handler0; _j0++) {
            pHalFunc[_i0].get_tx_power_level_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__set_tx_power_level_handler0 = 1;
          pHalFunc[_i0].set_tx_power_level_handler = (int *) malloc(_len_pHalFunc__i0__set_tx_power_level_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__set_tx_power_level_handler0; _j0++) {
            pHalFunc[_i0].set_tx_power_level_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__set_chnl_bw_handler0 = 1;
          pHalFunc[_i0].set_chnl_bw_handler = (int *) malloc(_len_pHalFunc__i0__set_chnl_bw_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__set_chnl_bw_handler0; _j0++) {
            pHalFunc[_i0].set_chnl_bw_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int _len_pHalFunc__i0__UpdateRAMaskHandler0 = 1;
          pHalFunc[_i0].UpdateRAMaskHandler = (int *) malloc(_len_pHalFunc__i0__UpdateRAMaskHandler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__UpdateRAMaskHandler0; _j0++) {
            pHalFunc[_i0].UpdateRAMaskHandler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__read_chip_version0 = 1;
          pHalFunc[_i0].read_chip_version = (int *) malloc(_len_pHalFunc__i0__read_chip_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__read_chip_version0; _j0++) {
            pHalFunc[_i0].read_chip_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          rtl8723b_set_hal_ops(pHalFunc);
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].fill_h2c_cmd);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_notch_filter);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].xmit_thread_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].SetHalODMVarHandler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].GetHalODMVarHandler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Efuse_PgPacketWrite_BT);
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
          free(pHalFunc[_aux].BTEfusePowerSwitch);
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
          free(pHalFunc[_aux].cancel_thread);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].run_thread);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Add_RateATid);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].SetBeaconRelatedRegistersHandler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_dm_watchdog_in_lps);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_dm_watchdog);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].get_tx_power_level_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_tx_power_level_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_chnl_bw_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_channel_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_bwmode_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].UpdateRAMaskHandler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].read_chip_version);
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
              int _len_pHalFunc__i0__fill_h2c_cmd0 = 1;
          pHalFunc[_i0].fill_h2c_cmd = (int *) malloc(_len_pHalFunc__i0__fill_h2c_cmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__fill_h2c_cmd0; _j0++) {
            pHalFunc[_i0].fill_h2c_cmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pHalFunc[_i0].c2h_id_filter_ccx = ((-2 * (next_i()%2)) + 1) * next_i();
        pHalFunc[_i0].c2h_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pHalFunc__i0__hal_notch_filter0 = 1;
          pHalFunc[_i0].hal_notch_filter = (int *) malloc(_len_pHalFunc__i0__hal_notch_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_notch_filter0; _j0++) {
            pHalFunc[_i0].hal_notch_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__xmit_thread_handler0 = 1;
          pHalFunc[_i0].xmit_thread_handler = (int *) malloc(_len_pHalFunc__i0__xmit_thread_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__xmit_thread_handler0; _j0++) {
            pHalFunc[_i0].xmit_thread_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__SetHalODMVarHandler0 = 1;
          pHalFunc[_i0].SetHalODMVarHandler = (int *) malloc(_len_pHalFunc__i0__SetHalODMVarHandler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__SetHalODMVarHandler0; _j0++) {
            pHalFunc[_i0].SetHalODMVarHandler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__GetHalODMVarHandler0 = 1;
          pHalFunc[_i0].GetHalODMVarHandler = (int *) malloc(_len_pHalFunc__i0__GetHalODMVarHandler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__GetHalODMVarHandler0; _j0++) {
            pHalFunc[_i0].GetHalODMVarHandler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Efuse_PgPacketWrite_BT0 = 1;
          pHalFunc[_i0].Efuse_PgPacketWrite_BT = (int *) malloc(_len_pHalFunc__i0__Efuse_PgPacketWrite_BT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Efuse_PgPacketWrite_BT0; _j0++) {
            pHalFunc[_i0].Efuse_PgPacketWrite_BT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int _len_pHalFunc__i0__BTEfusePowerSwitch0 = 1;
          pHalFunc[_i0].BTEfusePowerSwitch = (int *) malloc(_len_pHalFunc__i0__BTEfusePowerSwitch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__BTEfusePowerSwitch0; _j0++) {
            pHalFunc[_i0].BTEfusePowerSwitch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int _len_pHalFunc__i0__cancel_thread0 = 1;
          pHalFunc[_i0].cancel_thread = (int *) malloc(_len_pHalFunc__i0__cancel_thread0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__cancel_thread0; _j0++) {
            pHalFunc[_i0].cancel_thread[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__run_thread0 = 1;
          pHalFunc[_i0].run_thread = (int *) malloc(_len_pHalFunc__i0__run_thread0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__run_thread0; _j0++) {
            pHalFunc[_i0].run_thread[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Add_RateATid0 = 1;
          pHalFunc[_i0].Add_RateATid = (int *) malloc(_len_pHalFunc__i0__Add_RateATid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Add_RateATid0; _j0++) {
            pHalFunc[_i0].Add_RateATid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__SetBeaconRelatedRegistersHandler0 = 1;
          pHalFunc[_i0].SetBeaconRelatedRegistersHandler = (int *) malloc(_len_pHalFunc__i0__SetBeaconRelatedRegistersHandler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__SetBeaconRelatedRegistersHandler0; _j0++) {
            pHalFunc[_i0].SetBeaconRelatedRegistersHandler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__hal_dm_watchdog_in_lps0 = 1;
          pHalFunc[_i0].hal_dm_watchdog_in_lps = (int *) malloc(_len_pHalFunc__i0__hal_dm_watchdog_in_lps0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_dm_watchdog_in_lps0; _j0++) {
            pHalFunc[_i0].hal_dm_watchdog_in_lps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__hal_dm_watchdog0 = 1;
          pHalFunc[_i0].hal_dm_watchdog = (int *) malloc(_len_pHalFunc__i0__hal_dm_watchdog0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_dm_watchdog0; _j0++) {
            pHalFunc[_i0].hal_dm_watchdog[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__get_tx_power_level_handler0 = 1;
          pHalFunc[_i0].get_tx_power_level_handler = (int *) malloc(_len_pHalFunc__i0__get_tx_power_level_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__get_tx_power_level_handler0; _j0++) {
            pHalFunc[_i0].get_tx_power_level_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__set_tx_power_level_handler0 = 1;
          pHalFunc[_i0].set_tx_power_level_handler = (int *) malloc(_len_pHalFunc__i0__set_tx_power_level_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__set_tx_power_level_handler0; _j0++) {
            pHalFunc[_i0].set_tx_power_level_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__set_chnl_bw_handler0 = 1;
          pHalFunc[_i0].set_chnl_bw_handler = (int *) malloc(_len_pHalFunc__i0__set_chnl_bw_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__set_chnl_bw_handler0; _j0++) {
            pHalFunc[_i0].set_chnl_bw_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int _len_pHalFunc__i0__UpdateRAMaskHandler0 = 1;
          pHalFunc[_i0].UpdateRAMaskHandler = (int *) malloc(_len_pHalFunc__i0__UpdateRAMaskHandler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__UpdateRAMaskHandler0; _j0++) {
            pHalFunc[_i0].UpdateRAMaskHandler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__read_chip_version0 = 1;
          pHalFunc[_i0].read_chip_version = (int *) malloc(_len_pHalFunc__i0__read_chip_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__read_chip_version0; _j0++) {
            pHalFunc[_i0].read_chip_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          rtl8723b_set_hal_ops(pHalFunc);
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].fill_h2c_cmd);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_notch_filter);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].xmit_thread_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].SetHalODMVarHandler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].GetHalODMVarHandler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Efuse_PgPacketWrite_BT);
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
          free(pHalFunc[_aux].BTEfusePowerSwitch);
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
          free(pHalFunc[_aux].cancel_thread);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].run_thread);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Add_RateATid);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].SetBeaconRelatedRegistersHandler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_dm_watchdog_in_lps);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_dm_watchdog);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].get_tx_power_level_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_tx_power_level_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_chnl_bw_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_channel_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_bwmode_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].UpdateRAMaskHandler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].read_chip_version);
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
              int _len_pHalFunc__i0__fill_h2c_cmd0 = 1;
          pHalFunc[_i0].fill_h2c_cmd = (int *) malloc(_len_pHalFunc__i0__fill_h2c_cmd0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__fill_h2c_cmd0; _j0++) {
            pHalFunc[_i0].fill_h2c_cmd[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        pHalFunc[_i0].c2h_id_filter_ccx = ((-2 * (next_i()%2)) + 1) * next_i();
        pHalFunc[_i0].c2h_handler = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pHalFunc__i0__hal_notch_filter0 = 1;
          pHalFunc[_i0].hal_notch_filter = (int *) malloc(_len_pHalFunc__i0__hal_notch_filter0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_notch_filter0; _j0++) {
            pHalFunc[_i0].hal_notch_filter[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__xmit_thread_handler0 = 1;
          pHalFunc[_i0].xmit_thread_handler = (int *) malloc(_len_pHalFunc__i0__xmit_thread_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__xmit_thread_handler0; _j0++) {
            pHalFunc[_i0].xmit_thread_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__SetHalODMVarHandler0 = 1;
          pHalFunc[_i0].SetHalODMVarHandler = (int *) malloc(_len_pHalFunc__i0__SetHalODMVarHandler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__SetHalODMVarHandler0; _j0++) {
            pHalFunc[_i0].SetHalODMVarHandler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__GetHalODMVarHandler0 = 1;
          pHalFunc[_i0].GetHalODMVarHandler = (int *) malloc(_len_pHalFunc__i0__GetHalODMVarHandler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__GetHalODMVarHandler0; _j0++) {
            pHalFunc[_i0].GetHalODMVarHandler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Efuse_PgPacketWrite_BT0 = 1;
          pHalFunc[_i0].Efuse_PgPacketWrite_BT = (int *) malloc(_len_pHalFunc__i0__Efuse_PgPacketWrite_BT0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Efuse_PgPacketWrite_BT0; _j0++) {
            pHalFunc[_i0].Efuse_PgPacketWrite_BT[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int _len_pHalFunc__i0__BTEfusePowerSwitch0 = 1;
          pHalFunc[_i0].BTEfusePowerSwitch = (int *) malloc(_len_pHalFunc__i0__BTEfusePowerSwitch0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__BTEfusePowerSwitch0; _j0++) {
            pHalFunc[_i0].BTEfusePowerSwitch[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int _len_pHalFunc__i0__cancel_thread0 = 1;
          pHalFunc[_i0].cancel_thread = (int *) malloc(_len_pHalFunc__i0__cancel_thread0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__cancel_thread0; _j0++) {
            pHalFunc[_i0].cancel_thread[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__run_thread0 = 1;
          pHalFunc[_i0].run_thread = (int *) malloc(_len_pHalFunc__i0__run_thread0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__run_thread0; _j0++) {
            pHalFunc[_i0].run_thread[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__Add_RateATid0 = 1;
          pHalFunc[_i0].Add_RateATid = (int *) malloc(_len_pHalFunc__i0__Add_RateATid0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__Add_RateATid0; _j0++) {
            pHalFunc[_i0].Add_RateATid[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__SetBeaconRelatedRegistersHandler0 = 1;
          pHalFunc[_i0].SetBeaconRelatedRegistersHandler = (int *) malloc(_len_pHalFunc__i0__SetBeaconRelatedRegistersHandler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__SetBeaconRelatedRegistersHandler0; _j0++) {
            pHalFunc[_i0].SetBeaconRelatedRegistersHandler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__hal_dm_watchdog_in_lps0 = 1;
          pHalFunc[_i0].hal_dm_watchdog_in_lps = (int *) malloc(_len_pHalFunc__i0__hal_dm_watchdog_in_lps0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_dm_watchdog_in_lps0; _j0++) {
            pHalFunc[_i0].hal_dm_watchdog_in_lps[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__hal_dm_watchdog0 = 1;
          pHalFunc[_i0].hal_dm_watchdog = (int *) malloc(_len_pHalFunc__i0__hal_dm_watchdog0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__hal_dm_watchdog0; _j0++) {
            pHalFunc[_i0].hal_dm_watchdog[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__get_tx_power_level_handler0 = 1;
          pHalFunc[_i0].get_tx_power_level_handler = (int *) malloc(_len_pHalFunc__i0__get_tx_power_level_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__get_tx_power_level_handler0; _j0++) {
            pHalFunc[_i0].get_tx_power_level_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__set_tx_power_level_handler0 = 1;
          pHalFunc[_i0].set_tx_power_level_handler = (int *) malloc(_len_pHalFunc__i0__set_tx_power_level_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__set_tx_power_level_handler0; _j0++) {
            pHalFunc[_i0].set_tx_power_level_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__set_chnl_bw_handler0 = 1;
          pHalFunc[_i0].set_chnl_bw_handler = (int *) malloc(_len_pHalFunc__i0__set_chnl_bw_handler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__set_chnl_bw_handler0; _j0++) {
            pHalFunc[_i0].set_chnl_bw_handler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          int _len_pHalFunc__i0__UpdateRAMaskHandler0 = 1;
          pHalFunc[_i0].UpdateRAMaskHandler = (int *) malloc(_len_pHalFunc__i0__UpdateRAMaskHandler0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__UpdateRAMaskHandler0; _j0++) {
            pHalFunc[_i0].UpdateRAMaskHandler[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_pHalFunc__i0__read_chip_version0 = 1;
          pHalFunc[_i0].read_chip_version = (int *) malloc(_len_pHalFunc__i0__read_chip_version0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_pHalFunc__i0__read_chip_version0; _j0++) {
            pHalFunc[_i0].read_chip_version[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
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
          rtl8723b_set_hal_ops(pHalFunc);
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].fill_h2c_cmd);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_notch_filter);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].xmit_thread_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].SetHalODMVarHandler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].GetHalODMVarHandler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Efuse_PgPacketWrite_BT);
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
          free(pHalFunc[_aux].BTEfusePowerSwitch);
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
          free(pHalFunc[_aux].cancel_thread);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].run_thread);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].Add_RateATid);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].SetBeaconRelatedRegistersHandler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_dm_watchdog_in_lps);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].hal_dm_watchdog);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].get_tx_power_level_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_tx_power_level_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_chnl_bw_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_channel_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].set_bwmode_handler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].UpdateRAMaskHandler);
          }
          for(int _aux = 0; _aux < _len_pHalFunc0; _aux++) {
          free(pHalFunc[_aux].read_chip_version);
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
