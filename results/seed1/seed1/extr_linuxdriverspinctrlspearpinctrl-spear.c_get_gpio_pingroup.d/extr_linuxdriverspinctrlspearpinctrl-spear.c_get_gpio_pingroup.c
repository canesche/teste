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
struct spear_pmx {TYPE_1__* machdata; } ;
struct spear_gpio_pingroup {int npins; unsigned int* pins; } ;
struct TYPE_2__ {int ngpio_pingroups; struct spear_gpio_pingroup* gpio_pingroups; } ;

/* Variables and functions */

__attribute__((used)) static struct spear_gpio_pingroup *get_gpio_pingroup(struct spear_pmx *pmx,
		unsigned pin)
{
	struct spear_gpio_pingroup *gpio_pingroup;
	int i, j;

	if (!pmx->machdata->gpio_pingroups)
		return NULL;

	for (i = 0; i < pmx->machdata->ngpio_pingroups; i++) {
		gpio_pingroup = &pmx->machdata->gpio_pingroups[i];

		for (j = 0; j < gpio_pingroup->npins; j++) {
			if (gpio_pingroup->pins[j] == pin)
				return gpio_pingroup;
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
          unsigned int pin = 100;
          int _len_pmx0 = 1;
          struct spear_pmx * pmx = (struct spear_pmx *) malloc(_len_pmx0*sizeof(struct spear_pmx));
          for(int _i0 = 0; _i0 < _len_pmx0; _i0++) {
              int _len_pmx__i0__machdata0 = 1;
          pmx[_i0].machdata = (struct TYPE_2__ *) malloc(_len_pmx__i0__machdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pmx__i0__machdata0; _j0++) {
            pmx[_i0].machdata->ngpio_pingroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmx__i0__machdata_gpio_pingroups0 = 1;
          pmx[_i0].machdata->gpio_pingroups = (struct spear_gpio_pingroup *) malloc(_len_pmx__i0__machdata_gpio_pingroups0*sizeof(struct spear_gpio_pingroup));
          for(int _j0 = 0; _j0 < _len_pmx__i0__machdata_gpio_pingroups0; _j0++) {
            pmx[_i0].machdata->gpio_pingroups->npins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmx__i0__machdata_gpio_pingroups_pins0 = 1;
          pmx[_i0].machdata->gpio_pingroups->pins = (unsigned int *) malloc(_len_pmx__i0__machdata_gpio_pingroups_pins0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pmx__i0__machdata_gpio_pingroups_pins0; _j0++) {
            pmx[_i0].machdata->gpio_pingroups->pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct spear_gpio_pingroup * benchRet = get_gpio_pingroup(pmx,pin);
          printf("%d\n", (*benchRet).npins);
          for(int _aux = 0; _aux < _len_pmx0; _aux++) {
          free(pmx[_aux].machdata);
          }
          free(pmx);
        
        break;
    }
    // big-arr
    case 1:
    {
          unsigned int pin = 255;
          int _len_pmx0 = 65025;
          struct spear_pmx * pmx = (struct spear_pmx *) malloc(_len_pmx0*sizeof(struct spear_pmx));
          for(int _i0 = 0; _i0 < _len_pmx0; _i0++) {
              int _len_pmx__i0__machdata0 = 1;
          pmx[_i0].machdata = (struct TYPE_2__ *) malloc(_len_pmx__i0__machdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pmx__i0__machdata0; _j0++) {
            pmx[_i0].machdata->ngpio_pingroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmx__i0__machdata_gpio_pingroups0 = 1;
          pmx[_i0].machdata->gpio_pingroups = (struct spear_gpio_pingroup *) malloc(_len_pmx__i0__machdata_gpio_pingroups0*sizeof(struct spear_gpio_pingroup));
          for(int _j0 = 0; _j0 < _len_pmx__i0__machdata_gpio_pingroups0; _j0++) {
            pmx[_i0].machdata->gpio_pingroups->npins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmx__i0__machdata_gpio_pingroups_pins0 = 1;
          pmx[_i0].machdata->gpio_pingroups->pins = (unsigned int *) malloc(_len_pmx__i0__machdata_gpio_pingroups_pins0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pmx__i0__machdata_gpio_pingroups_pins0; _j0++) {
            pmx[_i0].machdata->gpio_pingroups->pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct spear_gpio_pingroup * benchRet = get_gpio_pingroup(pmx,pin);
          printf("%d\n", (*benchRet).npins);
          for(int _aux = 0; _aux < _len_pmx0; _aux++) {
          free(pmx[_aux].machdata);
          }
          free(pmx);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          unsigned int pin = 10;
          int _len_pmx0 = 100;
          struct spear_pmx * pmx = (struct spear_pmx *) malloc(_len_pmx0*sizeof(struct spear_pmx));
          for(int _i0 = 0; _i0 < _len_pmx0; _i0++) {
              int _len_pmx__i0__machdata0 = 1;
          pmx[_i0].machdata = (struct TYPE_2__ *) malloc(_len_pmx__i0__machdata0*sizeof(struct TYPE_2__));
          for(int _j0 = 0; _j0 < _len_pmx__i0__machdata0; _j0++) {
            pmx[_i0].machdata->ngpio_pingroups = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmx__i0__machdata_gpio_pingroups0 = 1;
          pmx[_i0].machdata->gpio_pingroups = (struct spear_gpio_pingroup *) malloc(_len_pmx__i0__machdata_gpio_pingroups0*sizeof(struct spear_gpio_pingroup));
          for(int _j0 = 0; _j0 < _len_pmx__i0__machdata_gpio_pingroups0; _j0++) {
            pmx[_i0].machdata->gpio_pingroups->npins = ((-2 * (next_i()%2)) + 1) * next_i();
          int _len_pmx__i0__machdata_gpio_pingroups_pins0 = 1;
          pmx[_i0].machdata->gpio_pingroups->pins = (unsigned int *) malloc(_len_pmx__i0__machdata_gpio_pingroups_pins0*sizeof(unsigned int));
          for(int _j0 = 0; _j0 < _len_pmx__i0__machdata_gpio_pingroups_pins0; _j0++) {
            pmx[_i0].machdata->gpio_pingroups->pins[_j0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          }
          }
          }
          struct spear_gpio_pingroup * benchRet = get_gpio_pingroup(pmx,pin);
          printf("%d\n", (*benchRet).npins);
          for(int _aux = 0; _aux < _len_pmx0; _aux++) {
          free(pmx[_aux].machdata);
          }
          free(pmx);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
