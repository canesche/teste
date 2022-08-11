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
struct gpio_chip {int can_sleep; int ngpio; int /*<<< orphan*/  names; int /*<<< orphan*/  owner; int /*<<< orphan*/ * parent; int /*<<< orphan*/  label; int /*<<< orphan*/  base; int /*<<< orphan*/  set_multiple; int /*<<< orphan*/  get_direction; int /*<<< orphan*/  set; int /*<<< orphan*/  get; int /*<<< orphan*/  direction_output; int /*<<< orphan*/  direction_input; } ;
struct pca953x_chip {int /*<<< orphan*/  names; TYPE_1__* client; int /*<<< orphan*/  gpio_start; struct gpio_chip gpio_chip; } ;
struct TYPE_2__ {int /*<<< orphan*/  dev; int /*<<< orphan*/  name; } ;

/* Variables and functions */
 int /*<<< orphan*/  THIS_MODULE ; 
 int /*<<< orphan*/  pca953x_gpio_direction_input ; 
 int /*<<< orphan*/  pca953x_gpio_direction_output ; 
 int /*<<< orphan*/  pca953x_gpio_get_direction ; 
 int /*<<< orphan*/  pca953x_gpio_get_value ; 
 int /*<<< orphan*/  pca953x_gpio_set_multiple ; 
 int /*<<< orphan*/  pca953x_gpio_set_value ; 

__attribute__((used)) static void pca953x_setup_gpio(struct pca953x_chip *chip, int gpios)
{
	struct gpio_chip *gc;

	gc = &chip->gpio_chip;

	gc->direction_input  = pca953x_gpio_direction_input;
	gc->direction_output = pca953x_gpio_direction_output;
	gc->get = pca953x_gpio_get_value;
	gc->set = pca953x_gpio_set_value;
	gc->get_direction = pca953x_gpio_get_direction;
	gc->set_multiple = pca953x_gpio_set_multiple;
	gc->can_sleep = true;

	gc->base = chip->gpio_start;
	gc->ngpio = gpios;
	gc->label = chip->client->name;
	gc->parent = &chip->client->dev;
	gc->owner = THIS_MODULE;
	gc->names = chip->names;
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
          int gpios = 100;
          int _len_chip0 = 1;
          struct pca953x_chip * chip = (struct pca953x_chip *) malloc(_len_chip0*sizeof(struct pca953x_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].names = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__client0 = 1;
          chip[_i0].client = (struct TYPE_2__ *) malloc(_len_chip__i0__client0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__client0; _j0++) {
            chip[_i0].client->dev = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].client->name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        chip[_i0].gpio_start = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.can_sleep = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.ngpio = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.names = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.owner = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__gpio_chip_parent0 = 1;
          chip[_i0].gpio_chip.parent = (int *) malloc(_len_chip__i0__gpio_chip_parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__gpio_chip_parent0; _j0++) {
            chip[_i0].gpio_chip.parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        chip[_i0].gpio_chip.label = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.base = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.set_multiple = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.get_direction = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.set = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.get = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.direction_output = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.direction_input = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pca953x_setup_gpio(chip,gpios);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].client);
          }
          free(chip);
        
        break;
    }
    // big-arr
    case 1:
    {
          int gpios = 255;
          int _len_chip0 = 65025;
          struct pca953x_chip * chip = (struct pca953x_chip *) malloc(_len_chip0*sizeof(struct pca953x_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].names = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__client0 = 1;
          chip[_i0].client = (struct TYPE_2__ *) malloc(_len_chip__i0__client0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__client0; _j0++) {
            chip[_i0].client->dev = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].client->name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        chip[_i0].gpio_start = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.can_sleep = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.ngpio = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.names = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.owner = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__gpio_chip_parent0 = 1;
          chip[_i0].gpio_chip.parent = (int *) malloc(_len_chip__i0__gpio_chip_parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__gpio_chip_parent0; _j0++) {
            chip[_i0].gpio_chip.parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        chip[_i0].gpio_chip.label = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.base = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.set_multiple = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.get_direction = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.set = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.get = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.direction_output = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.direction_input = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pca953x_setup_gpio(chip,gpios);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].client);
          }
          free(chip);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int gpios = 10;
          int _len_chip0 = 100;
          struct pca953x_chip * chip = (struct pca953x_chip *) malloc(_len_chip0*sizeof(struct pca953x_chip));
          for(int _i0 = 0; _i0 < _len_chip0; _i0++) {
            chip[_i0].names = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__client0 = 1;
          chip[_i0].client = (struct TYPE_2__ *) malloc(_len_chip__i0__client0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_chip__i0__client0; _j0++) {
            chip[_i0].client->dev = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].client->name = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        chip[_i0].gpio_start = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.can_sleep = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.ngpio = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.names = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.owner = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_chip__i0__gpio_chip_parent0 = 1;
          chip[_i0].gpio_chip.parent = (int *) malloc(_len_chip__i0__gpio_chip_parent0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_chip__i0__gpio_chip_parent0; _j0++) {
            chip[_i0].gpio_chip.parent[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        chip[_i0].gpio_chip.label = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.base = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.set_multiple = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.get_direction = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.set = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.get = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.direction_output = ((-2 * (next_i()%2)) + 1) * next_i();
        chip[_i0].gpio_chip.direction_input = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          pca953x_setup_gpio(chip,gpios);
          for(int _aux = 0; _aux < _len_chip0; _aux++) {
          free(chip[_aux].client);
          }
          free(chip);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
