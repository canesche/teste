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
typedef  struct TYPE_2__   TYPE_1__ ;

/* Type definitions */
struct adf_hw_device_data {int num_logical_accel; int /*<<< orphan*/  min_iov_compat_ver; int /*<<< orphan*/  reset_device; int /*<<< orphan*/  enable_vf2pf_comms; int /*<<< orphan*/  enable_ints; int /*<<< orphan*/  get_arb_mapping; int /*<<< orphan*/  exit_arb; int /*<<< orphan*/  init_arb; int /*<<< orphan*/  send_admin_init; int /*<<< orphan*/  disable_iov; int /*<<< orphan*/  exit_admin_comms; int /*<<< orphan*/  init_admin_comms; int /*<<< orphan*/  fw_mmp_name; int /*<<< orphan*/  fw_name; int /*<<< orphan*/  get_sku; int /*<<< orphan*/  get_vintmsk_offset; int /*<<< orphan*/  get_pf2vf_offset; int /*<<< orphan*/  get_misc_bar_id; int /*<<< orphan*/  get_etr_bar_id; int /*<<< orphan*/  get_sram_bar_id; int /*<<< orphan*/  get_num_aes; int /*<<< orphan*/  get_num_accels; int /*<<< orphan*/  get_ae_mask; int /*<<< orphan*/  get_accel_mask; int /*<<< orphan*/  enable_error_correction; int /*<<< orphan*/  free_irq; int /*<<< orphan*/  alloc_irq; int /*<<< orphan*/  tx_rings_mask; int /*<<< orphan*/  tx_rx_gap; int /*<<< orphan*/  num_engines; int /*<<< orphan*/  num_accel; int /*<<< orphan*/  num_banks; scalar_t__ instance_id; TYPE_1__* dev_class; } ;
struct TYPE_2__ {int /*<<< orphan*/  instances; } ;

/* Variables and functions */
 int /*<<< orphan*/  ADF_C62X_ETR_MAX_BANKS ; 
 int /*<<< orphan*/  ADF_C62X_FW ; 
 int /*<<< orphan*/  ADF_C62X_MAX_ACCELENGINES ; 
 int /*<<< orphan*/  ADF_C62X_MAX_ACCELERATORS ; 
 int /*<<< orphan*/  ADF_C62X_MMP ; 
 int /*<<< orphan*/  ADF_C62X_RX_RINGS_OFFSET ; 
 int /*<<< orphan*/  ADF_C62X_TX_RINGS_MASK ; 
 int /*<<< orphan*/  ADF_PFVF_COMPATIBILITY_VERSION ; 
 int /*<<< orphan*/  adf_disable_sriov ; 
 int /*<<< orphan*/  adf_enable_error_correction ; 
 int /*<<< orphan*/  adf_enable_ints ; 
 int /*<<< orphan*/  adf_exit_admin_comms ; 
 int /*<<< orphan*/  adf_exit_arb ; 
 int /*<<< orphan*/  adf_get_arbiter_mapping ; 
 int /*<<< orphan*/  adf_init_admin_comms ; 
 int /*<<< orphan*/  adf_init_arb ; 
 int /*<<< orphan*/  adf_isr_resource_alloc ; 
 int /*<<< orphan*/  adf_isr_resource_free ; 
 int /*<<< orphan*/  adf_pf_enable_vf2pf_comms ; 
 int /*<<< orphan*/  adf_reset_flr ; 
 int /*<<< orphan*/  adf_send_admin_init ; 
 TYPE_1__ c62x_class ; 
 int /*<<< orphan*/  get_accel_mask ; 
 int /*<<< orphan*/  get_ae_mask ; 
 int /*<<< orphan*/  get_etr_bar_id ; 
 int /*<<< orphan*/  get_misc_bar_id ; 
 int /*<<< orphan*/  get_num_accels ; 
 int /*<<< orphan*/  get_num_aes ; 
 int /*<<< orphan*/  get_pf2vf_offset ; 
 int /*<<< orphan*/  get_sku ; 
 int /*<<< orphan*/  get_sram_bar_id ; 
 int /*<<< orphan*/  get_vintmsk_offset ; 

