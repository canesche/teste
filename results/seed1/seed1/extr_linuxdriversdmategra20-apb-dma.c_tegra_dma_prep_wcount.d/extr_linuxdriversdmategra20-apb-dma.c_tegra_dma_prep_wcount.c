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
typedef  int u32 ;
struct tegra_dma_channel_regs {int wcount; int csr; } ;
struct tegra_dma_channel {TYPE_2__* tdma; } ;
struct TYPE_4__ {TYPE_1__* chip_data; } ;
struct TYPE_3__ {scalar_t__ support_separate_wcount_reg; } ;

/* Variables and functions */

__attribute__((used)) static void tegra_dma_prep_wcount(struct tegra_dma_channel *tdc,
	struct tegra_dma_channel_regs *ch_regs, u32 len)
{
	u32 len_field = (len - 4) & 0xFFFC;

	if (tdc->tdma->chip_data->support_separate_wcount_reg)
		ch_regs->wcount = len_field;
	else
		ch_regs->csr |= len_field;
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
          int len = 100;
          int _len_tdc0 = 1;
          struct tegra_dma_channel * tdc = (struct tegra_dma_channel *) malloc(_len_tdc0*sizeof(struct tegra_dma_channel));
          for(int _i0 = 0; _i0 < _len_tdc0; _i0++) {
              int _len_tdc__i0__tdma0 = 1;
          tdc[_i0].tdma = (struct TYPE_4__ *) malloc(_len_tdc__i0__tdma0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tdc__i0__tdma0; _j0++) {
              int _len_tdc__i0__tdma_chip_data0 = 1;
          tdc[_i0].tdma->chip_data = (struct TYPE_3__ *) malloc(_len_tdc__i0__tdma_chip_data0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_tdc__i0__tdma_chip_data0; _j0++) {
            tdc[_i0].tdma->chip_data->support_separate_wcount_reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ch_regs0 = 1;
          struct tegra_dma_channel_regs * ch_regs = (struct tegra_dma_channel_regs *) malloc(_len_ch_regs0*sizeof(struct tegra_dma_channel_regs));
          for(int _i0 = 0; _i0 < _len_ch_regs0; _i0++) {
            ch_regs[_i0].wcount = ((-2 * (next_i()%2)) + 1) * next_i();
        ch_regs[_i0].csr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tegra_dma_prep_wcount(tdc,ch_regs,len);
          for(int _aux = 0; _aux < _len_tdc0; _aux++) {
          free(tdc[_aux].tdma);
          }
          free(tdc);
          free(ch_regs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int len = 255;
          int _len_tdc0 = 65025;
          struct tegra_dma_channel * tdc = (struct tegra_dma_channel *) malloc(_len_tdc0*sizeof(struct tegra_dma_channel));
          for(int _i0 = 0; _i0 < _len_tdc0; _i0++) {
              int _len_tdc__i0__tdma0 = 1;
          tdc[_i0].tdma = (struct TYPE_4__ *) malloc(_len_tdc__i0__tdma0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tdc__i0__tdma0; _j0++) {
              int _len_tdc__i0__tdma_chip_data0 = 1;
          tdc[_i0].tdma->chip_data = (struct TYPE_3__ *) malloc(_len_tdc__i0__tdma_chip_data0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_tdc__i0__tdma_chip_data0; _j0++) {
            tdc[_i0].tdma->chip_data->support_separate_wcount_reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ch_regs0 = 65025;
          struct tegra_dma_channel_regs * ch_regs = (struct tegra_dma_channel_regs *) malloc(_len_ch_regs0*sizeof(struct tegra_dma_channel_regs));
          for(int _i0 = 0; _i0 < _len_ch_regs0; _i0++) {
            ch_regs[_i0].wcount = ((-2 * (next_i()%2)) + 1) * next_i();
        ch_regs[_i0].csr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tegra_dma_prep_wcount(tdc,ch_regs,len);
          for(int _aux = 0; _aux < _len_tdc0; _aux++) {
          free(tdc[_aux].tdma);
          }
          free(tdc);
          free(ch_regs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int len = 10;
          int _len_tdc0 = 100;
          struct tegra_dma_channel * tdc = (struct tegra_dma_channel *) malloc(_len_tdc0*sizeof(struct tegra_dma_channel));
          for(int _i0 = 0; _i0 < _len_tdc0; _i0++) {
              int _len_tdc__i0__tdma0 = 1;
          tdc[_i0].tdma = (struct TYPE_4__ *) malloc(_len_tdc__i0__tdma0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_tdc__i0__tdma0; _j0++) {
              int _len_tdc__i0__tdma_chip_data0 = 1;
          tdc[_i0].tdma->chip_data = (struct TYPE_3__ *) malloc(_len_tdc__i0__tdma_chip_data0*sizeof(struct TYPE_3__));
          for(int _j0 = 0; _j0 < _len_tdc__i0__tdma_chip_data0; _j0++) {
            tdc[_i0].tdma->chip_data->support_separate_wcount_reg = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_ch_regs0 = 100;
          struct tegra_dma_channel_regs * ch_regs = (struct tegra_dma_channel_regs *) malloc(_len_ch_regs0*sizeof(struct tegra_dma_channel_regs));
          for(int _i0 = 0; _i0 < _len_ch_regs0; _i0++) {
            ch_regs[_i0].wcount = ((-2 * (next_i()%2)) + 1) * next_i();
        ch_regs[_i0].csr = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          tegra_dma_prep_wcount(tdc,ch_regs,len);
          for(int _aux = 0; _aux < _len_tdc0; _aux++) {
          free(tdc[_aux].tdma);
          }
          free(tdc);
          free(ch_regs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
