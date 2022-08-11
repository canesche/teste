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
struct TYPE_2__ {struct dc_context* ctx; } ;
struct pp_smu_funcs_rv {int /*<<< orphan*/  set_pme_wa_enable; int /*<<< orphan*/  set_wm_ranges; int /*<<< orphan*/  set_display_requirement; TYPE_1__ pp_smu; } ;
struct dc_context {int dummy; } ;

/* Variables and functions */
 int /*<<< orphan*/  pp_rv_set_display_requirement ; 
 int /*<<< orphan*/  pp_rv_set_pme_wa_enable ; 
 int /*<<< orphan*/  pp_rv_set_wm_ranges ; 

void dm_pp_get_funcs_rv(
		struct dc_context *ctx,
		struct pp_smu_funcs_rv *funcs)
{
	funcs->pp_smu.ctx = ctx;
	funcs->set_display_requirement = pp_rv_set_display_requirement;
	funcs->set_wm_ranges = pp_rv_set_wm_ranges;
	funcs->set_pme_wa_enable = pp_rv_set_pme_wa_enable;
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
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_funcs0 = 1;
          struct pp_smu_funcs_rv * funcs = (struct pp_smu_funcs_rv *) malloc(_len_funcs0*sizeof(struct pp_smu_funcs_rv));
          for(int _i0 = 0; _i0 < _len_funcs0; _i0++) {
            funcs[_i0].set_pme_wa_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        funcs[_i0].set_wm_ranges = ((-2 * (next_i()%2)) + 1) * next_i();
        funcs[_i0].set_display_requirement = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_funcs__i0__pp_smu_ctx0 = 1;
          funcs[_i0].pp_smu.ctx = (struct dc_context *) malloc(_len_funcs__i0__pp_smu_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_funcs__i0__pp_smu_ctx0; _j0++) {
            funcs[_i0].pp_smu.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dm_pp_get_funcs_rv(ctx,funcs);
          free(ctx);
          free(funcs);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_funcs0 = 65025;
          struct pp_smu_funcs_rv * funcs = (struct pp_smu_funcs_rv *) malloc(_len_funcs0*sizeof(struct pp_smu_funcs_rv));
          for(int _i0 = 0; _i0 < _len_funcs0; _i0++) {
            funcs[_i0].set_pme_wa_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        funcs[_i0].set_wm_ranges = ((-2 * (next_i()%2)) + 1) * next_i();
        funcs[_i0].set_display_requirement = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_funcs__i0__pp_smu_ctx0 = 1;
          funcs[_i0].pp_smu.ctx = (struct dc_context *) malloc(_len_funcs__i0__pp_smu_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_funcs__i0__pp_smu_ctx0; _j0++) {
            funcs[_i0].pp_smu.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dm_pp_get_funcs_rv(ctx,funcs);
          free(ctx);
          free(funcs);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_funcs0 = 100;
          struct pp_smu_funcs_rv * funcs = (struct pp_smu_funcs_rv *) malloc(_len_funcs0*sizeof(struct pp_smu_funcs_rv));
          for(int _i0 = 0; _i0 < _len_funcs0; _i0++) {
            funcs[_i0].set_pme_wa_enable = ((-2 * (next_i()%2)) + 1) * next_i();
        funcs[_i0].set_wm_ranges = ((-2 * (next_i()%2)) + 1) * next_i();
        funcs[_i0].set_display_requirement = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_funcs__i0__pp_smu_ctx0 = 1;
          funcs[_i0].pp_smu.ctx = (struct dc_context *) malloc(_len_funcs__i0__pp_smu_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_funcs__i0__pp_smu_ctx0; _j0++) {
            funcs[_i0].pp_smu.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          dm_pp_get_funcs_rv(ctx,funcs);
          free(ctx);
          free(funcs);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
