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
typedef  size_t u8 ;
struct sii8620_mt_msg {int* reg; int /*<<< orphan*/  ret; } ;
struct sii8620 {int /*<<< orphan*/ * devcap; int /*<<< orphan*/ * xdevcap; } ;

/* Variables and functions */

__attribute__((used)) static void sii8620_mt_read_devcap_reg_recv(struct sii8620 *ctx,
		struct sii8620_mt_msg *msg)
{
	u8 reg = msg->reg[1] & 0x7f;

	if (msg->reg[1] & 0x80)
		ctx->xdevcap[reg] = msg->ret;
	else
		ctx->devcap[reg] = msg->ret;
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
          struct sii8620 * ctx = (struct sii8620 *) malloc(_len_ctx0*sizeof(struct sii8620));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__devcap0 = 1;
          ctx[_i0].devcap = (int *) malloc(_len_ctx__i0__devcap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__devcap0; _j0++) {
            ctx[_i0].devcap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__xdevcap0 = 1;
          ctx[_i0].xdevcap = (int *) malloc(_len_ctx__i0__xdevcap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__xdevcap0; _j0++) {
            ctx[_i0].xdevcap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_msg0 = 1;
          struct sii8620_mt_msg * msg = (struct sii8620_mt_msg *) malloc(_len_msg0*sizeof(struct sii8620_mt_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              int _len_msg__i0__reg0 = 1;
          msg[_i0].reg = (int *) malloc(_len_msg__i0__reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_msg__i0__reg0; _j0++) {
            msg[_i0].reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        msg[_i0].ret = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sii8620_mt_read_devcap_reg_recv(ctx,msg);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].devcap);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].xdevcap);
          }
          free(ctx);
          for(int _aux = 0; _aux < _len_msg0; _aux++) {
          free(msg[_aux].reg);
          }
          free(msg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_ctx0 = 65025;
          struct sii8620 * ctx = (struct sii8620 *) malloc(_len_ctx0*sizeof(struct sii8620));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__devcap0 = 1;
          ctx[_i0].devcap = (int *) malloc(_len_ctx__i0__devcap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__devcap0; _j0++) {
            ctx[_i0].devcap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__xdevcap0 = 1;
          ctx[_i0].xdevcap = (int *) malloc(_len_ctx__i0__xdevcap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__xdevcap0; _j0++) {
            ctx[_i0].xdevcap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_msg0 = 65025;
          struct sii8620_mt_msg * msg = (struct sii8620_mt_msg *) malloc(_len_msg0*sizeof(struct sii8620_mt_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              int _len_msg__i0__reg0 = 1;
          msg[_i0].reg = (int *) malloc(_len_msg__i0__reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_msg__i0__reg0; _j0++) {
            msg[_i0].reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        msg[_i0].ret = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sii8620_mt_read_devcap_reg_recv(ctx,msg);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].devcap);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].xdevcap);
          }
          free(ctx);
          for(int _aux = 0; _aux < _len_msg0; _aux++) {
          free(msg[_aux].reg);
          }
          free(msg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_ctx0 = 100;
          struct sii8620 * ctx = (struct sii8620 *) malloc(_len_ctx0*sizeof(struct sii8620));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
              int _len_ctx__i0__devcap0 = 1;
          ctx[_i0].devcap = (int *) malloc(_len_ctx__i0__devcap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__devcap0; _j0++) {
            ctx[_i0].devcap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_ctx__i0__xdevcap0 = 1;
          ctx[_i0].xdevcap = (int *) malloc(_len_ctx__i0__xdevcap0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_ctx__i0__xdevcap0; _j0++) {
            ctx[_i0].xdevcap[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_msg0 = 100;
          struct sii8620_mt_msg * msg = (struct sii8620_mt_msg *) malloc(_len_msg0*sizeof(struct sii8620_mt_msg));
          for(int _i0 = 0; _i0 < _len_msg0; _i0++) {
              int _len_msg__i0__reg0 = 1;
          msg[_i0].reg = (int *) malloc(_len_msg__i0__reg0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_msg__i0__reg0; _j0++) {
            msg[_i0].reg[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        msg[_i0].ret = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          sii8620_mt_read_devcap_reg_recv(ctx,msg);
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].devcap);
          }
          for(int _aux = 0; _aux < _len_ctx0; _aux++) {
          free(ctx[_aux].xdevcap);
          }
          free(ctx);
          for(int _aux = 0; _aux < _len_msg0; _aux++) {
          free(msg[_aux].reg);
          }
          free(msg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
