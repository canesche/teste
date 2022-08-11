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
typedef  struct TYPE_5__   TYPE_2__ ;
typedef  struct TYPE_4__   TYPE_1__ ;

/* Type definitions */
typedef  enum CRC_PRESETS { ____Placeholder_CRC_PRESETS } CRC_PRESETS ;
struct TYPE_5__ {int /*<<< orphan*/  xout; int /*<<< orphan*/  poly; int /*<<< orphan*/  reflect; int /*<<< orphan*/  size; int /*<<< orphan*/  crc; } ;
struct TYPE_4__ {int /*<<< orphan*/  xout; int /*<<< orphan*/  poly; int /*<<< orphan*/  reflect; int /*<<< orphan*/  size; int /*<<< orphan*/  crc; } ;
typedef  TYPE_1__ R_CRC_CTX ;

/* Variables and functions */
 TYPE_2__* crc_presets ; 

void crc_init_preset (R_CRC_CTX *ctx, enum CRC_PRESETS preset) {
	ctx->crc = crc_presets[preset].crc;
	ctx->size = crc_presets[preset].size;
	ctx->reflect = crc_presets[preset].reflect;
	ctx->poly = crc_presets[preset].poly;
	ctx->xout = crc_presets[preset].xout;
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
          enum CRC_PRESETS preset = 0;
          int _len_ctx0 = 1;
          struct TYPE_4__ * ctx = (struct TYPE_4__ *) malloc(_len_ctx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].xout = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].poly = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].reflect = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].crc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          crc_init_preset(ctx,preset);
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum CRC_PRESETS preset = 0;
          int _len_ctx0 = 65025;
          struct TYPE_4__ * ctx = (struct TYPE_4__ *) malloc(_len_ctx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].xout = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].poly = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].reflect = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].crc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          crc_init_preset(ctx,preset);
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum CRC_PRESETS preset = 0;
          int _len_ctx0 = 100;
          struct TYPE_4__ * ctx = (struct TYPE_4__ *) malloc(_len_ctx0*sizeof(struct TYPE_4__));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].xout = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].poly = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].reflect = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].size = ((-2 * (next_i()%2)) + 1) * next_i();
        ctx[_i0].crc = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          crc_init_preset(ctx,preset);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
