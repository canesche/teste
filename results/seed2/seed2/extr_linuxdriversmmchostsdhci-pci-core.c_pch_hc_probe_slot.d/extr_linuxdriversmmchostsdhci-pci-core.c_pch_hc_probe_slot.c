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
struct sdhci_pci_slot {TYPE_2__* host; } ;
struct TYPE_4__ {TYPE_1__* mmc; } ;
struct TYPE_3__ {int /*<<< orphan*/  caps; } ;

/* Variables and functions */
 int /*<<< orphan*/  MMC_CAP_8_BIT_DATA ; 

__attribute__((used)) static int pch_hc_probe_slot(struct sdhci_pci_slot *slot)
{
	slot->host->mmc->caps |= MMC_CAP_8_BIT_DATA;
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
          int _len_slot0 = 1;
          struct sdhci_pci_slot * slot = (struct sdhci_pci_slot *) malloc(_len_slot0*sizeof(struct sdhci_pci_slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
              int _len_slot__i0__host0 = 1;
          slot[_i0].host = (struct TYPE_4__ *) malloc(_len_slot__i0__host0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_slot__i0__host0; _j0++) {
              int _len_slot__i0__host_mmc0 = 1;
          slot[_i0].host->mmc = (struct TYPE_3__ *) malloc(_len_slot__i0__host_mmc0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_slot__i0__host_mmc0; _j0++) {
            slot[_i0].host->mmc->caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = pch_hc_probe_slot(slot);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_slot0; _aux++) {
          free(slot[_aux].host);
          }
          free(slot);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_slot0 = 65025;
          struct sdhci_pci_slot * slot = (struct sdhci_pci_slot *) malloc(_len_slot0*sizeof(struct sdhci_pci_slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
              int _len_slot__i0__host0 = 1;
          slot[_i0].host = (struct TYPE_4__ *) malloc(_len_slot__i0__host0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_slot__i0__host0; _j0++) {
              int _len_slot__i0__host_mmc0 = 1;
          slot[_i0].host->mmc = (struct TYPE_3__ *) malloc(_len_slot__i0__host_mmc0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_slot__i0__host_mmc0; _j0++) {
            slot[_i0].host->mmc->caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = pch_hc_probe_slot(slot);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_slot0; _aux++) {
          free(slot[_aux].host);
          }
          free(slot);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_slot0 = 100;
          struct sdhci_pci_slot * slot = (struct sdhci_pci_slot *) malloc(_len_slot0*sizeof(struct sdhci_pci_slot));
          for(int _i0 = 0; _i0 < _len_slot0; _i0++) {
              int _len_slot__i0__host0 = 1;
          slot[_i0].host = (struct TYPE_4__ *) malloc(_len_slot__i0__host0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_slot__i0__host0; _j0++) {
              int _len_slot__i0__host_mmc0 = 1;
          slot[_i0].host->mmc = (struct TYPE_3__ *) malloc(_len_slot__i0__host_mmc0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_slot__i0__host_mmc0; _j0++) {
            slot[_i0].host->mmc->caps = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = pch_hc_probe_slot(slot);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_slot0; _aux++) {
          free(slot[_aux].host);
          }
          free(slot);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
