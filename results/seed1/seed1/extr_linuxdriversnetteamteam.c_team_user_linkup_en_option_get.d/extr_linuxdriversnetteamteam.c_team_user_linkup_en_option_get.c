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
typedef  struct TYPE_6__   TYPE_3__ ;
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
struct TYPE_6__ {int /*<<< orphan*/  linkup_enabled; } ;
struct team_port {TYPE_3__ user; } ;
struct TYPE_5__ {int /*<<< orphan*/  bool_val; } ;
struct team_gsetter_ctx {TYPE_2__ data; TYPE_1__* info; } ;
struct team {int dummy; } ;
struct TYPE_4__ {struct team_port* port; } ;

/* Variables and functions */

__attribute__((used)) static int team_user_linkup_en_option_get(struct team *team,
					  struct team_gsetter_ctx *ctx)
{
	struct team_port *port = ctx->info->port;

	ctx->data.bool_val = port->user.linkup_enabled;
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
          int _len_team0 = 1;
          struct team * team = (struct team *) malloc(_len_team0*sizeof(struct team));
          for(int _i0 = 0; _i0 < _len_team0; _i0++) {
            team[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 1;
          struct team_gsetter_ctx * ctx = (struct team_gsetter_ctx *) malloc(_len_ctx0*sizeof(struct team_gsetter_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].data.bool_val = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__info0 = 1;
          ctx[_i0].info = (struct TYPE_4__ *) malloc(_len_ctx__i0__info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__info0; _j0++) {
              int _len_ctx__i0__info_port0 = 1;
          ctx[_i0].info->port = (struct team_port *) malloc(_len_ctx__i0__info_port0*sizeof(struct team_port));
          for(int _j0 = 0; _j0 < _len_ctx__i0__info_port0; _j0++) {
            ctx[_i0].info->port->user.linkup_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = team_user_linkup_en_option_get(team,ctx);
          printf("%d\n", benchRet); 
          free(team);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].info);
          }
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_team0 = 65025;
          struct team * team = (struct team *) malloc(_len_team0*sizeof(struct team));
          for(int _i0 = 0; _i0 < _len_team0; _i0++) {
            team[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 65025;
          struct team_gsetter_ctx * ctx = (struct team_gsetter_ctx *) malloc(_len_ctx0*sizeof(struct team_gsetter_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].data.bool_val = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__info0 = 1;
          ctx[_i0].info = (struct TYPE_4__ *) malloc(_len_ctx__i0__info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__info0; _j0++) {
              int _len_ctx__i0__info_port0 = 1;
          ctx[_i0].info->port = (struct team_port *) malloc(_len_ctx__i0__info_port0*sizeof(struct team_port));
          for(int _j0 = 0; _j0 < _len_ctx__i0__info_port0; _j0++) {
            ctx[_i0].info->port->user.linkup_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = team_user_linkup_en_option_get(team,ctx);
          printf("%d\n", benchRet); 
          free(team);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].info);
          }
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_team0 = 100;
          struct team * team = (struct team *) malloc(_len_team0*sizeof(struct team));
          for(int _i0 = 0; _i0 < _len_team0; _i0++) {
            team[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx0 = 100;
          struct team_gsetter_ctx * ctx = (struct team_gsetter_ctx *) malloc(_len_ctx0*sizeof(struct team_gsetter_ctx));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].data.bool_val = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_ctx__i0__info0 = 1;
          ctx[_i0].info = (struct TYPE_4__ *) malloc(_len_ctx__i0__info0*sizeof(struct TYPE_4__));
          for(int _j0 = 0; _j0 < _len_ctx__i0__info0; _j0++) {
              int _len_ctx__i0__info_port0 = 1;
          ctx[_i0].info->port = (struct team_port *) malloc(_len_ctx__i0__info_port0*sizeof(struct team_port));
          for(int _j0 = 0; _j0 < _len_ctx__i0__info_port0; _j0++) {
            ctx[_i0].info->port->user.linkup_enabled = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int benchRet = team_user_linkup_en_option_get(team,ctx);
          printf("%d\n", benchRet); 
          free(team);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].info);
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
