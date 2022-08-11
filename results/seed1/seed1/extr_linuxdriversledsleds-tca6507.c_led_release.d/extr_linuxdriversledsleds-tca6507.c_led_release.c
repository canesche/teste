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
struct tca6507_led {scalar_t__ bank; scalar_t__ blink; struct tca6507_chip* chip; } ;
struct tca6507_chip {struct bank* bank; } ;
struct bank {int /*<<< orphan*/  level_use; int /*<<< orphan*/  time_use; } ;

/* Variables and functions */

__attribute__((used)) static void led_release(struct tca6507_led *led)
{
	/* If led owns any resource, release it. */
	struct tca6507_chip *tca = led->chip;
	if (led->bank >= 0) {
		struct bank *b = tca->bank + led->bank;
		if (led->blink)
			b->time_use--;
		b->level_use--;
	}
	led->blink = 0;
	led->bank = -1;
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
          int _len_led0 = 1;
          struct tca6507_led * led = (struct tca6507_led *) malloc(_len_led0*sizeof(struct tca6507_led));
          for(int _i0 = 0; _i0 < _len_led0; _i0++) {
            led[_i0].bank = ((-2 * (next_i()%2)) + 1) * next_i();
        led[_i0].blink = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_led__i0__chip0 = 1;
          led[_i0].chip = (struct tca6507_chip *) malloc(_len_led__i0__chip0*sizeof(struct tca6507_chip));
          for(int _j0 = 0; _j0 < _len_led__i0__chip0; _j0++) {
              int _len_led__i0__chip_bank0 = 1;
          led[_i0].chip->bank = (struct bank *) malloc(_len_led__i0__chip_bank0*sizeof(struct bank));
          for(int _j0 = 0; _j0 < _len_led__i0__chip_bank0; _j0++) {
            led[_i0].chip->bank->level_use = ((-2 * (next_i()%2)) + 1) * next_i();
        led[_i0].chip->bank->time_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          led_release(led);
          for(int _aux = 0; _aux < _len_led0; _aux++) {
          free(led[_aux].chip);
          }
          free(led);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_led0 = 65025;
          struct tca6507_led * led = (struct tca6507_led *) malloc(_len_led0*sizeof(struct tca6507_led));
          for(int _i0 = 0; _i0 < _len_led0; _i0++) {
            led[_i0].bank = ((-2 * (next_i()%2)) + 1) * next_i();
        led[_i0].blink = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_led__i0__chip0 = 1;
          led[_i0].chip = (struct tca6507_chip *) malloc(_len_led__i0__chip0*sizeof(struct tca6507_chip));
          for(int _j0 = 0; _j0 < _len_led__i0__chip0; _j0++) {
              int _len_led__i0__chip_bank0 = 1;
          led[_i0].chip->bank = (struct bank *) malloc(_len_led__i0__chip_bank0*sizeof(struct bank));
          for(int _j0 = 0; _j0 < _len_led__i0__chip_bank0; _j0++) {
            led[_i0].chip->bank->level_use = ((-2 * (next_i()%2)) + 1) * next_i();
        led[_i0].chip->bank->time_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          led_release(led);
          for(int _aux = 0; _aux < _len_led0; _aux++) {
          free(led[_aux].chip);
          }
          free(led);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_led0 = 100;
          struct tca6507_led * led = (struct tca6507_led *) malloc(_len_led0*sizeof(struct tca6507_led));
          for(int _i0 = 0; _i0 < _len_led0; _i0++) {
            led[_i0].bank = ((-2 * (next_i()%2)) + 1) * next_i();
        led[_i0].blink = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_led__i0__chip0 = 1;
          led[_i0].chip = (struct tca6507_chip *) malloc(_len_led__i0__chip0*sizeof(struct tca6507_chip));
          for(int _j0 = 0; _j0 < _len_led__i0__chip0; _j0++) {
              int _len_led__i0__chip_bank0 = 1;
          led[_i0].chip->bank = (struct bank *) malloc(_len_led__i0__chip_bank0*sizeof(struct bank));
          for(int _j0 = 0; _j0 < _len_led__i0__chip_bank0; _j0++) {
            led[_i0].chip->bank->level_use = ((-2 * (next_i()%2)) + 1) * next_i();
        led[_i0].chip->bank->time_use = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          led_release(led);
          for(int _aux = 0; _aux < _len_led0; _aux++) {
          free(led[_aux].chip);
          }
          free(led);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
