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
struct gpio_chip {char* label; int can_sleep; int /*<<< orphan*/  names; int /*<<< orphan*/  ngpio; scalar_t__ base; int /*<<< orphan*/ * dbg_show; int /*<<< orphan*/  set_config; int /*<<< orphan*/  set; int /*<<< orphan*/  get; int /*<<< orphan*/  direction_output; int /*<<< orphan*/  direction_input; int /*<<< orphan*/  owner; } ;
struct vx855_gpio {struct gpio_chip gpio; } ;

/* Variables and functions */
 int /*<<< orphan*/  NR_VX855_GP ; 
 int /*<<< orphan*/  THIS_MODULE ; 
 int /*<<< orphan*/  vx855gpio_direction_input ; 
 int /*<<< orphan*/  vx855gpio_direction_output ; 
 int /*<<< orphan*/  vx855gpio_get ; 
 int /*<<< orphan*/  vx855gpio_names ; 
 int /*<<< orphan*/  vx855gpio_set ; 
 int /*<<< orphan*/  vx855gpio_set_config ; 

__attribute__((used)) static void vx855gpio_gpio_setup(struct vx855_gpio *vg)
{
	struct gpio_chip *c = &vg->gpio;

	c->label = "VX855 South Bridge";
	c->owner = THIS_MODULE;
	c->direction_input = vx855gpio_direction_input;
	c->direction_output = vx855gpio_direction_output;
	c->get = vx855gpio_get;
	c->set = vx855gpio_set;
	c->set_config = vx855gpio_set_config,
	c->dbg_show = NULL;
	c->base = 0;
	c->ngpio = NR_VX855_GP;
	c->can_sleep = false;
	c->names = vx855gpio_names;
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
          int _len_vg0 = 1;
          struct vx855_gpio * vg = (struct vx855_gpio *) malloc(_len_vg0*sizeof(struct vx855_gpio));
          for(int _i0 = 0; _i0 < _len_vg0; _i0++) {
              int _len_vg__i0__gpio_label0 = 1;
          vg[_i0].gpio.label = (char *) malloc(_len_vg__i0__gpio_label0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_vg__i0__gpio_label0; _j0++) {
            vg[_i0].gpio.label[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vg[_i0].gpio.can_sleep = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.names = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.ngpio = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vg__i0__gpio_dbg_show0 = 1;
          vg[_i0].gpio.dbg_show = (int *) malloc(_len_vg__i0__gpio_dbg_show0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vg__i0__gpio_dbg_show0; _j0++) {
            vg[_i0].gpio.dbg_show[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vg[_i0].gpio.set_config = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.set = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.get = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.direction_output = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.direction_input = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vx855gpio_gpio_setup(vg);
          free(vg);
        
        break;
    }
    // big-arr
    case 1:
    {
          int _len_vg0 = 65025;
          struct vx855_gpio * vg = (struct vx855_gpio *) malloc(_len_vg0*sizeof(struct vx855_gpio));
          for(int _i0 = 0; _i0 < _len_vg0; _i0++) {
              int _len_vg__i0__gpio_label0 = 1;
          vg[_i0].gpio.label = (char *) malloc(_len_vg__i0__gpio_label0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_vg__i0__gpio_label0; _j0++) {
            vg[_i0].gpio.label[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vg[_i0].gpio.can_sleep = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.names = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.ngpio = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vg__i0__gpio_dbg_show0 = 1;
          vg[_i0].gpio.dbg_show = (int *) malloc(_len_vg__i0__gpio_dbg_show0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vg__i0__gpio_dbg_show0; _j0++) {
            vg[_i0].gpio.dbg_show[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vg[_i0].gpio.set_config = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.set = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.get = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.direction_output = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.direction_input = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vx855gpio_gpio_setup(vg);
          free(vg);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int _len_vg0 = 100;
          struct vx855_gpio * vg = (struct vx855_gpio *) malloc(_len_vg0*sizeof(struct vx855_gpio));
          for(int _i0 = 0; _i0 < _len_vg0; _i0++) {
              int _len_vg__i0__gpio_label0 = 1;
          vg[_i0].gpio.label = (char *) malloc(_len_vg__i0__gpio_label0*sizeof(char));
          for(int _j0 = 0; _j0 < _len_vg__i0__gpio_label0; _j0++) {
            vg[_i0].gpio.label[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vg[_i0].gpio.can_sleep = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.names = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.ngpio = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.base = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_vg__i0__gpio_dbg_show0 = 1;
          vg[_i0].gpio.dbg_show = (int *) malloc(_len_vg__i0__gpio_dbg_show0*sizeof(int));
          for(int _j0 = 0; _j0 < _len_vg__i0__gpio_dbg_show0; _j0++) {
            vg[_i0].gpio.dbg_show[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
        vg[_i0].gpio.set_config = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.set = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.get = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.direction_output = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.direction_input = ((-2 * (next_i()%2)) + 1) * next_i();
        vg[_i0].gpio.owner = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          vx855gpio_gpio_setup(vg);
          free(vg);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
