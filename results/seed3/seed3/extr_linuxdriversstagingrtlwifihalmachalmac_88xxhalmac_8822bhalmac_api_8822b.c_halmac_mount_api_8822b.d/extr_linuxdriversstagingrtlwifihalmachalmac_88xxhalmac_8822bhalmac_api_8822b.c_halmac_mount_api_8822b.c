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
struct halmac_api {int /*<<< orphan*/  halmac_pcie_switch; int /*<<< orphan*/  halmac_interface_integration_tuning; int /*<<< orphan*/  halmac_phy_cfg; int /*<<< orphan*/  halmac_cfg_tx_agg_align; int /*<<< orphan*/  halmac_mac_power_switch; int /*<<< orphan*/  halmac_tx_allowed_sdio; int /*<<< orphan*/  halmac_init_h2c; int /*<<< orphan*/  halmac_init_protocol_cfg; int /*<<< orphan*/  halmac_init_trx_cfg; } ;
struct TYPE_4__ {int /*<<< orphan*/  rsvd_drv_pg_num; } ;
struct TYPE_3__ {int /*<<< orphan*/  page_size_2_power; int /*<<< orphan*/  tx_align_size; int /*<<< orphan*/  page_size; int /*<<< orphan*/  rx_fifo_size; int /*<<< orphan*/  tx_fifo_size; int /*<<< orphan*/  rxdesc_size; int /*<<< orphan*/  txdesc_size; int /*<<< orphan*/  cam_entry_num; int /*<<< orphan*/  bt_efuse_size; int /*<<< orphan*/  eeprom_size; int /*<<< orphan*/  efuse_size; } ;
struct halmac_adapter {scalar_t__ halmac_interface; TYPE_2__ txff_allocation; TYPE_1__ hw_config_info; int /*<<< orphan*/  chip_id; scalar_t__ halmac_api; } ;
typedef  enum halmac_ret_status { ____Placeholder_halmac_ret_status } halmac_ret_status ;

/* Variables and functions */
 int /*<<< orphan*/  HALMAC_BT_EFUSE_SIZE_8822B ; 
 int /*<<< orphan*/  HALMAC_CHIP_ID_8822B ; 
 int /*<<< orphan*/  HALMAC_EEPROM_SIZE_8822B ; 
 int /*<<< orphan*/  HALMAC_EFUSE_SIZE_8822B ; 
 scalar_t__ HALMAC_INTERFACE_PCIE ; 
 scalar_t__ HALMAC_INTERFACE_SDIO ; 
 scalar_t__ HALMAC_INTERFACE_USB ; 
 int HALMAC_RET_SUCCESS ; 
 int /*<<< orphan*/  HALMAC_RSVD_DRV_PGNUM_8822B ; 
 int /*<<< orphan*/  HALMAC_RX_DESC_SIZE_8822B ; 
 int /*<<< orphan*/  HALMAC_RX_FIFO_SIZE_8822B ; 
 int /*<<< orphan*/  HALMAC_SECURITY_CAM_ENTRY_NUM_8822B ; 
 int /*<<< orphan*/  HALMAC_TX_ALIGN_SIZE_8822B ; 
 int /*<<< orphan*/  HALMAC_TX_DESC_SIZE_8822B ; 
 int /*<<< orphan*/  HALMAC_TX_FIFO_SIZE_8822B ; 
 int /*<<< orphan*/  HALMAC_TX_PAGE_SIZE_2_POWER_8822B ; 
 int /*<<< orphan*/  HALMAC_TX_PAGE_SIZE_8822B ; 
 int /*<<< orphan*/  halmac_cfg_tx_agg_align_pcie_not_support_88xx ; 
 int /*<<< orphan*/  halmac_cfg_tx_agg_align_sdio_not_support_88xx ; 
 int /*<<< orphan*/  halmac_cfg_tx_agg_align_usb_not_support_88xx ; 
 int /*<<< orphan*/  halmac_init_h2c_8822b ; 
 int /*<<< orphan*/  halmac_init_protocol_cfg_8822b ; 
 int /*<<< orphan*/  halmac_init_trx_cfg_8822b ; 
 int /*<<< orphan*/  halmac_interface_integration_tuning_8822b_pcie ; 
 int /*<<< orphan*/  halmac_interface_integration_tuning_8822b_sdio ; 
 int /*<<< orphan*/  halmac_interface_integration_tuning_8822b_usb ; 
 int /*<<< orphan*/  halmac_mac_power_switch_8822b_pcie ; 
 int /*<<< orphan*/  halmac_mac_power_switch_8822b_sdio ; 
 int /*<<< orphan*/  halmac_mac_power_switch_8822b_usb ; 
 int /*<<< orphan*/  halmac_pcie_switch_8822b ; 
 int /*<<< orphan*/  halmac_pcie_switch_8822b_nc ; 
 int /*<<< orphan*/  halmac_phy_cfg_8822b_pcie ; 
 int /*<<< orphan*/  halmac_phy_cfg_8822b_sdio ; 
 int /*<<< orphan*/  halmac_phy_cfg_8822b_usb ; 
 int /*<<< orphan*/  halmac_tx_allowed_sdio_88xx ; 

