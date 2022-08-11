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
struct mlx4_port_cap {int /*<<< orphan*/  trans_code; int /*<<< orphan*/  wavelength; int /*<<< orphan*/  vendor_oui; int /*<<< orphan*/  trans_type; int /*<<< orphan*/  default_sense; int /*<<< orphan*/  suggested_type; int /*<<< orphan*/  supported_port_types; int /*<<< orphan*/  def_mac; int /*<<< orphan*/  max_tc_eth; int /*<<< orphan*/  eth_mtu; int /*<<< orphan*/  max_port_width; int /*<<< orphan*/  max_pkeys; int /*<<< orphan*/  max_gids; int /*<<< orphan*/  ib_mtu; int /*<<< orphan*/  max_vl; } ;
struct TYPE_4__ {int /*<<< orphan*/ * trans_code; int /*<<< orphan*/ * wavelength; int /*<<< orphan*/ * vendor_oui; int /*<<< orphan*/ * trans_type; int /*<<< orphan*/ * default_sense; int /*<<< orphan*/ * suggested_type; int /*<<< orphan*/ * supported_type; int /*<<< orphan*/ * def_mac; int /*<<< orphan*/  max_tc_eth; int /*<<< orphan*/ * eth_mtu_cap; int /*<<< orphan*/ * port_width_cap; int /*<<< orphan*/ * pkey_table_len; int /*<<< orphan*/ * gid_table_len; int /*<<< orphan*/ * ib_mtu_cap; int /*<<< orphan*/ * vl_cap; } ;
struct TYPE_3__ {int /*<<< orphan*/ * pkey_phys_table_len; int /*<<< orphan*/ * gid_phys_table_len; } ;
struct mlx4_dev {TYPE_2__ caps; TYPE_1__ phys_caps; } ;

/* Variables and functions */

__attribute__((used)) static int _mlx4_dev_port(struct mlx4_dev *dev, int port,
			  struct mlx4_port_cap *port_cap)
{
	dev->caps.vl_cap[port]	    = port_cap->max_vl;
	dev->caps.ib_mtu_cap[port]	    = port_cap->ib_mtu;
	dev->phys_caps.gid_phys_table_len[port]  = port_cap->max_gids;
	dev->phys_caps.pkey_phys_table_len[port] = port_cap->max_pkeys;
	/* set gid and pkey table operating lengths by default
	 * to non-sriov values
	 */
	dev->caps.gid_table_len[port]  = port_cap->max_gids;
	dev->caps.pkey_table_len[port] = port_cap->max_pkeys;
	dev->caps.port_width_cap[port] = port_cap->max_port_width;
	dev->caps.eth_mtu_cap[port]    = port_cap->eth_mtu;
	dev->caps.max_tc_eth	       = port_cap->max_tc_eth;
	dev->caps.def_mac[port]        = port_cap->def_mac;
	dev->caps.supported_type[port] = port_cap->supported_port_types;
	dev->caps.suggested_type[port] = port_cap->suggested_type;
	dev->caps.default_sense[port] = port_cap->default_sense;
	dev->caps.trans_type[port]	    = port_cap->trans_type;
	dev->caps.vendor_oui[port]     = port_cap->vendor_oui;
	dev->caps.wavelength[port]     = port_cap->wavelength;
	dev->caps.trans_code[port]     = port_cap->trans_code;

