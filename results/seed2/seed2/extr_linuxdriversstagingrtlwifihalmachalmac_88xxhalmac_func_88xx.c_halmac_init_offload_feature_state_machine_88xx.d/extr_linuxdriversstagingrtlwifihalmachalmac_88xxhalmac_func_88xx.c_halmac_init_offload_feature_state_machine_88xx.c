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
typedef  struct TYPE_14__   TYPE_7__ ;
typedef  struct TYPE_13__   TYPE_6__ ;
typedef  struct TYPE_12__   TYPE_5__ ;
typedef  struct TYPE_11__   TYPE_4__ ;
typedef  struct TYPE_10__   TYPE_3__ ;
typedef  struct TYPE_9__   TYPE_2__ ;
typedef  struct TYPE_8__   TYPE_1__ ;

/* Type definitions */
struct TYPE_14__ {int /*<<< orphan*/ * data; scalar_t__ segment_size; scalar_t__ data_size; int /*<<< orphan*/  seq_num; void* process_status; } ;
struct TYPE_13__ {int /*<<< orphan*/  seq_num; void* process_status; } ;
struct TYPE_12__ {int /*<<< orphan*/  seq_num; void* process_status; } ;
struct TYPE_11__ {int /*<<< orphan*/  seq_num; void* process_status; } ;
struct TYPE_10__ {int /*<<< orphan*/  seq_num; void* process_status; int /*<<< orphan*/  scan_cmd_construct_state; } ;
struct TYPE_9__ {int /*<<< orphan*/  seq_num; void* process_status; int /*<<< orphan*/  cfg_para_cmd_construct_state; } ;
struct TYPE_8__ {int /*<<< orphan*/  seq_num; void* process_status; int /*<<< orphan*/  efuse_cmd_construct_state; } ;
struct halmac_state {TYPE_7__ psd_set; TYPE_6__ power_tracking_set; TYPE_5__ iqk_set; TYPE_4__ update_packet_set; TYPE_3__ scan_state_set; TYPE_2__ cfg_para_state_set; TYPE_1__ efuse_state_set; } ;
struct halmac_adapter {int /*<<< orphan*/  h2c_packet_seq; struct halmac_state halmac_state; } ;

/* Variables and functions */
 int /*<<< orphan*/  HALMAC_CFG_PARA_CMD_CONSTRUCT_IDLE ; 
 void* HALMAC_CMD_PROCESS_IDLE ; 
 int /*<<< orphan*/  HALMAC_EFUSE_CMD_CONSTRUCT_IDLE ; 
 int /*<<< orphan*/  HALMAC_SCAN_CMD_CONSTRUCT_IDLE ; 

void halmac_init_offload_feature_state_machine_88xx(
	struct halmac_adapter *halmac_adapter)
{
	struct halmac_state *state = &halmac_adapter->halmac_state;

	state->efuse_state_set.efuse_cmd_construct_state =
		HALMAC_EFUSE_CMD_CONSTRUCT_IDLE;
	state->efuse_state_set.process_status = HALMAC_CMD_PROCESS_IDLE;
	state->efuse_state_set.seq_num = halmac_adapter->h2c_packet_seq;

	state->cfg_para_state_set.cfg_para_cmd_construct_state =
		HALMAC_CFG_PARA_CMD_CONSTRUCT_IDLE;
	state->cfg_para_state_set.process_status = HALMAC_CMD_PROCESS_IDLE;
	state->cfg_para_state_set.seq_num = halmac_adapter->h2c_packet_seq;

	state->scan_state_set.scan_cmd_construct_state =
		HALMAC_SCAN_CMD_CONSTRUCT_IDLE;
	state->scan_state_set.process_status = HALMAC_CMD_PROCESS_IDLE;
	state->scan_state_set.seq_num = halmac_adapter->h2c_packet_seq;

	state->update_packet_set.process_status = HALMAC_CMD_PROCESS_IDLE;
	state->update_packet_set.seq_num = halmac_adapter->h2c_packet_seq;

