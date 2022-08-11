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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  scalar_t__ u64 ;
struct stats_msg_block {scalar_t__ tx_pause; scalar_t__ tx_trunc; scalar_t__ tx_underrun; scalar_t__ tx_late_col; scalar_t__ tx_2_col; scalar_t__ tx_1_col; scalar_t__ tx_defer; scalar_t__ tx_abort_col; scalar_t__ rx_sz_ov; scalar_t__ rx_rrd_ov; scalar_t__ rx_pause; scalar_t__ rx_align_err; scalar_t__ rx_fcs_err; scalar_t__ rx_len_err; scalar_t__ rx_rxf_ov; scalar_t__ rx_mcast; scalar_t__ tx_byte_cnt; scalar_t__ rx_byte_cnt; scalar_t__ tx_ok; scalar_t__ rx_ok; scalar_t__ rx_frag; } ;
struct TYPE_6__ {int /*<<< orphan*/  tx_packets; int /*<<< orphan*/  rx_packets; int /*<<< orphan*/  tx_carrier_errors; int /*<<< orphan*/  tx_window_errors; int /*<<< orphan*/  tx_aborted_errors; int /*<<< orphan*/  tx_fifo_errors; int /*<<< orphan*/  tx_errors; int /*<<< orphan*/  rx_dropped; int /*<<< orphan*/  rx_fifo_errors; int /*<<< orphan*/  rx_frame_errors; int /*<<< orphan*/  rx_crc_errors; int /*<<< orphan*/  rx_length_errors; int /*<<< orphan*/  rx_errors; int /*<<< orphan*/  collisions; int /*<<< orphan*/  multicast; int /*<<< orphan*/  tx_bytes; int /*<<< orphan*/  rx_bytes; } ;
struct net_device {TYPE_3__ stats; } ;
struct TYPE_5__ {int /*<<< orphan*/  tx_packets; int /*<<< orphan*/  rx_packets; int /*<<< orphan*/  tx_carrier_errors; int /*<<< orphan*/  tx_window_errors; int /*<<< orphan*/  tx_aborted_errors; int /*<<< orphan*/  tx_fifo_errors; int /*<<< orphan*/  tx_errors; int /*<<< orphan*/  rx_rrd_ov; int /*<<< orphan*/  rx_fifo_errors; int /*<<< orphan*/  rx_frame_errors; int /*<<< orphan*/  rx_crc_errors; int /*<<< orphan*/  rx_length_errors; int /*<<< orphan*/  rx_errors; int /*<<< orphan*/  collisions; int /*<<< orphan*/  multicast; int /*<<< orphan*/  tx_bytes; int /*<<< orphan*/  rx_bytes; int /*<<< orphan*/  tx_pause; int /*<<< orphan*/  tx_trunc; int /*<<< orphan*/  tx_underun; int /*<<< orphan*/  latecol; int /*<<< orphan*/  mcc; int /*<<< orphan*/  scc; int /*<<< orphan*/  deffer; int /*<<< orphan*/  excecol; int /*<<< orphan*/  rx_trunc; int /*<<< orphan*/  rx_pause; } ;
struct TYPE_4__ {struct stats_msg_block* smb; } ;
struct atl1_adapter {TYPE_2__ soft_stats; TYPE_1__ smb; struct net_device* netdev; } ;

/* Variables and functions */

