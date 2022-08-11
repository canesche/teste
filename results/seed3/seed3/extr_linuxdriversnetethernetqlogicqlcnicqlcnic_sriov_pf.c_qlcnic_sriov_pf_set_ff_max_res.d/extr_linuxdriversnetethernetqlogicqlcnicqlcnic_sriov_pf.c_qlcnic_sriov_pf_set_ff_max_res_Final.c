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
struct qlcnic_resources {int /*<<< orphan*/  max_local_ipv6_addrs; int /*<<< orphan*/  max_remote_ipv6_addrs; int /*<<< orphan*/  num_rx_status_rings; int /*<<< orphan*/  num_rx_buf_rings; int /*<<< orphan*/  num_destip; int /*<<< orphan*/  num_lro_flows_supported; int /*<<< orphan*/  num_tx_queues; int /*<<< orphan*/  num_rx_queues; int /*<<< orphan*/  num_txvlan_keys; int /*<<< orphan*/  num_rx_mcast_mac_filters; int /*<<< orphan*/  num_rx_ucast_mac_filters; int /*<<< orphan*/  num_tx_mac_filters; } ;
struct qlcnic_info {int /*<<< orphan*/  max_local_ipv6_addrs; int /*<<< orphan*/  max_remote_ipv6_addrs; int /*<<< orphan*/  max_rx_status_rings; int /*<<< orphan*/  max_rx_buf_rings; int /*<<< orphan*/  max_rx_ip_addr; int /*<<< orphan*/  max_rx_lro_flow; int /*<<< orphan*/  max_tx_ques; int /*<<< orphan*/  max_rx_ques; int /*<<< orphan*/  max_tx_vlan_keys; int /*<<< orphan*/  max_rx_mcast_mac_filters; int /*<<< orphan*/  max_rx_ucast_mac_filters; int /*<<< orphan*/  max_tx_mac_filters; } ;
struct qlcnic_adapter {TYPE_2__* ahw; } ;
struct TYPE_4__ {TYPE_1__* sriov; } ;
struct TYPE_3__ {struct qlcnic_resources ff_max; } ;

/* Variables and functions */

__attribute__((used)) static void qlcnic_sriov_pf_set_ff_max_res(struct qlcnic_adapter *adapter,
					   struct qlcnic_info *info)
{
	struct qlcnic_resources *ff_max = &adapter->ahw->sriov->ff_max;

	ff_max->num_tx_mac_filters = info->max_tx_mac_filters;
	ff_max->num_rx_ucast_mac_filters = info->max_rx_ucast_mac_filters;
	ff_max->num_rx_mcast_mac_filters = info->max_rx_mcast_mac_filters;
	ff_max->num_txvlan_keys = info->max_tx_vlan_keys;
	ff_max->num_rx_queues = info->max_rx_ques;
	ff_max->num_tx_queues = info->max_tx_ques;
	ff_max->num_lro_flows_supported = info->max_rx_lro_flow;
	ff_max->num_destip = info->max_rx_ip_addr;
	ff_max->num_rx_buf_rings = info->max_rx_buf_rings;
	ff_max->num_rx_status_rings = info->max_rx_status_rings;
	ff_max->max_remote_ipv6_addrs = info->max_remote_ipv6_addrs;
	ff_max->max_local_ipv6_addrs = info->max_local_ipv6_addrs;
}


// ------------------------------------------------------------------------- //




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
          struct qlcnic_adapter * adapter = (struct qlcnic_adapter *) malloc(_len_adapter0*sizeof(struct qlcnic_adapter));
          for(int _i0 = 0; _i0 < _len_adapter0; _i0++) {
              int _len_adapter__i0__ahw0 = 1;
          adapter[_i0].ahw = (struct TYPE_4__ *) malloc(_len_adapter__i0__ahw0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__ahw0; _j0++) {
              int _len_adapter__i0__ahw_sriov0 = 1;
          adapter[_i0].ahw->sriov = (struct TYPE_3__ *) malloc(_len_adapter__i0__ahw_sriov0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_adapter__i0__ahw_sriov0; _j0++) {
            adapter[_i0].ahw->sriov->ff_max.max_local_ipv6_addrs = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->sriov->ff_max.max_remote_ipv6_addrs = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->sriov->ff_max.num_rx_status_rings = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->sriov->ff_max.num_rx_buf_rings = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->sriov->ff_max.num_destip = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->sriov->ff_max.num_lro_flows_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->sriov->ff_max.num_tx_queues = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->sriov->ff_max.num_rx_queues = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->sriov->ff_max.num_txvlan_keys = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->sriov->ff_max.num_rx_mcast_mac_filters = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->sriov->ff_max.num_rx_ucast_mac_filters = ((-2 * (next_i()%2)) + 1) * next_i();
        adapter[_i0].ahw->sriov->ff_max.num_tx_mac_filters = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_info0 = 1;
          struct qlcnic_info * info = (struct qlcnic_info *) malloc(_len_info0*sizeof(struct qlcnic_info));
          for(int _i0 = 0; _i0 < _len_info0; _i0++) {
            info[_i0].max_local_ipv6_addrs = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].max_remote_ipv6_addrs = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].max_rx_status_rings = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].max_rx_buf_rings = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].max_rx_ip_addr = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].max_rx_lro_flow = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].max_tx_ques = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].max_rx_ques = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].max_tx_vlan_keys = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].max_rx_mcast_mac_filters = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].max_rx_ucast_mac_filters = ((-2 * (next_i()%2)) + 1) * next_i();
        info[_i0].max_tx_mac_filters = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          qlcnic_sriov_pf_set_ff_max_res(adapter,info);
          for(int _aux = 0; _aux < _len_adapter0; _aux++) {
          free(adapter[_aux].ahw);
          }
          free(adapter);
          free(info);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
