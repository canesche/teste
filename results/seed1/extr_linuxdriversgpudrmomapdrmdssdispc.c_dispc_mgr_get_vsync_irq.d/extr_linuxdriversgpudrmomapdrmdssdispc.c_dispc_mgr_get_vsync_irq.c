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
struct dispc_device {int dummy; } ;
typedef  enum omap_channel { ____Placeholder_omap_channel } omap_channel ;
struct TYPE_2__ {int /*<<< orphan*/  vsync_irq; } ;

/* Variables and functions */
 TYPE_1__* mgr_desc ; 

__attribute__((used)) static u32 dispc_mgr_get_vsync_irq(struct dispc_device *dispc,
				   enum omap_channel channel)
{
	return mgr_desc[channel].vsync_irq;
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
          enum omap_channel channel = 0;
          int _len_dispc0 = 1;
          struct dispc_device * dispc = (struct dispc_device *) malloc(_len_dispc0*sizeof(struct dispc_device));
          for(int _i0 = 0; _i0 < _len_dispc0; _i0++) {
            dispc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dispc_mgr_get_vsync_irq(dispc,channel);
          printf("%d\n", benchRet); 
          free(dispc);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum omap_channel channel = 0;
          int _len_dispc0 = 65025;
          struct dispc_device * dispc = (struct dispc_device *) malloc(_len_dispc0*sizeof(struct dispc_device));
          for(int _i0 = 0; _i0 < _len_dispc0; _i0++) {
            dispc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dispc_mgr_get_vsync_irq(dispc,channel);
          printf("%d\n", benchRet); 
          free(dispc);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum omap_channel channel = 0;
          int _len_dispc0 = 100;
          struct dispc_device * dispc = (struct dispc_device *) malloc(_len_dispc0*sizeof(struct dispc_device));
          for(int _i0 = 0; _i0 < _len_dispc0; _i0++) {
            dispc[_i0].dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = dispc_mgr_get_vsync_irq(dispc,channel);
          printf("%d\n", benchRet); 
          free(dispc);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
