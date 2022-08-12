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
struct pci_dev {int dummy; } ;

/* Variables and functions */

__attribute__((used)) static int ixgbe_pci_sriov_enable(struct pci_dev *dev, int num_vfs)
{
#ifdef CONFIG_PCI_IOV
	struct ixgbe_adapter *adapter = pci_get_drvdata(dev);
	int pre_existing_vfs = pci_num_vf(dev);
	int err = 0, num_rx_pools, i, limit;
	u8 num_tc;

	if (pre_existing_vfs && pre_existing_vfs != num_vfs)
		err = ixgbe_disable_sriov(adapter);
	else if (pre_existing_vfs && pre_existing_vfs == num_vfs)
		return num_vfs;

	if (err)
		return err;

	/* While the SR-IOV capability structure reports total VFs to be 64,
	 * we limit the actual number allocated as below based on two factors.
	 *    Num_TCs	MAX_VFs
	 *	1	  63
	 *	<=4	  31
	 *	>4	  15
	 * First, we reserve some transmit/receive resources for the PF.
	 * Second, VMDQ also uses the same pools that SR-IOV does. We need to
	 * account for this, so that we don't accidentally allocate more VFs
	 * than we have available pools. The PCI bus driver already checks for
	 * other values out of range.
	 */
	num_tc = adapter->hw_tcs;
	num_rx_pools = bitmap_weight(adapter->fwd_bitmask,
				     adapter->num_rx_pools);
	limit = (num_tc > 4) ? IXGBE_MAX_VFS_8TC :
		(num_tc > 1) ? IXGBE_MAX_VFS_4TC : IXGBE_MAX_VFS_1TC;

	if (num_vfs > (limit - num_rx_pools)) {
		e_dev_err("Currently configured with %d TCs, and %d offloaded macvlans. Creating more than %d VFs is not allowed\n",
			  num_tc, num_rx_pools - 1, limit - num_rx_pools);
		return -EPERM;
	}

	err = __ixgbe_enable_sriov(adapter, num_vfs);
	if (err)
		return  err;

	for (i = 0; i < num_vfs; i++)
		ixgbe_vf_configuration(dev, (i | 0x10000000));

	/* reset before enabling SRIOV to avoid mailbox issues */
	ixgbe_sriov_reinit(adapter);

	err = pci_enable_sriov(dev, num_vfs);
	if (err) {
		e_dev_warn("Failed to enable PCI sriov: %d\n", err);
		return err;
	}
	ixgbe_get_vfs(adapter);

	return num_vfs;
#else
	return 0;
#endif
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
          int num_vfs = 100;
          int _len_dev0 = 1;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ixgbe_pci_sriov_enable(dev,num_vfs);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          int num_vfs = 255;
          int _len_dev0 = 65025;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ixgbe_pci_sriov_enable(dev,num_vfs);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int num_vfs = 10;
          int _len_dev0 = 100;
          struct pci_dev * dev = (struct pci_dev *) malloc(_len_dev0*sizeof(struct pci_dev));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
            dev[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = ixgbe_pci_sriov_enable(dev,num_vfs);
          printf("%d\n", benchRet); 
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