__attribute__((used)) static void atl1_inc_smb(struct atl1_adapter *adapter)
{
	struct net_device *netdev = adapter->netdev;
	struct stats_msg_block *smb = adapter->smb.smb;

	u64 new_rx_errors = smb->rx_frag +
			    smb->rx_fcs_err +
			    smb->rx_len_err +
			    smb->rx_sz_ov +
			    smb->rx_rxf_ov +
			    smb->rx_rrd_ov +
			    smb->rx_align_err;
	u64 new_tx_errors = smb->tx_late_col +
			    smb->tx_abort_col +
			    smb->tx_underrun +
			    smb->tx_trunc;

	/* Fill out the OS statistics structure */
	adapter->soft_stats.rx_packets += smb->rx_ok + new_rx_errors;
	adapter->soft_stats.tx_packets += smb->tx_ok + new_tx_errors;
	adapter->soft_stats.rx_bytes += smb->rx_byte_cnt;
	adapter->soft_stats.tx_bytes += smb->tx_byte_cnt;
	adapter->soft_stats.multicast += smb->rx_mcast;
	adapter->soft_stats.collisions += smb->tx_1_col +
					  smb->tx_2_col +
					  smb->tx_late_col +
					  smb->tx_abort_col;

	/* Rx Errors */
	adapter->soft_stats.rx_errors += new_rx_errors;
	adapter->soft_stats.rx_fifo_errors += smb->rx_rxf_ov;
	adapter->soft_stats.rx_length_errors += smb->rx_len_err;
	adapter->soft_stats.rx_crc_errors += smb->rx_fcs_err;
	adapter->soft_stats.rx_frame_errors += smb->rx_align_err;

	adapter->soft_stats.rx_pause += smb->rx_pause;
	adapter->soft_stats.rx_rrd_ov += smb->rx_rrd_ov;
	adapter->soft_stats.rx_trunc += smb->rx_sz_ov;

	/* Tx Errors */
	adapter->soft_stats.tx_errors += new_tx_errors;
	adapter->soft_stats.tx_fifo_errors += smb->tx_underrun;
	adapter->soft_stats.tx_aborted_errors += smb->tx_abort_col;
	adapter->soft_stats.tx_window_errors += smb->tx_late_col;

	adapter->soft_stats.excecol += smb->tx_abort_col;
	adapter->soft_stats.deffer += smb->tx_defer;
	adapter->soft_stats.scc += smb->tx_1_col;
	adapter->soft_stats.mcc += smb->tx_2_col;
	adapter->soft_stats.latecol += smb->tx_late_col;
	adapter->soft_stats.tx_underun += smb->tx_underrun;
	adapter->soft_stats.tx_trunc += smb->tx_trunc;
	adapter->soft_stats.tx_pause += smb->tx_pause;

	netdev->stats.rx_bytes = adapter->soft_stats.rx_bytes;
	netdev->stats.tx_bytes = adapter->soft_stats.tx_bytes;
	netdev->stats.multicast = adapter->soft_stats.multicast;
	netdev->stats.collisions = adapter->soft_stats.collisions;
	netdev->stats.rx_errors = adapter->soft_stats.rx_errors;
	netdev->stats.rx_length_errors =
		adapter->soft_stats.rx_length_errors;
	netdev->stats.rx_crc_errors = adapter->soft_stats.rx_crc_errors;
	netdev->stats.rx_frame_errors =
		adapter->soft_stats.rx_frame_errors;
	netdev->stats.rx_fifo_errors = adapter->soft_stats.rx_fifo_errors;
	netdev->stats.rx_dropped = adapter->soft_stats.rx_rrd_ov;
	netdev->stats.tx_errors = adapter->soft_stats.tx_errors;
	netdev->stats.tx_fifo_errors = adapter->soft_stats.tx_fifo_errors;
	netdev->stats.tx_aborted_errors =
		adapter->soft_stats.tx_aborted_errors;
	netdev->stats.tx_window_errors =
		adapter->soft_stats.tx_window_errors;
	netdev->stats.tx_carrier_errors =
		adapter->soft_stats.tx_carrier_errors;

	netdev->stats.rx_packets = adapter->soft_stats.rx_packets;
	netdev->stats.tx_packets = adapter->soft_stats.tx_packets;
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
          int _len_adapter0 = 1;
          struct atl1_adapter * adapter = (struct atl1_adapter *) malloc(_len_adapter0*sizeof(struct atl1_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].soft_stats.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_carrier_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_window_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_aborted_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_rrd_ov = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.multicast = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_trunc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_underun = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.latecol = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.mcc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.scc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.deffer = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.excecol = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_trunc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__smb_smb0 = 1;
          adapter[_i0].smb.smb = (struct stats_msg_block *) malloc(_len_adapter__i0__smb_smb0*sizeof(struct stats_msg_block));
          for(int _j0 = 0; _j0 < _len_adapter__i0__smb_smb0; _j0++) {
            adapter[_i0].smb.smb->tx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_trunc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_underrun = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_late_col = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_2_col = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_1_col = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_defer = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_abort_col = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_sz_ov = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_rrd_ov = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_align_err = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_fcs_err = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_len_err = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_rxf_ov = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_mcast = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_byte_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_byte_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_frag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adapter__i0__netdev0 = 1;
          adapter[_i0].netdev = (struct net_device *) malloc(_len_adapter__i0__netdev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_adapter__i0__netdev0; _j0++) {
            adapter[_i0].netdev->stats.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_carrier_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_window_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_aborted_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.multicast = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          atl1_inc_smb(adapter);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].netdev);
          }
          free(adapter);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_adapter0 = 65025;
          struct atl1_adapter * adapter = (struct atl1_adapter *) malloc(_len_adapter0*sizeof(struct atl1_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].soft_stats.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_carrier_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_window_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_aborted_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_rrd_ov = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.multicast = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_trunc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_underun = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.latecol = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.mcc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.scc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.deffer = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.excecol = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_trunc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__smb_smb0 = 1;
          adapter[_i0].smb.smb = (struct stats_msg_block *) malloc(_len_adapter__i0__smb_smb0*sizeof(struct stats_msg_block));
          for(int _j0 = 0; _j0 < _len_adapter__i0__smb_smb0; _j0++) {
            adapter[_i0].smb.smb->tx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_trunc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_underrun = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_late_col = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_2_col = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_1_col = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_defer = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_abort_col = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_sz_ov = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_rrd_ov = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_align_err = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_fcs_err = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_len_err = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_rxf_ov = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_mcast = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_byte_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_byte_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_frag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adapter__i0__netdev0 = 1;
          adapter[_i0].netdev = (struct net_device *) malloc(_len_adapter__i0__netdev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_adapter__i0__netdev0; _j0++) {
            adapter[_i0].netdev->stats.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_carrier_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_window_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_aborted_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.multicast = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          atl1_inc_smb(adapter);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].netdev);
          }
          free(adapter);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_adapter0 = 100;
          struct atl1_adapter * adapter = (struct atl1_adapter *) malloc(_len_adapter0*sizeof(struct atl1_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
            adapter[_i0].soft_stats.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_carrier_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_window_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_aborted_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_rrd_ov = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.multicast = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_trunc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.tx_underun = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.latecol = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.mcc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.scc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.deffer = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.excecol = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_trunc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].soft_stats.rx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_adapter__i0__smb_smb0 = 1;
          adapter[_i0].smb.smb = (struct stats_msg_block *) malloc(_len_adapter__i0__smb_smb0*sizeof(struct stats_msg_block));
          for(int _j0 = 0; _j0 < _len_adapter__i0__smb_smb0; _j0++) {
            adapter[_i0].smb.smb->tx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_trunc = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_underrun = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_late_col = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_2_col = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_1_col = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_defer = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_abort_col = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_sz_ov = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_rrd_ov = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_pause = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_align_err = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_fcs_err = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_len_err = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_rxf_ov = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_mcast = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_byte_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_byte_cnt = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->tx_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_ok = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].smb.smb->rx_frag = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_adapter__i0__netdev0 = 1;
          adapter[_i0].netdev = (struct net_device *) malloc(_len_adapter__i0__netdev0*sizeof(struct net_device));
          for(int _j0 = 0; _j0 < _len_adapter__i0__netdev0; _j0++) {
            adapter[_i0].netdev->stats.tx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_packets = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_carrier_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_window_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_aborted_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_dropped = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_fifo_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_frame_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_crc_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_length_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_errors = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.collisions = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.multicast = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.tx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].netdev->stats.rx_bytes = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          atl1_inc_smb(adapter);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].netdev);
          }
          free(adapter);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