	return 0;
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
          int port = 100;
          int _len_dev0 = 1;
          struct mlx4_dev * dev = (struct mlx4_dev *) malloc(_len_dev0*sizeof(struct mlx4_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__caps_trans_code0 = 1;
          dev[_i0].caps.trans_code = (int *) malloc(_len_dev__i0__caps_trans_code0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_trans_code0; _j0++) {
            dev[_i0].caps.trans_code[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_wavelength0 = 1;
          dev[_i0].caps.wavelength = (int *) malloc(_len_dev__i0__caps_wavelength0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_wavelength0; _j0++) {
            dev[_i0].caps.wavelength[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_vendor_oui0 = 1;
          dev[_i0].caps.vendor_oui = (int *) malloc(_len_dev__i0__caps_vendor_oui0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_vendor_oui0; _j0++) {
            dev[_i0].caps.vendor_oui[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_trans_type0 = 1;
          dev[_i0].caps.trans_type = (int *) malloc(_len_dev__i0__caps_trans_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_trans_type0; _j0++) {
            dev[_i0].caps.trans_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_default_sense0 = 1;
          dev[_i0].caps.default_sense = (int *) malloc(_len_dev__i0__caps_default_sense0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_default_sense0; _j0++) {
            dev[_i0].caps.default_sense[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_suggested_type0 = 1;
          dev[_i0].caps.suggested_type = (int *) malloc(_len_dev__i0__caps_suggested_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_suggested_type0; _j0++) {
            dev[_i0].caps.suggested_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_supported_type0 = 1;
          dev[_i0].caps.supported_type = (int *) malloc(_len_dev__i0__caps_supported_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_supported_type0; _j0++) {
            dev[_i0].caps.supported_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_def_mac0 = 1;
          dev[_i0].caps.def_mac = (int *) malloc(_len_dev__i0__caps_def_mac0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_def_mac0; _j0++) {
            dev[_i0].caps.def_mac[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].caps.max_tc_eth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__caps_eth_mtu_cap0 = 1;
          dev[_i0].caps.eth_mtu_cap = (int *) malloc(_len_dev__i0__caps_eth_mtu_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_eth_mtu_cap0; _j0++) {
            dev[_i0].caps.eth_mtu_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_port_width_cap0 = 1;
          dev[_i0].caps.port_width_cap = (int *) malloc(_len_dev__i0__caps_port_width_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_port_width_cap0; _j0++) {
            dev[_i0].caps.port_width_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_pkey_table_len0 = 1;
          dev[_i0].caps.pkey_table_len = (int *) malloc(_len_dev__i0__caps_pkey_table_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_pkey_table_len0; _j0++) {
            dev[_i0].caps.pkey_table_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_gid_table_len0 = 1;
          dev[_i0].caps.gid_table_len = (int *) malloc(_len_dev__i0__caps_gid_table_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_gid_table_len0; _j0++) {
            dev[_i0].caps.gid_table_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_ib_mtu_cap0 = 1;
          dev[_i0].caps.ib_mtu_cap = (int *) malloc(_len_dev__i0__caps_ib_mtu_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_ib_mtu_cap0; _j0++) {
            dev[_i0].caps.ib_mtu_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_vl_cap0 = 1;
          dev[_i0].caps.vl_cap = (int *) malloc(_len_dev__i0__caps_vl_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_vl_cap0; _j0++) {
            dev[_i0].caps.vl_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__phys_caps_pkey_phys_table_len0 = 1;
          dev[_i0].phys_caps.pkey_phys_table_len = (int *) malloc(_len_dev__i0__phys_caps_pkey_phys_table_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__phys_caps_pkey_phys_table_len0; _j0++) {
            dev[_i0].phys_caps.pkey_phys_table_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__phys_caps_gid_phys_table_len0 = 1;
          dev[_i0].phys_caps.gid_phys_table_len = (int *) malloc(_len_dev__i0__phys_caps_gid_phys_table_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__phys_caps_gid_phys_table_len0; _j0++) {
            dev[_i0].phys_caps.gid_phys_table_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_port_cap0 = 1;
          struct mlx4_port_cap * port_cap = (struct mlx4_port_cap *) malloc(_len_port_cap0*sizeof(struct mlx4_port_cap));
          for(int _i0 = 0; _i0 < _len_port_cap0; _i0++) {
            port_cap[_i0].trans_code = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].wavelength = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].vendor_oui = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].trans_type = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].default_sense = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].suggested_type = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].supported_port_types = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].def_mac = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_tc_eth = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].eth_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_port_width = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_pkeys = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_gids = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].ib_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_vl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _mlx4_dev_port(dev,port,port_cap);
          printf("%d\n", benchRet); 
          free(dev);
          free(port_cap);
        
        break;
    }
    // big-arr
    case 1:
    {
          int port = 255;
          int _len_dev0 = 65025;
          struct mlx4_dev * dev = (struct mlx4_dev *) malloc(_len_dev0*sizeof(struct mlx4_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__caps_trans_code0 = 1;
          dev[_i0].caps.trans_code = (int *) malloc(_len_dev__i0__caps_trans_code0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_trans_code0; _j0++) {
            dev[_i0].caps.trans_code[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_wavelength0 = 1;
          dev[_i0].caps.wavelength = (int *) malloc(_len_dev__i0__caps_wavelength0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_wavelength0; _j0++) {
            dev[_i0].caps.wavelength[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_vendor_oui0 = 1;
          dev[_i0].caps.vendor_oui = (int *) malloc(_len_dev__i0__caps_vendor_oui0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_vendor_oui0; _j0++) {
            dev[_i0].caps.vendor_oui[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_trans_type0 = 1;
          dev[_i0].caps.trans_type = (int *) malloc(_len_dev__i0__caps_trans_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_trans_type0; _j0++) {
            dev[_i0].caps.trans_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_default_sense0 = 1;
          dev[_i0].caps.default_sense = (int *) malloc(_len_dev__i0__caps_default_sense0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_default_sense0; _j0++) {
            dev[_i0].caps.default_sense[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_suggested_type0 = 1;
          dev[_i0].caps.suggested_type = (int *) malloc(_len_dev__i0__caps_suggested_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_suggested_type0; _j0++) {
            dev[_i0].caps.suggested_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_supported_type0 = 1;
          dev[_i0].caps.supported_type = (int *) malloc(_len_dev__i0__caps_supported_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_supported_type0; _j0++) {
            dev[_i0].caps.supported_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_def_mac0 = 1;
          dev[_i0].caps.def_mac = (int *) malloc(_len_dev__i0__caps_def_mac0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_def_mac0; _j0++) {
            dev[_i0].caps.def_mac[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].caps.max_tc_eth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__caps_eth_mtu_cap0 = 1;
          dev[_i0].caps.eth_mtu_cap = (int *) malloc(_len_dev__i0__caps_eth_mtu_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_eth_mtu_cap0; _j0++) {
            dev[_i0].caps.eth_mtu_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_port_width_cap0 = 1;
          dev[_i0].caps.port_width_cap = (int *) malloc(_len_dev__i0__caps_port_width_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_port_width_cap0; _j0++) {
            dev[_i0].caps.port_width_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_pkey_table_len0 = 1;
          dev[_i0].caps.pkey_table_len = (int *) malloc(_len_dev__i0__caps_pkey_table_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_pkey_table_len0; _j0++) {
            dev[_i0].caps.pkey_table_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_gid_table_len0 = 1;
          dev[_i0].caps.gid_table_len = (int *) malloc(_len_dev__i0__caps_gid_table_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_gid_table_len0; _j0++) {
            dev[_i0].caps.gid_table_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_ib_mtu_cap0 = 1;
          dev[_i0].caps.ib_mtu_cap = (int *) malloc(_len_dev__i0__caps_ib_mtu_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_ib_mtu_cap0; _j0++) {
            dev[_i0].caps.ib_mtu_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_vl_cap0 = 1;
          dev[_i0].caps.vl_cap = (int *) malloc(_len_dev__i0__caps_vl_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_vl_cap0; _j0++) {
            dev[_i0].caps.vl_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__phys_caps_pkey_phys_table_len0 = 1;
          dev[_i0].phys_caps.pkey_phys_table_len = (int *) malloc(_len_dev__i0__phys_caps_pkey_phys_table_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__phys_caps_pkey_phys_table_len0; _j0++) {
            dev[_i0].phys_caps.pkey_phys_table_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__phys_caps_gid_phys_table_len0 = 1;
          dev[_i0].phys_caps.gid_phys_table_len = (int *) malloc(_len_dev__i0__phys_caps_gid_phys_table_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__phys_caps_gid_phys_table_len0; _j0++) {
            dev[_i0].phys_caps.gid_phys_table_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_port_cap0 = 65025;
          struct mlx4_port_cap * port_cap = (struct mlx4_port_cap *) malloc(_len_port_cap0*sizeof(struct mlx4_port_cap));
          for(int _i0 = 0; _i0 < _len_port_cap0; _i0++) {
            port_cap[_i0].trans_code = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].wavelength = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].vendor_oui = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].trans_type = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].default_sense = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].suggested_type = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].supported_port_types = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].def_mac = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_tc_eth = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].eth_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_port_width = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_pkeys = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_gids = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].ib_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_vl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _mlx4_dev_port(dev,port,port_cap);
          printf("%d\n", benchRet); 
          free(dev);
          free(port_cap);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int port = 10;
          int _len_dev0 = 100;
          struct mlx4_dev * dev = (struct mlx4_dev *) malloc(_len_dev0*sizeof(struct mlx4_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__caps_trans_code0 = 1;
          dev[_i0].caps.trans_code = (int *) malloc(_len_dev__i0__caps_trans_code0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_trans_code0; _j0++) {
            dev[_i0].caps.trans_code[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_wavelength0 = 1;
          dev[_i0].caps.wavelength = (int *) malloc(_len_dev__i0__caps_wavelength0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_wavelength0; _j0++) {
            dev[_i0].caps.wavelength[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_vendor_oui0 = 1;
          dev[_i0].caps.vendor_oui = (int *) malloc(_len_dev__i0__caps_vendor_oui0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_vendor_oui0; _j0++) {
            dev[_i0].caps.vendor_oui[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_trans_type0 = 1;
          dev[_i0].caps.trans_type = (int *) malloc(_len_dev__i0__caps_trans_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_trans_type0; _j0++) {
            dev[_i0].caps.trans_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_default_sense0 = 1;
          dev[_i0].caps.default_sense = (int *) malloc(_len_dev__i0__caps_default_sense0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_default_sense0; _j0++) {
            dev[_i0].caps.default_sense[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_suggested_type0 = 1;
          dev[_i0].caps.suggested_type = (int *) malloc(_len_dev__i0__caps_suggested_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_suggested_type0; _j0++) {
            dev[_i0].caps.suggested_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_supported_type0 = 1;
          dev[_i0].caps.supported_type = (int *) malloc(_len_dev__i0__caps_supported_type0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_supported_type0; _j0++) {
            dev[_i0].caps.supported_type[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_def_mac0 = 1;
          dev[_i0].caps.def_mac = (int *) malloc(_len_dev__i0__caps_def_mac0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_def_mac0; _j0++) {
            dev[_i0].caps.def_mac[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        dev[_i0].caps.max_tc_eth = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dev__i0__caps_eth_mtu_cap0 = 1;
          dev[_i0].caps.eth_mtu_cap = (int *) malloc(_len_dev__i0__caps_eth_mtu_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_eth_mtu_cap0; _j0++) {
            dev[_i0].caps.eth_mtu_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_port_width_cap0 = 1;
          dev[_i0].caps.port_width_cap = (int *) malloc(_len_dev__i0__caps_port_width_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_port_width_cap0; _j0++) {
            dev[_i0].caps.port_width_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_pkey_table_len0 = 1;
          dev[_i0].caps.pkey_table_len = (int *) malloc(_len_dev__i0__caps_pkey_table_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_pkey_table_len0; _j0++) {
            dev[_i0].caps.pkey_table_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_gid_table_len0 = 1;
          dev[_i0].caps.gid_table_len = (int *) malloc(_len_dev__i0__caps_gid_table_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_gid_table_len0; _j0++) {
            dev[_i0].caps.gid_table_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_ib_mtu_cap0 = 1;
          dev[_i0].caps.ib_mtu_cap = (int *) malloc(_len_dev__i0__caps_ib_mtu_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_ib_mtu_cap0; _j0++) {
            dev[_i0].caps.ib_mtu_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__caps_vl_cap0 = 1;
          dev[_i0].caps.vl_cap = (int *) malloc(_len_dev__i0__caps_vl_cap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__caps_vl_cap0; _j0++) {
            dev[_i0].caps.vl_cap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__phys_caps_pkey_phys_table_len0 = 1;
          dev[_i0].phys_caps.pkey_phys_table_len = (int *) malloc(_len_dev__i0__phys_caps_pkey_phys_table_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__phys_caps_pkey_phys_table_len0; _j0++) {
            dev[_i0].phys_caps.pkey_phys_table_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dev__i0__phys_caps_gid_phys_table_len0 = 1;
          dev[_i0].phys_caps.gid_phys_table_len = (int *) malloc(_len_dev__i0__phys_caps_gid_phys_table_len0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_dev__i0__phys_caps_gid_phys_table_len0; _j0++) {
            dev[_i0].phys_caps.gid_phys_table_len[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_port_cap0 = 100;
          struct mlx4_port_cap * port_cap = (struct mlx4_port_cap *) malloc(_len_port_cap0*sizeof(struct mlx4_port_cap));
          for(int _i0 = 0; _i0 < _len_port_cap0; _i0++) {
            port_cap[_i0].trans_code = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].wavelength = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].vendor_oui = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].trans_type = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].default_sense = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].suggested_type = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].supported_port_types = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].def_mac = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_tc_eth = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].eth_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_port_width = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_pkeys = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_gids = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].ib_mtu = ((-2 * (next_i()%2)) + 1) * next_i();
        port_cap[_i0].max_vl = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = _mlx4_dev_port(dev,port,port_cap);
          printf("%d\n", benchRet); 
          free(dev);
          free(port_cap);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
