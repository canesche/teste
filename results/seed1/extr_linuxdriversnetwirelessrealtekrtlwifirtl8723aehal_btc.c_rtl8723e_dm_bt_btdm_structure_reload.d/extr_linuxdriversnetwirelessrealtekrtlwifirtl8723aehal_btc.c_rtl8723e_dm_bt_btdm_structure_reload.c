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
struct ieee80211_hw {int dummy; } ;
struct btdm_8723 {int all_off; int agc_table_en; int adc_back_off_on; int b2_ant_hid_en; int low_penalty_rate_adaptive; int rf_rx_lpf_shrink; int reject_aggre_pkt; int tdma_on; int fw_dac_swing_lvl; int tra_tdma_on; int ignore_wlan_act; int ps_tdma_on; int* ps_tdma_byte; int pta_on; int val_0x6c0; int val_0x6c8; int val_0x6cc; int sw_dac_swing_on; int sw_dac_swing_lvl; int wlan_act_hi; int wlan_act_lo; int bt_retry_index; int dec_bt_pwr; void* tra_tdma_nav; void* tra_tdma_ant; int /*<<< orphan*/  tdma_dac_swing; void* tdma_nav; void* tdma_ant; } ;

/* Variables and functions */
 void* TDMA_2ANT ; 
 int /*<<< orphan*/  TDMA_DAC_SWING_OFF ; 
 void* TDMA_NAV_OFF ; 

__attribute__((used)) static void rtl8723e_dm_bt_btdm_structure_reload(struct ieee80211_hw *hw,
						 struct btdm_8723 *btdm)
{
	btdm->all_off = false;
	btdm->agc_table_en = false;
	btdm->adc_back_off_on = false;
	btdm->b2_ant_hid_en = false;
	btdm->low_penalty_rate_adaptive = false;
	btdm->rf_rx_lpf_shrink = false;
	btdm->reject_aggre_pkt = false;

	btdm->tdma_on = false;
	btdm->tdma_ant = TDMA_2ANT;
	btdm->tdma_nav = TDMA_NAV_OFF;
	btdm->tdma_dac_swing = TDMA_DAC_SWING_OFF;
	btdm->fw_dac_swing_lvl = 0x20;

	btdm->tra_tdma_on = false;
	btdm->tra_tdma_ant = TDMA_2ANT;
	btdm->tra_tdma_nav = TDMA_NAV_OFF;
	btdm->ignore_wlan_act = false;

	btdm->ps_tdma_on = false;
	btdm->ps_tdma_byte[0] = 0x0;
	btdm->ps_tdma_byte[1] = 0x0;
	btdm->ps_tdma_byte[2] = 0x0;
	btdm->ps_tdma_byte[3] = 0x8;
	btdm->ps_tdma_byte[4] = 0x0;

	btdm->pta_on = true;
	btdm->val_0x6c0 = 0x5a5aaaaa;
	btdm->val_0x6c8 = 0xcc;
	btdm->val_0x6cc = 0x3;

	btdm->sw_dac_swing_on = false;
	btdm->sw_dac_swing_lvl = 0xc0;
	btdm->wlan_act_hi = 0x20;
	btdm->wlan_act_lo = 0x10;
	btdm->bt_retry_index = 2;

