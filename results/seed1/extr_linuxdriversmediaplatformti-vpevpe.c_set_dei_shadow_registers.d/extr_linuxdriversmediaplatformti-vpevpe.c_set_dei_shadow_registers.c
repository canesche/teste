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
typedef  int /*<<< orphan*/  u32 ;
struct vpe_mmr_adb {int /*<<< orphan*/ * dei_regs; } ;
struct vpe_dei_regs {int /*<<< orphan*/  edi_lut_reg3; int /*<<< orphan*/  edi_lut_reg2; int /*<<< orphan*/  edi_lut_reg1; int /*<<< orphan*/  edi_lut_reg0; int /*<<< orphan*/  edi_config_reg; int /*<<< orphan*/  mdt_spacial_freq_thr_reg; } ;
struct TYPE_2__ {struct vpe_mmr_adb* addr; } ;
struct vpe_ctx {int load_mmrs; TYPE_1__ mmr_adb; } ;

/* Variables and functions */
 struct vpe_dei_regs dei_regs ; 

__attribute__((used)) static void set_dei_shadow_registers(struct vpe_ctx *ctx)
{
	struct vpe_mmr_adb *mmr_adb = ctx->mmr_adb.addr;
	u32 *dei_mmr = &mmr_adb->dei_regs[0];
	const struct vpe_dei_regs *cur = &dei_regs;

	dei_mmr[2]  = cur->mdt_spacial_freq_thr_reg;
	dei_mmr[3]  = cur->edi_config_reg;
	dei_mmr[4]  = cur->edi_lut_reg0;
	dei_mmr[5]  = cur->edi_lut_reg1;
	dei_mmr[6]  = cur->edi_lut_reg2;
	dei_mmr[7]  = cur->edi_lut_reg3;

	ctx->load_mmrs = true;
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
          int _len_ctx0 = 1;
          struct vpe_ctx * ctx = (struct vpe_ctx *) malloc(_len_ctx0*sizeof(struct vpe_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].load_mmrs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__mmr_adb_addr0 = 1;
          ctx[_i0].mmr_adb.addr = (struct vpe_mmr_adb *) malloc(_len_ctx__i0__mmr_adb_addr0*sizeof(struct vpe_mmr_adb));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mmr_adb_addr0; _j0++) {
              int _len_ctx__i0__mmr_adb_addr_dei_regs0 = 1;
          ctx[_i0].mmr_adb.addr->dei_regs = (int *) malloc(_len_ctx__i0__mmr_adb_addr_dei_regs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mmr_adb_addr_dei_regs0; _j0++) {
            ctx[_i0].mmr_adb.addr->dei_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          set_dei_shadow_registers(ctx);
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct vpe_ctx * ctx = (struct vpe_ctx *) malloc(_len_ctx0*sizeof(struct vpe_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].load_mmrs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__mmr_adb_addr0 = 1;
          ctx[_i0].mmr_adb.addr = (struct vpe_mmr_adb *) malloc(_len_ctx__i0__mmr_adb_addr0*sizeof(struct vpe_mmr_adb));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mmr_adb_addr0; _j0++) {
              int _len_ctx__i0__mmr_adb_addr_dei_regs0 = 1;
          ctx[_i0].mmr_adb.addr->dei_regs = (int *) malloc(_len_ctx__i0__mmr_adb_addr_dei_regs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mmr_adb_addr_dei_regs0; _j0++) {
            ctx[_i0].mmr_adb.addr->dei_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          set_dei_shadow_registers(ctx);
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct vpe_ctx * ctx = (struct vpe_ctx *) malloc(_len_ctx0*sizeof(struct vpe_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].load_mmrs = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__mmr_adb_addr0 = 1;
          ctx[_i0].mmr_adb.addr = (struct vpe_mmr_adb *) malloc(_len_ctx__i0__mmr_adb_addr0*sizeof(struct vpe_mmr_adb));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mmr_adb_addr0; _j0++) {
              int _len_ctx__i0__mmr_adb_addr_dei_regs0 = 1;
          ctx[_i0].mmr_adb.addr->dei_regs = (int *) malloc(_len_ctx__i0__mmr_adb_addr_dei_regs0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mmr_adb_addr_dei_regs0; _j0++) {
            ctx[_i0].mmr_adb.addr->dei_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          set_dei_shadow_registers(ctx);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
