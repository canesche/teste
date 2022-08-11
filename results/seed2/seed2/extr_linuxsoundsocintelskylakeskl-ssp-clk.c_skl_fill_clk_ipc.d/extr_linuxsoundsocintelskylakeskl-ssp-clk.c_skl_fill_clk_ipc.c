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
typedef  struct TYPE_12__   TYPE_6__ ;
typedef  struct TYPE_11__   TYPE_5__ ;
typedef  struct TYPE_10__   TYPE_4__ ;
typedef  struct TYPE_9__   TYPE_3__ ;
typedef  struct TYPE_8__   TYPE_2__ ;
typedef  struct TYPE_7__   TYPE_1__ ;

/* Type definitions */
struct TYPE_11__ {int size; int /*<<< orphan*/  type; } ;
struct TYPE_12__ {TYPE_5__ hdr; } ;
struct TYPE_7__ {int size; } ;
struct TYPE_10__ {int /*<<< orphan*/  number_of_channels; int /*<<< orphan*/  valid_bit_depth; int /*<<< orphan*/  bit_depth; int /*<<< orphan*/  sampling_frequency; TYPE_1__ hdr; } ;
union skl_clk_ctrl_ipc {TYPE_6__ mclk; TYPE_4__ sclk_fs; } ;
typedef  scalar_t__ u8 ;
struct wav_fmt {int /*<<< orphan*/  channels; int /*<<< orphan*/  bits_per_sample; int /*<<< orphan*/  samples_per_sec; } ;
struct skl_tlv_hdr {int dummy; } ;
struct skl_dmactrl_sclkfs_cfg {int dummy; } ;
struct skl_dmactrl_mclk_cfg {int dummy; } ;
struct skl_clk_rate_cfg_table {scalar_t__ config; union skl_clk_ctrl_ipc dma_ctl_ipc; } ;
struct TYPE_8__ {int /*<<< orphan*/  valid_bits_per_sample; } ;
struct TYPE_9__ {TYPE_2__ sample; struct wav_fmt fmt; } ;
struct nhlt_fmt_cfg {TYPE_3__ fmt_ext; } ;

/* Variables and functions */
 int /*<<< orphan*/  DMA_CLK_CONTROLS ; 
 scalar_t__ SKL_SCLK_FS ; 

__attribute__((used)) static void skl_fill_clk_ipc(struct skl_clk_rate_cfg_table *rcfg, u8 clk_type)
{
	struct nhlt_fmt_cfg *fmt_cfg;
	union skl_clk_ctrl_ipc *ipc;
	struct wav_fmt *wfmt;

	if (!rcfg)
		return;

	ipc = &rcfg->dma_ctl_ipc;
	if (clk_type == SKL_SCLK_FS) {
		fmt_cfg = (struct nhlt_fmt_cfg *)rcfg->config;
		wfmt = &fmt_cfg->fmt_ext.fmt;

		/* Remove TLV Header size */
		ipc->sclk_fs.hdr.size = sizeof(struct skl_dmactrl_sclkfs_cfg) -
						sizeof(struct skl_tlv_hdr);
		ipc->sclk_fs.sampling_frequency = wfmt->samples_per_sec;
		ipc->sclk_fs.bit_depth = wfmt->bits_per_sample;
		ipc->sclk_fs.valid_bit_depth =
			fmt_cfg->fmt_ext.sample.valid_bits_per_sample;
		ipc->sclk_fs.number_of_channels = wfmt->channels;
	} else {
		ipc->mclk.hdr.type = DMA_CLK_CONTROLS;
		/* Remove TLV Header size */
		ipc->mclk.hdr.size = sizeof(struct skl_dmactrl_mclk_cfg) -
						sizeof(struct skl_tlv_hdr);
	}
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
          long clk_type = 100;
          int _len_rcfg0 = 1;
          struct skl_clk_rate_cfg_table * rcfg = (struct skl_clk_rate_cfg_table *) malloc(_len_rcfg0*sizeof(struct skl_clk_rate_cfg_table));
          for(int _i0 = 0; _i0 < _len_rcfg0; _i0++) {
            rcfg[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        rcfg[_i0].dma_ctl_ipc = 0;
          }
          skl_fill_clk_ipc(rcfg,clk_type);
          free(rcfg);
        
        break;
    }
    // big-arr
    case 1:
    {
          long clk_type = 255;
          int _len_rcfg0 = 65025;
          struct skl_clk_rate_cfg_table * rcfg = (struct skl_clk_rate_cfg_table *) malloc(_len_rcfg0*sizeof(struct skl_clk_rate_cfg_table));
          for(int _i0 = 0; _i0 < _len_rcfg0; _i0++) {
            rcfg[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        rcfg[_i0].dma_ctl_ipc = 0;
          }
          skl_fill_clk_ipc(rcfg,clk_type);
          free(rcfg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          long clk_type = 10;
          int _len_rcfg0 = 100;
          struct skl_clk_rate_cfg_table * rcfg = (struct skl_clk_rate_cfg_table *) malloc(_len_rcfg0*sizeof(struct skl_clk_rate_cfg_table));
          for(int _i0 = 0; _i0 < _len_rcfg0; _i0++) {
            rcfg[_i0].config = ((-2 * (next_i()%2)) + 1) * next_i();
        rcfg[_i0].dma_ctl_ipc = 0;
          }
          skl_fill_clk_ipc(rcfg,clk_type);
          free(rcfg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