	btdm->dec_bt_pwr = false;
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
          int _len_hw0 = 1;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_btdm0 = 1;
          struct btdm_8723 * btdm = (struct btdm_8723 *) malloc(_len_btdm0*sizeof(struct btdm_8723));
          for(int _i0 = 0; _i0 < _len_btdm0; _i0++) {
            btdm[_i0].all_off = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].agc_table_en = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].adc_back_off_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].b2_ant_hid_en = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].low_penalty_rate_adaptive = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].rf_rx_lpf_shrink = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].reject_aggre_pkt = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].tdma_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].fw_dac_swing_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].tra_tdma_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].ignore_wlan_act = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].ps_tdma_on = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_btdm__i0__ps_tdma_byte0 = 1;
          btdm[_i0].ps_tdma_byte = (int *) malloc(_len_btdm__i0__ps_tdma_byte0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_btdm__i0__ps_tdma_byte0; _j0++) {
            btdm[_i0].ps_tdma_byte[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        btdm[_i0].pta_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].val_0x6c0 = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].val_0x6c8 = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].val_0x6cc = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].sw_dac_swing_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].sw_dac_swing_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].wlan_act_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].wlan_act_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].bt_retry_index = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].dec_bt_pwr = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].tdma_dac_swing = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtl8723e_dm_bt_btdm_structure_reload(hw,btdm);
          free(hw);
          for(int _aux = 0; _aux < _len_btdm0; _aux++) {
          free(btdm[_aux].ps_tdma_byte);
          }
          free(btdm);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hw0 = 65025;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_btdm0 = 65025;
          struct btdm_8723 * btdm = (struct btdm_8723 *) malloc(_len_btdm0*sizeof(struct btdm_8723));
          for(int _i0 = 0; _i0 < _len_btdm0; _i0++) {
            btdm[_i0].all_off = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].agc_table_en = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].adc_back_off_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].b2_ant_hid_en = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].low_penalty_rate_adaptive = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].rf_rx_lpf_shrink = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].reject_aggre_pkt = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].tdma_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].fw_dac_swing_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].tra_tdma_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].ignore_wlan_act = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].ps_tdma_on = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_btdm__i0__ps_tdma_byte0 = 1;
          btdm[_i0].ps_tdma_byte = (int *) malloc(_len_btdm__i0__ps_tdma_byte0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_btdm__i0__ps_tdma_byte0; _j0++) {
            btdm[_i0].ps_tdma_byte[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        btdm[_i0].pta_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].val_0x6c0 = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].val_0x6c8 = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].val_0x6cc = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].sw_dac_swing_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].sw_dac_swing_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].wlan_act_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].wlan_act_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].bt_retry_index = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].dec_bt_pwr = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].tdma_dac_swing = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtl8723e_dm_bt_btdm_structure_reload(hw,btdm);
          free(hw);
          for(int _aux = 0; _aux < _len_btdm0; _aux++) {
          free(btdm[_aux].ps_tdma_byte);
          }
          free(btdm);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hw0 = 100;
          struct ieee80211_hw * hw = (struct ieee80211_hw *) malloc(_len_hw0*sizeof(struct ieee80211_hw));
          for(int _i0 = 0; _i0 < _len_hw0; _i0++) {
            hw[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_btdm0 = 100;
          struct btdm_8723 * btdm = (struct btdm_8723 *) malloc(_len_btdm0*sizeof(struct btdm_8723));
          for(int _i0 = 0; _i0 < _len_btdm0; _i0++) {
            btdm[_i0].all_off = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].agc_table_en = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].adc_back_off_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].b2_ant_hid_en = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].low_penalty_rate_adaptive = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].rf_rx_lpf_shrink = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].reject_aggre_pkt = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].tdma_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].fw_dac_swing_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].tra_tdma_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].ignore_wlan_act = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].ps_tdma_on = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_btdm__i0__ps_tdma_byte0 = 1;
          btdm[_i0].ps_tdma_byte = (int *) malloc(_len_btdm__i0__ps_tdma_byte0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_btdm__i0__ps_tdma_byte0; _j0++) {
            btdm[_i0].ps_tdma_byte[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        btdm[_i0].pta_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].val_0x6c0 = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].val_0x6c8 = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].val_0x6cc = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].sw_dac_swing_on = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].sw_dac_swing_lvl = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].wlan_act_hi = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].wlan_act_lo = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].bt_retry_index = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].dec_bt_pwr = ((-2 * (next_i()%2)) + 1) * next_i();
        btdm[_i0].tdma_dac_swing = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          rtl8723e_dm_bt_btdm_structure_reload(hw,btdm);
          free(hw);
          for(int _aux = 0; _aux < _len_btdm0; _aux++) {
          free(btdm[_aux].ps_tdma_byte);
          }
          free(btdm);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
