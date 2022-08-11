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
struct wacom_led {int dummy; } ;
struct wacom_group_leds {unsigned int count; struct wacom_led* leds; } ;
struct TYPE_2__ {unsigned int count; struct wacom_group_leds* groups; } ;
struct wacom {TYPE_1__ led; } ;

/* Variables and functions */

struct wacom_led *wacom_led_find(struct wacom *wacom, unsigned int group_id,
				 unsigned int id)
{
	struct wacom_group_leds *group;

	if (group_id >= wacom->led.count)
		return NULL;

	group = &wacom->led.groups[group_id];

	if (!group->leds)
		return NULL;

	id %= group->count;

	return &group->leds[id];
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
          unsigned int group_id = 100;
          unsigned int id = 100;
          int _len_wacom0 = 1;
          struct wacom * wacom = (struct wacom *) malloc(_len_wacom0*sizeof(struct wacom));
          for(int _i0 = 0; _i0 < _len_wacom0; _i0++) {
            wacom[_i0].led.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wacom__i0__led_groups0 = 1;
          wacom[_i0].led.groups = (struct wacom_group_leds *) malloc(_len_wacom__i0__led_groups0*sizeof(struct wacom_group_leds));
          for(int _j0 = 0; _j0 < _len_wacom__i0__led_groups0; _j0++) {
            wacom[_i0].led.groups->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wacom__i0__led_groups_leds0 = 1;
          wacom[_i0].led.groups->leds = (struct wacom_led *) malloc(_len_wacom__i0__led_groups_leds0*sizeof(struct wacom_led));
          for(int _j0 = 0; _j0 < _len_wacom__i0__led_groups_leds0; _j0++) {
            wacom[_i0].led.groups->leds->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct wacom_led * benchRet = wacom_led_find(wacom,group_id,id);
          printf("%d\n", (*benchRet).dummy);
          free(wacom);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int group_id = 255;
          unsigned int id = 255;
          int _len_wacom0 = 65025;
          struct wacom * wacom = (struct wacom *) malloc(_len_wacom0*sizeof(struct wacom));
          for(int _i0 = 0; _i0 < _len_wacom0; _i0++) {
            wacom[_i0].led.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wacom__i0__led_groups0 = 1;
          wacom[_i0].led.groups = (struct wacom_group_leds *) malloc(_len_wacom__i0__led_groups0*sizeof(struct wacom_group_leds));
          for(int _j0 = 0; _j0 < _len_wacom__i0__led_groups0; _j0++) {
            wacom[_i0].led.groups->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wacom__i0__led_groups_leds0 = 1;
          wacom[_i0].led.groups->leds = (struct wacom_led *) malloc(_len_wacom__i0__led_groups_leds0*sizeof(struct wacom_led));
          for(int _j0 = 0; _j0 < _len_wacom__i0__led_groups_leds0; _j0++) {
            wacom[_i0].led.groups->leds->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct wacom_led * benchRet = wacom_led_find(wacom,group_id,id);
          printf("%d\n", (*benchRet).dummy);
          free(wacom);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int group_id = 10;
          unsigned int id = 10;
          int _len_wacom0 = 100;
          struct wacom * wacom = (struct wacom *) malloc(_len_wacom0*sizeof(struct wacom));
          for(int _i0 = 0; _i0 < _len_wacom0; _i0++) {
            wacom[_i0].led.count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wacom__i0__led_groups0 = 1;
          wacom[_i0].led.groups = (struct wacom_group_leds *) malloc(_len_wacom__i0__led_groups0*sizeof(struct wacom_group_leds));
          for(int _j0 = 0; _j0 < _len_wacom__i0__led_groups0; _j0++) {
            wacom[_i0].led.groups->count = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_wacom__i0__led_groups_leds0 = 1;
          wacom[_i0].led.groups->leds = (struct wacom_led *) malloc(_len_wacom__i0__led_groups_leds0*sizeof(struct wacom_led));
          for(int _j0 = 0; _j0 < _len_wacom__i0__led_groups_leds0; _j0++) {
            wacom[_i0].led.groups->leds->dummy = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          struct wacom_led * benchRet = wacom_led_find(wacom,group_id,id);
          printf("%d\n", (*benchRet).dummy);
          free(wacom);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
