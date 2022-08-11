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
typedef  int /*<<< orphan*/  u64 ;
struct pci_controller {int dummy; } ;

/* Variables and functions */

u64 fsl_pci_immrbar_base(struct pci_controller *hose)
{
#ifdef CONFIG_PPC_83xx
	if (is_mpc83xx_pci) {
		struct mpc83xx_pcie_priv *pcie = hose->dn->data;
		struct pex_inbound_window *in;
		int i;

		/* Walk the Root Complex Inbound windows to match IMMR base */
		in = pcie->cfg_type0 + PEX_RC_INWIN_BASE;
		for (i = 0; i < 4; i++) {
			/* not enabled, skip */
			if (!(in_le32(&in[i].ar) & PEX_RCIWARn_EN))
				continue;

			if (get_immrbase() == in_le32(&in[i].tar))
				return (u64)in_le32(&in[i].barh) << 32 |
					    in_le32(&in[i].barl);
		}

		printk(KERN_WARNING "could not find PCI BAR matching IMMR\n");
	}
#endif

#if defined(CONFIG_FSL_SOC_BOOKE) || defined(CONFIG_PPC_86xx)
	if (!is_mpc83xx_pci) {
		u32 base;

		pci_bus_read_config_dword(hose->bus,
			PCI_DEVFN(0, 0), PCI_BASE_ADDRESS_0, &base);

		/*
		 * For PEXCSRBAR, bit 3-0 indicate prefetchable and
		 * address type. So when getting base address, these
		 * bits should be masked
		 */
		base &= PCI_BASE_ADDRESS_MEM_MASK;

		return base;
	}
#endif

	return 0;
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
          int _len_hose0 = 1;
          struct pci_controller * hose = (struct pci_controller *) malloc(_len_hose0*sizeof(struct pci_controller));
          for(int _i0 = 0; _i0 < _len_hose0; _i0++) {
            hose[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fsl_pci_immrbar_base(hose);
          printf("%d\n", benchRet); 
          free(hose);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hose0 = 65025;
          struct pci_controller * hose = (struct pci_controller *) malloc(_len_hose0*sizeof(struct pci_controller));
          for(int _i0 = 0; _i0 < _len_hose0; _i0++) {
            hose[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fsl_pci_immrbar_base(hose);
          printf("%d\n", benchRet); 
          free(hose);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hose0 = 100;
          struct pci_controller * hose = (struct pci_controller *) malloc(_len_hose0*sizeof(struct pci_controller));
          for(int _i0 = 0; _i0 < _len_hose0; _i0++) {
            hose[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = fsl_pci_immrbar_base(hose);
          printf("%d\n", benchRet); 
          free(hose);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
