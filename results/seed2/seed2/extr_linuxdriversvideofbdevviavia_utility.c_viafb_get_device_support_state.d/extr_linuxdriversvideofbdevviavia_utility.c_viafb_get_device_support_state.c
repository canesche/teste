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
typedef  int /*<<< orphan*/  u32 ;
struct TYPE_8__ {TYPE_3__* chip_info; } ;
struct TYPE_6__ {scalar_t__ lvds_chip_name; } ;
struct TYPE_5__ {scalar_t__ tmds_chip_name; } ;
struct TYPE_7__ {TYPE_2__ lvds_chip_info; TYPE_1__ tmds_chip_info; } ;

/* Variables and functions */
 int /*<<< orphan*/  CRT_Device ; 
 int /*<<< orphan*/  DVI_Device ; 
 int /*<<< orphan*/  LCD_Device ; 
 scalar_t__ VT1631_LVDS ; 
 scalar_t__ VT1632_TMDS ; 
 TYPE_4__* viaparinfo ; 

void viafb_get_device_support_state(u32 *support_state)
{
	*support_state = CRT_Device;

	if (viaparinfo->chip_info->tmds_chip_info.tmds_chip_name == VT1632_TMDS)
		*support_state |= DVI_Device;

	if (viaparinfo->chip_info->lvds_chip_info.lvds_chip_name == VT1631_LVDS)
		*support_state |= LCD_Device;
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
          int _len_support_state0 = 1;
          int * support_state = (int *) malloc(_len_support_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_support_state0; _i0++) {
            support_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          viafb_get_device_support_state(support_state);
          free(support_state);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_support_state0 = 65025;
          int * support_state = (int *) malloc(_len_support_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_support_state0; _i0++) {
            support_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          viafb_get_device_support_state(support_state);
          free(support_state);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_support_state0 = 100;
          int * support_state = (int *) malloc(_len_support_state0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_support_state0; _i0++) {
            support_state[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          viafb_get_device_support_state(support_state);
          free(support_state);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
