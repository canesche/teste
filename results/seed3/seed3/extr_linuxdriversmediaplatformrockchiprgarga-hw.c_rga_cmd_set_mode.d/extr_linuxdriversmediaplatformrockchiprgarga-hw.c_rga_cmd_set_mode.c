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
struct TYPE_2__ {int gradient_sat; int /*<<< orphan*/  bitblt; int /*<<< orphan*/  render; } ;
union rga_mode_ctrl {scalar_t__ val; TYPE_1__ data; } ;
union rga_alpha_ctrl1 {scalar_t__ val; } ;
union rga_alpha_ctrl0 {scalar_t__ val; } ;
typedef  scalar_t__ u32 ;
struct rockchip_rga {scalar_t__* cmdbuf_virt; } ;
struct rga_ctx {struct rockchip_rga* rga; } ;

/* Variables and functions */
 int RGA_ALPHA_CTRL0 ; 
 int RGA_ALPHA_CTRL1 ; 
 int RGA_MODE_BASE_REG ; 
 int /*<<< orphan*/  RGA_MODE_BITBLT_MODE_SRC_TO_DST ; 
 int RGA_MODE_CTRL ; 
 int /*<<< orphan*/  RGA_MODE_RENDER_BITBLT ; 

__attribute__((used)) static void rga_cmd_set_mode(struct rga_ctx *ctx)
{
	struct rockchip_rga *rga = ctx->rga;
	u32 *dest = rga->cmdbuf_virt;
	union rga_mode_ctrl mode;
	union rga_alpha_ctrl0 alpha_ctrl0;
	union rga_alpha_ctrl1 alpha_ctrl1;

	mode.val = 0;
	alpha_ctrl0.val = 0;
	alpha_ctrl1.val = 0;

	mode.data.gradient_sat = 1;
	mode.data.render = RGA_MODE_RENDER_BITBLT;
	mode.data.bitblt = RGA_MODE_BITBLT_MODE_SRC_TO_DST;

	/* disable alpha blending */
	dest[(RGA_ALPHA_CTRL0 - RGA_MODE_BASE_REG) >> 2] = alpha_ctrl0.val;
	dest[(RGA_ALPHA_CTRL1 - RGA_MODE_BASE_REG) >> 2] = alpha_ctrl1.val;

	dest[(RGA_MODE_CTRL - RGA_MODE_BASE_REG) >> 2] = mode.val;
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
          struct rga_ctx * ctx = (struct rga_ctx *) malloc(_len_ctx0*sizeof(struct rga_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__rga0 = 1;
          ctx[_i0].rga = (struct rockchip_rga *) malloc(_len_ctx__i0__rga0*sizeof(struct rockchip_rga));
          for(int _j0 = 0; _j0 < _len_ctx__i0__rga0; _j0++) {
              int _len_ctx__i0__rga_cmdbuf_virt0 = 1;
          ctx[_i0].rga->cmdbuf_virt = (long *) malloc(_len_ctx__i0__rga_cmdbuf_virt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__rga_cmdbuf_virt0; _j0++) {
            ctx[_i0].rga->cmdbuf_virt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rga_cmd_set_mode(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].rga);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct rga_ctx * ctx = (struct rga_ctx *) malloc(_len_ctx0*sizeof(struct rga_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__rga0 = 1;
          ctx[_i0].rga = (struct rockchip_rga *) malloc(_len_ctx__i0__rga0*sizeof(struct rockchip_rga));
          for(int _j0 = 0; _j0 < _len_ctx__i0__rga0; _j0++) {
              int _len_ctx__i0__rga_cmdbuf_virt0 = 1;
          ctx[_i0].rga->cmdbuf_virt = (long *) malloc(_len_ctx__i0__rga_cmdbuf_virt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__rga_cmdbuf_virt0; _j0++) {
            ctx[_i0].rga->cmdbuf_virt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rga_cmd_set_mode(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].rga);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct rga_ctx * ctx = (struct rga_ctx *) malloc(_len_ctx0*sizeof(struct rga_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__rga0 = 1;
          ctx[_i0].rga = (struct rockchip_rga *) malloc(_len_ctx__i0__rga0*sizeof(struct rockchip_rga));
          for(int _j0 = 0; _j0 < _len_ctx__i0__rga0; _j0++) {
              int _len_ctx__i0__rga_cmdbuf_virt0 = 1;
          ctx[_i0].rga->cmdbuf_virt = (long *) malloc(_len_ctx__i0__rga_cmdbuf_virt0*sizeof(long));
          for(int _j0 = 0; _j0 < _len_ctx__i0__rga_cmdbuf_virt0; _j0++) {
            ctx[_i0].rga->cmdbuf_virt[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          rga_cmd_set_mode(ctx);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].rga);
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
