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
struct mp_vdpau_ctx {int dummy; } ;
struct TYPE_5__ {scalar_t__ data; } ;
struct TYPE_4__ {scalar_t__ free; struct mp_vdpau_ctx* user_opaque; } ;
typedef  TYPE_1__ AVHWDeviceContext ;
typedef  TYPE_2__ AVBufferRef ;

/* Variables and functions */
 scalar_t__ free_device_ref ; 

struct mp_vdpau_ctx *mp_vdpau_get_ctx_from_av(AVBufferRef *hw_device_ctx)
{
    AVHWDeviceContext *hwctx = (void *)hw_device_ctx->data;

    if (hwctx->free != free_device_ref)
        return NULL; // not ours

    return hwctx->user_opaque;
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
          int _len_hw_device_ctx0 = 1;
          struct TYPE_5__ * hw_device_ctx = (struct TYPE_5__ *) malloc(_len_hw_device_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_hw_device_ctx0; _i0++) {
            hw_device_ctx[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mp_vdpau_ctx * benchRet = mp_vdpau_get_ctx_from_av(hw_device_ctx);
          printf("%d\n", (*benchRet).dummy);
          free(hw_device_ctx);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hw_device_ctx0 = 65025;
          struct TYPE_5__ * hw_device_ctx = (struct TYPE_5__ *) malloc(_len_hw_device_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_hw_device_ctx0; _i0++) {
            hw_device_ctx[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mp_vdpau_ctx * benchRet = mp_vdpau_get_ctx_from_av(hw_device_ctx);
          printf("%d\n", (*benchRet).dummy);
          free(hw_device_ctx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hw_device_ctx0 = 100;
          struct TYPE_5__ * hw_device_ctx = (struct TYPE_5__ *) malloc(_len_hw_device_ctx0*sizeof(struct TYPE_5__));
          for(int _i0 = 0; _i0 < _len_hw_device_ctx0; _i0++) {
            hw_device_ctx[_i0].data = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          struct mp_vdpau_ctx * benchRet = mp_vdpau_get_ctx_from_av(hw_device_ctx);
          printf("%d\n", (*benchRet).dummy);
          free(hw_device_ctx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
