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
typedef  int /*<<< orphan*/  uint32_t ;
struct TYPE_3__ {scalar_t__ mux; scalar_t__ en; scalar_t__ a; scalar_t__ mask; } ;
struct TYPE_4__ {int id; int opened; int /*<<< orphan*/  mode; int /*<<< orphan*/  en; struct dc_context* ctx; } ;
struct hw_gpio {int mux_supported; TYPE_1__ store; TYPE_2__ base; } ;
struct dc_context {int dummy; } ;
typedef  enum gpio_id { ____Placeholder_gpio_id } gpio_id ;

/* Variables and functions */
 int /*<<< orphan*/  GPIO_MODE_UNKNOWN ; 

void dal_hw_gpio_construct(
	struct hw_gpio *pin,
	enum gpio_id id,
	uint32_t en,
	struct dc_context *ctx)
{
	pin->base.ctx = ctx;
	pin->base.id = id;
	pin->base.en = en;
	pin->base.mode = GPIO_MODE_UNKNOWN;
	pin->base.opened = false;

	pin->store.mask = 0;
	pin->store.a = 0;
	pin->store.en = 0;
	pin->store.mux = 0;

	pin->mux_supported = false;
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
          enum gpio_id id = 0;
          int en = 100;
          int _len_pin0 = 1;
          struct hw_gpio * pin = (struct hw_gpio *) malloc(_len_pin0*sizeof(struct hw_gpio));
          for(int _i0 = 0; _i0 < _len_pin0; _i0++) {
            pin[_i0].mux_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].store.mux = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].store.en = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].store.a = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].store.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].base.id = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].base.opened = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].base.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].base.en = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pin__i0__base_ctx0 = 1;
          pin[_i0].base.ctx = (struct dc_context *) malloc(_len_pin__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_pin__i0__base_ctx0; _j0++) {
            pin[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 1;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dal_hw_gpio_construct(pin,id,en,ctx);
          free(pin);
          free(ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum gpio_id id = 0;
          int en = 255;
          int _len_pin0 = 65025;
          struct hw_gpio * pin = (struct hw_gpio *) malloc(_len_pin0*sizeof(struct hw_gpio));
          for(int _i0 = 0; _i0 < _len_pin0; _i0++) {
            pin[_i0].mux_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].store.mux = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].store.en = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].store.a = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].store.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].base.id = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].base.opened = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].base.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].base.en = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pin__i0__base_ctx0 = 1;
          pin[_i0].base.ctx = (struct dc_context *) malloc(_len_pin__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_pin__i0__base_ctx0; _j0++) {
            pin[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 65025;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dal_hw_gpio_construct(pin,id,en,ctx);
          free(pin);
          free(ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum gpio_id id = 0;
          int en = 10;
          int _len_pin0 = 100;
          struct hw_gpio * pin = (struct hw_gpio *) malloc(_len_pin0*sizeof(struct hw_gpio));
          for(int _i0 = 0; _i0 < _len_pin0; _i0++) {
            pin[_i0].mux_supported = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].store.mux = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].store.en = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].store.a = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].store.mask = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].base.id = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].base.opened = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].base.mode = ((-2 * (next_i()%2)) + 1) * next_i();
        pin[_i0].base.en = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pin__i0__base_ctx0 = 1;
          pin[_i0].base.ctx = (struct dc_context *) malloc(_len_pin__i0__base_ctx0*sizeof(struct dc_context));
          for(int _j0 = 0; _j0 < _len_pin__i0__base_ctx0; _j0++) {
            pin[_i0].base.ctx->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          int _len_ctx0 = 100;
          struct dc_context * ctx = (struct dc_context *) malloc(_len_ctx0*sizeof(struct dc_context));
          for(int _i0 = 0; _i0 < _len_ctx0; _i0++) {
            ctx[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          dal_hw_gpio_construct(pin,id,en,ctx);
          free(pin);
          free(ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