void adf_init_hw_data_c62x(struct adf_hw_device_data *hw_data)
{
	hw_data->dev_class = &c62x_class;
	hw_data->instance_id = c62x_class.instances++;
	hw_data->num_banks = ADF_C62X_ETR_MAX_BANKS;
	hw_data->num_accel = ADF_C62X_MAX_ACCELERATORS;
	hw_data->num_logical_accel = 1;
	hw_data->num_engines = ADF_C62X_MAX_ACCELENGINES;
	hw_data->tx_rx_gap = ADF_C62X_RX_RINGS_OFFSET;
	hw_data->tx_rings_mask = ADF_C62X_TX_RINGS_MASK;
	hw_data->alloc_irq = adf_isr_resource_alloc;
	hw_data->free_irq = adf_isr_resource_free;
	hw_data->enable_error_correction = adf_enable_error_correction;
	hw_data->get_accel_mask = get_accel_mask;
	hw_data->get_ae_mask = get_ae_mask;
	hw_data->get_num_accels = get_num_accels;
	hw_data->get_num_aes = get_num_aes;
	hw_data->get_sram_bar_id = get_sram_bar_id;
	hw_data->get_etr_bar_id = get_etr_bar_id;
	hw_data->get_misc_bar_id = get_misc_bar_id;
	hw_data->get_pf2vf_offset = get_pf2vf_offset;
	hw_data->get_vintmsk_offset = get_vintmsk_offset;
	hw_data->get_sku = get_sku;
	hw_data->fw_name = ADF_C62X_FW;
	hw_data->fw_mmp_name = ADF_C62X_MMP;
	hw_data->init_admin_comms = adf_init_admin_comms;
	hw_data->exit_admin_comms = adf_exit_admin_comms;
	hw_data->disable_iov = adf_disable_sriov;
	hw_data->send_admin_init = adf_send_admin_init;
	hw_data->init_arb = adf_init_arb;
	hw_data->exit_arb = adf_exit_arb;
	hw_data->get_arb_mapping = adf_get_arbiter_mapping;
	hw_data->enable_ints = adf_enable_ints;
	hw_data->enable_vf2pf_comms = adf_pf_enable_vf2pf_comms;
	hw_data->reset_device = adf_reset_flr;
	hw_data->min_iov_compat_ver = ADF_PFVF_COMPATIBILITY_VERSION;
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
          int _len_hw_data0 = 1;
          struct adf_hw_device_data * hw_data = (struct adf_hw_device_data *) malloc(_len_hw_data0*sizeof(struct adf_hw_device_data));
          for(int _i0 = 0; _i0 < _len_hw_data0; _i0++) {
            hw_data[_i0].num_logical_accel = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].min_iov_compat_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].reset_device = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].enable_vf2pf_comms = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].enable_ints = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_arb_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].exit_arb = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].init_arb = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].send_admin_init = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].disable_iov = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].exit_admin_comms = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].init_admin_comms = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].fw_mmp_name = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].fw_name = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_sku = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_vintmsk_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_pf2vf_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_misc_bar_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_etr_bar_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_sram_bar_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_num_aes = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_num_accels = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_ae_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_accel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].enable_error_correction = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].free_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].alloc_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].tx_rings_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].tx_rx_gap = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].num_engines = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].num_accel = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].num_banks = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hw_data__i0__dev_class0 = 1;
          hw_data[_i0].dev_class = (struct TYPE_2__ *) malloc(_len_hw_data__i0__dev_class0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hw_data__i0__dev_class0; _j0++) {
            hw_data[_i0].dev_class->instances = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          adf_init_hw_data_c62x(hw_data);
          for(int _aux = 0; _aux < _len_hw_data0; _aux++) {
          free(hw_data[_aux].dev_class);
          }
          free(hw_data);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hw_data0 = 65025;
          struct adf_hw_device_data * hw_data = (struct adf_hw_device_data *) malloc(_len_hw_data0*sizeof(struct adf_hw_device_data));
          for(int _i0 = 0; _i0 < _len_hw_data0; _i0++) {
            hw_data[_i0].num_logical_accel = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].min_iov_compat_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].reset_device = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].enable_vf2pf_comms = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].enable_ints = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_arb_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].exit_arb = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].init_arb = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].send_admin_init = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].disable_iov = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].exit_admin_comms = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].init_admin_comms = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].fw_mmp_name = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].fw_name = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_sku = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_vintmsk_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_pf2vf_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_misc_bar_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_etr_bar_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_sram_bar_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_num_aes = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_num_accels = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_ae_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_accel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].enable_error_correction = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].free_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].alloc_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].tx_rings_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].tx_rx_gap = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].num_engines = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].num_accel = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].num_banks = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hw_data__i0__dev_class0 = 1;
          hw_data[_i0].dev_class = (struct TYPE_2__ *) malloc(_len_hw_data__i0__dev_class0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hw_data__i0__dev_class0; _j0++) {
            hw_data[_i0].dev_class->instances = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          adf_init_hw_data_c62x(hw_data);
          for(int _aux = 0; _aux < _len_hw_data0; _aux++) {
          free(hw_data[_aux].dev_class);
          }
          free(hw_data);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hw_data0 = 100;
          struct adf_hw_device_data * hw_data = (struct adf_hw_device_data *) malloc(_len_hw_data0*sizeof(struct adf_hw_device_data));
          for(int _i0 = 0; _i0 < _len_hw_data0; _i0++) {
            hw_data[_i0].num_logical_accel = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].min_iov_compat_ver = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].reset_device = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].enable_vf2pf_comms = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].enable_ints = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_arb_mapping = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].exit_arb = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].init_arb = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].send_admin_init = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].disable_iov = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].exit_admin_comms = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].init_admin_comms = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].fw_mmp_name = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].fw_name = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_sku = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_vintmsk_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_pf2vf_offset = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_misc_bar_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_etr_bar_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_sram_bar_id = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_num_aes = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_num_accels = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_ae_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].get_accel_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].enable_error_correction = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].free_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].alloc_irq = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].tx_rings_mask = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].tx_rx_gap = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].num_engines = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].num_accel = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].num_banks = ((-2 * (next_i()%2)) + 1) * next_i();
        hw_data[_i0].instance_id = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_hw_data__i0__dev_class0 = 1;
          hw_data[_i0].dev_class = (struct TYPE_2__ *) malloc(_len_hw_data__i0__dev_class0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hw_data__i0__dev_class0; _j0++) {
            hw_data[_i0].dev_class->instances = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          adf_init_hw_data_c62x(hw_data);
          for(int _aux = 0; _aux < _len_hw_data0; _aux++) {
          free(hw_data[_aux].dev_class);
          }
          free(hw_data);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
