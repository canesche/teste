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
typedef  struct TYPE_8__   TYPE_4__ ;
typedef  struct TYPE_7__   TYPE_3__ ;
typedef  struct TYPE_6__   TYPE_2__ ;
typedef  struct TYPE_5__   TYPE_1__ ;

/* Type definitions */
struct TYPE_7__ {int /*<<< orphan*/  bottom; int /*<<< orphan*/  right; int /*<<< orphan*/  top; int /*<<< orphan*/  left; } ;
struct TYPE_6__ {int /*<<< orphan*/  y; int /*<<< orphan*/  x; } ;
struct TYPE_8__ {TYPE_3__ srcRect; TYPE_2__ destOrigin; int /*<<< orphan*/  srcScreenId; } ;
struct vmw_kms_sou_readback_blit {TYPE_4__ body; int /*<<< orphan*/  header; } ;
struct vmw_kms_dirty {int /*<<< orphan*/  num_hits; int /*<<< orphan*/  unit_y2; int /*<<< orphan*/  unit_x2; int /*<<< orphan*/  unit_y1; int /*<<< orphan*/  unit_x1; int /*<<< orphan*/  fb_y; int /*<<< orphan*/  fb_x; TYPE_1__* unit; struct vmw_kms_sou_readback_blit* cmd; } ;
struct TYPE_5__ {int /*<<< orphan*/  unit; } ;

/* Variables and functions */
 int /*<<< orphan*/  SVGA_CMD_BLIT_SCREEN_TO_GMRFB ; 

__attribute__((used)) static void vmw_sou_readback_clip(struct vmw_kms_dirty *dirty)
{
	struct vmw_kms_sou_readback_blit *blit = dirty->cmd;

	blit += dirty->num_hits;
	blit->header = SVGA_CMD_BLIT_SCREEN_TO_GMRFB;
	blit->body.srcScreenId = dirty->unit->unit;
	blit->body.destOrigin.x = dirty->fb_x;
	blit->body.destOrigin.y = dirty->fb_y;
	blit->body.srcRect.left = dirty->unit_x1;
	blit->body.srcRect.top = dirty->unit_y1;
	blit->body.srcRect.right = dirty->unit_x2;
	blit->body.srcRect.bottom = dirty->unit_y2;
	dirty->num_hits++;
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
          int _len_dirty0 = 1;
          struct vmw_kms_dirty * dirty = (struct vmw_kms_dirty *) malloc(_len_dirty0*sizeof(struct vmw_kms_dirty));
          for(int _i0 = 0; _i0 < _len_dirty0; _i0++) {
            dirty[_i0].num_hits = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].unit_y2 = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].unit_x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].unit_y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].unit_x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].fb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].fb_x = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dirty__i0__unit0 = 1;
          dirty[_i0].unit = (struct TYPE_5__ *) malloc(_len_dirty__i0__unit0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dirty__i0__unit0; _j0++) {
            dirty[_i0].unit->unit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dirty__i0__cmd0 = 1;
          dirty[_i0].cmd = (struct vmw_kms_sou_readback_blit *) malloc(_len_dirty__i0__cmd0*sizeof(struct vmw_kms_sou_readback_blit));
          for(int _j0 = 0; _j0 < _len_dirty__i0__cmd0; _j0++) {
            dirty[_i0].cmd->body.srcRect.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.srcRect.right = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.srcRect.top = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.srcRect.left = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.destOrigin.y = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.destOrigin.x = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.srcScreenId = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->header = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vmw_sou_readback_clip(dirty);
          for(int _aux = 0; _aux < _len_dirty0; _aux++) {
          free(dirty[_aux].unit);
          }
          for(int _aux = 0; _aux < _len_dirty0; _aux++) {
          free(dirty[_aux].cmd);
          }
          free(dirty);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_dirty0 = 65025;
          struct vmw_kms_dirty * dirty = (struct vmw_kms_dirty *) malloc(_len_dirty0*sizeof(struct vmw_kms_dirty));
          for(int _i0 = 0; _i0 < _len_dirty0; _i0++) {
            dirty[_i0].num_hits = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].unit_y2 = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].unit_x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].unit_y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].unit_x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].fb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].fb_x = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dirty__i0__unit0 = 1;
          dirty[_i0].unit = (struct TYPE_5__ *) malloc(_len_dirty__i0__unit0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dirty__i0__unit0; _j0++) {
            dirty[_i0].unit->unit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dirty__i0__cmd0 = 1;
          dirty[_i0].cmd = (struct vmw_kms_sou_readback_blit *) malloc(_len_dirty__i0__cmd0*sizeof(struct vmw_kms_sou_readback_blit));
          for(int _j0 = 0; _j0 < _len_dirty__i0__cmd0; _j0++) {
            dirty[_i0].cmd->body.srcRect.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.srcRect.right = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.srcRect.top = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.srcRect.left = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.destOrigin.y = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.destOrigin.x = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.srcScreenId = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->header = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vmw_sou_readback_clip(dirty);
          for(int _aux = 0; _aux < _len_dirty0; _aux++) {
          free(dirty[_aux].unit);
          }
          for(int _aux = 0; _aux < _len_dirty0; _aux++) {
          free(dirty[_aux].cmd);
          }
          free(dirty);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_dirty0 = 100;
          struct vmw_kms_dirty * dirty = (struct vmw_kms_dirty *) malloc(_len_dirty0*sizeof(struct vmw_kms_dirty));
          for(int _i0 = 0; _i0 < _len_dirty0; _i0++) {
            dirty[_i0].num_hits = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].unit_y2 = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].unit_x2 = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].unit_y1 = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].unit_x1 = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].fb_y = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].fb_x = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_dirty__i0__unit0 = 1;
          dirty[_i0].unit = (struct TYPE_5__ *) malloc(_len_dirty__i0__unit0*sizeof(struct TYPE_5__));
          for(int _j0 = 0; _j0 < _len_dirty__i0__unit0; _j0++) {
            dirty[_i0].unit->unit = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_dirty__i0__cmd0 = 1;
          dirty[_i0].cmd = (struct vmw_kms_sou_readback_blit *) malloc(_len_dirty__i0__cmd0*sizeof(struct vmw_kms_sou_readback_blit));
          for(int _j0 = 0; _j0 < _len_dirty__i0__cmd0; _j0++) {
            dirty[_i0].cmd->body.srcRect.bottom = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.srcRect.right = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.srcRect.top = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.srcRect.left = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.destOrigin.y = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.destOrigin.x = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->body.srcScreenId = ((-2 * (next_i()%2)) + 1) * next_i();
        dirty[_i0].cmd->header = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          vmw_sou_readback_clip(dirty);
          for(int _aux = 0; _aux < _len_dirty0; _aux++) {
          free(dirty[_aux].unit);
          }
          for(int _aux = 0; _aux < _len_dirty0; _aux++) {
          free(dirty[_aux].cmd);
          }
          free(dirty);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
