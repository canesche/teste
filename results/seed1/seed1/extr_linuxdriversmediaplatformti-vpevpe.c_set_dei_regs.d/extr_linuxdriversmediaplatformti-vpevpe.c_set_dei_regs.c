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
typedef  unsigned int u32 ;
struct TYPE_4__ {unsigned int height; unsigned int width; } ;
struct vpe_q_data {int flags; TYPE_2__ c_rect; } ;
struct vpe_mmr_adb {unsigned int* dei_regs; } ;
struct TYPE_3__ {struct vpe_mmr_adb* addr; } ;
struct vpe_ctx {int load_mmrs; int /*<<< orphan*/  deinterlacing; struct vpe_q_data* q_data; TYPE_1__ mmr_adb; } ;

/* Variables and functions */
 size_t Q_DATA_SRC ; 
 int Q_IS_INTERLACED ; 
 unsigned int VPE_DEI_FIELD_FLUSH ; 
 unsigned int VPE_DEI_HEIGHT_SHIFT ; 
 unsigned int VPE_DEI_INTERLACE_BYPASS ; 
 unsigned int VPE_DEI_WIDTH_SHIFT ; 

__attribute__((used)) static void set_dei_regs(struct vpe_ctx *ctx)
{
	struct vpe_mmr_adb *mmr_adb = ctx->mmr_adb.addr;
	struct vpe_q_data *s_q_data = &ctx->q_data[Q_DATA_SRC];
	unsigned int src_h = s_q_data->c_rect.height;
	unsigned int src_w = s_q_data->c_rect.width;
	u32 *dei_mmr0 = &mmr_adb->dei_regs[0];
	bool deinterlace = true;
	u32 val = 0;

	/*
	 * according to TRM, we should set DEI in progressive bypass mode when
	 * the input content is progressive, however, DEI is bypassed correctly
	 * for both progressive and interlace content in interlace bypass mode.
	 * It has been recommended not to use progressive bypass mode.
	 */
	if (!(s_q_data->flags & Q_IS_INTERLACED) || !ctx->deinterlacing) {
		deinterlace = false;
		val = VPE_DEI_INTERLACE_BYPASS;
	}

	src_h = deinterlace ? src_h * 2 : src_h;

	val |= (src_h << VPE_DEI_HEIGHT_SHIFT) |
		(src_w << VPE_DEI_WIDTH_SHIFT) |
		VPE_DEI_FIELD_FLUSH;

	*dei_mmr0 = val;

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
        ctx[_i0].deinterlacing = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__q_data0 = 1;
          ctx[_i0].q_data = (struct vpe_q_data *) malloc(_len_ctx__i0__q_data0*sizeof(struct vpe_q_data));
          for(int _j0 = 0; _j0 < _len_ctx__i0__q_data0; _j0++) {
            ctx[_i0].q_data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].q_data->c_rect.height = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].q_data->c_rect.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__mmr_adb_addr0 = 1;
          ctx[_i0].mmr_adb.addr = (struct vpe_mmr_adb *) malloc(_len_ctx__i0__mmr_adb_addr0*sizeof(struct vpe_mmr_adb));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mmr_adb_addr0; _j0++) {
              int _len_ctx__i0__mmr_adb_addr_dei_regs0 = 1;
          ctx[_i0].mmr_adb.addr->dei_regs = (unsigned int *) malloc(_len_ctx__i0__mmr_adb_addr_dei_regs0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mmr_adb_addr_dei_regs0; _j0++) {
            ctx[_i0].mmr_adb.addr->dei_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          set_dei_regs(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].q_data);
          }
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
        ctx[_i0].deinterlacing = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__q_data0 = 1;
          ctx[_i0].q_data = (struct vpe_q_data *) malloc(_len_ctx__i0__q_data0*sizeof(struct vpe_q_data));
          for(int _j0 = 0; _j0 < _len_ctx__i0__q_data0; _j0++) {
            ctx[_i0].q_data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].q_data->c_rect.height = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].q_data->c_rect.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__mmr_adb_addr0 = 1;
          ctx[_i0].mmr_adb.addr = (struct vpe_mmr_adb *) malloc(_len_ctx__i0__mmr_adb_addr0*sizeof(struct vpe_mmr_adb));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mmr_adb_addr0; _j0++) {
              int _len_ctx__i0__mmr_adb_addr_dei_regs0 = 1;
          ctx[_i0].mmr_adb.addr->dei_regs = (unsigned int *) malloc(_len_ctx__i0__mmr_adb_addr_dei_regs0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mmr_adb_addr_dei_regs0; _j0++) {
            ctx[_i0].mmr_adb.addr->dei_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          set_dei_regs(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].q_data);
          }
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
        ctx[_i0].deinterlacing = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__q_data0 = 1;
          ctx[_i0].q_data = (struct vpe_q_data *) malloc(_len_ctx__i0__q_data0*sizeof(struct vpe_q_data));
          for(int _j0 = 0; _j0 < _len_ctx__i0__q_data0; _j0++) {
            ctx[_i0].q_data->flags = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].q_data->c_rect.height = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].q_data->c_rect.width = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__mmr_adb_addr0 = 1;
          ctx[_i0].mmr_adb.addr = (struct vpe_mmr_adb *) malloc(_len_ctx__i0__mmr_adb_addr0*sizeof(struct vpe_mmr_adb));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mmr_adb_addr0; _j0++) {
              int _len_ctx__i0__mmr_adb_addr_dei_regs0 = 1;
          ctx[_i0].mmr_adb.addr->dei_regs = (unsigned int *) malloc(_len_ctx__i0__mmr_adb_addr_dei_regs0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__mmr_adb_addr_dei_regs0; _j0++) {
            ctx[_i0].mmr_adb.addr->dei_regs[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          set_dei_regs(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].q_data);
          }
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