	state->iqk_set.process_status = HALMAC_CMD_PROCESS_IDLE;
	state->iqk_set.seq_num = halmac_adapter->h2c_packet_seq;

	state->power_tracking_set.process_status = HALMAC_CMD_PROCESS_IDLE;
	state->power_tracking_set.seq_num = halmac_adapter->h2c_packet_seq;

	state->psd_set.process_status = HALMAC_CMD_PROCESS_IDLE;
	state->psd_set.seq_num = halmac_adapter->h2c_packet_seq;
	state->psd_set.data_size = 0;
	state->psd_set.segment_size = 0;
	state->psd_set.data = NULL;
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
            halmac_adapter[_i0].h2c_packet_seq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_halmac_adapter__i0__halmac_state_psd_set_data0 = 1;
          halmac_adapter[_i0].halmac_state.psd_set.data = (int *) malloc(_len_halmac_adapter__i0__halmac_state_psd_set_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_halmac_adapter__i0__halmac_state_psd_set_data0; _j0++) {
            halmac_adapter[_i0].halmac_state.psd_set.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        halmac_adapter[_i0].halmac_state.psd_set.segment_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.psd_set.data_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.psd_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.power_tracking_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.iqk_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.update_packet_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.scan_state_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.scan_state_set.scan_cmd_construct_state = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.cfg_para_state_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.cfg_para_state_set.cfg_para_cmd_construct_state = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.efuse_state_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.efuse_state_set.efuse_cmd_construct_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          halmac_init_offload_feature_state_machine_88xx(halmac_adapter);
          free(halmac_adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_halmac_adapter0 = 65025;
          struct halmac_adapter * halmac_adapter = (struct halmac_adapter *) malloc(_len_halmac_adapter0*sizeof(struct halmac_adapter));
          for(int _i0 = 0; _i0 < _len_halmac_adapter0; _i0++) {
            halmac_adapter[_i0].h2c_packet_seq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_halmac_adapter__i0__halmac_state_psd_set_data0 = 1;
          halmac_adapter[_i0].halmac_state.psd_set.data = (int *) malloc(_len_halmac_adapter__i0__halmac_state_psd_set_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_halmac_adapter__i0__halmac_state_psd_set_data0; _j0++) {
            halmac_adapter[_i0].halmac_state.psd_set.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        halmac_adapter[_i0].halmac_state.psd_set.segment_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.psd_set.data_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.psd_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.power_tracking_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.iqk_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.update_packet_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.scan_state_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.scan_state_set.scan_cmd_construct_state = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.cfg_para_state_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.cfg_para_state_set.cfg_para_cmd_construct_state = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.efuse_state_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.efuse_state_set.efuse_cmd_construct_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          halmac_init_offload_feature_state_machine_88xx(halmac_adapter);
          free(halmac_adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_halmac_adapter0 = 100;
          struct halmac_adapter * halmac_adapter = (struct halmac_adapter *) malloc(_len_halmac_adapter0*sizeof(struct halmac_adapter));
          for(int _i0 = 0; _i0 < _len_halmac_adapter0; _i0++) {
            halmac_adapter[_i0].h2c_packet_seq = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_halmac_adapter__i0__halmac_state_psd_set_data0 = 1;
          halmac_adapter[_i0].halmac_state.psd_set.data = (int *) malloc(_len_halmac_adapter__i0__halmac_state_psd_set_data0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_halmac_adapter__i0__halmac_state_psd_set_data0; _j0++) {
            halmac_adapter[_i0].halmac_state.psd_set.data[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        halmac_adapter[_i0].halmac_state.psd_set.segment_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.psd_set.data_size = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.psd_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.power_tracking_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.iqk_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.update_packet_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.scan_state_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.scan_state_set.scan_cmd_construct_state = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.cfg_para_state_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.cfg_para_state_set.cfg_para_cmd_construct_state = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.efuse_state_set.seq_num = ((-2 * (next_i()%2)) + 1) * next_i();
        halmac_adapter[_i0].halmac_state.efuse_state_set.efuse_cmd_construct_state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          halmac_init_offload_feature_state_machine_88xx(halmac_adapter);
          free(halmac_adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
