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
typedef  int u8 ;
struct slot {TYPE_1__* zdev; } ;
struct hotplug_slot {struct slot* private; } ;
struct TYPE_2__ {int state; } ;

/* Variables and functions */
#define  ZPCI_FN_STATE_STANDBY 128 

__attribute__((used)) static int get_power_status(struct hotplug_slot *hotplug_slot, u8 *value)
{
	struct slot *slot = hotplug_slot->private;

	switch (slot->zdev->state) {
	case ZPCI_FN_STATE_STANDBY:
		*value = 0;
		break;
	default:
		*value = 1;
		break;
	}
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
          int _len_hotplug_slot0 = 1;
          struct hotplug_slot * hotplug_slot = (struct hotplug_slot *) malloc(_len_hotplug_slot0*sizeof(struct hotplug_slot));
          for(int _i0 = 0; _i0 < _len_hotplug_slot0; _i0++) {
              int _len_hotplug_slot__i0__private0 = 1;
          hotplug_slot[_i0].private = (struct slot *) malloc(_len_hotplug_slot__i0__private0*sizeof(struct slot));
          for(int _j0 = 0; _j0 < _len_hotplug_slot__i0__private0; _j0++) {
              int _len_hotplug_slot__i0__private_zdev0 = 1;
          hotplug_slot[_i0].private->zdev = (struct TYPE_2__ *) malloc(_len_hotplug_slot__i0__private_zdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hotplug_slot__i0__private_zdev0; _j0++) {
            hotplug_slot[_i0].private->zdev->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_value0 = 1;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_power_status(hotplug_slot,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hotplug_slot0; _aux++) {
          free(hotplug_slot[_aux].private);
          }
          free(hotplug_slot);
          free(value);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_hotplug_slot0 = 65025;
          struct hotplug_slot * hotplug_slot = (struct hotplug_slot *) malloc(_len_hotplug_slot0*sizeof(struct hotplug_slot));
          for(int _i0 = 0; _i0 < _len_hotplug_slot0; _i0++) {
              int _len_hotplug_slot__i0__private0 = 1;
          hotplug_slot[_i0].private = (struct slot *) malloc(_len_hotplug_slot__i0__private0*sizeof(struct slot));
          for(int _j0 = 0; _j0 < _len_hotplug_slot__i0__private0; _j0++) {
              int _len_hotplug_slot__i0__private_zdev0 = 1;
          hotplug_slot[_i0].private->zdev = (struct TYPE_2__ *) malloc(_len_hotplug_slot__i0__private_zdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hotplug_slot__i0__private_zdev0; _j0++) {
            hotplug_slot[_i0].private->zdev->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_value0 = 65025;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_power_status(hotplug_slot,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hotplug_slot0; _aux++) {
          free(hotplug_slot[_aux].private);
          }
          free(hotplug_slot);
          free(value);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_hotplug_slot0 = 100;
          struct hotplug_slot * hotplug_slot = (struct hotplug_slot *) malloc(_len_hotplug_slot0*sizeof(struct hotplug_slot));
          for(int _i0 = 0; _i0 < _len_hotplug_slot0; _i0++) {
              int _len_hotplug_slot__i0__private0 = 1;
          hotplug_slot[_i0].private = (struct slot *) malloc(_len_hotplug_slot__i0__private0*sizeof(struct slot));
          for(int _j0 = 0; _j0 < _len_hotplug_slot__i0__private0; _j0++) {
              int _len_hotplug_slot__i0__private_zdev0 = 1;
          hotplug_slot[_i0].private->zdev = (struct TYPE_2__ *) malloc(_len_hotplug_slot__i0__private_zdev0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_hotplug_slot__i0__private_zdev0; _j0++) {
            hotplug_slot[_i0].private->zdev->state = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          int _len_value0 = 100;
          int * value = (int *) malloc(_len_value0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_value0; _i0++) {
            value[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = get_power_status(hotplug_slot,value);
          printf("%d\n", benchRet); 
          for(int _aux = 0; _aux < _len_hotplug_slot0; _aux++) {
          free(hotplug_slot[_aux].private);
          }
          free(hotplug_slot);
          free(value);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