enum halmac_ret_status
halmac_mount_api_8822b(struct halmac_adapter *halmac_adapter)
{
	struct halmac_api *halmac_api =
		(struct halmac_api *)halmac_adapter->halmac_api;

	halmac_adapter->chip_id = HALMAC_CHIP_ID_8822B;
	halmac_adapter->hw_config_info.efuse_size = HALMAC_EFUSE_SIZE_8822B;
	halmac_adapter->hw_config_info.eeprom_size = HALMAC_EEPROM_SIZE_8822B;
	halmac_adapter->hw_config_info.bt_efuse_size =
		HALMAC_BT_EFUSE_SIZE_8822B;
	halmac_adapter->hw_config_info.cam_entry_num =
		HALMAC_SECURITY_CAM_ENTRY_NUM_8822B;
	halmac_adapter->hw_config_info.txdesc_size = HALMAC_TX_DESC_SIZE_8822B;
	halmac_adapter->hw_config_info.rxdesc_size = HALMAC_RX_DESC_SIZE_8822B;
	halmac_adapter->hw_config_info.tx_fifo_size = HALMAC_TX_FIFO_SIZE_8822B;
	halmac_adapter->hw_config_info.rx_fifo_size = HALMAC_RX_FIFO_SIZE_8822B;
	halmac_adapter->hw_config_info.page_size = HALMAC_TX_PAGE_SIZE_8822B;
	halmac_adapter->hw_config_info.tx_align_size =
		HALMAC_TX_ALIGN_SIZE_8822B;
	halmac_adapter->hw_config_info.page_size_2_power =
		HALMAC_TX_PAGE_SIZE_2_POWER_8822B;

	halmac_adapter->txff_allocation.rsvd_drv_pg_num =
		HALMAC_RSVD_DRV_PGNUM_8822B;

	halmac_api->halmac_init_trx_cfg = halmac_init_trx_cfg_8822b;
	halmac_api->halmac_init_protocol_cfg = halmac_init_protocol_cfg_8822b;
	halmac_api->halmac_init_h2c = halmac_init_h2c_8822b;

	if (halmac_adapter->halmac_interface == HALMAC_INTERFACE_SDIO) {
		halmac_api->halmac_tx_allowed_sdio =
			halmac_tx_allowed_sdio_88xx;
		halmac_api->halmac_cfg_tx_agg_align =
			halmac_cfg_tx_agg_align_sdio_not_support_88xx;
		halmac_api->halmac_mac_power_switch =
			halmac_mac_power_switch_8822b_sdio;
		halmac_api->halmac_phy_cfg = halmac_phy_cfg_8822b_sdio;
		halmac_api->halmac_interface_integration_tuning =
			halmac_interface_integration_tuning_8822b_sdio;
	} else if (halmac_adapter->halmac_interface == HALMAC_INTERFACE_USB) {
		halmac_api->halmac_mac_power_switch =
			halmac_mac_power_switch_8822b_usb;
		halmac_api->halmac_cfg_tx_agg_align =
			halmac_cfg_tx_agg_align_usb_not_support_88xx;
		halmac_api->halmac_phy_cfg = halmac_phy_cfg_8822b_usb;
		halmac_api->halmac_interface_integration_tuning =
			halmac_interface_integration_tuning_8822b_usb;
	} else if (halmac_adapter->halmac_interface == HALMAC_INTERFACE_PCIE) {
		halmac_api->halmac_mac_power_switch =
			halmac_mac_power_switch_8822b_pcie;
		halmac_api->halmac_cfg_tx_agg_align =
			halmac_cfg_tx_agg_align_pcie_not_support_88xx;
		halmac_api->halmac_pcie_switch = halmac_pcie_switch_8822b;
		halmac_api->halmac_phy_cfg = halmac_phy_cfg_8822b_pcie;
		halmac_api->halmac_interface_integration_tuning =
			halmac_interface_integration_tuning_8822b_pcie;
	} else {
		halmac_api->halmac_pcie_switch = halmac_pcie_switch_8822b_nc;
	}
	return HALMAC_RET_SUCCESS;
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
          int _len_halmac_adapter0 = 1;
          struct halmac_adapter * halmac_adapter = (struct halmac_adapter *) malloc(_len_halmac_adapter0*sizeof(struct halmac_adapter));
          for(int _i0 = 0; _i0 < _len_halmac_adapter0; _i0++) {
            halmac_adapter[_i0].halmac_interface = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].txff_allocation.rsvd_drv_pg_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.page_size_2_power = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.tx_align_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.page_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.rx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.tx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.rxdesc_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.txdesc_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.cam_entry_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.bt_efuse_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.eeprom_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.efuse_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].chip_id = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_api = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum halmac_ret_status benchRet = halmac_mount_api_8822b(halmac_adapter);
          free(halmac_adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_halmac_adapter0 = 65025;
          struct halmac_adapter * halmac_adapter = (struct halmac_adapter *) malloc(_len_halmac_adapter0*sizeof(struct halmac_adapter));
          for(int _i0 = 0; _i0 < _len_halmac_adapter0; _i0++) {
            halmac_adapter[_i0].halmac_interface = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].txff_allocation.rsvd_drv_pg_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.page_size_2_power = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.tx_align_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.page_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.rx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.tx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.rxdesc_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.txdesc_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.cam_entry_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.bt_efuse_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.eeprom_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.efuse_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].chip_id = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_api = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum halmac_ret_status benchRet = halmac_mount_api_8822b(halmac_adapter);
          free(halmac_adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_halmac_adapter0 = 100;
          struct halmac_adapter * halmac_adapter = (struct halmac_adapter *) malloc(_len_halmac_adapter0*sizeof(struct halmac_adapter));
          for(int _i0 = 0; _i0 < _len_halmac_adapter0; _i0++) {
            halmac_adapter[_i0].halmac_interface = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].txff_allocation.rsvd_drv_pg_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.page_size_2_power = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.tx_align_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.page_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.rx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.tx_fifo_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.rxdesc_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.txdesc_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.cam_entry_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.bt_efuse_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.eeprom_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].hw_config_info.efuse_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].chip_id = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_api = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          enum halmac_ret_status benchRet = halmac_mount_api_8822b(halmac_adapter);
          free(halmac_adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
