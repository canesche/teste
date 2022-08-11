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
typedef  size_t u8 ;
struct em28xx_led {scalar_t__ role; } ;
struct TYPE_2__ {struct em28xx_led const* leds; } ;
struct em28xx {TYPE_1__ board; } ;
typedef  enum em28xx_led_role { ____Placeholder_em28xx_led_role } em28xx_led_role ;

/* Variables and functions */
 scalar_t__ EM28XX_NUM_LED_ROLES ; 

const struct em28xx_led *em28xx_find_led(struct em28xx *dev,
					 enum em28xx_led_role role)
{
	if (dev->board.leds) {
		u8 k = 0;

		while (dev->board.leds[k].role >= 0 &&
		       dev->board.leds[k].role < EM28XX_NUM_LED_ROLES) {
			if (dev->board.leds[k].role == role)
				return &dev->board.leds[k];
			k++;
		}
	}
	return NULL;
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
          enum em28xx_led_role role = 0;
          int _len_dev0 = 1;
          struct em28xx * dev = (struct em28xx *) malloc(_len_dev0*sizeof(struct em28xx));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__board_leds0 = 1;
          dev[_i0].board.leds = (const struct em28xx_led *) malloc(_len_dev__i0__board_leds0*sizeof(const struct em28xx_led));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_leds0; _j0++) {
              }
          }
          const struct em28xx_led * benchRet = em28xx_find_led(dev,role);
          free(dev);
        
        break;
    }
    // big-arr
    case 1:
    {
          enum em28xx_led_role role = 0;
          int _len_dev0 = 65025;
          struct em28xx * dev = (struct em28xx *) malloc(_len_dev0*sizeof(struct em28xx));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__board_leds0 = 1;
          dev[_i0].board.leds = (const struct em28xx_led *) malloc(_len_dev__i0__board_leds0*sizeof(const struct em28xx_led));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_leds0; _j0++) {
              }
          }
          const struct em28xx_led * benchRet = em28xx_find_led(dev,role);
          free(dev);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          enum em28xx_led_role role = 0;
          int _len_dev0 = 100;
          struct em28xx * dev = (struct em28xx *) malloc(_len_dev0*sizeof(struct em28xx));
          for(int _i0 = 0; _i0 < _len_dev0; _i0++) {
              int _len_dev__i0__board_leds0 = 1;
          dev[_i0].board.leds = (const struct em28xx_led *) malloc(_len_dev__i0__board_leds0*sizeof(const struct em28xx_led));
          for(int _j0 = 0; _j0 < _len_dev__i0__board_leds0; _j0++) {
              }
          }
          const struct em28xx_led * benchRet = em28xx_find_led(dev,role);
          free(dev);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
